#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Engine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x021C (0x0274 - 0x0058)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x21C];                                     // 0x0058(0x021C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	void STATIC_GetActorSpriteComponent();
	void STATIC_GetActorMetrics();
	void OnMobileTouch();
	void STATIC_IsMobileTouchEnabled();
	void STATIC_ShouldBeHiddenBySHOW_NavigationNodes();
	void WillOverlap();
	void STATIC_GetAvoidanceVector();
	void ReplicationEnded();
	void PostDemoRewind();
	void AnimTreeUpdated();
	void SupportsKismetModification();
	void STATIC_GetAnimTrailParticleSystem();
	void TrailsNotifyEnd();
	void TrailsNotifyTick();
	void TrailsNotify();
	void CreateForceField();
	void PlayParticleEffect();
	void STATIC_GetAimAdhesionExtent();
	void STATIC_GetAimFrictionExtent();
	void STATIC_IsInPersistentLevel();
	void OnRigidBodySpringOverextension();
	void STATIC_GetPackageGuid();
	void PostInitAnimTree();
	void RootMotionExtracted();
	void RootMotionProcessed();
	void RootMotionModeChanged();
	void PostRenderFor();
	void STATIC_NativePostRenderFor();
	void STATIC_SetHUDLocation();
	void OnRanOver();
	void RigidBodyCollision();
	void InterpolationChanged();
	void InterpolationFinished();
	void InterpolationStarted();
	void SpawnedByKismet();
	void STATIC_GetTargetLocation();
	void STATIC_FindGoodEndView();
	void STATIC_NotifyLocalPlayerTeamReceived();
	void ScriptGetTeamNum();
	void STATIC_GetTeamNum();
	void STATIC_PawnBaseDied();
	void STATIC_IsPlayerOwned();
	void GetActorEyesViewPoint();
	void STATIC_IsStationary();
	void GetActorFaceFXAsset();
	void CanActorPlayFaceFXAnim();
	void STATIC_IsActorPlayingFaceFXAnim();
	void TickSkelControl();
	void SetSkelControlScale();
	void SetMorphWeight();
	void StopActorFaceFXAnim();
	void PlayActorFaceFXAnim();
	void FinishAnimControl();
	void SetAnimPosition();
	void BeginAnimControl();
	void OnAnimPlay();
	void OnAnimEnd();
	void DoKismetAttachment();
	void STATIC_OnAttachToActor();
	void STATIC_OnToggleHidden();
	void STATIC_OnChangeCollision();
	void STATIC_OnSetPhysics();
	void STATIC_OnSetBlockRigidBody();
	void STATIC_OnSetVelocity();
	void STATIC_OnTeleport();
	void STATIC_OnModifyHealth();
	void STATIC_PrestreamTextures();
	void ShutDown();
	void STATIC_SetNetUpdateTime();
	void ForceNetRelevant();
	void STATIC_OnDestroy();
	void ClearLatentAction();
	void STATIC_FindEventsOfClass();
	void ActivateEventClass();
	void TriggerGlobalEventClass();
	void ReceivedNewEvent();
	void TriggerEventClass();
	void DebugMessagePlayer();
	void STATIC_ImpactEffectIsRelevant();
	void ActorEffectIsRelevant();
	void EffectIsRelevant();
	void ApplyFluidSurfaceContinuousForce();
	void ApplyFluidSurfaceImpact();
	void CanSplash();
	void STATIC_PlayTeleportEffect();
	void STATIC_IsInPain();
	void STATIC_Reset();
	void GetFaceFXAudioComponent();
	void ModifyHearSoundComponent();
	void STATIC_GetPhysicsName();
	void DisplayDebug();
	void STATIC_GetDebugName();
	void STATIC_MatchStarting();
	void STATIC_GetLocalString();
	void STATIC_ReplaceText();
	void STATIC_GetHumanReadableName();
	void STATIC_GetItemName();
	void CalcCamera();
	void EndViewTarget();
	void BecomeViewTarget();
	void CheckForErrors();
	void DebugFreezeGame();
	void STATIC_GetGravityZ();
	void CheckHitInfo();
	void TakeRadiusDamage();
	void HealDamage();
	void TakeDamage();
	void STATIC_KilledBy();
	void STATIC_HurtRadius();
	void StopsProjectile();
	void NotifySkelControlBeyondLimit();
	void ConstraintBrokenNotify();
	void SetInitialState();
	void PostBeginPlay();
	void BroadcastLocalizedTeamMessage();
	void BroadcastLocalizedMessage();
	void PreBeginPlay();
	void STATIC_GetALocalPlayerController();
	void STATIC_LocalPlayerControllers();
	void AllOwnedComponents();
	void ComponentList();
	void STATIC_OverlappingActors();
	void CollidingActors();
	void VisibleCollidingActors();
	void VisibleActors();
	void TraceActors();
	void TouchingActors();
	void BasedActors();
	void ChildActors();
	void DynamicActors();
	void AllActors();
	void STATIC_GetURLMap();
	void STATIC_PostTeleport();
	void STATIC_PreTeleport();
	void STATIC_GetDestination();
	void CalculateMinSpeedTrajectory();
	void SuggestTossVelocity();
	void STATIC_PlayerCanSeeMe();
	void STATIC_MakeNoise();
	void ActivateOcclusion();
	void STATIC_PostTrigger();
	void STATIC_SetSwitch();
	void STATIC_SetState();
	void STATIC_SetRTPCValue();
	void STATIC_PostAkEventOnBone();
	void STATIC_PostAkEvent();
	void STATIC_PlaySoundBase();
	void STATIC_PlayAkEvent();
	void STATIC_PlaySound();
	void CreateAudioComponent();
	void STATIC_ResetTimerTimeDilation();
	void STATIC_ModifyTimerTimeDilation();
	void STATIC_GetRemainingTimeForTimer();
	void STATIC_GetTimerRate();
	void STATIC_GetTimerCount();
	void STATIC_IsTimerActive();
	void STATIC_PauseTimer();
	void ClearAllTimers();
	void ClearTimer();
	void STATIC_SetTimer();
	void TornOff();
	void Destroy();
	void Spawn();
	void STATIC_IsBlockedBy();
	void STATIC_GetBoundingCylinder();
	void STATIC_GetComponentsBoundingBox();
	void STATIC_IsOverlapping();
	void ContainsPoint();
	void STATIC_FindSpot();
	void TraceAllPhysicsAssetInteractions();
	void STATIC_FastTrace();
	void STATIC_PointCheckComponent();
	void TraceComponent();
	void Trace();
	void VolumeBasedDestroy();
	void OutsideWorldBounds();
	void FellOutOfWorld();
	void UsedBy();
	void OverRotated();
	void ClampRotation();
	void OnSleepRBPhysics();
	void OnWakeRBPhysics();
	void RanInto();
	void EncroachedBy();
	void EncroachingOn();
	void CollisionChanged();
	void SpecialHandling();
	void Detach();
	void Attach();
	void BaseChange();
	void Bump();
	void UnTouch();
	void PostTouch();
	void Touch();
	void PhysicsVolumeChange();
	void Landed();
	void Falling();
	void HitWall();
	void Timer();
	void Tick();
	void LostChild();
	void GainedChild();
	void Destroyed();
	void STATIC_SetTickIsDisabled();
	void STATIC_SetTickGroup();
	void STATIC_ReattachComponent();
	void DetachComponent();
	void AttachComponent();
	void UnClock();
	void Clock();
	void STATIC_SetPhysics();
	void STATIC_SetOnlyOwnerSee();
	void STATIC_SetHidden();
	void ChartData();
	void STATIC_FlushDebugStrings();
	void DrawDebugFrustrum();
	void DrawDebugString();
	void DrawDebugCone();
	void DrawDebugCylinder();
	void DrawDebugSphere();
	void DrawDebugCoordinateSystem();
	void DrawDebugStar();
	void DrawDebugBox();
	void DrawDebugPoint();
	void DrawDebugLine();
	void STATIC_FlushPersistentDebugLines();
	void STATIC_GetBasedPosition();
	void STATIC_SetBasedPosition();
	void BP2Vect();
	void Vect2BP();
	void STATIC_SetForcedInitialReplicatedProperty();
	void ReplicatedEvent();
	void STATIC_GetAggregateBaseVelocity();
	void STATIC_IsOwnedBy();
	void STATIC_GetBaseMost();
	void STATIC_IsBasedOn();
	void STATIC_SearchForBaseBelow();
	void STATIC_FindBase();
	void STATIC_SetOwner();
	void STATIC_SetBase();
	void STATIC_GetTerminalVelocity();
	void AutonomousPhysics();
	void STATIC_MoveSmooth();
	void STATIC_fixedTurn();
	void STATIC_SetShadowParentOnAllAttachedComponents();
	void STATIC_SetHardAttach();
	void STATIC_SetRelativeLocation();
	void STATIC_SetRelativeRotation();
	void STATIC_SetZone();
	void STATIC_MovingWhichWay();
	void STATIC_SetRotation();
	void STATIC_SetLocation();
	void STATIC_Move();
	void STATIC_SetDrawScale3D();
	void STATIC_SetDrawScale();
	void STATIC_SetCollisionType();
	void STATIC_SetCollisionSize();
	void SetCollision();
	void STATIC_FinishAnim();
	void STATIC_Sleep();
	void ConsoleCommand();
	void STATIC_ForceUpdateComponents();
};


// Class Engine.Info
// 0x0000 (0x0274 - 0x0274)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.ZoneInfo
// 0x0014 (0x0288 - 0x0274)
class AZoneInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ZoneInfo");
		return ptr;
	}

};


// Class Engine.WorldInfo
// 0x081C (0x0AA4 - 0x0288)
class AWorldInfo : public AZoneInfo
{
public:
	unsigned char                                      UnknownData00[0x81C];                                     // 0x0288(0x081C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldInfo");
		return ptr;
	}


	void ClearObjectPools();
	void ToggleHostMigration();
	void NotifyHostMigrationStateChanged();
	void BeginHostMigration();
	void CanBeginHostMigration();
	void STATIC_FindEnvironmentVolume();
	void STATIC_GetWorldInfo();
	void STATIC_GetWorldFractureSettings();
	void DoMemoryTracking();
	void STATIC_GetDemoRewindPoints();
	void STATIC_GetDemoFrameInfo();
	void STATIC_IsPlayingDemo();
	void STATIC_IsRecordingDemo();
	void STATIC_GetDetailMode();
	void STATIC_GetMapName();
	void STATIC_SetMapInfo();
	void STATIC_GetMapInfo();
	void STATIC_SetSeamlessTravelMidpointPause();
	void STATIC_IsInSeamlessTravel();
	void STATIC_SeamlessTravel();
	void CommitMapChange();
	void CancelPendingMapChange();
	void STATIC_IsMapChangeReady();
	void STATIC_IsPreparingMapChange();
	void STATIC_PrepareMapChange();
	void STATIC_NotifyMatchStarted();
	void AllClientConnections();
	void AllPawns();
	void AllControllers();
	void STATIC_NavigationPointCheck();
	void STATIC_RadiusNavigationPoints();
	void AllNavigationPoints();
	void STATIC_Reset();
	void PostBeginPlay();
	void PreBeginPlay();
	void ThisIsNeverExecuted();
	void ServerTravel();
	void STATIC_GetGameClass();
	void STATIC_GetAddressURL();
	void VerifyNavList();
	void STATIC_ForceGarbageCollection();
	void STATIC_IsPlayInMobilePreview();
	void STATIC_IsPlayInPreview();
	void STATIC_IsPlayInEditor();
	void STATIC_IsWithGFx();
	void STATIC_IsConsoleBuild();
	void STATIC_IsDemoBuild();
	void STATIC_GetLocalURL();
	void STATIC_SetLevelRBGravity();
	void STATIC_GetAllRootSequences();
	void STATIC_GetGameSequence();
	void STATIC_GetGravityZ();
	void UpdateMusicTrack();
	void STATIC_SetMusicVolume();
	void STATIC_IsMenuLevel();
	void AddOnScreenDebugMessage();
	void ReplicatedEvent();
	void STATIC_GetNavMeshPathGoalEvaluatorFromCache();
	void STATIC_GetNavMeshPathConstraintFromCache();
	void STATIC_ReleaseCachedConstraintsAndEvaluators();
};


// Class Engine.DownloadableContentEnumerator
// 0x0040 (0x0098 - 0x0058)
class UDownloadableContentEnumerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DownloadableContentEnumerator");
		return ptr;
	}


	void TriggerFindDLCDelegates();
	void STATIC_InstallDLC();
	void STATIC_InstallAllDLC();
	void DeleteDLC();
	void ClearFindDLCDelegate();
	void AddFindDLCDelegate();
	void OnFindDLCComplete();
	void STATIC_FindDLC();
};


// Class Engine.DownloadableContentManager
// 0x00B0 (0x0108 - 0x0058)
class UDownloadableContentManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0058(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DownloadableContentManager");
		return ptr;
	}


	void OnRefreshComplete();
	void AddPackagesToFullyLoad();
	void STATIC_RefreshDLCEnumComplete();
	void STATIC_RefreshDLC();
	void STATIC_OnContentChange();
	void STATIC_OnStorageDeviceChange();
	void STATIC_OnLoginChange();
	void Init();
	void STATIC_InstallNonPackageFiles();
	void STATIC_InstallPackages();
	void UpdateObjectLists();
	void STATIC_MarkPerObjectConfigPendingKill();
	void AddSectionToObjectList();
	void STATIC_GetDLCNonPackageFilePath();
	void ClearDLC();
	void STATIC_InstallDLCs();
	void STATIC_InstallDLC();
};


// Class Engine.Engine
// 0x0898 (0x08F8 - 0x0060)
class UEngine : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x898];                                     // 0x0060(0x0898) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}


	void TranslateGFxUIMessage();
	void STATIC_GetIdentifierForVendor();
	void STATIC_GetSystemSettingFloat();
	void STATIC_GetSystemSettingInt();
	void STATIC_GetSystemSettingBool();
	void STATIC_LaunchURL();
	void BasicLoadObject();
	void BasicSaveObject();
	void AddTextureStreamingSlaveLoc();
	void STATIC_GetWorldPostProcessChain();
	void STATIC_GetDefaultPostProcessChain();
	void STATIC_GetEngine();
	void STATIC_IsRealDStereoEnabled();
	void AddOverlayWrapped();
	void AddOverlay();
	void STATIC_RemoveAllOverlays();
	void StopMovie();
	void STATIC_PlayLoadMapMovie();
	void STATIC_GetLastMovieName();
	void STATIC_GetAudioDevice();
	void STATIC_IsUsingES2Renderer();
	void STATIC_IsStereoscopic3D();
	void STATIC_IsSplitScreen();
	void STATIC_GetAdditionalFont();
	void STATIC_GetUltraFont();
	void STATIC_GetSubtitleFont();
	void STATIC_GetLargeFont();
	void STATIC_GetMediumFont();
	void STATIC_GetSmallFont();
	void STATIC_GetTinyFont();
	void STATIC_HasNetworkConnection();
	void BuildBugSubmissionString();
	void STATIC_GetDevicePushNotificationToken();
	void STATIC_GetOSVersion();
	void STATIC_GetDeviceUUID();
	void STATIC_GetBuildDate();
	void STATIC_GetCurrentWorldInfo();
	void STATIC_IsGame();
	void IsEditor();
};


// Class Engine.GameEngine
// 0x01DC (0x0AD4 - 0x08F8)
class UGameEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x1DC];                                     // 0x08F8(0x01DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}


	void STATIC_HasSecondaryScreenActive();
	void STATIC_GetDLCManager();
	void STATIC_GetDLCEnumerator();
	void STATIC_GetOnlineSubsystem();
	void DestroyNamedNetDriver();
	void CreateNamedNetDriver();
};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0058 - 0x0058)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.Brush
// 0x0030 (0x02A4 - 0x0274)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0274(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0x0000 (0x02A4 - 0x02A4)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.Volume
// 0x000C (0x02B0 - 0x02A4)
class AVolume : public ABrush
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x02A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}


	void ProcessActorSetVolume();
	void CollisionChanged();
	void STATIC_OnToggle();
	void DisplayDebug();
	void PostBeginPlay();
	void EncompassesPoint();
	void Encompasses();
};


// Class Engine.BlockingVolume
// 0x0004 (0x02B4 - 0x02B0)
class ABlockingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.DynamicBlockingVolume
// 0x0004 (0x02B8 - 0x02B4)
class ADynamicBlockingVolume : public ABlockingVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlockingVolume");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void PostBeginPlay();
};


// Class Engine.CullDistanceVolume
// 0x0014 (0x02C4 - 0x02B0)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x02B0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.DDLExcludeVolume
// 0x0000 (0x02B0 - 0x02B0)
class ADDLExcludeVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DDLExcludeVolume");
		return ptr;
	}

};


// Class Engine.LevelGridVolume
// 0x00AC (0x035C - 0x02B0)
class ALevelGridVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x02B0(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelGridVolume");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x001C (0x02CC - 0x02B0)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02B0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_OnToggle();
};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x02B0 - 0x02B0)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000 (0x02B0 - 0x02B0)
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.MassiveLODOverrideVolume
// 0x0000 (0x02B0 - 0x02B0)
class AMassiveLODOverrideVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MassiveLODOverrideVolume");
		return ptr;
	}

};


// Class Engine.PathBlockingVolume
// 0x0000 (0x02B0 - 0x02B0)
class APathBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathBlockingVolume");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x0050 (0x0300 - 0x02B0)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void STATIC_OnSetDamageInstigator();
	void STATIC_NotifyPawnBecameViewTarget();
	void STATIC_ModifyPlayer();
	void CausePainTo();
	void Touch();
	void TimerPop();
	void CollisionChanged();
	void STATIC_OnToggle();
	void PawnLeavingVolume();
	void PawnEnteredVolume();
	void ActorLeavingVolume();
	void ActorEnteredVolume();
	void PhysicsChangedFor();
	void STATIC_Reset();
	void PostBeginPlay();
	void STATIC_GetZoneVelocityForActor();
	void STATIC_GetGravityZ();
};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x0300 - 0x0300)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}


	void Destroyed();
};


// Class Engine.GravityVolume
// 0x0004 (0x0304 - 0x0300)
class AGravityVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0300(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GravityVolume");
		return ptr;
	}

};


// Class Engine.LadderVolume
// 0x0040 (0x0340 - 0x0300)
class ALadderVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0300(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LadderVolume");
		return ptr;
	}


	void PhysicsChangedFor();
	void PawnLeavingVolume();
	void PawnEnteredVolume();
	void STATIC_InUse();
	void PostBeginPlay();
};


// Class Engine.PortalVolume
// 0x0010 (0x02C0 - 0x02B0)
class APortalVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x0184 (0x0434 - 0x02B0)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x184];                                     // 0x02B0(0x0184) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0020 (0x02D0 - 0x02B0)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x02B0 - 0x02B0)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.ReverbVolume
// 0x0044 (0x02F4 - 0x02B0)
class AReverbVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x02B0(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbVolume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000 (0x02B0 - 0x02B0)
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}


	void StopsProjectile();
	void PostBeginPlay();
};


// Class Engine.DroppedPickup
// 0x001C (0x0290 - 0x0274)
class ADroppedPickup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0274(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DroppedPickup");
		return ptr;
	}


	void STATIC_RecheckValidTouch();
	void STATIC_PickedUpBy();
	void STATIC_GiveTo();
	void Landed();
	void DetourWeight();
	void EncroachedBy();
	void SetPickupParticles();
	void SetPickupMesh();
	void STATIC_Reset();
	void ReplicatedEvent();
	void Destroyed();
	void STATIC_RemoveFromNavigation();
	void AddToNavigation();
};


// Class Engine.DynamicSMActor
// 0x0050 (0x02C4 - 0x0274)
class ADynamicSMActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0274(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSMActor");
		return ptr;
	}


	void STATIC_SetLightEnvironmentToNotBeDynamic();
	void Detach();
	void Attach();
	void CanBasePawn();
	void STATIC_SetStaticMesh();
	void STATIC_OnSetMaterial();
	void OnSetMesh();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.InterpActor
// 0x004C (0x0310 - 0x02C4)
class AInterpActor : public ADynamicSMActor
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x02C4(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpActor");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void ShutDown();
	void InterpolationChanged();
	void InterpolationFinished();
	void InterpolationStarted();
	void STATIC_PlayMovingSound();
	void STATIC_FinishedOpen();
	void STATIC_Restart();
	void Detach();
	void Attach();
	void RanInto();
	void EncroachingOn();
	void PostBeginPlay();
};


// Class Engine.Emitter
// 0x0034 (0x02A8 - 0x0274)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0274(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void STATIC_HideSelf();
	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void STATIC_OnSetParticleSysParam();
	void STATIC_SetActorParameter();
	void STATIC_SetExtColorParameter();
	void STATIC_SetColorParameter();
	void STATIC_SetVectorParameter();
	void STATIC_SetFloatParameter();
	void ShutDown();
	void STATIC_OnParticleEventGenerator();
	void STATIC_OnToggle();
	void OnParticleSystemFinished();
	void ReplicatedEvent();
	void PostBeginPlay();
	void SetTemplate();
};


// Class Engine.EmitterPool
// 0x0070 (0x02E4 - 0x0274)
class AEmitterPool : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0274(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterPool");
		return ptr;
	}


	void STATIC_SpawnEmitterCustomLifetime();
	void STATIC_SpawnEmitterMeshAttachment();
	void STATIC_SpawnEmitter();
	void STATIC_GetPooledComponent();
	void STATIC_GetFreeMatInstConsts();
	void STATIC_FreeMaterialInstanceConstants();
	void STATIC_GetFreeStaticMeshComponent();
	void STATIC_FreeStaticMeshComponents();
	void STATIC_ReturnToPool();
	void ClearPoolComponents();
	void OnParticleSystemFinished();
};


// Class Engine.HUD
// 0x0320 (0x0594 - 0x0274)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0274(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void OnLostFocusPause();
	void STATIC_NotifyBindPostProcessEffects();
	void STATIC_PlayerOwnerDied();
	void STATIC_GetFontSizeIndex();
	void DrawText();
	void DisplayKismetMessages();
	void DisplayLocalMessages();
	void DrawMessageText();
	void DrawMessage();
	void STATIC_GetScreenCoords();
	void AddLocalizedMessage();
	void STATIC_LocalizedMessage();
	void AddConsoleMessage();
	void STATIC_ShouldShowConsoleMessage();
	void DisplayConsoleMessages();
	void Message();
	void ClearMessage();
	void DisplayBadConnectionAlert();
	void DrawHUD();
	void PostRender();
	void STATIC_PreCalcValues();
	void DrawRoute();
	void STATIC_ShowDebugInfo();
	void ToggleDirectorInfoDebug();
	void ToggleDirectorInfoHUD();
	void STATIC_ShouldDisplayDebug();
	void STATIC_ShowDebug();
	void STATIC_SetShowScores();
	void STATIC_ShowScores();
	void STATIC_ShowHUD();
	void ToggleHUD();
	void AddPostRenderedActor();
	void STATIC_RemovePostRenderedActor();
	void DrawActorOverlays();
	void PostBeginPlay();
	void Draw2DLine();
	void Draw3DLine();
};


// Class Engine.AutoTestManager
// 0x00C4 (0x0338 - 0x0274)
class AAutoTestManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0274(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoTestManager");
		return ptr;
	}


	void CheckForSentinelRun();
	void StartMatch();
	void STATIC_GetNextAutomatedTestingMap();
	void STATIC_IncrementNumberOfMatchesPlayed();
	void STATIC_IncrementAutomatedTestingMapIndex();
	void CloseAutomatedMapTestTimer();
	void STATIC_StartAutomatedMapTestTimerWorker();
	void StartAutomatedMapTestTimer();
	void DoMemoryTracking();
	void DoTimeBasedSentinelStatGathering();
	void DoSentinel_ViewDependentMemoryAtSpecificLocation();
	void DoSentinel_PerfAtSpecificLocation();
	void DoSentinel_MemoryAtSpecificLocation();
	void STATIC_GetTravelLocations();
	void STATIC_HandlePerLoadedMapAudioStats();
	void DoSentinelActionPerLoadedMap();
	void DoTravelTheWorld();
	void EndSentinelRun();
	void AddSentinelPerTimePeriodStats();
	void BeginSentinelRun();
	void STATIC_InitializeOptions();
	void Timer();
	void PostBeginPlay();
};


// Class Engine.CoverGroup
// 0x0018 (0x028C - 0x0274)
class ACoverGroup : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0274(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverGroup");
		return ptr;
	}


	void STATIC_OnToggle();
	void ToggleGroup();
	void DisableGroup();
	void EnableGroup();
};


// Class Engine.ExponentialHeightFog
// 0x000C (0x0280 - 0x0274)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void STATIC_OnToggle();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.FileWriter
// 0x0020 (0x0294 - 0x0274)
class AFileWriter : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0274(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileWriter");
		return ptr;
	}


	void Destroyed();
	void STATIC_Logf();
	void CloseFile();
	void STATIC_OpenFile();
};


// Class Engine.FileLog
// 0x0000 (0x0294 - 0x0294)
class AFileLog : public AFileWriter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileLog");
		return ptr;
	}


	void CloseLog();
	void STATIC_OpenLog();
};


// Class Engine.GameInfo
// 0x024C (0x04C0 - 0x0274)
class AGameInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0274(0x024C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInfo");
		return ptr;
	}


	void ClearOnlineDelegates();
	void STATIC_InitCrowdPopulationManager();
	void OnEngineHasLoaded();
	void STATIC_OnDestroyOnlineGameComplete();
	void StandbyCheatDetected();
	void EnableStandbyCheatDetection();
	void BeginBVT();
	void CheckForSentinelRun();
	void STATIC_ShouldAutoContinueToNextRound();
	void STATIC_IsDoingASentinelRun();
	void STATIC_IsCheckingForMemLeaks();
	void STATIC_IsCheckingForFragmentation();
	void STATIC_IsAutomatedPerfTesting();
	void STATIC_SetBandwidthLimit();
	void DoTravelTheWorld();
	void TellClientsToTravelToSession();
	void TellClientsPartyHostIsLeaving();
	void TellClientsToReturnToPartyHost();
	void STATIC_OnServerCreateComplete();
	void STATIC_RegisterServer();
	void STATIC_OnLoginChange();
	void STATIC_OnLoginFailed();
	void ClearAutoLoginDelegates();
	void STATIC_ProcessServerLogin();
	void MatineeCancelled();
	void STATIC_RecalculateSkillRating();
	void UpdateGameplayMuteList();
	void STATIC_NotifyArbitratedMatchEnd();
	void STATIC_MatchIsInProgress();
	void ArbitrationRegistrationComplete();
	void STATIC_RegisterServerForArbitration();
	void STATIC_StartArbitratedMatch();
	void STATIC_StartArbitrationRegistration();
	void STATIC_ProcessClientRegistrationCompletion();
	void UpdateGameSettingsCounts();
	void STATIC_SetSeamlessTravelViewTarget();
	void HandleSeamlessTravelPlayer();
	void UpdateGameSettings();
	void PostSeamlessTravel();
	void SwapPlayerControllers();
	void GetSeamlessTravelActorList();
	void STATIC_OverridePRI();
	void STATIC_FindInactivePRI();
	void AddInactivePRI();
	void PostCommitMapChange();
	void PreCommitMapChange();
	void AllowPausing();
	void AllowCheats();
	void AllowMutator();
	void STATIC_PlayerCanRestart();
	void STATIC_PlayerCanRestartGame();
	void DriverLeftVehicle();
	void CanLeaveVehicle();
	void DriverEnteredVehicle();
	void STATIC_ModifyScoreKill();
	void STATIC_ScoreKill();
	void CheckScore();
	void STATIC_ScoreObjective();
	void AddObjectiveScore();
	void STATIC_RatePlayerStart();
	void ChoosePlayerStart();
	void STATIC_FindPlayerStart();
	void STATIC_ShouldSpawnAtStartSpot();
	void EndLogging();
	void STATIC_GameEventsPoll();
	void EndOnlineGame();
	void STATIC_PerformEndGameHandling();
	void EndGame();
	void WriteOnlinePlayerScores();
	void WriteOnlineStats();
	void CheckEndGame();
	void CheckModifiedEndGame();
	void BroadcastLocalizedTeam();
	void BroadcastLocalized();
	void BroadcastTeam();
	void Broadcast();
	void STATIC_RestartGame();
	void STATIC_GetTravelType();
	void STATIC_GetNextMap();
	void STATIC_SendPlayer();
	void STATIC_PickTeam();
	void ChangeTeam();
	void ChangeName();
	void DiscardInventory();
	void STATIC_PickupQuery();
	void STATIC_ShouldRespawn();
	void CheckRelevance();
	void STATIC_ReduceDamage();
	void CanSpectate();
	void STATIC_KickBan();
	void STATIC_Kick();
	void BroadcastDeathMessage();
	void STATIC_PreventDeath();
	void STATIC_Killed();
	void STATIC_NotifyKilled();
	void STATIC_SetPlayerDefaults();
	void STATIC_Mutate();
	void AddDefaultInventory();
	void AcceptInventory();
	void UnregisterPlayer();
	void STATIC_Logout();
	void PreExit();
	void CalculatedNetSpeed();
	void UpdateNetSpeeds();
	void PostLogin();
	void UpdateBestNextHosts();
	void BestNextHostSort();
	void STATIC_GenericPlayerInitialization();
	void STATIC_ReplicateStreamingStatus();
	void STATIC_GetDefaultPlayerClass();
	void STATIC_SpawnDefaultPawnFor();
	void STATIC_RestartPlayer();
	void STATIC_StartBots();
	void StartHumans();
	void STATIC_OnStartOnlineGameComplete();
	void StartOnlineGame();
	void StartMatch();
	void Login();
	void STATIC_SpawnPlayerController();
	void STATIC_GetNextPlayerID();
	void AtCapacity();
	void STATIC_RejectLogin();
	void STATIC_ResumeLogin();
	void STATIC_PauseLogin();
	void PreLogin();
	void STATIC_RequiresPassword();
	void STATIC_ProcessClientTravel();
	void STATIC_ProcessServerTravel();
	void STATIC_RemoveMutator();
	void AddMutator();
	void NotifyPendingConnectionLost();
	void InitGame();
	void SetGameType();
	void GetDefaultGameClassPath();
	void STATIC_GetIntOption();
	void STATIC_HasOption();
	void STATIC_ParseOption();
	void STATIC_GetKeyValue();
	void STATIC_GrabOption();
	void STATIC_SetGameSpeed();
	void DebugPause();
	void STATIC_ForceClearUnpauseDelegates();
	void ClearPause();
	void STATIC_SetPause();
	void CanUnpause();
	void STATIC_GetNumPlayers();
	void STATIC_GetNetworkNumber();
	void STATIC_InitGameReplicationInfo();
	void ForceKickPlayer();
	void KickIdler();
	void GameEnding();
	void STATIC_NotifyNavigationChanged();
	void DoNavFearCostFallOff();
	void STATIC_ShouldStartInCinematicMode();
	void Timer();
	void STATIC_ResetLevel();
	void STATIC_ShouldReset();
	void STATIC_Reset();
	void DisplayDebug();
	void PostBeginPlay();
	void STATIC_GetCoverReplicator();
	void PreBeginPlay();
	void STATIC_GetMapCommonPackageName();
	void STATIC_GetSupportedGameTypes();
};


// Class Engine.Mutator
// 0x001C (0x0290 - 0x0274)
class AMutator : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0274(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Mutator");
		return ptr;
	}


	void STATIC_NetDamage();
	void STATIC_ScoreKill();
	void STATIC_ScoreObjective();
	void STATIC_PreventDeath();
	void STATIC_OverridePickupQuery();
	void CheckEndGame();
	void STATIC_HandleRestartGame();
	void STATIC_FindPlayerStart();
	void GetSeamlessTravelActorList();
	void STATIC_InitMutator();
	void DriverLeftVehicle();
	void CanLeaveVehicle();
	void DriverEnteredVehicle();
	void STATIC_NotifyLogin();
	void STATIC_NotifyLogout();
	void CheckReplacement();
	void CheckRelevance();
	void STATIC_IsRelevant();
	void AlwaysKeep();
	void AddMutator();
	void STATIC_ModifyPlayer();
	void STATIC_ModifyLogin();
	void STATIC_Mutate();
	void Destroyed();
	void STATIC_MutatorIsAllowed();
	void PreBeginPlay();
};


// Class Engine.PotentialClimbWatcher
// 0x0000 (0x0274 - 0x0274)
class APotentialClimbWatcher : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PotentialClimbWatcher");
		return ptr;
	}


	void Tick();
};


// Class Engine.Route
// 0x0024 (0x0298 - 0x0274)
class ARoute : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0274(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Route");
		return ptr;
	}


	void STATIC_MoveOntoRoutePath();
	void STATIC_ResolveRouteIndex();
};


// Class Engine.WindPointSource
// 0x0008 (0x027C - 0x0274)
class AWindPointSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindPointSource");
		return ptr;
	}

};


// Class Engine.Inventory
// 0x0074 (0x02E8 - 0x0274)
class AInventory : public AActor
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0274(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Inventory");
		return ptr;
	}


	void STATIC_GetLocalString();
	void DropFrom();
	void DenyPickupQuery();
	void STATIC_ItemRemovedFromInvManager();
	void ClientGivenTo();
	void STATIC_GivenTo();
	void AnnouncePickup();
	void STATIC_GiveTo();
	void DetourWeight();
	void BotDesireability();
	void Destroyed();
	void STATIC_GetHumanReadableName();
};


// Class Engine.Weapon
// 0x00D0 (0x03B8 - 0x02E8)
class AWeapon : public AInventory
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02E8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Weapon");
		return ptr;
	}


	void STATIC_GetTargetDistance();
	void CacheAIController();
	void WeaponIsDown();
	void StillFiring();
	void STATIC_ShouldRefire();
	void STATIC_NotifyWeaponFinishedFiring();
	void STATIC_NotifyWeaponFired();
	void STATIC_HandleFinishedFiring();
	void TryPutDown();
	void GetPhysicalFireStartLoc();
	void GetMuzzleLoc();
	void CustomFire();
	void STATIC_ProjectileFire();
	void STATIC_ProcessInstantHit();
	void STATIC_InstantFire();
	void STATIC_PassThroughDamage();
	void CalcWeaponFire();
	void STATIC_GetTraceOwner();
	void GetTraceRange();
	void STATIC_GetAdjustedAim();
	void STATIC_FireAmmunition();
	void STATIC_FireModeUpdated();
	void STATIC_SetCurrentFireMode();
	void STATIC_SendToFiringState();
	void STATIC_ForceEndFire();
	void EndFire();
	void STATIC_ServerStopFire();
	void StopFire();
	void BeginFire();
	void STATIC_ServerStartFire();
	void STATIC_StartFire();
	void ClientWeaponSet();
	void ClientGivenTo();
	void DetachWeapon();
	void AttachWeaponTo();
	void ClearFlashLocation();
	void STATIC_SetFlashLocation();
	void ClearFlashCount();
	void STATIC_IncrementFlashCount();
	void WeaponEmpty();
	void DenyPickupQuery();
	void STATIC_PutDownWeapon();
	void Activate();
	void TimeWeaponEquipping();
	void TimeWeaponPutDown();
	void STATIC_RefireCheckTimer();
	void TimeWeaponFiring();
	void STATIC_GetFireInterval();
	void StopFireEffects();
	void STATIC_PlayFireEffects();
	void StopWeaponAnimation();
	void STATIC_PlayWeaponAnimation();
	void STATIC_GetWeaponAnimNodeSeq();
	void STATIC_FireOnRelease();
	void CanAttack();
	void STATIC_GetWeaponRating();
	void STATIC_GetAIRating();
	void STATIC_MaxRange();
	void AddSpread();
	void STATIC_GetProjectileClass();
	void ClearPendingFire();
	void STATIC_SetPendingFire();
	void STATIC_PendingFire();
	void STATIC_GetPendingFireLength();
	void STATIC_HasAnyAmmo();
	void STATIC_HasAmmo();
	void AddAmmo();
	void ConsumeAmmo();
	void STATIC_GetWeaponDebug();
	void DisplayDebug();
	void DenyClientWeaponSet();
	void IsFiring();
	void ClientWeaponThrown();
	void CanThrow();
	void DropFrom();
	void DoOverridePrevWeapon();
	void DoOverrideNextWeapon();
	void STATIC_HolderDied();
	void STATIC_ItemRemovedFromInvManager();
	void Destroyed();
};


// Class Engine.InventoryManager
// 0x002C (0x02A0 - 0x0274)
class AInventoryManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0274(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InventoryManager");
		return ptr;
	}


	void UpdateController();
	void ClientWeaponSet();
	void ChangedWeapon();
	void ClearPendingWeapon();
	void CancelWeaponChange();
	void STATIC_SetPendingWeapon();
	void STATIC_InternalSetCurrentWeapon();
	void STATIC_ServerSetCurrentWeapon();
	void STATIC_SetCurrentWeapon();
	void STATIC_NextWeapon();
	void STATIC_PrevWeapon();
	void SwitchToBestWeapon();
	void STATIC_GetBestWeapon();
	void STATIC_GetWeaponRatingFor();
	void DrawHUD();
	void STATIC_OwnerDied();
	void DiscardInventory();
	void STATIC_RemoveFromInventory();
	void AddInventory();
	void CreateInventory();
	void FindInventoryType();
	void STATIC_HandlePickupQuery();
	void Destroyed();
	void STATIC_SetupFor();
	void STATIC_InventoryActors();
	void ClearAllPendingFire();
	void STATIC_IsPendingFire();
	void ClearPendingFire();
	void STATIC_SetPendingFire();
	void STATIC_GetPendingFireLength();
	void PostBeginPlay();
};


// Class Engine.Keypoint
// 0x0008 (0x027C - 0x0274)
class AKeypoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Keypoint");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x000C (0x0288 - 0x027C)
class ATargetPoint : public AKeypoint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x027C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0008 (0x027C - 0x0274)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x00E0 (0x0354 - 0x0274)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0274(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void CheckPriorityRefresh();
	void Update();
	void AddAIGroupActor();
};


// Class Engine.NavigationPoint
// 0x0118 (0x038C - 0x0274)
class ANavigationPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0274(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPoint");
		return ptr;
	}


	void GetDebugAbbrev();
	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void ShutDown();
	void STATIC_OnToggle();
	void STATIC_IsOnDifferentNetwork();
	void STATIC_GetAllNavInRadius();
	void STATIC_GetNearestNavToPoint();
	void STATIC_GetNearestNavToActor();
	void STATIC_ProceedWithMove();
	void SuggestMovePreparation();
	void DetourWeight();
	void Accept();
	void SpecialCost();
	void CanTeleport();
	void STATIC_IsUsableAnchorFor();
	void STATIC_GetReachSpecTo();
	void STATIC_GetBoundingCylinder();
};


// Class Engine.CoverLink
// 0x0099 (0x0425 - 0x038C)
class ACoverLink : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x99];                                      // 0x038C(0x0099) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverLink");
		return ptr;
	}


	void GetDebugAbbrev();
	void STATIC_GetLocationDescription();
	void GetDebugString();
	void AddCoverSlot();
	void BreakFracturedMeshes();
	void STATIC_GetSwatTurnTarget();
	void ShutDown();
	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_OnToggle();
	void IsEnabled();
	void AutoAdjustSlot();
	void STATIC_OnModifyCover();
	void SetSlotPlayerOnly();
	void STATIC_NotifySlotOwnerCoverDisabled();
	void SetSlotEnabled();
	void SetDisabled();
	void STATIC_GetSlotActions();
	void STATIC_HasFireLinkTo();
	void STATIC_GetFireLinkTo();
	void AllowLeftTransition();
	void AllowRightTransition();
	void STATIC_GetSlotIdxToRight();
	void STATIC_GetSlotIdxToLeft();
	void STATIC_IsRightEdgeSlot();
	void STATIC_IsLeftEdgeSlot();
	void STATIC_IsEdgeSlot();
	void STATIC_FindSlots();
	void STATIC_IsStationarySlot();
	void STATIC_IsValidClaimBetween();
	void STATIC_IsValidClaim();
	void UnClaim();
	void Claim();
	void SetInvalidUntil();
	void STATIC_IsExposedTo();
	void STATIC_GetSlotViewPoint();
	void STATIC_GetSlotRotation();
	void STATIC_GetSlotLocation();
	void UnPackFireLinkInteractionInfo();
	void STATIC_PackFireLinkInteractionInfo();
	void STATIC_GetFireLinkTargetCoverInfo();
};


// Class Engine.DoorMarker
// 0x0018 (0x03A4 - 0x038C)
class ADoorMarker : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x038C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DoorMarker");
		return ptr;
	}


	void SuggestMovePreparation();
	void STATIC_ProceedWithMove();
	void SpecialHandling();
	void STATIC_MoverClosed();
	void STATIC_MoverOpened();
	void PostBeginPlay();
};


// Class Engine.DynamicAnchor
// 0x0008 (0x0394 - 0x038C)
class ADynamicAnchor : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x038C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicAnchor");
		return ptr;
	}

};


// Class Engine.Ladder
// 0x0010 (0x039C - 0x038C)
class ALadder : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x038C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Ladder");
		return ptr;
	}


	void SuggestMovePreparation();
};


// Class Engine.AutoLadder
// 0x0000 (0x039C - 0x039C)
class AAutoLadder : public ALadder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoLadder");
		return ptr;
	}

};


// Class Engine.LiftCenter
// 0x0028 (0x03B4 - 0x038C)
class ALiftCenter : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x038C(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftCenter");
		return ptr;
	}


	void STATIC_ProceedWithMove();
	void SuggestMovePreparation();
	void SpecialHandling();
	void PostBeginPlay();
};


// Class Engine.LiftExit
// 0x000C (0x0398 - 0x038C)
class ALiftExit : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x038C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftExit");
		return ptr;
	}


	void SuggestMovePreparation();
	void WaitForLift();
	void CanBeReachedFromLiftBy();
};


// Class Engine.PathNode
// 0x0000 (0x038C - 0x038C)
class APathNode : public ANavigationPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathNode");
		return ptr;
	}


	void GetDebugAbbrev();
};


// Class Engine.VolumePathNode
// 0x0008 (0x0394 - 0x038C)
class AVolumePathNode : public APathNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x038C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumePathNode");
		return ptr;
	}

};


// Class Engine.PickupFactory
// 0x002C (0x03B8 - 0x038C)
class APickupFactory : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x038C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PickupFactory");
		return ptr;
	}


	void DelayRespawn();
	void Destroyed();
	void STATIC_SetPickupVisible();
	void STATIC_SetPickupHidden();
	void STATIC_RespawnEffect();
	void STATIC_GetRespawnTime();
	void STATIC_RecheckValidTouch();
	void STATIC_PickedUpBy();
	void STATIC_GiveTo();
	void STATIC_ReadyToPickup();
	void STATIC_SpawnCopyFor();
	void DetourWeight();
	void StartSleeping();
	void STATIC_SetRespawn();
	void CheckForErrors();
	void STATIC_Reset();
	void SetPickupMesh();
	void ShutDown();
	void SetInitialState();
	void STATIC_InitializePickup();
	void PreBeginPlay();
	void ReplicatedEvent();
};


// Class Engine.PlayerStart
// 0x0010 (0x039C - 0x038C)
class APlayerStart : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x038C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}


	void PostRenderFor();
	void STATIC_OnToggle();
};


// Class Engine.PortalMarker
// 0x0008 (0x0394 - 0x038C)
class APortalMarker : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x038C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalMarker");
		return ptr;
	}


	void CanTeleport();
};


// Class Engine.Pylon
// 0x0118 (0x04A4 - 0x038C)
class APylon : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x038C(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pylon");
		return ptr;
	}


	void CanReachPylon();
	void STATIC_OnToggle();
	void IsEnabled();
	void SetEnabled();
	void PostBeginPlay();
	void NotifyPathChanged();
	void VerifyTopLevelConnections();
	void STATIC_GetTestPathExtent();
	void STATIC_FlushDynamicEdges();
	void UpdateMeshForPreExistingNavMeshObstacles();
	void STATIC_OnPylonStatusChange();
};


// Class Engine.AISwitchablePylon
// 0x0004 (0x04A8 - 0x04A4)
class AAISwitchablePylon : public APylon
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISwitchablePylon");
		return ptr;
	}


	void IsEnabled();
	void SetEnabled();
	void PostBeginPlay();
};


// Class Engine.DynamicPylon
// 0x0004 (0x04A8 - 0x04A4)
class ADynamicPylon : public APylon
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicPylon");
		return ptr;
	}


	void StoppedMoving();
	void StartedMoving();
	void STATIC_FlushDynamicEdges();
	void STATIC_RebuildDynamicEdges();
	void PostBeginPlay();
};


// Class Engine.Teleporter
// 0x002C (0x03B8 - 0x038C)
class ATeleporter : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x038C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Teleporter");
		return ptr;
	}


	void SpecialHandling();
	void PostTouch();
	void Touch();
	void Accept();
	void PostBeginPlay();
	void CanTeleport();
};


// Class Engine.Note
// 0x0010 (0x0284 - 0x0274)
class ANote : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.NoteBalloon
// 0x0014 (0x0298 - 0x0284)
class ANoteBalloon : public ANote
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0284(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NoteBalloon");
		return ptr;
	}

};


// Class Engine.Projectile
// 0x005C (0x02D0 - 0x0274)
class AProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0274(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Projectile");
		return ptr;
	}


	void ApplyFluidSurfaceImpact();
	void STATIC_GetRange();
	void StaticGetTimeToLocation();
	void STATIC_GetTimeToLocation();
	void FellOutOfWorld();
	void STATIC_IsStationary();
	void STATIC_RandSpin();
	void Explode();
	void EncroachedBy();
	void HitWall();
	void STATIC_ProcessTouch();
	void Touch();
	void STATIC_HurtRadius();
	void STATIC_ProjectileHurtRadius();
	void STATIC_Reset();
	void CanSplash();
	void STATIC_GetTeamNum();
	void Init();
	void PostBeginPlay();
	void PreBeginPlay();
	void EncroachingOn();
};


// Class Engine.RigidBodyBase
// 0x0000 (0x0274 - 0x0274)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.SceneCaptureActor
// 0x0008 (0x027C - 0x0274)
class ASceneCaptureActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureActor");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.SceneCapture2DActor
// 0x0008 (0x0284 - 0x027C)
class ASceneCapture2DActor : public ASceneCaptureActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x027C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DActor");
		return ptr;
	}

};


// Class Engine.SceneCaptureCubeMapActor
// 0x0010 (0x028C - 0x027C)
class ASceneCaptureCubeMapActor : public ASceneCaptureActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x027C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCubeMapActor");
		return ptr;
	}

};


// Class Engine.SceneCaptureReflectActor
// 0x0010 (0x028C - 0x027C)
class ASceneCaptureReflectActor : public ASceneCaptureActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x027C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureReflectActor");
		return ptr;
	}

};


// Class Engine.SceneCapturePortalActor
// 0x0000 (0x028C - 0x028C)
class ASceneCapturePortalActor : public ASceneCaptureReflectActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapturePortalActor");
		return ptr;
	}

};


// Class Engine.PortalTeleporter
// 0x001C (0x02A8 - 0x028C)
class APortalTeleporter : public ASceneCapturePortalActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x028C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalTeleporter");
		return ptr;
	}


	void StopsProjectile();
	void CreatePortalTexture();
	void TransformHitLocation();
	void TransformVectorDir();
	void TransformActor();
};


// Class Engine.StaticMeshActorBase
// 0x0000 (0x0274 - 0x0274)
class AStaticMeshActorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActorBase");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0025 (0x0299 - 0x0274)
class AStaticMeshActor : public AStaticMeshActorBase
{
public:
	unsigned char                                      UnknownData00[0x25];                                      // 0x0274(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}


	void PreBeginPlay();
};


// Class Engine.StaticMeshCollectionActor
// 0x0014 (0x0288 - 0x0274)
class AStaticMeshCollectionActor : public AStaticMeshActorBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshCollectionActor");
		return ptr;
	}

};


// Class Engine.StaticMeshActorBasedOnExtremeContent
// 0x0028 (0x029C - 0x0274)
class AStaticMeshActorBasedOnExtremeContent : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0274(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActorBasedOnExtremeContent");
		return ptr;
	}


	void STATIC_SetMaterialBasedOnExtremeContent();
	void PostBeginPlay();
};


// Class Engine.Trigger
// 0x0010 (0x0284 - 0x0274)
class ATrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void StopsProjectile();
	void UnTrigger();
	void STATIC_NotifyTriggered();
	void Touch();
	void PostBeginPlay();
};


// Class Engine.Trigger_PawnsOnly
// 0x0000 (0x0284 - 0x0284)
class ATrigger_PawnsOnly : public ATrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_PawnsOnly");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x001C (0x0084 - 0x0068)
class UActorComponent : public UComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0068(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void DetachFromAny();
	void STATIC_ForceUpdate();
	void STATIC_SetComponentRBFixed();
	void STATIC_SetTickGroup();
};


// Class Engine.AudioComponent
// 0x0218 (0x029C - 0x0084)
class UAudioComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0084(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void STATIC_OcclusionChanged();
	void STATIC_OnQueueSubtitles();
	void OnAudioFinished();
	void STATIC_ResetToDefaults();
	void STATIC_SetWaveParameter();
	void STATIC_SetFloatParameter();
	void AdjustVolume();
	void STATIC_FadeOut();
	void STATIC_FadeIn();
	void STATIC_IsFadingOut();
	void STATIC_IsFadingIn();
	void STATIC_IsPlaying();
	void Stop();
	void Play();
};


// Class Engine.SplineAudioComponent
// 0x0018 (0x02B4 - 0x029C)
class USplineAudioComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x029C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineAudioComponent");
		return ptr;
	}

};


// Class Engine.MultiCueSplineAudioComponent
// 0x0014 (0x02C8 - 0x02B4)
class UMultiCueSplineAudioComponent : public USplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x02B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiCueSplineAudioComponent");
		return ptr;
	}

};


// Class Engine.SimpleSplineAudioComponent
// 0x0038 (0x02EC - 0x02B4)
class USimpleSplineAudioComponent : public USplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02B4(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleSplineAudioComponent");
		return ptr;
	}

};


// Class Engine.SimpleSplineNonLoopAudioComponent
// 0x0028 (0x0314 - 0x02EC)
class USimpleSplineNonLoopAudioComponent : public USimpleSplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02EC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleSplineNonLoopAudioComponent");
		return ptr;
	}

};


// Class Engine.HeightFogComponent
// 0x001C (0x00A0 - 0x0084)
class UHeightFogComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0084(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightFogComponent");
		return ptr;
	}


	void SetEnabled();
};


// Class Engine.PrimitiveComponent
// 0x0200 (0x0284 - 0x0084)
class UPrimitiveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0084(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	void STATIC_SetPPOutlineWidth();
	void STATIC_SetPPOutlineColor();
	void STATIC_SetPPOutline();
	void STATIC_SetOccludedOutlineColor();
	void STATIC_SetOccludedOutlineWidth();
	void STATIC_SetOccludedOutline();
	void STATIC_SetOccludeState();
	void ClosestPointOnComponentToComponent();
	void ClosestPointOnComponentToPoint();
	void STATIC_GetRotation();
	void STATIC_GetPosition();
	void STATIC_SetAbsolute();
	void STATIC_SetScale3D();
	void STATIC_SetScale();
	void STATIC_SetRotation();
	void STATIC_SetTranslation();
	void STATIC_SetActorCollision();
	void STATIC_SetTraceBlocking();
	void STATIC_SetViewOwnerDepthPriorityGroup();
	void STATIC_SetDepthPriorityGroup();
	void STATIC_SetLightingChannels();
	void STATIC_SetCullDistance();
	void STATIC_SetLightEnvironment();
	void STATIC_SetShadowParent();
	void STATIC_SetIgnoreOwnerHidden();
	void STATIC_SetOnlyOwnerSee();
	void STATIC_SetOwnerNoSee();
	void STATIC_SetHidden();
	void STATIC_ShouldComponentAddToScene();
	void STATIC_SetRBDominanceGroup();
	void STATIC_GetRootBodyInstance();
	void STATIC_SetPhysMaterialOverride();
	void STATIC_InitRBPhys();
	void STATIC_SetNotifyRigidBodyCollision();
	void STATIC_SetRBChannel();
	void STATIC_SetRBCollisionChannels();
	void STATIC_SetRBCollidesWithChannel();
	void STATIC_SetBlockRigidBody();
	void STATIC_RigidBodyIsAwake();
	void STATIC_PutRigidBodyToSleep();
	void WakeRigidBody();
	void STATIC_SetRBRotation();
	void STATIC_SetRBPosition();
	void STATIC_RetardRBLinearVelocity();
	void STATIC_SetRBAngularVelocity();
	void STATIC_SetRBLinearVelocity();
	void AddTorque();
	void AddRadialForce();
	void AddForce();
	void AddRadialImpulse();
	void AddImpulse();
};


// Class Engine.ArrowComponent
// 0x0014 (0x0298 - 0x0284)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0284(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x0074 (0x02F8 - 0x0284)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0284(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.CameraConeComponent
// 0x0000 (0x0284 - 0x0284)
class UCameraConeComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraConeComponent");
		return ptr;
	}

};


// Class Engine.CylinderComponent
// 0x0010 (0x0294 - 0x0284)
class UCylinderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CylinderComponent");
		return ptr;
	}


	void STATIC_SetCylinderSize();
};


// Class Engine.DrawBoxComponent
// 0x001C (0x02A0 - 0x0284)
class UDrawBoxComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0284(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawBoxComponent");
		return ptr;
	}

};


// Class Engine.DrawCapsuleComponent
// 0x0018 (0x029C - 0x0284)
class UDrawCapsuleComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0284(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawCapsuleComponent");
		return ptr;
	}

};


// Class Engine.DrawConeComponent
// 0x0010 (0x0294 - 0x0284)
class UDrawConeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawConeComponent");
		return ptr;
	}

};


// Class Engine.DrawCylinderComponent
// 0x0024 (0x02A8 - 0x0284)
class UDrawCylinderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0284(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawCylinderComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x001C (0x02A0 - 0x0284)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0284(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.DrawQuadComponent
// 0x0010 (0x0294 - 0x0284)
class UDrawQuadComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawQuadComponent");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0x0018 (0x029C - 0x0284)
class UDrawSphereComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0284(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.DrawPylonRadiusComponent
// 0x0000 (0x029C - 0x029C)
class UDrawPylonRadiusComponent : public UDrawSphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawPylonRadiusComponent");
		return ptr;
	}

};


// Class Engine.DrawSoundRadiusComponent
// 0x0000 (0x029C - 0x029C)
class UDrawSoundRadiusComponent : public UDrawSphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSoundRadiusComponent");
		return ptr;
	}

};


// Class Engine.LevelGridVolumeRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class ULevelGridVolumeRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelGridVolumeRenderingComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0034 (0x02B8 - 0x0284)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0284(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x0030 (0x02B4 - 0x0284)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0284(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.SpriteComponent
// 0x0028 (0x02AC - 0x0284)
class USpriteComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0284(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpriteComponent");
		return ptr;
	}


	void STATIC_SetSpriteAndUV();
	void STATIC_SetUV();
	void STATIC_SetSprite();
};


// Class Engine.RadialBlurComponent
// 0x006C (0x00F0 - 0x0084)
class URadialBlurComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0084(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialBlurComponent");
		return ptr;
	}


	void STATIC_OnUpdatePropertyBlurOpacity();
	void STATIC_OnUpdatePropertyBlurFalloffExponent();
	void STATIC_OnUpdatePropertyBlurScale();
	void SetEnabled();
	void STATIC_SetBlurOpacity();
	void STATIC_SetBlurFalloffExponent();
	void STATIC_SetBlurScale();
	void STATIC_SetMaterial();
};


// Class Engine.SceneCaptureComponent
// 0x0048 (0x00CC - 0x0084)
class USceneCaptureComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0084(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void SetEnabled();
	void STATIC_SetFrameRate();
};


// Class Engine.SceneCapture2DComponent
// 0x00A4 (0x0170 - 0x00CC)
class USceneCapture2DComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00CC(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DComponent");
		return ptr;
	}


	void STATIC_SetView();
	void STATIC_SetCaptureParameters();
};


// Class Engine.SceneCapture2DHitMaskComponent
// 0x002C (0x00F8 - 0x00CC)
class USceneCapture2DHitMaskComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DHitMaskComponent");
		return ptr;
	}


	void STATIC_SetFadingStartTimeSinceHit();
	void STATIC_SetCaptureParameters();
	void STATIC_SetCaptureTargetTexture();
};


// Class Engine.SceneCaptureCubeMapComponent
// 0x001C (0x00E8 - 0x00CC)
class USceneCaptureCubeMapComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00CC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCubeMapComponent");
		return ptr;
	}

};


// Class Engine.SceneCapturePortalComponent
// 0x0014 (0x00E0 - 0x00CC)
class USceneCapturePortalComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapturePortalComponent");
		return ptr;
	}


	void STATIC_SetCaptureParameters();
};


// Class Engine.SceneCaptureReflectComponent
// 0x000C (0x00D8 - 0x00CC)
class USceneCaptureReflectComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00CC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureReflectComponent");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0018 (0x009C - 0x0084)
class UWindDirectionalSourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0084(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.WindPointSourceComponent
// 0x000C (0x00A8 - 0x009C)
class UWindPointSourceComponent : public UWindDirectionalSourceComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x009C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindPointSourceComponent");
		return ptr;
	}

};


// Class Engine.ActorFactory
// 0x003C (0x0094 - 0x0058)
class UActorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0058(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactory");
		return ptr;
	}


	void PostCreateActor();
};


// Class Engine.ActorFactoryActor
// 0x0008 (0x009C - 0x0094)
class UActorFactoryActor : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryActor");
		return ptr;
	}

};


// Class Engine.ActorFactoryAI
// 0x0038 (0x00CC - 0x0094)
class UActorFactoryAI : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0094(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAI");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSound
// 0x0008 (0x009C - 0x0094)
class UActorFactoryAmbientSound : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSound");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundMovable
// 0x0000 (0x009C - 0x009C)
class UActorFactoryAmbientSoundMovable : public UActorFactoryAmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundMovable");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundSimple
// 0x0008 (0x009C - 0x0094)
class UActorFactoryAmbientSoundSimple : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundSimple");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundNonLoop
// 0x0000 (0x009C - 0x009C)
class UActorFactoryAmbientSoundNonLoop : public UActorFactoryAmbientSoundSimple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundNonLoop");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundSimpleToggleable
// 0x0000 (0x009C - 0x009C)
class UActorFactoryAmbientSoundSimpleToggleable : public UActorFactoryAmbientSoundSimple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundSimpleToggleable");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundNonLoopingToggleable
// 0x0000 (0x009C - 0x009C)
class UActorFactoryAmbientSoundNonLoopingToggleable : public UActorFactoryAmbientSoundSimpleToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundNonLoopingToggleable");
		return ptr;
	}

};


// Class Engine.ActorFactoryApexDestructible
// 0x0014 (0x00A8 - 0x0094)
class UActorFactoryApexDestructible : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0094(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryApexDestructible");
		return ptr;
	}

};


// Class Engine.ActorFactoryArchetype
// 0x0008 (0x009C - 0x0094)
class UActorFactoryArchetype : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryArchetype");
		return ptr;
	}

};


// Class Engine.ActorFactoryCoverLink
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryCoverLink : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryCoverLink");
		return ptr;
	}

};


// Class Engine.ActorFactoryDominantDirectionalLight
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryDominantDirectionalLight : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDominantDirectionalLight");
		return ptr;
	}

};


// Class Engine.ActorFactoryDominantDirectionalLightMovable
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryDominantDirectionalLightMovable : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDominantDirectionalLightMovable");
		return ptr;
	}

};


// Class Engine.ActorFactoryDynamicSM
// 0x0019 (0x00AD - 0x0094)
class UActorFactoryDynamicSM : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0094(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDynamicSM");
		return ptr;
	}

};


// Class Engine.ActorFactoryMover
// 0x0003 (0x00B0 - 0x00AD)
class UActorFactoryMover : public UActorFactoryDynamicSM
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryMover");
		return ptr;
	}

};


// Class Engine.ActorFactoryRigidBody
// 0x002F (0x00DC - 0x00AD)
class UActorFactoryRigidBody : public UActorFactoryDynamicSM
{
public:
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00AD(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryRigidBody");
		return ptr;
	}

};


// Class Engine.ActorFactoryEmitter
// 0x0008 (0x009C - 0x0094)
class UActorFactoryEmitter : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryEmitter");
		return ptr;
	}

};


// Class Engine.ActorFactoryFracturedStaticMesh
// 0x0014 (0x00A8 - 0x0094)
class UActorFactoryFracturedStaticMesh : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0094(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFracturedStaticMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryLensFlare
// 0x0008 (0x009C - 0x0094)
class UActorFactoryLensFlare : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryLensFlare");
		return ptr;
	}

};


// Class Engine.ActorFactoryLight
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryLight : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryLight");
		return ptr;
	}

};


// Class Engine.ActorFactoryPathNode
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryPathNode : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPathNode");
		return ptr;
	}

};


// Class Engine.ActorFactoryPhysicsAsset
// 0x002C (0x00C0 - 0x0094)
class UActorFactoryPhysicsAsset : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0094(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPhysicsAsset");
		return ptr;
	}

};


// Class Engine.ActorFactoryPlayerStart
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryPlayerStart : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPlayerStart");
		return ptr;
	}

};


// Class Engine.ActorFactoryPylon
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryPylon : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPylon");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMesh
// 0x0018 (0x00AC - 0x0094)
class UActorFactorySkeletalMesh : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0094(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryStaticMesh
// 0x0014 (0x00A8 - 0x0094)
class UActorFactoryStaticMesh : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0094(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryStaticMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryTrigger
// 0x0000 (0x0094 - 0x0094)
class UActorFactoryTrigger : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryTrigger");
		return ptr;
	}

};


// Class Engine.ActorFactoryVehicle
// 0x0008 (0x009C - 0x0094)
class UActorFactoryVehicle : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryVehicle");
		return ptr;
	}

};


// Class Engine.AkBank
// 0x0014 (0x006C - 0x0058)
class UAkBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkBank");
		return ptr;
	}

};


// Class Engine.AkBaseSoundObject
// 0x0000 (0x0058 - 0x0058)
class UAkBaseSoundObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkBaseSoundObject");
		return ptr;
	}

};


// Class Engine.AkEvent
// 0x004C (0x00A4 - 0x0058)
class UAkEvent : public UAkBaseSoundObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0058(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkEvent");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x00A8 (0x0100 - 0x0058)
class USoundCue : public UAkBaseSoundObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0058(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}


	void STATIC_GetCueDuration();
};


// Class Engine.BookMark
// 0x0028 (0x0080 - 0x0058)
class UBookMark : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x000C (0x0064 - 0x0058)
class UBookMark2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.KismetBookMark
// 0x0010 (0x0074 - 0x0064)
class UKismetBookMark : public UBookMark2D
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetBookMark");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x0070 (0x00C8 - 0x0058)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	void DrawDebugGraph();
	void DrawTextureDoubleLine();
	void DrawTextureLine();
	void Draw2DLine();
	void STATIC_SetDrawColorStruct();
	void STATIC_SetDrawColor();
	void DrawBox();
	void DrawRect();
	void DrawIcon();
	void DrawScaledIcon();
	void STATIC_MakeIcon();
	void DrawBlendedTile();
	void DrawTexture();
	void STATIC_PopMaskRegion();
	void STATIC_PushMaskRegion();
	void STATIC_SetClip();
	void STATIC_SetOrigin();
	void STATIC_SetPos();
	void GetDefaultCanvasFont();
	void STATIC_Reset();
	void STATIC_Flush();
	void STATIC_PopTransform();
	void STATIC_PushTranslationMatrix();
	void DeProject();
	void STATIC_Project();
	void DrawTextViewportClipText();
	void DrawText();
	void TextSize();
	void StrLen();
	void CreateFontRenderInfo();
	void DrawTris();
	void DrawTileStretched();
	void DrawTimer();
	void DrawRotatedMaterialTile();
	void DrawRotatedTile();
	void DrawMaterialTile();
	void STATIC_PreOptimizeDrawTiles();
	void DrawTile();
	void TopDepthSortKey();
	void STATIC_PopDepthSortKey();
	void STATIC_PushDepthSortKey();
	void DisableFullBatchOptimization();
	void EnableFullBatchOptimization();
};


// Class Engine.Channel
// 0x0040 (0x0098 - 0x0058)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x007C (0x0114 - 0x0098)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0098(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0014 (0x00AC - 0x0098)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0098(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.FileChannel
// 0x0224 (0x02BC - 0x0098)
class UFileChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x224];                                     // 0x0098(0x0224) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0010 (0x00A8 - 0x0098)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.Controller
// 0x01EC (0x0460 - 0x0274)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1EC];                                     // 0x0274(0x01EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void GeneratePathToLocation();
	void GeneratePathToActor();
	void InterpolationFinished();
	void InterpolationStarted();
	void InitNavigationHandle();
	void STATIC_ReadyForLift();
	void STATIC_SendMessage();
	void CurrentLevelUnloaded();
	void IsInCombat();
	void IsSpectating();
	void STATIC_OnToggleHidden();
	void STATIC_NotifyAddInventory();
	void STATIC_OnModifyHealth();
	void STATIC_NotifyCoverClaimViolation();
	void NotifyCoverAdjusted();
	void STATIC_NotifyCoverDisabled();
	void STATIC_OnSetVelocity();
	void STATIC_OnSetPhysics();
	void STATIC_OnToggleGodMode();
	void STATIC_OnAttachToActor();
	void STATIC_OnTeleport();
	void STATIC_IsDead();
	void STATIC_GetHumanReadableName();
	void DisplayDebug();
	void StopLatentExecution();
	void STATIC_InLatentExecution();
	void ReachedPreciseDestination();
	void NotifyMissedJump();
	void NotifyJumpApex();
	void NotifyBump();
	void NotifyFallingHitWall();
	void NotifyHitWall();
	void NotifyLanded();
	void NotifyHeadVolumeChange();
	void NotifyPhysicsVolumeChange();
	void STATIC_LandingShake();
	void STATIC_IsAimingAt();
	void GetActorEyesViewPoint();
	void GetPlayerViewPointQuat();
	void GetPlayerViewPoint();
	void HandlePathObstruction();
	void UnderLift();
	void MoverFinished();
	void WaitForMover();
	void AllowDetourTo();
	void MayFall();
	void EndClimbLadder();
	void LongFall();
	void WaitForLanding();
	void STATIC_PickWallAdjust();
	void MoveUnreachable();
	void ActorReachable();
	void STATIC_PointReachable();
	void STATIC_FindPathToIntercept();
	void STATIC_FindRandomDest();
	void STATIC_FindPathTowardNearest();
	void STATIC_FindPathToward();
	void STATIC_FindPathTo();
	void STATIC_FinishRotation();
	void SetupSpecialPathAbilities();
	void STATIC_MoveToward();
	void STATIC_MoveToDirectNonPathPos();
	void STATIC_MoveTo();
	void EnemyNotVisible();
	void SeeMonster();
	void SeePlayer();
	void HearNoise();
	void STATIC_PickTarget();
	void CanSeeByPoints();
	void CanSee();
	void STATIC_LineOfSightTo();
	void STATIC_NotifyChangedWeapon();
	void ClientSwitchToBestWeapon();
	void SwitchToBestWeapon();
	void STATIC_ReceiveProjectileWarning();
	void STATIC_ReceiveWarning();
	void STATIC_InstantWarnTarget();
	void STATIC_GetAdjustedAimFor();
	void STATIC_HandlePickup();
	void STATIC_RoundHasEnded();
	void StopFiring();
	void STATIC_FireWeaponAt();
	void RatePickup();
	void WarnProjExplode();
	void STATIC_NotifyProjLanded();
	void STATIC_NotifyKilled();
	void STATIC_GameHasEnded();
	void STATIC_SetCharacter();
	void STATIC_ServerGivePawn();
	void STATIC_ServerRestartPlayer();
	void STATIC_GetTeamNum();
	void STATIC_InitPlayerReplicationInfo();
	void STATIC_NotifyTakeHit();
	void EnemyJustTeleported();
	void BeyondFogDistance();
	void STATIC_Restart();
	void CleanupPRI();
	void Destroyed();
	void NotifyPostLanded();
	void STATIC_GamePlayEndedState();
	void STATIC_PawnDied();
	void UnPossess();
	void Possess();
	void STATIC_OnPossess();
	void ReplicatedEvent();
	void ClientSetRotation();
	void ClientSetLocation();
	void STATIC_Reset();
	void PostBeginPlay();
	void SetSkelControlScale();
	void SetMorphWeight();
	void StopActorFaceFXAnim();
	void PlayActorFaceFXAnim();
	void FinishAnimControl();
	void SetAnimPosition();
	void BeginAnimControl();
	void NotifyPathChanged();
	void STATIC_GetAdjustLocation();
	void STATIC_SetAdjustLocation();
	void STATIC_GetDestinationPosition();
	void STATIC_SetDestinationPosition();
	void STATIC_GetFocalPoint();
	void STATIC_SetFocalPoint();
	void STATIC_RouteCache_RemoveIndex();
	void STATIC_RouteCache_RemoveItem();
	void STATIC_RouteCache_InsertItem();
	void STATIC_RouteCache_AddItem();
	void STATIC_RouteCache_Empty();
	void STATIC_IsLocalController();
	void STATIC_IsLocalPlayerController();
};


// Class Engine.PlayerController
// 0x0320 (0x0780 - 0x0460)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0460(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	void SetMatineeConstantCameraAnim();
	void NotifyDisconnect();
	void STATIC_ReceivedGameClass();
	void STATIC_LogOutBugItAIGoToLogFile();
	void STATIC_LogOutBugItGoToLogFile();
	void DisableDebugAI();
	void OnEngineInitialTick();
	void BugItStringCreator();
	void BugItAI();
	void STATIC_LogLoc();
	void BugIt();
	void BugItWorker();
	void BugItGoString();
	void BugItGo();
	void STATIC_HasPeerConnection();
	void STATIC_OnSetSoundMode();
	void ClientSpawnCameraLensEffect();
	void DebugCameraAnims();
	void ClientStopCameraAnim();
	void ClientPlayCameraAnim();
	void STATIC_OnCameraShake();
	void ClientStopCameraShake();
	void ClientPlayCameraShake();
	void DoForceFeedbackForScreenShake();
	void InputMatchDelegate();
	void STATIC_Sentinel_PostAcquireTravelTheWorldPoints();
	void STATIC_Sentinel_PreAcquireTravelTheWorldPoints();
	void STATIC_Sentinel_SetupForGamebasedTravelTheWorld();
	void STATIC_OnFlyThroughHasEnded();
	void GetAchievementProgression();
	void STATIC_GetPartyGameTypeName();
	void STATIC_GetPartyMapName();
	void STATIC_IsPartyLeader();
	void ClientAddTextureStreamingLoc();
	void ClientPrestreamTextures();
	void ClientSetForceMipLevelsToBeResident();
	void ClientControlMovieTexture();
	void STATIC_GetSplitscreenPlayerCount();
	void STATIC_GetSplitscreenPlayerByIndex();
	void STATIC_IsSplitscreenPlayer();
	void STATIC_IsPrimaryPlayer();
	void STATIC_ServerNotifyPartyHostLeaving();
	void ClientNotifyPartyHostLeaving();
	void ClientReturnToParty();
	void STATIC_OnJoinTravelToSessionComplete();
	void STATIC_PreJoinUpdateGameSettings();
	void ClientTravelToSession();
	void STATIC_PathClear();
	void STATIC_PathChild();
	void STATIC_PathStep();
	void SoakPause();
	void STATIC_IncrementNumberOfMatchesPlayed();
	void CanViewUserCreatedContent();
	void ClientEndOnlineGame();
	void ClientStartOnlineGame();
	void STATIC_ServerRegisterClientStatGuid();
	void STATIC_OnRegisterHostStatGuidComplete();
	void ClientRegisterHostStatGuid();
	void RemoveAllHudDebugStrings();
	void AddHudDebugTextCoordinate();
	void HudDebugTextCoordinates();
	void AddHudDebugText();
	void DrawHudDebugTextList();
	void RemoveAllDebugStrings();
	void RemoveDebugText();
	void AddDebugText();
	void AddDebugTextWithScreenOffset();
	void DrawDebugTextList();
	void STATIC_OnDestroy();
	void ClientStartNetworkedVoice();
	void ClientStopNetworkedVoice();
	void ClientSetHostUniqueId();
	void ClientWriteLeaderboardStats();
	void ClientWriteOnlinePlayerScores();
	void ClientArbitratedMatchEnded();
	void STATIC_NotifyNotEnoughSpaceInInvite();
	void STATIC_NotifyNotAllPlayersCanJoinInvite();
	void STATIC_NotifyInviteFailed();
	void STATIC_OnInviteJoinComplete();
	void STATIC_ModifyClientURL();
	void STATIC_OnDestroyForInviteComplete();
	void STATIC_OnEndForInviteComplete();
	void ClearInviteDelegates();
	void CanAllPlayersPlayOnline();
	void STATIC_InviteHasEnoughSpace();
	void STATIC_OnGameInviteAccepted();
	void STATIC_ServerRegisteredForArbitration();
	void STATIC_OnArbitrationRegisterComplete();
	void ClientRegisterForArbitration();
	void ClientWasKicked();
	void STATIC_IsShowingSubtitles();
	void STATIC_SetShowSubtitles();
	void NotifyDirectorControl();
	void ServerUnmutePlayer();
	void ServerMutePlayer();
	void STATIC_GameplayUnmutePlayer();
	void STATIC_GameplayMutePlayer();
	void ClientUnmutePlayer();
	void ClientMutePlayer();
	void ClientVoiceHandshakeComplete();
	void STATIC_GetPlayerControllerFromNetId();
	void ClientSetOnlineStatus();
	void STATIC_SeamlessTravelFrom();
	void STATIC_SeamlessTravelTo();
	void GetSeamlessTravelActorList();
	void STATIC_IsPlayerMuted();
	void STATIC_GetUIController();
	void STATIC_SaveActorConfig();
	void STATIC_SaveClassConfig();
	void ClientWaitForLevelsVisible();
	void ClientSetBlockOnAsyncLoading();
	void ClientFlushLevelStreaming();
	void ClientCancelPendingMapChange();
	void ClientCommitMapChange();
	void DelayedPrepareMapChange();
	void ClientPrepareMapChange();
	void ServerUpdateLevelVisibility();
	void ClientUpdateLevelStreamingStatus();
	void LevelStreamingStatusChanged();
	void ClientForceGarbageCollection();
	void STATIC_OnConsoleCommand();
	void STATIC_ResetPlayerMovementInput();
	void IsLookInputIgnored();
	void STATIC_IgnoreLookInput();
	void IsMoveInputIgnored();
	void STATIC_IgnoreMoveInput();
	void ClientSetCinematicMode();
	void STATIC_ProcessCinematic();
	void STATIC_SetCinematicMode();
	void STATIC_OnToggleCinematicMode();
	void STATIC_IsForceFeedbackAllowed();
	void ClientStopForceFeedbackWaveform();
	void ClientPlayForceFeedbackWaveform();
	void PlayRumble();
	void STATIC_OnForceFeedback();
	void STATIC_NotifyTakeHit();
	void STATIC_ShowGameState();
	void STATIC_ShowPlayerState();
	void STATIC_ServerRemoteEvent();
	void STATIC_RE();
	void STATIC_RemoteEvent();
	void STATIC_ListCE();
	void STATIC_ListConsoleEvents();
	void CE();
	void CauseEvent();
	void STATIC_ServerCauseEvent();
	void STATIC_OnToggleHUD();
	void STATIC_OnSetCameraTarget();
	void ClientClearKismetText();
	void ClientDrawKismetText();
	void STATIC_OnDrawText();
	void DisplayDebug();
	void ClientIgnoreLookInput();
	void ClientIgnoreMoveInput();
	void STATIC_OnToggleInput();
	void AdjustHUDRenderSize();
	void DrawHUD();
	void CanRestartPlayer();
	void STATIC_ServerViewSelf();
	void ViewAPlayer();
	void STATIC_GetNextViewablePlayer();
	void STATIC_ServerViewPrevPlayer();
	void STATIC_ServerViewNextPlayer();
	void STATIC_ServerSetSpectatorLocation();
	void IsSpectating();
	void AdjustPlayerWalkingMoveAccel();
	void CheckJumpOrDuck();
	void LimitViewRotation();
	void STATIC_ProcessViewRotation();
	void UpdateRotation();
	void ViewShake();
	void GetPlayerViewPoint();
	void SpawnPlayerCamera();
	void STATIC_ServerVerifyViewTarget();
	void STATIC_GetViewTarget();
	void ClientSetViewTarget();
	void STATIC_SetViewTargetWithBlend();
	void STATIC_SetViewTarget();
	void STATIC_IsLocalController();
	void STATIC_IsLocalPlayerController();
	void GetFOVAngle();
	void AdjustFOV();
	void NotifyLanded();
	void AimHelpDot();
	void STATIC_GetAdjustedAimFor();
	void CameraTransitionFinished();
	void CameraLookAtFinished();
	void AimingHelp();
	void STATIC_PlayerMove();
	void PlayerTick();
	void STATIC_NotifyChangedWeapon();
	void ClientGameEnded();
	void STATIC_GameHasEnded();
	void ClientRestart();
	void EnterStartState();
	void STATIC_ForceSingleNetUpdateFor();
	void STATIC_HasClientLoadedCurrentWorld();
	void NotifyLoadedWorld();
	void ServerNotifyLoadedWorld();
	void STATIC_Restart();
	void ClientSetProgressMessage();
	void SwitchLevel();
	void STATIC_ServerChangeTeam();
	void ChangeTeam();
	void SwitchTeam();
	void STATIC_ServerChangeName();
	void STATIC_SetName();
	void STATIC_ServerSuicide();
	void Suicide();
	void TriggerInteracted();
	void STATIC_FindVehicleToDrive();
	void STATIC_PerformedUseAction();
	void STATIC_ServerUse();
	void Use();
	void STATIC_GetTriggerUseList();
	void StopAltFire();
	void STATIC_StartAltFire();
	void StopFire();
	void STATIC_StartFire();
	void STATIC_NextWeapon();
	void STATIC_PrevWeapon();
	void STATIC_ServerThrowWeapon();
	void ThrowWeapon();
	void UTrace();
	void STATIC_ServerUTrace();
	void ConditionalPause();
	void STATIC_ServerPause();
	void STATIC_Pause();
	void STATIC_IsPaused();
	void STATIC_SetPause();
	void CanUnpause();
	void ClientPauseRumble();
	void STATIC_PauseRumbleForAllPlayers();
	void STATIC_LocalTravel();
	void STATIC_RestartLevel();
	void STATIC_ServerSpeech();
	void STATIC_Speech();
	void STATIC_ServerRestartGame();
	void STATIC_HandleWalking();
	void STATIC_ServerUpdateCamera();
	void CallServerMove();
	void STATIC_ReplicateMove();
	void CompressAccel();
	void STATIC_GetFreeMove();
	void ClientUpdatePosition();
	void ClearAckedMoves();
	void STATIC_ServerUpdatePing();
	void UpdateStateFromAdjustment();
	void STATIC_LongClientAdjustPosition();
	void STATIC_SkipPositionUpdateForRM();
	void UpdatePing();
	void ClientAdjustPosition();
	void ClientAckGoodMove();
	void ClientCapBandwidth();
	void STATIC_ShortClientAdjustPosition();
	void VeryShortClientAdjustPosition();
	void STATIC_MoveAutonomous();
	void STATIC_ProcessMove();
	void STATIC_ProcessDrive();
	void STATIC_ServerDrive();
	void SendClientAdjustment();
	void STATIC_ServerMove();
	void STATIC_ServerMoveHandleClientError();
	void STATIC_GetServerMoveDeltaTime();
	void STATIC_OldServerMove();
	void DualServerMove();
	void STATIC_ForceDeathUpdate();
	void UsingFirstPersonCamera();
	void ClientSetCameraFade();
	void ResetCameraMode();
	void STATIC_SetCameraMode();
	void ClientSetCameraMode();
	void STATIC_ServerCamera();
	void Camera();
	void PreClientTravel();
	void STATIC_ServerTeamSay();
	void TeamSay();
	void ClientAdminMessage();
	void STATIC_ServerSay();
	void STATIC_Say();
	void AllowTextMessage();
	void STATIC_ServerMutate();
	void STATIC_Mutate();
	void FOV();
	void STATIC_ResetFOV();
	void STATIC_SetFOV();
	void STATIC_FixFOV();
	void Destroyed();
	void CleanupPawn();
	void ClearOnlineDelegates();
	void STATIC_OnPartyMembersInfoChanged();
	void STATIC_OnPartyMemberListChanged();
	void STATIC_RegisterOnlineDelegates();
	void STATIC_PlayBeepSound();
	void TeamMessage();
	void STATIC_SpeakTTS();
	void TeamTalk();
	void Talk();
	void CreateTTSSoundCue();
	void AllowTTSMessageFrom();
	void CanCommunicate();
	void ClientMessage();
	void ClientPlayActorFaceFXAnim();
	void Kismet_ClientStopSound();
	void Kismet_ClientPlaySound();
	void STATIC_IsClosestLocalPlayerToActor();
	void WwiseClientHearSound();
	void ClientHearSound();
	void STATIC_GetPooledAudioComponent();
	void HearSoundFinished();
	void ClientPlaySound();
	void ReceiveLocalizedMessage();
	void CleanupPRI();
	void STATIC_HandlePickup();
	void ClientSetSecondaryHUD();
	void ClientSetHUD();
	void STATIC_PawnDied();
	void UnPossess();
	void STATIC_ServerAcknowledgePossession();
	void AcknowledgePossession();
	void Possess();
	void STATIC_GivePawn();
	void AskForPawn();
	void ClientGotoState();
	void STATIC_SetTiltActive();
	void STATIC_IsMouseAvailable();
	void STATIC_IsKeyboardAvailable();
	void STATIC_SetUseTiltForwardAndBack();
	void STATIC_SetOnlyUseControllerTiltInput();
	void STATIC_SetControllerTiltActive();
	void STATIC_IsControllerTiltActive();
	void STATIC_SetRumbleScale();
	void STATIC_ReloadProfileSettings();
	void UnregisterStandardPlayerDataStores();
	void UnregisterPlayerDataStores();
	void STATIC_RegisterStandardPlayerDataStores();
	void STATIC_RegisterCustomPlayerDataStores();
	void STATIC_RegisterPlayerDataStores();
	void ClientInitializeDataStores();
	void InitInputSystem();
	void STATIC_GetOnlineSubsystem();
	void STATIC_PostControllerIdChange();
	void STATIC_PreControllerIdChange();
	void CleanOutSavedMoves();
	void ClientReset();
	void STATIC_Reset();
	void STATIC_SpawnDefaultHUD();
	void EnableCheats();
	void AddCheats();
	void KickWarning();
	void STATIC_ServerGivePawn();
	void STATIC_ServerShortTimeout();
	void STATIC_ResetTimeMargin();
	void PreRender();
	void STATIC_OnJoinMigratedGame();
	void STATIC_PeerDesignatedAsClient();
	void STATIC_OnUnregisterPlayerCompleteForJoinMigrate();
	void PeerReceivedMigratedSession();
	void TellPeerToTravelToSession();
	void TellPeerToTravel();
	void STATIC_PeerTravelAsHost();
	void STATIC_GetNewPeerHostURL();
	void STATIC_PeerDesignatedAsHost();
	void STATIC_GetCurrentSearchClass();
	void STATIC_OnHostMigratedOnlineGame();
	void STATIC_OnUnregisterPlayerCompleteForHostMigrate();
	void STATIC_RemoveMissingPeersFromSession();
	void STATIC_GetPRIFromNetId();
	void OnMissingPeersUnregistered();
	void STATIC_GetRegisteredPlayersInSession();
	void STATIC_NotifyHostMigrationStarted();
	void MigrateNewHost();
	void STATIC_IsBestHostPeer();
	void NotifyPeerDisconnectHost();
	void ClientUpdateBestNextHosts();
	void STATIC_ServerRemovePeer();
	void STATIC_ServerAddPeer();
	void RemovePeer();
	void AddPeer();
	void STATIC_FindConnectedPeerIndex();
	void ReceivedPlayer();
	void PostBeginPlay();
	void STATIC_SpawnCoverReplicator();
	void CanUnpauseControllerConnected();
	void STATIC_OnControllerChanged();
	void CanUnpauseExternalUI();
	void STATIC_OnExternalUIChanged();
	void STATIC_ForceClearUnpauseDelegates();
	void DisableActorHeadTracking();
	void EnableActorHeadTracking();
	void FellOutOfWorld();
	void CleanUpAudioComponents();
	void STATIC_FindStairRotation();
	void ServerProcessConvolve();
	void ClientConvolve();
	void STATIC_SetAudioGroupVolume();
	void STATIC_SetAllowMatureLanguage();
	void STATIC_PasteFromClipboard();
	void CopyToClipboard();
	void STATIC_GetDefaultURL();
	void UpdateURL();
	void ClientTravel();
	void ConsoleCommand();
	void STATIC_GetServerNetworkAddress();
	void STATIC_GetPlayerNetworkAddress();
	void STATIC_SetNetSpeed();
};


// Class Engine.CheatManager
// 0x0020 (0x0078 - 0x0058)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void STATIC_OnGoogleSubscriptionAddComplete();
	void SubscribeToChairChannel();
	void STATIC_OnGoogleSubscriptionsComplete();
	void STATIC_OnGoogleFriendsComplete();
	void STATIC_GoogleRevoke();
	void STATIC_OnGoogleAuthComplete();
	void STATIC_GoogleAuth();
	void AnalyticsEndSession();
	void AnalyticsStartSession();
	void STATIC_GetAnalyticsUserId();
	void STATIC_SetAnalyticsUserId();
	void STATIC_SendAnalyticsCachedEvents();
	void STATIC_SendAnalyticsCurrencyGivenEvent();
	void STATIC_SendAnalyticsCurrencyPurchaseEvent();
	void STATIC_SendAnalyticsItemPurchaseEvent();
	void STATIC_SendAnalyticsUserAttributeEvent();
	void STATIC_SendAnalyticsEvent();
	void STATIC_OnRequestComplete();
	void TestHttp();
	void STATIC_OnDeleteUserFileComplete();
	void DebugDeleteUserFile();
	void STATIC_OnReadUserFileComplete();
	void DebugReadUserFile();
	void STATIC_OnWriteUserFileComplete();
	void DebugWriteUserFile();
	void STATIC_OnEnumerateUserFilesComplete();
	void DebugQueryUserFiles();
	void STATIC_OnReceivedLocalNotificationDebug();
	void DebugNotification();
	void DrawLocationXYZ();
	void DrawLocation();
	void DumpCoverStats();
	void DebugEmsDownload();
	void DebugDeleteTitleFiles();
	void STATIC_OnSaveComplete();
	void DebugSaveTitleFile();
	void STATIC_OnLoadComplete();
	void STATIC_OnDownloadComplete();
	void DebugDownloadTitleFile();
	void DebugIniLocPatcher();
	void ToggleAILogging();
	void VerifyNavMeshCoverRefs();
	void STATIC_PrintNavMeshObstacles();
	void STATIC_PrintAllPathObjectEdges();
	void STATIC_NavMeshVerification();
	void DrawUnsupportingEdges();
	void VerifyNavMeshObjects();
	void STATIC_LogParticleActivateSystemCalls();
	void STATIC_LogPlaySoundCalls();
	void STATIC_InitCheatManager();
	void VerbosePathDebug();
	void TestPylonConnectivity();
	void TestNavMeshPath();
	void STATIC_SetOnlineDebugLevel();
	void TestLevel();
	void StreamLevelOut();
	void STATIC_OnlyLoadLevel();
	void StreamLevelIn();
	void STATIC_SetLevelStreamingStatus();
	void AllWeapons();
	void STATIC_Loaded();
	void ViewClass();
	void ViewBot();
	void ViewActor();
	void ViewPlayer();
	void ViewSelf();
	void STATIC_RememberSpot();
	void STATIC_FractureAllMeshesToMaximizeMemoryUsage();
	void STATIC_FractureAllMeshes();
	void DestroyFractures();
	void SuspendAI();
	void STATIC_PlayersOnly();
	void STATIC_GiveWeapon();
	void Summon();
	void Avatar();
	void STATIC_KillPawns();
	void STATIC_KillAllPawns();
	void STATIC_KillAll();
	void STATIC_SetSpeed();
	void STATIC_SetGravity();
	void STATIC_SetJumpZ();
	void STATIC_Slomo();
	void STATIC_God();
	void AllAmmo();
	void STATIC_Ghost();
	void Walk();
	void STATIC_Fly();
	void Amphibious();
	void EndPath();
	void ChangeSize();
	void Teleport();
	void STATIC_KillViewedActor();
	void WriteToLog();
	void STATIC_FreezeFrame();
	void STATIC_ListDynamicActors();
	void DebugPause();
	void EditAIByTrace();
	void DebugAI();
	void STATIC_FXStop();
	void STATIC_FXPlay();
};


// Class Engine.Client
// 0x0018 (0x0070 - 0x0058)
class UClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Client");
		return ptr;
	}

};


// Class Engine.ClipPadEntry
// 0x0020 (0x0078 - 0x0058)
class UClipPadEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClipPadEntry");
		return ptr;
	}

};


// Class Engine.CloudSaveSystem
// 0x0084 (0x00DC - 0x0058)
class UCloudSaveSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0058(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystem");
		return ptr;
	}


	void STATIC_GetKeyValue();
	void STATIC_GetDataStoreIDAndBlobNameForSaveSlot();
	void STATIC_SetKeyValue();
	void STATIC_InternalSetSaveSlotKeyValues();
	void STATIC_SetSaveSlotKeyValues();
	void STATIC_OnDeleteSaveDataComplete();
	void DeleteSaveData();
	void STATIC_OnSetSaveDataComplete();
	void STATIC_SetSaveData();
	void STATIC_OnGetSaveDataComplete();
	void STATIC_GetSaveData();
	void Init();
	void DeserializeObject();
	void STATIC_SerializeObject();
	void AreAnySlotOperationsActive();
	void STATIC_IsDeleteOperationActive();
	void STATIC_IsOperationActiveForSlot();
	void WriteNumSaveSlots();
	void DoesSaveSlotKeyValueDataAlreadyExist();
	void STATIC_GetNumberOfSaveSlots();
	void SaveSystemCallback();
	void OnGetSaveDataCallback();
};


// Class Engine.CodecMovie
// 0x0004 (0x005C - 0x0058)
class UCodecMovie : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovie");
		return ptr;
	}

};


// Class Engine.CodecMovieBink
// 0x0090 (0x00EC - 0x005C)
class UCodecMovieBink : public UCodecMovie
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x005C(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovieBink");
		return ptr;
	}

};


// Class Engine.CodecMovieFallback
// 0x0004 (0x0060 - 0x005C)
class UCodecMovieFallback : public UCodecMovie
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovieFallback");
		return ptr;
	}

};


// Class Engine.CurveEdPresetCurve
// 0x0020 (0x0078 - 0x0058)
class UCurveEdPresetCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CustomPropertyItemHandler
// 0x0000 (0x0058 - 0x0058)
class UCustomPropertyItemHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CustomPropertyItemHandler");
		return ptr;
	}

};


// Class Engine.DamageType
// 0x0030 (0x0088 - 0x0058)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}


	void VehicleDamageScalingFor();
};


// Class Engine.KillZDamageType
// 0x0000 (0x0088 - 0x0088)
class UKillZDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZDamageType");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0004 (0x0078 - 0x0074)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0019 (0x0091 - 0x0078)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0078(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0014 (0x0088 - 0x0074)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0074(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x007C - 0x0074)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0074(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0014 (0x0088 - 0x0074)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0074(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformRange
// 0x0014 (0x0088 - 0x0074)
class UDistributionFloatUniformRange : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0074(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformRange");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0011 (0x0085 - 0x0074)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0074(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x003E (0x00C3 - 0x0085)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x3E];                                      // 0x0085(0x003E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0019 (0x008D - 0x0074)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0074(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0020 (0x0094 - 0x0074)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0074(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x001D (0x0091 - 0x0074)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1D];                                      // 0x0074(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformRange
// 0x0030 (0x00A4 - 0x0074)
class UDistributionVectorUniformRange : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0074(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformRange");
		return ptr;
	}

};


// Class Engine.Download
// 0x0A44 (0x0A9C - 0x0058)
class UDownload : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA44];                                     // 0x0058(0x0A44) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Download");
		return ptr;
	}

};


// Class Engine.ChannelDownload
// 0x0008 (0x0AA4 - 0x0A9C)
class UChannelDownload : public UDownload
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A9C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChannelDownload");
		return ptr;
	}

};


// Class Engine.EdCoordSystem
// 0x0058 (0x00B0 - 0x0058)
class UEdCoordSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdCoordSystem");
		return ptr;
	}

};


// Class Engine.EditorLinkSelectionInterface
// 0x0000 (0x0058 - 0x0058)
class UEditorLinkSelectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EditorLinkSelectionInterface");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0058 - 0x0058)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.FaceFXAnimSet
// 0x0054 (0x00AC - 0x0058)
class UFaceFXAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0058(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FaceFXAnimSet");
		return ptr;
	}

};


// Class Engine.FaceFXAsset
// 0x0074 (0x00CC - 0x0058)
class UFaceFXAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0058(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FaceFXAsset");
		return ptr;
	}


	void UnmountFaceFXAnimSet();
	void STATIC_MountFaceFXAnimSet();
};


// Class Engine.Font
// 0x0140 (0x0198 - 0x0058)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0058(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}


	void STATIC_GetStringHeightAndWidth();
	void STATIC_GetMaxCharHeight();
	void STATIC_GetAuthoredViewportHeight();
	void STATIC_GetScalingFactor();
	void STATIC_GetResolutionPageIndex();
};


// Class Engine.MultiFont
// 0x0010 (0x01A8 - 0x0198)
class UMultiFont : public UFont
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0198(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiFont");
		return ptr;
	}


	void STATIC_GetResolutionTestTableIndex();
};


// Class Engine.FontImportOptions
// 0x00A8 (0x0100 - 0x0058)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0058(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.ForceFeedbackManager
// 0x0020 (0x0078 - 0x0058)
class UForceFeedbackManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackManager");
		return ptr;
	}


	void STATIC_PauseWaveform();
	void StopForceFeedbackWaveform();
	void STATIC_PlayForceFeedbackWaveform();
};


// Class Engine.ForceFeedbackWaveform
// 0x001C (0x0074 - 0x0058)
class UForceFeedbackWaveform : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackWaveform");
		return ptr;
	}

};


// Class Engine.GameplayEvents
// 0x0160 (0x01B8 - 0x0058)
class UGameplayEvents : public UObject
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0058(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEvents");
		return ptr;
	}


	void GetFilename();
	void CloseStatsFile();
	void STATIC_OpenStatsFile();
};


// Class Engine.GameplayEventsReader
// 0x0010 (0x01C8 - 0x01B8)
class UGameplayEventsReader : public UGameplayEvents
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsReader");
		return ptr;
	}


	void STATIC_GetSessionDuration();
	void STATIC_GetSessionEnd();
	void STATIC_GetSessionStart();
	void STATIC_GetSessionTimestamp();
	void STATIC_GetPlatform();
	void STATIC_GetTitleID();
	void STATIC_GetSessionID();
	void STATIC_ProcessStreamEnd();
	void STATIC_ProcessStream();
	void STATIC_ProcessStreamStart();
	void UnregisterHandler();
	void RegisterHandler();
	void STATIC_SerializeHeader();
	void CloseStatsFile();
	void STATIC_OpenStatsFile();
};


// Class Engine.GameplayEventsWriterBase
// 0x0008 (0x01C0 - 0x01B8)
class UGameplayEventsWriterBase : public UGameplayEvents
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsWriterBase");
		return ptr;
	}


	void STATIC_RecordCoverLinkFireLinks();
	void STATIC_RecordAIPathFail();
	void STATIC_LogSystemPollEvents();
	void STATIC_LogProjectileIntEvent();
	void STATIC_LogDamageEvent();
	void STATIC_LogWeaponIntEvent();
	void STATIC_LogPlayerPlayerEvent();
	void STATIC_LogPlayerKillDeath();
	void STATIC_LogAllPlayerPositionsEvent();
	void STATIC_LogPlayerLoginChange();
	void STATIC_LogPlayerSpawnEvent();
	void STATIC_LogPlayerStringEvent();
	void STATIC_LogPlayerFloatEvent();
	void STATIC_LogPlayerIntEvent();
	void STATIC_LogTeamStringEvent();
	void STATIC_LogTeamFloatEvent();
	void STATIC_LogTeamIntEvent();
	void STATIC_LogGamePositionEvent();
	void STATIC_LogGameFloatEvent();
	void STATIC_LogGameStringEvent();
	void STATIC_LogGameIntEvent();
	void EndLogging();
	void STATIC_ResetLogging();
	void StartLogging();
	void GetPlaylistId();
	void GetGameTypeId();
	void STATIC_Poll();
	void StopPolling();
	void StartPolling();
	void STATIC_IsSessionInProgress();
};


// Class Engine.GameplayEventsUploadAnalytics
// 0x0000 (0x01C0 - 0x01C0)
class UGameplayEventsUploadAnalytics : public UGameplayEventsWriterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsUploadAnalytics");
		return ptr;
	}


	void STATIC_RecordCoverLinkFireLinks();
	void STATIC_RecordAIPathFail();
	void STATIC_GetGenericParamListEntry();
	void STATIC_LogProjectileIntEvent();
	void STATIC_LogDamageEvent();
	void STATIC_LogWeaponIntEvent();
	void STATIC_LogPlayerPlayerEvent();
	void STATIC_LogPlayerKillDeath();
	void STATIC_LogAllPlayerPositionsEvent();
	void STATIC_LogPlayerLoginChange();
	void STATIC_LogPlayerSpawnEvent();
	void STATIC_LogPlayerStringEvent();
	void STATIC_LogPlayerFloatEvent();
	void STATIC_LogPlayerIntEvent();
	void STATIC_LogTeamStringEvent();
	void STATIC_LogTeamFloatEvent();
	void STATIC_LogTeamIntEvent();
	void STATIC_LogGamePositionEvent();
	void STATIC_LogGameFloatEvent();
	void STATIC_LogGameStringEvent();
	void STATIC_LogGameIntEvent();
	void EndLogging();
	void STATIC_ResetLogging();
	void StartLogging();
};


// Class Engine.GameplayEventsWriter
// 0x0000 (0x01C0 - 0x01C0)
class UGameplayEventsWriter : public UGameplayEventsWriterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsWriter");
		return ptr;
	}


	void STATIC_RecordCoverLinkFireLinks();
	void STATIC_RecordAIPathFail();
	void STATIC_GetGenericParamListEntry();
	void STATIC_LogSystemPollEvents();
	void STATIC_LogProjectileIntEvent();
	void STATIC_LogDamageEvent();
	void STATIC_LogWeaponIntEvent();
	void STATIC_LogPlayerPlayerEvent();
	void STATIC_LogPlayerKillDeath();
	void STATIC_LogAllPlayerPositionsEvent();
	void STATIC_LogPlayerLoginChange();
	void STATIC_LogPlayerSpawnEvent();
	void STATIC_LogPlayerStringEvent();
	void STATIC_LogPlayerFloatEvent();
	void STATIC_LogPlayerIntEvent();
	void STATIC_LogTeamStringEvent();
	void STATIC_LogTeamFloatEvent();
	void STATIC_LogTeamIntEvent();
	void STATIC_LogGamePositionEvent();
	void STATIC_LogGameFloatEvent();
	void STATIC_LogGameStringEvent();
	void STATIC_LogGameIntEvent();
	void EndLogging();
	void STATIC_ResetLogging();
	void StartLogging();
	void STATIC_SerializeFooter();
	void STATIC_SerializeHeader();
	void CloseStatsFile();
	void STATIC_OpenStatsFile();
	void STATIC_ResolvePlayerIndex();
};


// Class Engine.GameplayEventsHandler
// 0x0028 (0x0080 - 0x0058)
class UGameplayEventsHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsHandler");
		return ptr;
	}


	void STATIC_RemoveFilter();
	void AddFilter();
	void ResolveGroupFilters();
	void PostProcessStream();
	void PreProcessStream();
	void STATIC_SetReader();
};


// Class Engine.GenericParamListStatEntry
// 0x0010 (0x0068 - 0x0058)
class UGenericParamListStatEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GenericParamListStatEntry");
		return ptr;
	}


	void CommitToDisk();
	void STATIC_GetString();
	void STATIC_GetVector();
	void STATIC_GetInt();
	void STATIC_GetFloat();
	void AddString();
	void AddVector();
	void AddInt();
	void AddFloat();
};


// Class Engine.GuidCache
// 0x0058 (0x00B0 - 0x0058)
class UGuidCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GuidCache");
		return ptr;
	}

};


// Class Engine.HttpBaseInterface
// 0x0000 (0x0058 - 0x0058)
class UHttpBaseInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpBaseInterface");
		return ptr;
	}


	void STATIC_GetContent();
	void STATIC_GetURL();
	void STATIC_GetContentLength();
	void STATIC_GetContentType();
	void STATIC_GetURLParameter();
	void STATIC_GetHeaders();
	void STATIC_GetHeader();
};


// Class Engine.HttpRequestInterface
// 0x0010 (0x0068 - 0x0058)
class UHttpRequestInterface : public UHttpBaseInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpRequestInterface");
		return ptr;
	}


	void STATIC_SetProcessRequestCompleteDelegate();
	void OnProcessRequestComplete();
	void STATIC_ProcessRequest();
	void STATIC_SetHeader();
	void STATIC_SetContentAsString();
	void STATIC_SetContent();
	void STATIC_SetURL();
	void STATIC_SetVerb();
	void STATIC_GetVerb();
};


// Class Engine.HttpResponseInterface
// 0x0000 (0x0058 - 0x0058)
class UHttpResponseInterface : public UHttpBaseInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpResponseInterface");
		return ptr;
	}


	void STATIC_GetContentAsString();
	void STATIC_GetResponseCode();
};


// Class Engine.IniLocPatcher
// 0x0068 (0x00C0 - 0x0058)
class UIniLocPatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IniLocPatcher");
		return ptr;
	}


	void UpdateLocFileName();
	void ClearCachedFiles();
	void ClearReadFileDelegate();
	void AddReadFileDelegate();
	void AddFileToDownload();
	void STATIC_ProcessIniLocFile();
	void CheckForAllFilesComplete();
	void TriggerDownloadCompleteDelegates();
	void STATIC_OnFileCacheSaveComplete();
	void STATIC_OnFileCacheLoadComplete();
	void STATIC_OnDownloadFileComplete();
	void StartLoadingFiles();
	void STATIC_OnRequestTitleFileListComplete();
	void DownloadFiles();
	void Init();
	void OnAllTitleFilesCompleted();
	void OnReadTitleFileComplete();
};


// Class Engine.Interface_NavigationHandle
// 0x0000 (0x0058 - 0x0058)
class UInterface_NavigationHandle : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavigationHandle");
		return ptr;
	}


	void NotifyPathChanged();
};


// Class Engine.Interface_Speaker
// 0x0000 (0x0058 - 0x0058)
class UInterface_Speaker : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_Speaker");
		return ptr;
	}


	void Speak();
};


// Class Engine.InterpCurveEdSetup
// 0x0014 (0x006C - 0x0058)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0060 (0x00B8 - 0x0058)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.JsonObject
// 0x00B0 (0x0108 - 0x0058)
class UJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0058(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.JsonObject");
		return ptr;
	}


	void DecodeJson();
	void EncodeJson();
	void STATIC_SetBoolValue();
	void STATIC_SetFloatValue();
	void STATIC_SetIntValue();
	void STATIC_SetStringValue();
	void STATIC_SetObject();
	void STATIC_GetBoolValue();
	void GetFloatValue();
	void STATIC_GetIntValue();
	void STATIC_HasKey();
	void STATIC_GetStringValue();
	void STATIC_GetObject();
};


// Class Engine.KMeshProps
// 0x0058 (0x00B0 - 0x0058)
class UKMeshProps : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KMeshProps");
		return ptr;
	}

};


// Class Engine.LevelBase
// 0x0070 (0x00C8 - 0x0058)
class ULevelBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBase");
		return ptr;
	}

};


// Class Engine.Level
// 0x03D8 (0x04A0 - 0x00C8)
class ULevel : public ULevelBase
{
public:
	unsigned char                                      UnknownData00[0x3D8];                                     // 0x00C8(0x03D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.PendingLevel
// 0x004C (0x0114 - 0x00C8)
class UPendingLevel : public ULevelBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00C8(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingLevel");
		return ptr;
	}

};


// Class Engine.DemoPlayPendingLevel
// 0x0000 (0x0114 - 0x0114)
class UDemoPlayPendingLevel : public UPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPlayPendingLevel");
		return ptr;
	}

};


// Class Engine.NetPendingLevel
// 0x0000 (0x0114 - 0x0114)
class UNetPendingLevel : public UPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetPendingLevel");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x00B8 (0x0110 - 0x0058)
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0058(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}

};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0004 (0x0114 - 0x0110)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0110(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingDistance
// 0x0010 (0x0120 - 0x0110)
class ULevelStreamingDistance : public ULevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDistance");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0000 (0x0110 - 0x0110)
class ULevelStreamingKismet : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0110 - 0x0110)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0070 - 0x0058)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassLevelSettings
// 0x0030 (0x0088 - 0x0058)
class ULightmassLevelSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassLevelSettings");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x001C (0x0074 - 0x0058)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.MapInfo
// 0x0000 (0x0058 - 0x0058)
class UMapInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapInfo");
		return ptr;
	}

};


// Class Engine.Model
// 0x0C18 (0x0C70 - 0x0058)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC18];                                     // 0x0058(0x0C18) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.MusicTrackDataStructures
// 0x0000 (0x0058 - 0x0058)
class UMusicTrackDataStructures : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MusicTrackDataStructures");
		return ptr;
	}

};


// Class Engine.NavigationMeshBase
// 0x0308 (0x0360 - 0x0058)
class UNavigationMeshBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0058(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationMeshBase");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0174 (0x01D4 - 0x0060)
class UNetDriver : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x174];                                     // 0x0060(0x0174) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.DemoRecDriver
// 0x00E8 (0x02BC - 0x01D4)
class UDemoRecDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x01D4(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecDriver");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0068 - 0x0058)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.OnlineAuthInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineAuthInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineAuthInterface");
		return ptr;
	}


	void STATIC_GetServerAddr();
	void STATIC_GetServerUniqueId();
	void STATIC_FindLocalServerAuthSession();
	void STATIC_FindServerAuthSession();
	void STATIC_FindLocalClientAuthSession();
	void STATIC_FindClientAuthSession();
	void AllLocalServerAuthSessions();
	void AllServerAuthSessions();
	void AllLocalClientAuthSessions();
	void AllClientAuthSessions();
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession();
	void EndLocalServerAuthSession();
	void VerifyServerAuthSession();
	void CreateServerAuthSession();
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession();
	void EndLocalClientAuthSession();
	void VerifyClientAuthSession();
	void CreateClientAuthSession();
	void STATIC_SendServerAuthRetryRequest();
	void STATIC_SendClientAuthEndSessionRequest();
	void STATIC_SendServerAuthResponse();
	void STATIC_SendClientAuthResponse();
	void STATIC_SendServerAuthRequest();
	void STATIC_SendClientAuthRequest();
	void ClearServerConnectionCloseDelegate();
	void AddServerConnectionCloseDelegate();
	void OnServerConnectionClose();
	void ClearClientConnectionCloseDelegate();
	void AddClientConnectionCloseDelegate();
	void OnClientConnectionClose();
	void ClearServerAuthRetryRequestDelegate();
	void AddServerAuthRetryRequestDelegate();
	void OnServerAuthRetryRequest();
	void ClearClientAuthEndSessionRequestDelegate();
	void AddClientAuthEndSessionRequestDelegate();
	void OnClientAuthEndSessionRequest();
	void ClearServerAuthCompleteDelegate();
	void AddServerAuthCompleteDelegate();
	void OnServerAuthComplete();
	void ClearClientAuthCompleteDelegate();
	void AddClientAuthCompleteDelegate();
	void OnClientAuthComplete();
	void ClearServerAuthResponseDelegate();
	void AddServerAuthResponseDelegate();
	void OnServerAuthResponse();
	void ClearClientAuthResponseDelegate();
	void AddClientAuthResponseDelegate();
	void OnClientAuthResponse();
	void ClearServerAuthRequestDelegate();
	void AddServerAuthRequestDelegate();
	void OnServerAuthRequest();
	void ClearClientAuthRequestDelegate();
	void AddClientAuthRequestDelegate();
	void OnClientAuthRequest();
	void ClearAuthReadyDelegate();
	void AddAuthReadyDelegate();
	void OnAuthReady();
	void STATIC_IsReady();
};


// Class Engine.OnlineMatchmakingStats
// 0x0000 (0x0058 - 0x0058)
class UOnlineMatchmakingStats : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineMatchmakingStats");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


// Class Engine.OnlinePlayerStorage
// 0x0034 (0x008C - 0x0058)
class UOnlinePlayerStorage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0058(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerStorage");
		return ptr;
	}


	void STATIC_SetDefaultVersionNumber();
	void STATIC_GetVersionNumber();
	void AppendVersionToSettings();
	void SetToDefaults();
	void AddSettingFloat();
	void AddSettingInt();
	void STATIC_GetRangedProfileSettingValue();
	void STATIC_SetRangedProfileSettingValue();
	void STATIC_GetProfileSettingRange();
	void STATIC_GetProfileSettingMappingIds();
	void STATIC_GetProfileSettingMappingType();
	void STATIC_SetProfileSettingValueFloat();
	void STATIC_SetProfileSettingValueInt();
	void STATIC_SetProfileSettingValueId();
	void STATIC_GetProfileSettingValueFloat();
	void STATIC_GetProfileSettingValueInt();
	void STATIC_GetProfileSettingValueFromListIndex();
	void STATIC_GetProfileSettingValueId();
	void STATIC_SetProfileSettingValue();
	void STATIC_SetProfileSettingValueByName();
	void STATIC_GetProfileSettingValueByName();
	void STATIC_GetProfileSettingValues();
	void STATIC_GetProfileSettingValueName();
	void STATIC_GetProfileSettingValue();
	void STATIC_IsProfileSettingIdMapped();
	void STATIC_FindDefaultProfileMappingIndexByName();
	void STATIC_FindProfileMappingIndexByName();
	void STATIC_FindProfileMappingIndex();
	void STATIC_FindProfileSettingIndex();
	void STATIC_GetProfileSettingColumnHeader();
	void STATIC_GetProfileSettingName();
	void STATIC_GetProfileSettingId();
};


// Class Engine.OnlineProfileSettings
// 0x0030 (0x00BC - 0x008C)
class UOnlineProfileSettings : public UOnlinePlayerStorage
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x008C(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineProfileSettings");
		return ptr;
	}


	void ModifyAvailableProfileSettings();
	void AppendVersionToReadIds();
	void SetToDefaults();
	void STATIC_GetProfileSettingDefaultFloat();
	void STATIC_GetProfileSettingDefaultInt();
	void STATIC_GetProfileSettingDefaultId();
};


// Class Engine.OnlineStats
// 0x0010 (0x0068 - 0x0058)
class UOnlineStats : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStats");
		return ptr;
	}


	void STATIC_GetViewName();
	void STATIC_GetViewId();
};


// Class Engine.OnlineStatsRead
// 0x0050 (0x00B8 - 0x0068)
class UOnlineStatsRead : public UOnlineStats
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsRead");
		return ptr;
	}


	void STATIC_GetRankForPlayer();
	void AddPlayer();
	void STATIC_IsStatZero();
	void STATIC_GetStatValueForPlayerAsString();
	void STATIC_SetFloatStatValueForPlayer();
	void STATIC_GetFloatStatValueForPlayer();
	void STATIC_SetIntStatValueForPlayer();
	void STATIC_GetIntStatValueForPlayer();
	void OnReadComplete();
};


// Class Engine.OnlineStatsWrite
// 0x0054 (0x00BC - 0x0068)
class UOnlineStatsWrite : public UOnlineStats
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0068(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsWrite");
		return ptr;
	}


	void DecrementIntStat();
	void DecrementFloatStat();
	void STATIC_IncrementIntStat();
	void STATIC_IncrementFloatStat();
	void STATIC_SetIntStat();
	void STATIC_SetFloatStat();
	void STATIC_GetStatName();
	void STATIC_GetStatId();
	void OnStatsWriteComplete();
};


// Class Engine.OnlineSubsystem
// 0x015C (0x01B4 - 0x0058)
class UOnlineSubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x15C];                                     // 0x0058(0x015C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSubsystem");
		return ptr;
	}


	void STATIC_SetDebugSpewLevel();
	void DumpVoiceRegistration();
	void DumpSessionState();
	void DumpGameSettings();
	void STATIC_GetNumSupportedLogins();
	void STATIC_GetBuildUniqueId();
	void GetPlayerUniqueNetIdFromIndex();
	void StringToUniqueNetId();
	void UniqueNetIdToString();
	void GetNamedInterface();
	void SetNamedInterface();
	void SetSharedCloudInterface();
	void SetUserCloudInterface();
	void SetAuthInterface();
	void SetSocialInterface();
	void SetTitleFileCacheInterface();
	void SetTitleFileInterface();
	void SetPartyChatInterface();
	void SetNewsInterface();
	void SetStatsInterface();
	void SetVoiceInterface();
	void SetContentInterface();
	void SetGameInterface();
	void SetSystemInterface();
	void SetPlayerInterfaceEx();
	void SetPlayerInterface();
	void SetAccountInterface();
	void Exit();
	void PostInit();
	void Init();
};


// Class Engine.PackageMapLevel
// 0x0008 (0x0100 - 0x00F8)
class UPackageMapLevel : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapLevel");
		return ptr;
	}

};


// Class Engine.PackageMapSeekFree
// 0x0000 (0x0100 - 0x0100)
class UPackageMapSeekFree : public UPackageMapLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapSeekFree");
		return ptr;
	}

};


// Class Engine.PatchScriptCommandlet
// 0x0008 (0x00B4 - 0x00AC)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00AC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PatchScriptCommandlet");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0020 (0x0078 - 0x0058)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}


	void ClearDelegate();
	void AddDelegate();
	void STATIC_GetGoogleIntegration();
	void STATIC_GetInAppMessageInterface();
	void STATIC_GetAppNotificationsInterface();
	void STATIC_GetTwitterIntegration();
	void STATIC_GetAnalyticEventsInterface();
	void STATIC_GetMicroTransactionInterface();
	void STATIC_GetInGameAdManager();
	void STATIC_GetFacebookIntegration();
	void STATIC_GetLocalStorageInterface();
	void STATIC_GetCloudStorageInterface();
	void CallDelegates();
	void PlatformInterfaceDelegate();
};


// Class Engine.MicroTransactionBase
// 0x0030 (0x00A8 - 0x0078)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}


	void GetProductIndex();
	void BeginPurchase();
	void IsAllowedToMakePurchases();
	void QueryForAvailablePurchases();
	void Init();
};


// Class Engine.MicroTransactionProxy
// 0x0000 (0x00A8 - 0x00A8)
class UMicroTransactionProxy : public UMicroTransactionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionProxy");
		return ptr;
	}

};


// Class Engine.Player
// 0x002C (0x0084 - 0x0058)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0058(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}


	void SwitchController();
};


// Class Engine.LocalPlayer
// 0x03C8 (0x044C - 0x0084)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0084(0x03C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}


	void Cleanup();
	void Exit();
	void NotifyServerConnectionClose();
	void ViewportClosed();
	void StaticOnServerConnectionClose();
	void OnServerConnectionClose();
	void STATIC_ServerAuthFailure();
	void ServerAuthTimedOut();
	void OnServerAuthComplete();
	void STATIC_ProcessServerAuthResponse();
	void STATIC_ProcessClientAuthEndSessionRequest();
	void STATIC_ProcessClientAuthRequest();
	void NotifyServerConnectionOpen();
	void GetNickname();
	void GetUniqueNetId();
	void STATIC_FastProject();
	void STATIC_FastDeProject();
	void STATIC_Project();
	void DeProject();
	void TouchPlayerPostProcessChain();
	void STATIC_GetPostProcessChain();
	void STATIC_RemoveAllPostProcessingChains();
	void STATIC_RemovePostProcessingChain();
	void STATIC_IsUberPostProcessChain();
	void STATIC_GetFirstUberPostProcessChainIndex();
	void STATIC_InsertPostProcessingChain();
	void STATIC_GetTranslationContext();
	void STATIC_SetControllerId();
	void ClearPostProcessSettingsOverride();
	void STATIC_OverridePostProcessSettingsCurve();
	void STATIC_OverridePostProcessSettings();
	void STATIC_GetActorVisibility();
	void STATIC_SendSplitJoin();
	void STATIC_SpawnPlayActor();
};


// Class Engine.NetConnection
// 0xAE88 (0xAF0C - 0x0084)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0xAE88];                                    // 0x0084(0xAE88) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.ChildConnection
// 0x0008 (0xAF14 - 0xAF0C)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0xAF0C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.DemoRecConnection
// 0x0000 (0xAF0C - 0xAF0C)
class UDemoRecConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0018 (0x0070 - 0x0058)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.PostProcessChain
// 0x0010 (0x0068 - 0x0058)
class UPostProcessChain : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessChain");
		return ptr;
	}


	void STATIC_FindPostProcessEffect();
};


// Class Engine.PostProcessEffect
// 0x0025 (0x007D - 0x0058)
class UPostProcessEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x25];                                      // 0x0058(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessEffect");
		return ptr;
	}

};


// Class Engine.AmbientOcclusionEffect
// 0x005F (0x00DC - 0x007D)
class UAmbientOcclusionEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x5F];                                      // 0x007D(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientOcclusionEffect");
		return ptr;
	}

};


// Class Engine.BlurEffect
// 0x0007 (0x0084 - 0x007D)
class UBlurEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x007D(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlurEffect");
		return ptr;
	}

};


// Class Engine.DOFEffect
// 0x002F (0x00AC - 0x007D)
class UDOFEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x2F];                                      // 0x007D(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFEffect");
		return ptr;
	}

};


// Class Engine.DOFAndBloomEffect
// 0x0028 (0x00D4 - 0x00AC)
class UDOFAndBloomEffect : public UDOFEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00AC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFAndBloomEffect");
		return ptr;
	}

};


// Class Engine.DOFBloomMotionBlurEffect
// 0x0014 (0x00E8 - 0x00D4)
class UDOFBloomMotionBlurEffect : public UDOFAndBloomEffect
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00D4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFBloomMotionBlurEffect");
		return ptr;
	}

};


// Class Engine.UberPostProcessEffect
// 0x0098 (0x0180 - 0x00E8)
class UUberPostProcessEffect : public UDOFBloomMotionBlurEffect
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00E8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UberPostProcessEffect");
		return ptr;
	}

};


// Class Engine.DwTriovizImplEffect
// 0x0003 (0x0080 - 0x007D)
class UDwTriovizImplEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DwTriovizImplEffect");
		return ptr;
	}

};


// Class Engine.MaterialEffect
// 0x000B (0x0088 - 0x007D)
class UMaterialEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x007D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialEffect");
		return ptr;
	}

};


// Class Engine.MotionBlurEffect
// 0x0017 (0x0094 - 0x007D)
class UMotionBlurEffect : public UPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x007D(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MotionBlurEffect");
		return ptr;
	}

};


// Class Engine.PrimitiveComponentFactory
// 0x0004 (0x005C - 0x0058)
class UPrimitiveComponentFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponentFactory");
		return ptr;
	}

};


// Class Engine.MeshComponentFactory
// 0x0010 (0x006C - 0x005C)
class UMeshComponentFactory : public UPrimitiveComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x005C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponentFactory");
		return ptr;
	}

};


// Class Engine.StaticMeshComponentFactory
// 0x0008 (0x0074 - 0x006C)
class UStaticMeshComponentFactory : public UMeshComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x006C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponentFactory");
		return ptr;
	}

};


// Class Engine.ReachSpec
// 0x0068 (0x00C0 - 0x0058)
class UReachSpec : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReachSpec");
		return ptr;
	}


	void STATIC_IsBlockedFor();
	void STATIC_GetDirection();
	void STATIC_GetEnd();
	void CostFor();
};


// Class Engine.AdvancedReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UAdvancedReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AdvancedReachSpec");
		return ptr;
	}

};


// Class Engine.CeilingReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UCeilingReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CeilingReachSpec");
		return ptr;
	}

};


// Class Engine.ForcedReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UForcedReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForcedReachSpec");
		return ptr;
	}

};


// Class Engine.CoverSlipReachSpec
// 0x0001 (0x00C1 - 0x00C0)
class UCoverSlipReachSpec : public UForcedReachSpec
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverSlipReachSpec");
		return ptr;
	}

};


// Class Engine.FloorToCeilingReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UFloorToCeilingReachSpec : public UForcedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloorToCeilingReachSpec");
		return ptr;
	}

};


// Class Engine.MantleReachSpec
// 0x0004 (0x00C4 - 0x00C0)
class UMantleReachSpec : public UForcedReachSpec
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MantleReachSpec");
		return ptr;
	}

};


// Class Engine.SlotToSlotReachSpec
// 0x0001 (0x00C1 - 0x00C0)
class USlotToSlotReachSpec : public UForcedReachSpec
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlotToSlotReachSpec");
		return ptr;
	}

};


// Class Engine.SwatTurnReachSpec
// 0x0001 (0x00C1 - 0x00C0)
class USwatTurnReachSpec : public UForcedReachSpec
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SwatTurnReachSpec");
		return ptr;
	}

};


// Class Engine.WallTransReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UWallTransReachSpec : public UForcedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WallTransReachSpec");
		return ptr;
	}

};


// Class Engine.LadderReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class ULadderReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LadderReachSpec");
		return ptr;
	}

};


// Class Engine.ProscribedReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UProscribedReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProscribedReachSpec");
		return ptr;
	}

};


// Class Engine.TeleportReachSpec
// 0x0000 (0x00C0 - 0x00C0)
class UTeleportReachSpec : public UReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TeleportReachSpec");
		return ptr;
	}

};


// Class Engine.SavedMove
// 0x00B8 (0x0110 - 0x0058)
class USavedMove : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0058(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SavedMove");
		return ptr;
	}


	void GetDebugString();
	void STATIC_SetFlags();
	void CompressedFlags();
	void STATIC_ResetMoveFor();
	void STATIC_PrepMoveFor();
	void STATIC_SetMoveFor();
	void CanCombineWith();
	void STATIC_SetInitialPosition();
	void STATIC_GetStartLocation();
	void STATIC_IsImportantMove();
	void STATIC_PostUpdate();
	void Clear();
};


// Class Engine.SaveGameSummary
// 0x0018 (0x0070 - 0x0058)
class USaveGameSummary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGameSummary");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0008 (0x0060 - 0x0058)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x0140 (0x01A0 - 0x0060)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0060(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void SetHardwareMouseCursorVisibility();
	void DebugSetUISystemEnabled();
	void STATIC_IsScaleformEnabled();
	void DisableScaleform();
	void EnableScaleform();
	void BecomePrimaryPlayer();
	void STATIC_OnPrimaryPlayerSwitch();
	void STATIC_FixupOwnerReferences();
	void STATIC_GetPlayerOwner();
	void ClearProgressMessages();
	void SetProgressTime();
	void STATIC_NotifyConnectionError();
	void SetProgressMessage();
	void STATIC_RemoveLocalPlayer();
	void AddLocalPlayer();
	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void DrawTransitionMessage();
	void DrawTransition();
	void DisplayProgressMessage();
	void PostRender();
	void DrawTitleSafeArea();
	void Tick();
	void CalculateDeadZoneForAllSides();
	void CalculateSafeZoneValues();
	void STATIC_GetPixelSizeOfScreen();
	void STATIC_HasRightSafeZone();
	void STATIC_HasLeftSafeZone();
	void STATIC_HasBottomSafeZone();
	void STATIC_HasTopSafeZone();
	void ConvertLocalPlayerToGamePlayerIndex();
	void GetSubtitleRegion();
	void LayoutPlayers();
	void UpdateActiveSplitscreenType();
	void STATIC_GetSplitscreenConfiguration();
	void STATIC_SetSplitscreenConfiguration();
	void GameSessionEnded();
	void InsertInteraction();
	void CreateInitialPlayer();
	void Init();
	void FindPlayerByControllerId();
	void RemovePlayer();
	void CreatePlayer();
	void STATIC_SetMouse();
	void STATIC_ForceUpdateMouseCursor();
	void STATIC_NotifySplitscreenLayoutChanged();
	void STATIC_SetCustomInteractionObject();
	void STATIC_GetCustomInteractionClass();
	void STATIC_GetNumCustomInteractions();
	void STATIC_ShouldForceFullscreenViewport();
	void STATIC_GetMouseLocalPosition();
	void STATIC_GetMousePosition();
	void STATIC_IsBorderlessViewport();
	void STATIC_IsFullScreenViewport();
	void STATIC_GetVirtualViewportRect();
	void STATIC_GetVirtualViewportSize();
	void STATIC_GetVirtualViewportPos();
	void STATIC_GetViewportSize();
	void ConsoleCommand();
	void HandleInputChar();
	void HandleInputAxis();
	void HandleInputKey();
};


// Class Engine.Selection
// 0x002C (0x0084 - 0x0058)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0058(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.ServerCommandlet
// 0x0000 (0x00AC - 0x00AC)
class UServerCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerCommandlet");
		return ptr;
	}

};


// Class Engine.Settings
// 0x0040 (0x0098 - 0x0058)
class USettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Settings");
		return ptr;
	}


	void UpdateFromURL();
	void BuildURL();
	void AppendContextsToURL();
	void AppendPropertiesToURL();
	void AppendDataBindingsToURL();
	void STATIC_GetQoSAdvertisedStringSettings();
	void STATIC_GetQoSAdvertisedProperties();
	void STATIC_GetRangedPropertyValue();
	void STATIC_SetRangedPropertyValue();
	void STATIC_GetPropertyRange();
	void STATIC_GetPropertyMappingType();
	void STATIC_HasStringSetting();
	void STATIC_HasProperty();
	void UpdateProperties();
	void UpdateStringSettings();
	void STATIC_GetPropertyType();
	void STATIC_GetPropertyValueId();
	void STATIC_SetPropertyValueId();
	void STATIC_GetStringProperty();
	void STATIC_SetStringProperty();
	void STATIC_GetIntProperty();
	void STATIC_SetIntProperty();
	void STATIC_GetFloatProperty();
	void STATIC_SetFloatProperty();
	void STATIC_SetPropertyFromStringByName();
	void STATIC_GetPropertyAsStringByName();
	void STATIC_GetPropertyAsString();
	void STATIC_GetPropertyColumnHeader();
	void STATIC_GetPropertyName();
	void STATIC_GetPropertyId();
	void STATIC_SetStringSettingValueFromStringByName();
	void STATIC_GetStringSettingValueNameByName();
	void STATIC_GetStringSettingValueName();
	void STATIC_IsWildcardStringSetting();
	void STATIC_GetStringSettingColumnHeader();
	void STATIC_GetStringSettingName();
	void STATIC_GetStringSettingId();
	void STATIC_GetStringSettingValueByName();
	void STATIC_SetStringSettingValueByName();
	void STATIC_GetStringSettingValueNames();
	void STATIC_IncrementStringSettingValue();
	void STATIC_GetStringSettingValue();
	void STATIC_SetStringSettingValue();
	void STATIC_GetSettingsDataDateTime();
	void STATIC_GetSettingsDataBlob();
	void STATIC_GetSettingsDataInt();
	void STATIC_GetSettingsDataFloat();
	void EmptySettingsData();
	void STATIC_SetSettingsData();
	void STATIC_SetSettingsDataBlob();
	void STATIC_SetSettingsDataDateTime();
	void STATIC_SetSettingsDataInt();
	void STATIC_SetSettingsDataFloat();
};


// Class Engine.OnlineGameSearch
// 0x00AC (0x0144 - 0x0098)
class UOnlineGameSearch : public USettings
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0098(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameSearch");
		return ptr;
	}


	void SortSearchResults();
	void STATIC_SetSkillOverride();
};


// Class Engine.OnlineGameSettings
// 0x0044 (0x00DC - 0x0098)
class UOnlineGameSettings : public USettings
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0098(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameSettings");
		return ptr;
	}

};


// Class Engine.ShaderCache
// 0x005C (0x00B4 - 0x0058)
class UShaderCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0058(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShaderCache");
		return ptr;
	}

};


// Class Engine.ShadowMap1D
// 0x005C (0x00B4 - 0x0058)
class UShadowMap1D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0058(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMap1D");
		return ptr;
	}

};


// Class Engine.ShadowMap2D
// 0x0038 (0x0090 - 0x0058)
class UShadowMap2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0058(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMap2D");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x00AC - 0x00AC)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.SpeechRecognition
// 0x00B0 (0x0108 - 0x0058)
class USpeechRecognition : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0058(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeechRecognition");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x01A8 (0x0200 - 0x0058)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0058(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.Surface
// 0x0000 (0x0058 - 0x0058)
class USurface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Surface");
		return ptr;
	}


	void STATIC_GetSurfaceHeight();
	void STATIC_GetSurfaceWidth();
};


// Class Engine.MaterialInterface
// 0x0204 (0x025C - 0x0058)
class UMaterialInterface : public USurface
{
public:
	unsigned char                                      UnknownData00[0x204];                                     // 0x0058(0x0204) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	void STATIC_SetForceMipLevelsToBeResident();
	void STATIC_GetMobileVectorParameterValue();
	void STATIC_GetMobileTextureParameterValue();
	void STATIC_GetMobileScalarParameterValue();
	void STATIC_GetTexAddressParameterValue();
	void STATIC_GetGroupName();
	void STATIC_GetLinearColorCurveParameterValue();
	void STATIC_GetLinearColorParameterValue();
	void STATIC_GetVectorCurveParameterValue();
	void STATIC_GetVectorParameterValue();
	void STATIC_GetTextureParameterValue();
	void STATIC_GetScalarCurveParameterValue();
	void STATIC_GetScalarParameterValue();
	void STATIC_GetFontParameterValue();
	void STATIC_GetParameterDesc();
	void STATIC_GetPhysicalMaterial();
	void STATIC_GetMaterial();
};


// Class Engine.RB_BodySetup
// 0x0060 (0x0110 - 0x00B0)
class URB_BodySetup : public UKMeshProps
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BodySetup");
		return ptr;
	}

};


// Class Engine.InstancedFoliageSettings
// 0x0078 (0x00D0 - 0x0058)
class UInstancedFoliageSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0058(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedFoliageSettings");
		return ptr;
	}

};


// Class Engine.FracturedStaticMesh
// 0x00F0 (0x02F0 - 0x0200)
class UFracturedStaticMesh : public UStaticMesh
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0200(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMesh");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0158 (0x01B0 - 0x0058)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0058(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	void STATIC_GetMaxLifespan();
	void STATIC_SetLODDistance();
	void STATIC_SetCurrentLODMethod();
	void STATIC_GetLODDistance();
	void STATIC_GetLODLevelCount();
	void STATIC_GetCurrentLODMethod();
};


// Class Engine.Texture
// 0x00CC (0x0124 - 0x0058)
class UTexture : public USurface
{
public:
	unsigned char                                      UnknownData00[0xCC];                                      // 0x0058(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x0108 (0x022C - 0x0124)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0124(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	void CreateListOfTexturesToUnload();
	void STATIC_GetBytesUsedForTextureResources();
	void UnloadTextureResources();
	void STATIC_LoadTextureResources();
	void Create();
	void STATIC_SetForceMipLevelsToBeResident();
};


// Class Engine.LightMapTexture2D
// 0x0004 (0x0230 - 0x022C)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0004 (0x0230 - 0x022C)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TranslationContext
// 0x0010 (0x0068 - 0x0058)
class UTranslationContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TranslationContext");
		return ptr;
	}


	void STATIC_RegisterTranslatorTag();
};


// Class Engine.TranslatorTag
// 0x0008 (0x0060 - 0x0058)
class UTranslatorTag : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TranslatorTag");
		return ptr;
	}


	void STATIC_Translate();
};


// Class Engine.StringsTag
// 0x0000 (0x0060 - 0x0060)
class UStringsTag : public UTranslatorTag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringsTag");
		return ptr;
	}


	void STATIC_Translate();
};


// Class Engine.UIRoot
// 0x0010 (0x0068 - 0x0058)
class UUIRoot : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIRoot");
		return ptr;
	}


	void STATIC_SafeCaps();
	void STATIC_GetOnlinePlayerInterfaceEx();
	void STATIC_GetOnlinePlayerInterface();
	void STATIC_GetOnlineGameInterface();
	void StaticResolveDataStore();
	void STATIC_GetSceneClient();
	void STATIC_GetCurrentUIController();
	void STATIC_GetInputPlatformType();
};


// Class Engine.Interaction
// 0x0040 (0x00A8 - 0x0068)
class UInteraction : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interaction");
		return ptr;
	}


	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void NotifyGameSessionEnded();
	void STATIC_Initialized();
	void OnInitialize();
	void Init();
	void PostRender();
	void Tick();
	void OnReceivedNativeInputChar();
	void OnReceivedNativeInputAxis();
	void OnReceivedNativeInputKey();
};


// Class Engine.UIInteraction
// 0x0124 (0x01CC - 0x00A8)
class UUIInteraction : public UInteraction
{
public:
	unsigned char                                      UnknownData00[0x124];                                     // 0x00A8(0x0124) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIInteraction");
		return ptr;
	}


	void NotifyGameSessionEnded();
	void GetNATType();
	void STATIC_GetConnectedGamepadCount();
	void STATIC_IsGamepadConnected();
	void STATIC_GetNumGuestsLoggedIn();
	void STATIC_GetLoggedInPlayerCount();
	void IsLoggedIn();
	void HasLinkConnection();
	void STATIC_GetLowestLoginStatusOfControllers();
	void GetLoginStatus();
	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void STATIC_GetLocalPlayer();
	void STATIC_GetDataStoreClient();
	void STATIC_GetPlayerControllerId();
	void STATIC_GetPlayerIndex();
	void STATIC_GetPlayerCount();
};


// Class Engine.UIManager
// 0x0000 (0x0058 - 0x0058)
class UUIManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIManager");
		return ptr;
	}


	void STATIC_FindLocalPlayerIndex();
	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void PauseGame();
	void CanUnpauseInternalUI();
	void STATIC_GetUIManager();
};


// Class Engine.WaveFormBase
// 0x0008 (0x0060 - 0x0058)
class UWaveFormBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaveFormBase");
		return ptr;
	}

};


// Class Engine.World
// 0x0354 (0x03AC - 0x0058)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x354];                                     // 0x0058(0x0354) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.EnvironmentVolume
// 0x0014 (0x02C4 - 0x02B0)
class AEnvironmentVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x02B0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EnvironmentVolume");
		return ptr;
	}


	void STATIC_SetSplitNavMesh();
};


// Class Engine.TestSplittingVolume
// 0x0008 (0x02B8 - 0x02B0)
class ATestSplittingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TestSplittingVolume");
		return ptr;
	}

};


// Class Engine.AIController
// 0x0024 (0x0484 - 0x0460)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0460(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AIController");
		return ptr;
	}


	void CanFireWeapon();
	void STATIC_NotifyWeaponFinishedFiring();
	void STATIC_NotifyWeaponFired();
	void STATIC_OnAIMoveToActor();
	void GetPlayerViewPoint();
	void SetTeam();
	void DisplayDebug();
	void STATIC_Reset();
	void PreBeginPlay();
};


// Class Engine.CrowdAgentBase
// 0x0008 (0x027C - 0x0274)
class ACrowdAgentBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CrowdAgentBase");
		return ptr;
	}


	void NotifyPathChanged();
};


// Class Engine.CrowdPopulationManagerBase
// 0x0000 (0x0274 - 0x0274)
class ACrowdPopulationManagerBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CrowdPopulationManagerBase");
		return ptr;
	}

};


// Class Engine.PathTargetPoint
// 0x0000 (0x027C - 0x027C)
class APathTargetPoint : public AKeypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathTargetPoint");
		return ptr;
	}


	void STATIC_ShouldBeHiddenBySHOW_NavigationNodes();
};


// Class Engine.NavMeshObstacle
// 0x000C (0x0280 - 0x0274)
class ANavMeshObstacle : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshObstacle");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void SetEnabled();
	void STATIC_OnToggle();
	void PostBeginPlay();
	void UnRegisterObstacle();
	void STATIC_RegisterObstacle();
	void GetObstacleBoudingShape();
};


// Class Engine.PylonSeed
// 0x0008 (0x027C - 0x0274)
class APylonSeed : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PylonSeed");
		return ptr;
	}

};


// Class Engine.CoverGroupRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class UCoverGroupRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverGroupRenderingComponent");
		return ptr;
	}

};


// Class Engine.MeshComponent
// 0x0010 (0x0294 - 0x0284)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}


	void CreateAndSetMaterialInstanceTimeVarying();
	void CreateAndSetMaterialInstanceConstant();
	void STATIC_PrestreamTextures();
	void STATIC_GetNumElements();
	void STATIC_SetMaterial();
	void STATIC_GetMaterial();
};


// Class Engine.StaticMeshComponent
// 0x0080 (0x0314 - 0x0294)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0294(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	void CanBecomeDynamic();
	void STATIC_SetForceStaticDecals();
	void DisableRBCollisionWithSMC();
	void STATIC_SetStaticMesh();
};


// Class Engine.CoverMeshComponent
// 0x0038 (0x034C - 0x0314)
class UCoverMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0314(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverMeshComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.PathRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class UPathRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathRenderingComponent");
		return ptr;
	}

};


// Class Engine.RouteRenderingComponent
// 0x0000 (0x0284 - 0x0284)
class URouteRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RouteRenderingComponent");
		return ptr;
	}

};


// Class Engine.AICommandBase
// 0x0000 (0x0058 - 0x0058)
class UAICommandBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AICommandBase");
		return ptr;
	}


	void GetUtility();
};


// Class Engine.AutoNavMeshPathObstacleUnregister
// 0x0010 (0x0068 - 0x0058)
class UAutoNavMeshPathObstacleUnregister : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoNavMeshPathObstacleUnregister");
		return ptr;
	}

};


// Class Engine.Interface_NavMeshPathObject
// 0x0000 (0x0058 - 0x0058)
class UInterface_NavMeshPathObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathObject");
		return ptr;
	}

};


// Class Engine.Interface_NavMeshPathSwitch
// 0x0000 (0x0058 - 0x0058)
class UInterface_NavMeshPathSwitch : public UInterface_NavMeshPathObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathSwitch");
		return ptr;
	}


	void AIActivateSwitch();
};


// Class Engine.Interface_NavMeshPathObstacle
// 0x0000 (0x0058 - 0x0058)
class UInterface_NavMeshPathObstacle : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathObstacle");
		return ptr;
	}

};


// Class Engine.Interface_PylonGeometryProvider
// 0x0000 (0x0058 - 0x0058)
class UInterface_PylonGeometryProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PylonGeometryProvider");
		return ptr;
	}

};


// Class Engine.Interface_RVO
// 0x0000 (0x0058 - 0x0058)
class UInterface_RVO : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_RVO");
		return ptr;
	}

};


// Class Engine.NavigationHandle
// 0x0140 (0x0198 - 0x0058)
class UNavigationHandle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0058(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationHandle");
		return ptr;
	}


	void DrawBreadCrumbs();
	void StaticGetValidatedAnchorPosition();
	void STATIC_GetValidatedAnchorPosition();
	void STATIC_GetAllCoverSlotsInRadius();
	void STATIC_PopulatePathfindingParamCache();
	void STATIC_MoveToDesiredHeightAboveMesh();
	void CopyMovePointsFromPathCache();
	void CalculatePathDistance();
	void STATIC_GetFirstMoveLocation();
	void STATIC_IsAnchorInescapable();
	void STATIC_LimitPathCacheDistance();
	void STATIC_GetValidPositionsForBox();
	void STATIC_GetAllPolyCentersWithinBounds();
	void STATIC_GetCurrentEdgeType();
	void ClearCurrentEdge();
	void STATIC_GetCurrentEdgeDebugText();
	void STATIC_PrintPathCacheDebugText();
	void DrawPathCache();
	void ActorReachable();
	void STATIC_PointReachable();
	void STATIC_PointCheck();
	void STATIC_LineCheck();
	void STATIC_ObstaclePointCheck();
	void STATIC_ObstacleLineCheck();
	void SuggestMovePreparation();
	void STATIC_FindPath();
	void ComputeValidFinalDestination();
	void STATIC_SetFinalDestination();
	void STATIC_GetNextMoveLocation();
	void STATIC_GetPylonFromPos();
	void STATIC_FindPylon();
	void STATIC_GetBestUnfinishedPathPoint();
	void STATIC_PathCache_RemoveIndex();
	void STATIC_PathCache_GetGoalPoint();
	void STATIC_PathCache_Empty();
	void STATIC_GetPathCacheLength();
	void CreatePathGoalEvaluator();
	void CreatePathConstraint();
	void DoesPylonAHaveAPathToPylonB();
	void BuildFromPylonAToPylonB();
	void AddGoalEvaluator();
	void AddPathConstraint();
	void ClearConstraints();
	void STATIC_GetNextBreadCrumb();
	void UpdateBreadCrumbs();
	void CopyPathStoreToPathCache();
};


// Class Engine.NavMeshGoal_Filter
// 0x000C (0x0064 - 0x0058)
class UNavMeshGoal_Filter : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Filter");
		return ptr;
	}


	void GetDumpString();
};


// Class Engine.NavMeshGoalFilter_MinPathDistance
// 0x0004 (0x0068 - 0x0064)
class UNavMeshGoalFilter_MinPathDistance : public UNavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_MinPathDistance");
		return ptr;
	}


	void STATIC_MustBeLongerPathThan();
};


// Class Engine.NavMeshGoalFilter_NotNearOtherAI
// 0x0004 (0x0068 - 0x0064)
class UNavMeshGoalFilter_NotNearOtherAI : public UNavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_NotNearOtherAI");
		return ptr;
	}


	void STATIC_NotNearOtherAI();
};


// Class Engine.NavMeshGoalFilter_OutOfViewFrom
// 0x0014 (0x0078 - 0x0064)
class UNavMeshGoalFilter_OutOfViewFrom : public UNavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0064(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_OutOfViewFrom");
		return ptr;
	}


	void STATIC_MustBeHiddenFromThisPoint();
};


// Class Engine.NavMeshGoalFilter_OutSideOfDotProductWedge
// 0x001C (0x0080 - 0x0064)
class UNavMeshGoalFilter_OutSideOfDotProductWedge : public UNavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_OutSideOfDotProductWedge");
		return ptr;
	}


	void STATIC_OutsideOfDotProductWedge();
};


// Class Engine.NavMeshGoalFilter_PolyEncompassesAI
// 0x000C (0x0070 - 0x0064)
class UNavMeshGoalFilter_PolyEncompassesAI : public UNavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_PolyEncompassesAI");
		return ptr;
	}


	void STATIC_MakeSureAIFits();
};


// Class Engine.NavMeshPathConstraint
// 0x0018 (0x0070 - 0x0058)
class UNavMeshPathConstraint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPathConstraint");
		return ptr;
	}


	void GetDumpString();
	void Recycle();
};


// Class Engine.NavMeshPath_AlongLine
// 0x000C (0x007C - 0x0070)
class UNavMeshPath_AlongLine : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0070(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_AlongLine");
		return ptr;
	}


	void Recycle();
	void AlongLine();
};


// Class Engine.NavMeshPath_EnforceTwoWayEdges
// 0x0000 (0x0070 - 0x0070)
class UNavMeshPath_EnforceTwoWayEdges : public UNavMeshPathConstraint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_EnforceTwoWayEdges");
		return ptr;
	}


	void EnforceTwoWayEdges();
};


// Class Engine.NavMeshPath_MinDistBetweenSpecsOfType
// 0x0018 (0x0088 - 0x0070)
class UNavMeshPath_MinDistBetweenSpecsOfType : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_MinDistBetweenSpecsOfType");
		return ptr;
	}


	void Recycle();
	void EnforceMinDist();
};


// Class Engine.NavMeshPath_SameCoverLink
// 0x0008 (0x0078 - 0x0070)
class UNavMeshPath_SameCoverLink : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_SameCoverLink");
		return ptr;
	}


	void Recycle();
	void STATIC_SameCoverLink();
};


// Class Engine.NavMeshPath_Toward
// 0x001C (0x008C - 0x0070)
class UNavMeshPath_Toward : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0070(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_Toward");
		return ptr;
	}


	void Recycle();
	void TowardPoint();
	void TowardGoal();
};


// Class Engine.NavMeshPath_WithinDistanceEnvelope
// 0x001C (0x008C - 0x0070)
class UNavMeshPath_WithinDistanceEnvelope : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0070(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_WithinDistanceEnvelope");
		return ptr;
	}


	void Recycle();
	void StayWithinEnvelopeToLoc();
};


// Class Engine.NavMeshPath_WithinTraversalDist
// 0x000C (0x007C - 0x0070)
class UNavMeshPath_WithinTraversalDist : public UNavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0070(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_WithinTraversalDist");
		return ptr;
	}


	void Recycle();
	void DontExceedMaxDist();
};


// Class Engine.NavMeshPathGoalEvaluator
// 0x001C (0x0074 - 0x0058)
class UNavMeshPathGoalEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPathGoalEvaluator");
		return ptr;
	}


	void GetDumpString();
	void Recycle();
};


// Class Engine.NavMeshGoal_At
// 0x0028 (0x009C - 0x0074)
class UNavMeshGoal_At : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0074(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_At");
		return ptr;
	}


	void Recycle();
	void AtLocation();
	void AtActor();
	void STATIC_RecycleNative();
};


// Class Engine.NavMeshGoal_ClosestActorInList
// 0x0060 (0x00D4 - 0x0074)
class UNavMeshGoal_ClosestActorInList : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0074(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_ClosestActorInList");
		return ptr;
	}


	void RecycleInternal();
	void Recycle();
	void ClosestActorInList();
};


// Class Engine.NavMeshGoal_GenericFilterContainer
// 0x0030 (0x00A4 - 0x0074)
class UNavMeshGoal_GenericFilterContainer : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0074(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_GenericFilterContainer");
		return ptr;
	}


	void Recycle();
	void STATIC_GetGoalPoint();
	void STATIC_GetFilterOfType();
	void CreateAndAddFilterToNavHandleFromSeedList();
	void CreateAndAddFilterToNavHandle();
};


// Class Engine.NavMeshGoal_Null
// 0x0008 (0x007C - 0x0074)
class UNavMeshGoal_Null : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0074(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Null");
		return ptr;
	}


	void Recycle();
	void STATIC_RecycleNative();
	void STATIC_GoUntilBust();
};


// Class Engine.NavMeshGoal_PolyEncompassesAI
// 0x000C (0x0080 - 0x0074)
class UNavMeshGoal_PolyEncompassesAI : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_PolyEncompassesAI");
		return ptr;
	}


	void Recycle();
	void STATIC_MakeSureAIFits();
};


// Class Engine.NavMeshGoal_Random
// 0x0010 (0x0084 - 0x0074)
class UNavMeshGoal_Random : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0074(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Random");
		return ptr;
	}


	void Recycle();
	void STATIC_RecycleNative();
	void STATIC_FindRandom();
};


// Class Engine.NavMeshGoal_WithinDistanceEnvelope
// 0x0018 (0x008C - 0x0074)
class UNavMeshGoal_WithinDistanceEnvelope : public UNavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0074(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_WithinDistanceEnvelope");
		return ptr;
	}


	void Recycle();
	void STATIC_GoalWithinEnvelopeToLoc();
};


// Class Engine.PathConstraint
// 0x000C (0x0064 - 0x0058)
class UPathConstraint : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathConstraint");
		return ptr;
	}


	void GetDumpString();
	void Recycle();
};


// Class Engine.Path_AlongLine
// 0x000C (0x0070 - 0x0064)
class UPath_AlongLine : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_AlongLine");
		return ptr;
	}


	void Recycle();
	void AlongLine();
};


// Class Engine.Path_AvoidInEscapableNodes
// 0x0010 (0x0074 - 0x0064)
class UPath_AvoidInEscapableNodes : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_AvoidInEscapableNodes");
		return ptr;
	}


	void Recycle();
	void DontGetStuck();
	void CachePawnReacFlags();
};


// Class Engine.Path_MinDistBetweenSpecsOfType
// 0x0018 (0x007C - 0x0064)
class UPath_MinDistBetweenSpecsOfType : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0064(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_MinDistBetweenSpecsOfType");
		return ptr;
	}


	void Recycle();
	void EnforceMinDist();
};


// Class Engine.Path_TowardGoal
// 0x0008 (0x006C - 0x0064)
class UPath_TowardGoal : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_TowardGoal");
		return ptr;
	}


	void Recycle();
	void TowardGoal();
};


// Class Engine.Path_TowardPoint
// 0x000C (0x0070 - 0x0064)
class UPath_TowardPoint : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_TowardPoint");
		return ptr;
	}


	void Recycle();
	void TowardPoint();
};


// Class Engine.Path_WithinDistanceEnvelope
// 0x001C (0x0080 - 0x0064)
class UPath_WithinDistanceEnvelope : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_WithinDistanceEnvelope");
		return ptr;
	}


	void Recycle();
	void StayWithinEnvelopeToLoc();
};


// Class Engine.Path_WithinTraversalDist
// 0x000C (0x0070 - 0x0064)
class UPath_WithinTraversalDist : public UPathConstraint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_WithinTraversalDist");
		return ptr;
	}


	void Recycle();
	void DontExceedMaxDist();
};


// Class Engine.PathGoalEvaluator
// 0x0018 (0x0070 - 0x0058)
class UPathGoalEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathGoalEvaluator");
		return ptr;
	}


	void GetDumpString();
	void Recycle();
};


// Class Engine.Goal_AtActor
// 0x0010 (0x0080 - 0x0070)
class UGoal_AtActor : public UPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Goal_AtActor");
		return ptr;
	}


	void Recycle();
	void AtActor();
};


// Class Engine.Goal_Null
// 0x0000 (0x0070 - 0x0070)
class UGoal_Null : public UPathGoalEvaluator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Goal_Null");
		return ptr;
	}


	void Recycle();
	void STATIC_GoUntilBust();
};


// Class Engine.SkeletalMeshActor
// 0x009C (0x0310 - 0x0274)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0274(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void CreateForceField();
	void STATIC_SkelMeshActorOnParticleSystemFinished();
	void PlayParticleEffect();
	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void TakeDamage();
	void DoKismetAttachment();
	void OnSetSkelControlTarget();
	void OnUpdatePhysBonesFromAnim();
	void OnSetMesh();
	void STATIC_IsActorPlayingFaceFXAnim();
	void GetActorFaceFXAsset();
	void STATIC_OnPlayFaceFXAnim();
	void GetFaceFXAudioComponent();
	void StopActorFaceFXAnim();
	void PlayActorFaceFXAnim();
	void STATIC_MAT_FinishAnimControl();
	void FinishAnimControl();
	void SetAnimPosition();
	void STATIC_MAT_SetAnimPosition();
	void STATIC_MAT_BeginAnimControl();
	void BeginAnimControl();
	void STATIC_OnSetMaterial();
	void STATIC_OnToggle();
	void ReplicatedEvent();
	void UpdateAnimSetList();
	void Destroyed();
	void PostBeginPlay();
};


// Class Engine.SkeletalMeshActorBasedOnExtremeContent
// 0x0020 (0x0330 - 0x0310)
class ASkeletalMeshActorBasedOnExtremeContent : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorBasedOnExtremeContent");
		return ptr;
	}


	void STATIC_SetMaterialBasedOnExtremeContent();
	void PostBeginPlay();
};


// Class Engine.SkeletalMeshActorSpawnable
// 0x0000 (0x0310 - 0x0310)
class ASkeletalMeshActorSpawnable : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorSpawnable");
		return ptr;
	}

};


// Class Engine.SkeletalMeshCinematicActor
// 0x0000 (0x0310 - 0x0310)
class ASkeletalMeshCinematicActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshCinematicActor");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMAT
// 0x0010 (0x0320 - 0x0310)
class ASkeletalMeshActorMAT : public ASkeletalMeshCinematicActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMAT");
		return ptr;
	}


	void SetSkelControlScale();
	void SetMorphWeight();
	void FinishAnimControl();
	void STATIC_MAT_SetAnimPosition();
	void SetAnimPosition();
	void ClearAnimNodes();
	void CacheAnimNodes();
	void PostInitAnimTree();
	void Destroyed();
	void STATIC_MAT_SetAnimNodeBlendWeight();
	void STATIC_MAT_SetSkelControlStrength();
	void STATIC_MAT_SetSkelControlScale();
	void STATIC_MAT_SetMorphWeight();
	void STATIC_MAT_SetAnimWeights();
};


// Class Engine.HeadTrackingComponent
// 0x00BC (0x0140 - 0x0084)
class UHeadTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xBC];                                      // 0x0084(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadTrackingComponent");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm
// 0x0017 (0x006F - 0x0058)
class UAnimationCompressionAlgorithm : public UObject
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x0058(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_Automatic
// 0x0009 (0x0078 - 0x006F)
class UAnimationCompressionAlgorithm_Automatic : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x006F(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_Automatic");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_BitwiseCompressOnly
// 0x0001 (0x0070 - 0x006F)
class UAnimationCompressionAlgorithm_BitwiseCompressOnly : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x006F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_LeastDestructive
// 0x0001 (0x0070 - 0x006F)
class UAnimationCompressionAlgorithm_LeastDestructive : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x006F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveEverySecondKey
// 0x0009 (0x0078 - 0x006F)
class UAnimationCompressionAlgorithm_RemoveEverySecondKey : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x006F(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveLinearKeys
// 0x0021 (0x0090 - 0x006F)
class UAnimationCompressionAlgorithm_RemoveLinearKeys : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x21];                                      // 0x006F(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_PerTrackCompression
// 0x0074 (0x0104 - 0x0090)
class UAnimationCompressionAlgorithm_PerTrackCompression : public UAnimationCompressionAlgorithm_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0090(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys
// 0x000D (0x007C - 0x006F)
class UAnimationCompressionAlgorithm_RemoveTrivialKeys : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0xD];                                       // 0x006F(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RevertToRaw
// 0x0001 (0x0070 - 0x006F)
class UAnimationCompressionAlgorithm_RevertToRaw : public UAnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x006F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RevertToRaw");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000 (0x0058 - 0x0058)
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimMetaData_SkelControl
// 0x001C (0x0074 - 0x0058)
class UAnimMetaData_SkelControl : public UAnimMetaData
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData_SkelControl");
		return ptr;
	}

};


// Class Engine.AnimMetaData_SkelControlKeyFrame
// 0x0010 (0x0084 - 0x0074)
class UAnimMetaData_SkelControlKeyFrame : public UAnimMetaData_SkelControl
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0074(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData_SkelControlKeyFrame");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x0008 (0x0060 - 0x0058)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	void STATIC_FindNextNotifyOfClass();
};


// Class Engine.AnimNotify_AkEvent
// 0x0014 (0x0074 - 0x0060)
class UAnimNotify_AkEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0060(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AkEvent");
		return ptr;
	}

};


// Class Engine.AnimNotify_CameraEffect
// 0x0008 (0x0068 - 0x0060)
class UAnimNotify_CameraEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_CameraEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_ClothingMaxDistanceScale
// 0x0010 (0x0070 - 0x0060)
class UAnimNotify_ClothingMaxDistanceScale : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ClothingMaxDistanceScale");
		return ptr;
	}

};


// Class Engine.AnimNotify_Footstep
// 0x0004 (0x0064 - 0x0060)
class UAnimNotify_Footstep : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Footstep");
		return ptr;
	}

};


// Class Engine.AnimNotify_ForceField
// 0x001C (0x007C - 0x0060)
class UAnimNotify_ForceField : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0060(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ForceField");
		return ptr;
	}

};


// Class Engine.AnimNotify_Kismet
// 0x0008 (0x0068 - 0x0060)
class UAnimNotify_Kismet : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Kismet");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x002C (0x008C - 0x0060)
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0060(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_Rumble
// 0x0018 (0x0078 - 0x0060)
class UAnimNotify_Rumble : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Rumble");
		return ptr;
	}

};


// Class Engine.AnimNotify_Script
// 0x0018 (0x0078 - 0x0060)
class UAnimNotify_Script : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Script");
		return ptr;
	}

};


// Class Engine.AnimNotify_Scripted
// 0x0000 (0x0060 - 0x0060)
class UAnimNotify_Scripted : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Scripted");
		return ptr;
	}


	void NotifyEnd();
	void Notify();
};


// Class Engine.AnimNotify_PawnMaterialParam
// 0x0010 (0x0070 - 0x0060)
class UAnimNotify_PawnMaterialParam : public UAnimNotify_Scripted
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PawnMaterialParam");
		return ptr;
	}


	void Notify();
};


// Class Engine.AnimNotify_ViewShake
// 0x0054 (0x00B4 - 0x0060)
class UAnimNotify_ViewShake : public UAnimNotify_Scripted
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0060(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ViewShake");
		return ptr;
	}


	void Notify();
};


// Class Engine.AnimNotify_Sound
// 0x0020 (0x0080 - 0x0060)
class UAnimNotify_Sound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Sound");
		return ptr;
	}

};


// Class Engine.AnimNotify_Trails
// 0x0078 (0x00D8 - 0x0060)
class UAnimNotify_Trails : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Trails");
		return ptr;
	}


	void STATIC_GetNumSteps();
};


// Class Engine.AnimObject
// 0x002C (0x0084 - 0x0058)
class UAnimObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0058(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimObject");
		return ptr;
	}

};


// Class Engine.AnimNode
// 0x0114 (0x0198 - 0x0084)
class UAnimNode : public UAnimObject
{
public:
	unsigned char                                      UnknownData00[0x114];                                     // 0x0084(0x0114) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNode");
		return ptr;
	}


	void STATIC_ReplayAnim();
	void StopAnim();
	void STATIC_PlayAnim();
	void STATIC_FindAnimNode();
	void OnCeaseRelevant();
	void OnBecomeRelevant();
	void OnInit();
};


// Class Engine.AnimNodeBlendBase
// 0x0015 (0x01AD - 0x0198)
class UAnimNodeBlendBase : public UAnimNode
{
public:
	unsigned char                                      UnknownData00[0x15];                                      // 0x0198(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendBase");
		return ptr;
	}


	void STATIC_ReplayAnim();
	void StopAnim();
	void STATIC_PlayAnim();
};


// Class Engine.AnimNode_MultiBlendPerBone
// 0x003F (0x01EC - 0x01AD)
class UAnimNode_MultiBlendPerBone : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3F];                                      // 0x01AD(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNode_MultiBlendPerBone");
		return ptr;
	}


	void STATIC_SetMaskWeight();
};


// Class Engine.AnimNodeAimOffset
// 0x005B (0x0208 - 0x01AD)
class UAnimNodeAimOffset : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x5B];                                      // 0x01AD(0x005B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeAimOffset");
		return ptr;
	}


	void STATIC_SetActiveProfileByIndex();
	void STATIC_SetActiveProfileByName();
};


// Class Engine.AnimNodeBlend
// 0x0013 (0x01C0 - 0x01AD)
class UAnimNodeBlend : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x13];                                      // 0x01AD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlend");
		return ptr;
	}


	void STATIC_SetBlendTarget();
};


// Class Engine.AnimNodeAdditiveBlending
// 0x0004 (0x01C4 - 0x01C0)
class UAnimNodeAdditiveBlending : public UAnimNodeBlend
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeAdditiveBlending");
		return ptr;
	}


	void STATIC_SetBlendTarget();
};


// Class Engine.AnimNodeBlendPerBone
// 0x0034 (0x01F4 - 0x01C0)
class UAnimNodeBlendPerBone : public UAnimNodeBlend
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x01C0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendPerBone");
		return ptr;
	}


	void STATIC_SetBlendTarget();
};


// Class Engine.AnimNodeCrossfader
// 0x0010 (0x01D0 - 0x01C0)
class UAnimNodeCrossfader : public UAnimNodeBlend
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeCrossfader");
		return ptr;
	}


	void STATIC_GetActiveChild();
	void STATIC_GetAnimName();
	void BlendToLoopingAnim();
	void STATIC_PlayOneShotAnim();
};


// Class Engine.AnimNodePlayCustomAnim
// 0x0008 (0x01C8 - 0x01C0)
class UAnimNodePlayCustomAnim : public UAnimNodeBlend
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodePlayCustomAnim");
		return ptr;
	}


	void STATIC_SetRootBoneAxisOption();
	void STATIC_GetCustomAnimNodeSeq();
	void STATIC_SetActorAnimEndNotification();
	void STATIC_SetCustomAnim();
	void StopCustomAnim();
	void STATIC_PlayCustomAnimByDuration();
	void STATIC_PlayCustomAnim();
};


// Class Engine.AnimNodeBlendDirectional
// 0x001F (0x01CC - 0x01AD)
class UAnimNodeBlendDirectional : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x01AD(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendDirectional");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendList
// 0x0027 (0x01D4 - 0x01AD)
class UAnimNodeBlendList : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x01AD(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendList");
		return ptr;
	}


	void STATIC_SetActiveChild();
};


// Class Engine.AnimNodeBlendByBase
// 0x0020 (0x01F4 - 0x01D4)
class UAnimNodeBlendByBase : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01D4(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByBase");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByPhysics
// 0x0000 (0x01D4 - 0x01D4)
class UAnimNodeBlendByPhysics : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByPhysics");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByPosture
// 0x0000 (0x01D4 - 0x01D4)
class UAnimNodeBlendByPosture : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByPosture");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByProperty
// 0x0048 (0x021C - 0x01D4)
class UAnimNodeBlendByProperty : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01D4(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByProperty");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendBySpeed
// 0x0034 (0x0208 - 0x01D4)
class UAnimNodeBlendBySpeed : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x01D4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendBySpeed");
		return ptr;
	}

};


// Class Engine.AnimNodeRandom
// 0x0020 (0x01F4 - 0x01D4)
class UAnimNodeRandom : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01D4(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeRandom");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendMultiBone
// 0x0023 (0x01D0 - 0x01AD)
class UAnimNodeBlendMultiBone : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x23];                                      // 0x01AD(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendMultiBone");
		return ptr;
	}


	void STATIC_SetTargetStartBone();
};


// Class Engine.AnimNodeMirror
// 0x0007 (0x01B4 - 0x01AD)
class UAnimNodeMirror : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01AD(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeMirror");
		return ptr;
	}

};


// Class Engine.AnimNodeScalePlayRate
// 0x0007 (0x01B4 - 0x01AD)
class UAnimNodeScalePlayRate : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01AD(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeScalePlayRate");
		return ptr;
	}

};


// Class Engine.AnimNodeScaleRateBySpeed
// 0x0004 (0x01B8 - 0x01B4)
class UAnimNodeScaleRateBySpeed : public UAnimNodeScalePlayRate
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeScaleRateBySpeed");
		return ptr;
	}

};


// Class Engine.AnimNodeSlot
// 0x0027 (0x01D4 - 0x01AD)
class UAnimNodeSlot : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x01AD(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSlot");
		return ptr;
	}


	void TickChildWeights();
	void STATIC_SetRootBoneRotationOption();
	void STATIC_SetRootBoneAxisOption();
	void STATIC_GetCustomAnimNodeSeq();
	void STATIC_SetActorAnimEndNotification();
	void STATIC_SetCustomAnim();
	void STATIC_SetAllowPauseAnims();
	void StopCustomAnim();
	void STATIC_GetPlayedAnimation();
	void STATIC_PlayCustomAnimByDuration();
	void STATIC_PlayCustomAnim();
};


// Class Engine.AnimNodeSynch
// 0x0013 (0x01C0 - 0x01AD)
class UAnimNodeSynch : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x13];                                      // 0x01AD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSynch");
		return ptr;
	}


	void STATIC_SetGroupRateScale();
	void STATIC_GetRelativePosition();
	void STATIC_ForceRelativePosition();
	void STATIC_GetMasterNodeOfGroup();
	void STATIC_RemoveNodeFromGroup();
	void AddNodeToGroup();
};


// Class Engine.AnimTree
// 0x0197 (0x0344 - 0x01AD)
class UAnimTree : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x197];                                     // 0x01AD(0x0197) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimTree");
		return ptr;
	}


	void STATIC_GetGroupIndex();
	void STATIC_GetGroupRateScale();
	void STATIC_SetGroupRateScale();
	void STATIC_GetGroupRelativePosition();
	void STATIC_ForceGroupRelativePosition();
	void STATIC_GetGroupNotifyMaster();
	void STATIC_GetGroupSynchMaster();
	void STATIC_SetAnimGroupForNode();
	void STATIC_SetUseSavedPose();
	void STATIC_FindMorphNode();
	void STATIC_FindSkelControl();
};


// Class Engine.AnimNodeSequence
// 0x00C8 (0x0260 - 0x0198)
class UAnimNodeSequence : public UAnimNode
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0198(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequence");
		return ptr;
	}


	void STATIC_SetRootBoneRotationOption();
	void STATIC_SetRootBoneAxisOption();
	void STATIC_GetTimeLeft();
	void STATIC_GetAnimPlaybackLength();
	void STATIC_GetGlobalPlayRate();
	void STATIC_GetGroupRelativePosition();
	void STATIC_FindGroupPosition();
	void STATIC_FindGroupRelativePosition();
	void STATIC_GetNormalizedPosition();
	void STATIC_SetPosition();
	void STATIC_ReplayAnim();
	void StopAnim();
	void STATIC_PlayAnim();
	void STATIC_SetAnim();
};


// Class Engine.AnimNodeSequenceBlendBase
// 0x0010 (0x0270 - 0x0260)
class UAnimNodeSequenceBlendBase : public UAnimNodeSequence
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequenceBlendBase");
		return ptr;
	}

};


// Class Engine.AnimNodeSequenceBlendByAim
// 0x0070 (0x02E0 - 0x0270)
class UAnimNodeSequenceBlendByAim : public UAnimNodeSequenceBlendBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0270(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequenceBlendByAim");
		return ptr;
	}


	void CheckAnimsUpToDate();
};


// Class Engine.AnimNodeFrame
// 0x0038 (0x00BC - 0x0084)
class UAnimNodeFrame : public UAnimObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0084(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeFrame");
		return ptr;
	}

};


// Class Engine.MorphNodeBase
// 0x000C (0x0090 - 0x0084)
class UMorphNodeBase : public UAnimObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeBase");
		return ptr;
	}

};


// Class Engine.MorphNodeMultiPose
// 0x0030 (0x00C0 - 0x0090)
class UMorphNodeMultiPose : public UMorphNodeBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeMultiPose");
		return ptr;
	}


	void UpdateMorphTarget();
	void STATIC_RemoveMorphTarget();
	void AddMorphTarget();
};


// Class Engine.MorphNodePose
// 0x0014 (0x00A4 - 0x0090)
class UMorphNodePose : public UMorphNodeBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0090(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodePose");
		return ptr;
	}


	void STATIC_SetMorphTarget();
};


// Class Engine.MorphNodeWeightBase
// 0x0010 (0x00A0 - 0x0090)
class UMorphNodeWeightBase : public UMorphNodeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightBase");
		return ptr;
	}

};


// Class Engine.MorphNodeWeight
// 0x0004 (0x00A4 - 0x00A0)
class UMorphNodeWeight : public UMorphNodeWeightBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeight");
		return ptr;
	}


	void STATIC_SetNodeWeight();
};


// Class Engine.MorphNodeWeightByBoneAngle
// 0x0044 (0x00E4 - 0x00A0)
class UMorphNodeWeightByBoneAngle : public UMorphNodeWeightBase
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00A0(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightByBoneAngle");
		return ptr;
	}

};


// Class Engine.MorphNodeWeightByBoneRotation
// 0x003C (0x00DC - 0x00A0)
class UMorphNodeWeightByBoneRotation : public UMorphNodeWeightBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00A0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightByBoneRotation");
		return ptr;
	}

};


// Class Engine.SkelControlBase
// 0x0068 (0x00EC - 0x0084)
class USkelControlBase : public UAnimObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0084(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlBase");
		return ptr;
	}


	void STATIC_GetControlMetadataWeight();
	void TickSkelControl();
	void STATIC_SetSkelControlStrength();
	void STATIC_SetSkelControlActive();
};


// Class Engine.SkelControl_CCD_IK
// 0x004C (0x0138 - 0x00EC)
class USkelControl_CCD_IK : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00EC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_CCD_IK");
		return ptr;
	}

};


// Class Engine.SkelControl_Multiply
// 0x0004 (0x00F0 - 0x00EC)
class USkelControl_Multiply : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_Multiply");
		return ptr;
	}

};


// Class Engine.SkelControl_TwistBone
// 0x000C (0x00F8 - 0x00EC)
class USkelControl_TwistBone : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00EC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_TwistBone");
		return ptr;
	}

};


// Class Engine.SkelControlLimb
// 0x0058 (0x0144 - 0x00EC)
class USkelControlLimb : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00EC(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlLimb");
		return ptr;
	}

};


// Class Engine.SkelControlFootPlacement
// 0x0024 (0x0168 - 0x0144)
class USkelControlFootPlacement : public USkelControlLimb
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0144(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlFootPlacement");
		return ptr;
	}

};


// Class Engine.SkelControlLookAt
// 0x009C (0x0188 - 0x00EC)
class USkelControlLookAt : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x00EC(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlLookAt");
		return ptr;
	}


	void CanLookAtPoint();
	void STATIC_SetLookAtAlpha();
	void STATIC_InterpolateTargetLocation();
	void STATIC_SetTargetLocation();
};


// Class Engine.SkelControlSingleBone
// 0x0030 (0x011C - 0x00EC)
class USkelControlSingleBone : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00EC(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlSingleBone");
		return ptr;
	}

};


// Class Engine.SkelControlHandlebars
// 0x0014 (0x0130 - 0x011C)
class USkelControlHandlebars : public USkelControlSingleBone
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x011C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlHandlebars");
		return ptr;
	}

};


// Class Engine.SkelControlWheel
// 0x0018 (0x0134 - 0x011C)
class USkelControlWheel : public USkelControlSingleBone
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x011C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlWheel");
		return ptr;
	}

};


// Class Engine.SkelControlSpline
// 0x0014 (0x0100 - 0x00EC)
class USkelControlSpline : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlSpline");
		return ptr;
	}

};


// Class Engine.SkelControlTrail
// 0x00B0 (0x019C - 0x00EC)
class USkelControlTrail : public USkelControlBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00EC(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlTrail");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x0150 (0x01A8 - 0x0058)
class UAnimSequence : public UObject
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0058(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}


	void STATIC_GetNotifyTimeByClass();
};


// Class Engine.AnimSet
// 0x0120 (0x0178 - 0x0058)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0058(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x001C (0x0074 - 0x0058)
class UMorphTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0058(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.MorphTargetSet
// 0x0028 (0x0080 - 0x0058)
class UMorphTargetSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTargetSet");
		return ptr;
	}


	void STATIC_FindMorphTarget();
};


// Class Engine.MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UMorphWeightSequence : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphWeightSequence");
		return ptr;
	}

};


// Class Engine.DecalActorBase
// 0x0010 (0x0284 - 0x0274)
class ADecalActorBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActorBase");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0000 (0x0284 - 0x0284)
class ADecalActor : public ADecalActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}

};


// Class Engine.DecalActorMovable
// 0x0000 (0x0284 - 0x0284)
class ADecalActorMovable : public ADecalActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActorMovable");
		return ptr;
	}

};


// Class Engine.DecalManager
// 0x0044 (0x02B8 - 0x0274)
class ADecalManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0274(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalManager");
		return ptr;
	}


	void STATIC_SpawnDecal();
	void STATIC_GetPooledComponent();
	void STATIC_SetDecalParameters();
	void CanSpawnDecals();
	void DecalFinished();
	void AreDynamicDecalsEnabled();
};


// Class Engine.DecalComponent
// 0x018C (0x0410 - 0x0284)
class UDecalComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x18C];                                     // 0x0284(0x018C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void STATIC_IsWaitingForResetToDefaultsToComplete();
	void STATIC_GetDecalMaterial();
	void STATIC_SetDecalMaterial();
	void STATIC_ResetToDefaults();
};


// Class Engine.ActorFactoryDecal
// 0x0008 (0x009C - 0x0094)
class UActorFactoryDecal : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDecal");
		return ptr;
	}

};


// Class Engine.ActorFactoryDecalMovable
// 0x0000 (0x009C - 0x009C)
class UActorFactoryDecalMovable : public UActorFactoryDecal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDecalMovable");
		return ptr;
	}

};


// Class Engine.Material
// 0x0624 (0x0880 - 0x025C)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x624];                                     // 0x025C(0x0624) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.DecalMaterial
// 0x0000 (0x0880 - 0x0880)
class UDecalMaterial : public UMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalMaterial");
		return ptr;
	}

};


// Class Engine.FogVolumeDensityInfo
// 0x0014 (0x0288 - 0x0274)
class AFogVolumeDensityInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeDensityInfo");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void STATIC_OnToggle();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.FogVolumeConeDensityInfo
// 0x0000 (0x0288 - 0x0288)
class AFogVolumeConeDensityInfo : public AFogVolumeDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConeDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeConstantDensityInfo
// 0x0000 (0x0288 - 0x0288)
class AFogVolumeConstantDensityInfo : public AFogVolumeDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConstantDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeLinearHalfspaceDensityInfo
// 0x0000 (0x0288 - 0x0288)
class AFogVolumeLinearHalfspaceDensityInfo : public AFogVolumeDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeLinearHalfspaceDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeSphericalDensityInfo
// 0x0000 (0x0288 - 0x0288)
class AFogVolumeSphericalDensityInfo : public AFogVolumeDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeSphericalDensityInfo");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFogComponent
// 0x002C (0x00B0 - 0x0084)
class UExponentialHeightFogComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0084(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void SetEnabled();
};


// Class Engine.FogVolumeDensityComponent
// 0x004C (0x00D0 - 0x0084)
class UFogVolumeDensityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0084(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeDensityComponent");
		return ptr;
	}


	void SetEnabled();
};


// Class Engine.FogVolumeConeDensityComponent
// 0x002C (0x00FC - 0x00D0)
class UFogVolumeConeDensityComponent : public UFogVolumeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00D0(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConeDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeConstantDensityComponent
// 0x0004 (0x00D4 - 0x00D0)
class UFogVolumeConstantDensityComponent : public UFogVolumeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConstantDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeLinearHalfspaceDensityComponent
// 0x0020 (0x00F0 - 0x00D0)
class UFogVolumeLinearHalfspaceDensityComponent : public UFogVolumeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeLinearHalfspaceDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeSphericalDensityComponent
// 0x001C (0x00EC - 0x00D0)
class UFogVolumeSphericalDensityComponent : public UFogVolumeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00D0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeSphericalDensityComponent");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeConstantDensityInfo
// 0x000C (0x00A0 - 0x0094)
class UActorFactoryFogVolumeConstantDensityInfo : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeConstantDensityInfo");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeLinearHalfspaceDensityInfo
// 0x0000 (0x00A0 - 0x00A0)
class UActorFactoryFogVolumeLinearHalfspaceDensityInfo : public UActorFactoryFogVolumeConstantDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeLinearHalfspaceDensityInfo");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeSphericalDensityInfo
// 0x0000 (0x00A0 - 0x00A0)
class UActorFactoryFogVolumeSphericalDensityInfo : public UActorFactoryFogVolumeConstantDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeSphericalDensityInfo");
		return ptr;
	}

};


// Class Engine.ApexDestructibleActor
// 0x0058 (0x02CC - 0x0274)
class AApexDestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0274(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleActor");
		return ptr;
	}


	void STATIC_OnSetMaterial();
	void TakeRadiusDamage();
	void TakeDamage();
	void PostBeginPlay();
	void CacheFractureEffects();
	void SpawnFractureEmitter();
};


// Class Engine.FracturedStaticMeshActor
// 0x009C (0x0310 - 0x0274)
class AFracturedStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0274(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshActor");
		return ptr;
	}


	void STATIC_NotifyHitByExplosion();
	void SetLoseChunkReplacementMaterial();
	void HideFragmentsToMaximizeMemoryUsage();
	void HideOneFragment();
	void ResetVisibility();
	void BreakOffPartsInRadius();
	void Explode();
	void TakeDamage();
	void STATIC_RemoveDecals();
	void STATIC_FractureEffectIsRelevant();
	void STATIC_IsFracturedByDamageType();
	void SpawnDeferredParts();
	void BreakOffIsolatedIslands();
	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
	void STATIC_ResetHealth();
	void PostBeginPlay();
	void STATIC_SpawnPartMulti();
	void STATIC_SpawnPart();
};


// Class Engine.FracturedStaticMeshPart
// 0x0034 (0x0344 - 0x0310)
class AFracturedStaticMeshPart : public AFracturedStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0310(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshPart");
		return ptr;
	}


	void BreakOffPartsInRadius();
	void Explode();
	void FellOutOfWorld();
	void TryToCleanUp();
	void TakeDamage();
	void STATIC_RecyclePart();
	void STATIC_Initialize();
};


// Class Engine.FractureManager
// 0x0044 (0x02B8 - 0x0274)
class AFractureManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0274(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FractureManager");
		return ptr;
	}


	void Tick();
	void ReturnPartActor();
	void SpawnPartActor();
	void STATIC_GetFSMPart();
	void STATIC_ResetPoolVisibility();
	void CreateFSMParts();
	void CleanUpFSMParts();
	void Destroyed();
	void PreBeginPlay();
	void STATIC_GetFSMFractureCullDistanceScale();
	void STATIC_GetFSMRadialSpawnChanceScale();
	void STATIC_GetFSMDirectSpawnChanceScale();
	void STATIC_GetNumFSMPartsScale();
	void SpawnChunkDestroyEffect();
};


// Class Engine.ImageReflection
// 0x0014 (0x0288 - 0x0274)
class AImageReflection : public AActor
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflection");
		return ptr;
	}


	void STATIC_OnToggle();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.ImageReflectionSceneCapture
// 0x0008 (0x0290 - 0x0288)
class AImageReflectionSceneCapture : public AImageReflection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionSceneCapture");
		return ptr;
	}

};


// Class Engine.ImageReflectionShadowPlane
// 0x000C (0x0280 - 0x0274)
class AImageReflectionShadowPlane : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionShadowPlane");
		return ptr;
	}


	void STATIC_OnToggle();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.ImageReflectionComponent
// 0x0008 (0x008C - 0x0084)
class UImageReflectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0084(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionComponent");
		return ptr;
	}

};


// Class Engine.ImageReflectionShadowPlaneComponent
// 0x001C (0x02A0 - 0x0284)
class UImageReflectionShadowPlaneComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0284(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionShadowPlaneComponent");
		return ptr;
	}


	void SetEnabled();
};


// Class Engine.ApexComponentBase
// 0x001C (0x02B0 - 0x0294)
class UApexComponentBase : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0294(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexComponentBase");
		return ptr;
	}

};


// Class Engine.ApexDynamicComponent
// 0x0008 (0x02B8 - 0x02B0)
class UApexDynamicComponent : public UApexComponentBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDynamicComponent");
		return ptr;
	}

};


// Class Engine.ApexStaticComponent
// 0x0000 (0x02B0 - 0x02B0)
class UApexStaticComponent : public UApexComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexStaticComponent");
		return ptr;
	}

};


// Class Engine.ApexStaticDestructibleComponent
// 0x001C (0x02CC - 0x02B0)
class UApexStaticDestructibleComponent : public UApexStaticComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02B0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexStaticDestructibleComponent");
		return ptr;
	}

};


// Class Engine.FracturedBaseComponent
// 0x0028 (0x033C - 0x0314)
class UFracturedBaseComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0314(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedBaseComponent");
		return ptr;
	}


	void STATIC_GetNumVisibleFragments();
	void STATIC_GetNumFragments();
	void STATIC_IsFragmentVisible();
	void STATIC_GetVisibleFragments();
	void STATIC_SetStaticMesh();
};


// Class Engine.FracturedSkinnedMeshComponent
// 0x002C (0x0368 - 0x033C)
class UFracturedSkinnedMeshComponent : public UFracturedBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x033C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedSkinnedMeshComponent");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshComponent
// 0x004C (0x0388 - 0x033C)
class UFracturedStaticMeshComponent : public UFracturedBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x033C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshComponent");
		return ptr;
	}


	void STATIC_GetFracturedMeshPhysMaterial();
	void STATIC_RecreatePhysState();
	void STATIC_GetBoundaryHiddenFragments();
	void STATIC_GetFragmentGroups();
	void STATIC_GetCoreFragmentIndex();
	void STATIC_GetFragmentAverageExteriorNormal();
	void STATIC_GetFragmentBox();
	void STATIC_IsNoPhysFragment();
	void STATIC_IsRootFragment();
	void STATIC_IsFragmentDestroyable();
	void STATIC_SetVisibleFragments();
};


// Class Engine.ImageBasedReflectionComponent
// 0x001C (0x0330 - 0x0314)
class UImageBasedReflectionComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0314(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageBasedReflectionComponent");
		return ptr;
	}


	void STATIC_OnUpdatePropertyReflectionColor();
	void UpdateImageReflectionParameters();
	void SetEnabled();
};


// Class Engine.InstancedStaticMeshComponent
// 0x0068 (0x037C - 0x0314)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0314(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x0068 (0x037C - 0x0314)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0314(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}

};


// Class Engine.ApexAsset
// 0x0050 (0x00A8 - 0x0058)
class UApexAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexAsset");
		return ptr;
	}

};


// Class Engine.ApexClothingAsset
// 0x0078 (0x0120 - 0x00A8)
class UApexClothingAsset : public UApexAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00A8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexClothingAsset");
		return ptr;
	}

};


// Class Engine.ApexDestructibleAsset
// 0x014C (0x01F4 - 0x00A8)
class UApexDestructibleAsset : public UApexAsset
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x00A8(0x014C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleAsset");
		return ptr;
	}

};


// Class Engine.ApexGenericAsset
// 0x0018 (0x00C0 - 0x00A8)
class UApexGenericAsset : public UApexAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexGenericAsset");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0068 - 0x0058)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0018 (0x0080 - 0x0068)
class UInterpFilter_Classes : public UInterpFilter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0010 (0x0078 - 0x0068)
class UInterpFilter_Custom : public UInterpFilter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0048 (0x00A0 - 0x0058)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupAI
// 0x0018 (0x00B8 - 0x00A0)
class UInterpGroupAI : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupAI");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x004C (0x00EC - 0x00A0)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00A0(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x00A0 - 0x00A0)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0028 (0x0080 - 0x0058)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstAI
// 0x0024 (0x00A4 - 0x0080)
class UInterpGroupInstAI : public UInterpGroupInst
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0080(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstAI");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0080 - 0x0080)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0080 - 0x0080)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x00D0 - 0x00B8)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0014 (0x00CC - 0x00B8)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0014 (0x00CC - 0x00B8)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFaceFX
// 0x0038 (0x00F0 - 0x00B8)
class UInterpTrackFaceFX : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFaceFX");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0018 (0x00D0 - 0x00B8)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x002C (0x00FC - 0x00D0)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00D0(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControlBlendKey
// 0x0000 (0x00D0 - 0x00D0)
class UInterpTrackAnimControlBlendKey : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControlBlendKey");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0004 (0x00D4 - 0x00D0)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x003C (0x010C - 0x00D0)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00D0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMorphWeight
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackMorphWeight : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMorphWeight");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0014 (0x00E4 - 0x00D0)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00D0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackSkelControlScale
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackSkelControlScale : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSkelControlScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSkelControlStrength
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackSkelControlStrength : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSkelControlStrength");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0004 (0x00D4 - 0x00D0)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackHeadTracking
// 0x0054 (0x010C - 0x00B8)
class UInterpTrackHeadTracking : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00B8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackHeadTracking");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0018 (0x00D0 - 0x00B8)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMaterialEffect
// 0x0014 (0x00CC - 0x00B8)
class UInterpTrackMaterialEffect : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMaterialEffect");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x004E (0x0106 - 0x00B8)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x4E];                                      // 0x00B8(0x004E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackNotify
// 0x0030 (0x00E8 - 0x00B8)
class UInterpTrackNotify : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackNotify");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0018 (0x00D0 - 0x00B8)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0014 (0x00CC - 0x00B8)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0018 (0x00D0 - 0x00B8)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x00D0 - 0x00D0)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x00D0 - 0x00D0)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0014 (0x00E4 - 0x00D0)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00D0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x003C (0x010C - 0x00D0)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00D0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0008 (0x00D8 - 0x00D0)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0014 (0x00CC - 0x00B8)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B8(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0020 (0x0078 - 0x0058)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0010 (0x0068 - 0x0058)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFaceFX
// 0x0008 (0x0060 - 0x0058)
class UInterpTrackInstFaceFX : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFaceFX");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0018 (0x0070 - 0x0058)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstHeadTracking
// 0x0068 (0x00C0 - 0x0058)
class UInterpTrackInstHeadTracking : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstHeadTracking");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMaterialEffect
// 0x005C (0x00B4 - 0x0058)
class UInterpTrackInstMaterialEffect : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0058(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMaterialEffect");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMorphWeight
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstMorphWeight : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMorphWeight");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0068 (0x00C0 - 0x0058)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstNotify
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstNotify : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstNotify");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0068 - 0x0058)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0010 (0x0078 - 0x0068)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x000C (0x0074 - 0x0068)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0068(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0014 (0x007C - 0x0068)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0068(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0080 - 0x0068)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0014 (0x007C - 0x0068)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0068(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSkelControlScale
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstSkelControlScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSkelControlScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSkelControlStrength
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstSkelControlStrength : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSkelControlStrength");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x000C (0x0064 - 0x0058)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x000C (0x0064 - 0x0058)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0018 (0x0070 - 0x0058)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0060 - 0x0058)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x0058 (0x00B0 - 0x0058)
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorWorldPosition
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionActorWorldPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x00A4 (0x0154 - 0x00B0)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00B0(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVector
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionCameraVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraWorldPosition
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionCameraWorldPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x009C (0x014C - 0x00B0)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x00B0(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0030 (0x00E0 - 0x00B0)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x00B8 - 0x00B0)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x000C (0x00BC - 0x00B0)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x00C0 - 0x00B0)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x003C (0x00EC - 0x00B0)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00B0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantClamp
// 0x003C (0x00EC - 0x00B0)
class UMaterialExpressionConstantClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00B0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomTexture
// 0x0008 (0x00B8 - 0x00B0)
class UMaterialExpressionCustomTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasedAlpha
// 0x0070 (0x0120 - 0x00B0)
class UMaterialExpressionDepthBiasedAlpha : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasedAlpha");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasedBlend
// 0x00A4 (0x0154 - 0x00B0)
class UMaterialExpressionDepthBiasedBlend : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00B0(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasedBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0078 (0x0128 - 0x00B0)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDestColor
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionDestColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDestColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDestDepth
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionDestDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDestDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDestOutlineDepth
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionDestOutlineDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDestOutlineDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0010 (0x00C0 - 0x00B0)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshEmitterDynamicParameter
// 0x0000 (0x00C0 - 0x00C0)
class UMaterialExpressionMeshEmitterDynamicParameter : public UMaterialExpressionDynamicParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshEmitterDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFluidNormal
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionFluidNormal : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFluidNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFoliageImpulseDirection
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionFoliageImpulseDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFoliageImpulseDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFoliageNormalizedRotationAxisAndAngle
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionFoliageNormalizedRotationAxisAndAngle : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFoliageNormalizedRotationAxisAndAngle");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x000C (0x00BC - 0x00B0)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x00DC - 0x00BC)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00BC(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0088 (0x0138 - 0x00B0)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x006C (0x011C - 0x00B0)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x00B0(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0104 (0x01B4 - 0x00B0)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x104];                                     // 0x00B0(0x0104) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x00D0 - 0x00B0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareIntensity
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLensFlareIntensity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareIntensity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareOcclusion
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLensFlareOcclusion : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareOcclusion");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareRadialDistance
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLensFlareRadialDistance : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareRadialDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareRayDistance
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLensFlareRayDistance : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareRayDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareSourceDistance
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLensFlareSourceDistance : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareSourceDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x009C (0x014C - 0x00B0)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x00B0(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0028 (0x00D8 - 0x00B0)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshEmitterVertexColor
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionMeshEmitterVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshEmitterVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectDimension
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionObjectDimension : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectDimension");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectWorldPosition
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionObjectWorldPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOcclusionPercentage
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionOcclusionPercentage : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOcclusionPercentage");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x0070 (0x0120 - 0x00B0)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0020 (0x00D0 - 0x00B0)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0004 (0x00D4 - 0x00D0)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x000C (0x00DC - 0x00D0)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0068 (0x0144 - 0x00DC)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00DC(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0040 (0x0110 - 0x00D0)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTexAddressParameter
// 0x0001 (0x00D1 - 0x00D0)
class UMaterialExpressionTexAddressParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D0(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTexAddressParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x00E0 - 0x00D0)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVector
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionReflectionVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x009C (0x014C - 0x00B0)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x00B0(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0074 (0x0124 - 0x00B0)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x00B0(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScale
// 0x00A8 (0x0158 - 0x00B0)
class UMaterialExpressionScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00B0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x003C (0x00EC - 0x00B0)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00B0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenSize
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionScreenSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadowFactor
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionShadowFactor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadowFactor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0038 (0x00E8 - 0x00B0)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x00D8 (0x0188 - 0x00B0)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00B0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0034 (0x00E4 - 0x00B0)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x00B0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x00A0 (0x0150 - 0x00B0)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0068 (0x0118 - 0x00B0)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerCoords
// 0x0014 (0x00C4 - 0x00B0)
class UMaterialExpressionTerrainLayerCoords : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00B0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerCoords");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerSwitch
// 0x008C (0x013C - 0x00B0)
class UMaterialExpressionTerrainLayerSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x00B0(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerWeight
// 0x008C (0x013C - 0x00B0)
class UMaterialExpressionTerrainLayerWeight : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x00B0(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerWeight");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTexelSize
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x00C0 - 0x00B0)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0008 (0x00B8 - 0x00B0)
class UMaterialExpressionTextureObject : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x00A4 (0x0154 - 0x00B0)
class UMaterialExpressionTextureSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00B0(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasBlend
// 0x003C (0x0190 - 0x0154)
class UMaterialExpressionDepthBiasBlend : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0154(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFlipBookSample
// 0x0000 (0x0154 - 0x0154)
class UMaterialExpressionFlipBookSample : public UMaterialExpressionTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFlipBookSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshSubUV
// 0x0000 (0x0154 - 0x0154)
class UMaterialExpressionMeshSubUV : public UMaterialExpressionTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshSubUVBlend
// 0x0000 (0x0154 - 0x0154)
class UMaterialExpressionMeshSubUVBlend : public UMaterialExpressionMeshSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshSubUVBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0000 (0x0154 - 0x0154)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x0174 - 0x0154)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0154(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0005 (0x0179 - 0x0174)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0174(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterFlipbook
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterFlipbook : public UMaterialExpressionTextureSampleParameter2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterFlipbook");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMeshSubUV
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterMeshSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMeshSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMeshSubUVBlend
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterMeshSubUVBlend : public UMaterialExpressionTextureSampleParameterMeshSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMeshSubUVBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMovie
// 0x0000 (0x0174 - 0x0174)
class UMaterialExpressionTextureSampleParameterMovie : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMovie");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterNormal
// 0x0008 (0x017C - 0x0174)
class UMaterialExpressionTextureSampleParameterNormal : public UMaterialExpressionTextureSampleParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0174(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0004 (0x00B4 - 0x00B0)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0036 (0x00E6 - 0x00B0)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x36];                                      // 0x00B0(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0036 (0x00E6 - 0x00B0)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x36];                                      // 0x00B0(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWindDirectionAndSpeed
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionWindDirectionAndSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWindDirectionAndSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldNormal
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionWorldNormal : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0000 (0x00B0 - 0x00B0)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x005C (0x00B4 - 0x0058)
class UMaterialFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0058(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x0098 (0x02F4 - 0x025C)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x025C(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}


	void STATIC_IsInMapOrTransientPackage();
	void ClearParameterValues();
	void STATIC_SetTexAddressParameterValue();
	void STATIC_SetFontParameterValue();
	void STATIC_GetTextureParameterValue();
	void STATIC_SetTextureParameterValue();
	void STATIC_SetScalarCurveParameterValue();
	void STATIC_SetScalarParameterValue();
	void STATIC_SetVectorParameterValue();
	void STATIC_SetParent();
};


// Class Engine.MaterialInstanceConstant
// 0x0050 (0x0344 - 0x02F4)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02F4(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}


	void ClearParameterValues();
	void STATIC_SetTexAddressParameterValue();
	void STATIC_GetMobileVectorParameterValue();
	void STATIC_GetMobileTextureParameterValue();
	void STATIC_GetMobileScalarParameterValue();
	void STATIC_SetFontParameterValue();
	void STATIC_SetVectorParameterValue();
	void STATIC_SetTextureParameterValue();
	void STATIC_SetScalarParameterValue();
	void STATIC_SetParent();
};


// Class Engine.LandscapeMaterialInstanceConstant
// 0x000C (0x0350 - 0x0344)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0344(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialInstanceTimeVarying
// 0x0058 (0x034C - 0x02F4)
class UMaterialInstanceTimeVarying : public UMaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02F4(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceTimeVarying");
		return ptr;
	}


	void CheckForVectorParameterConflicts();
	void STATIC_GetMaxDurationFromAllParameters();
	void ClearParameterValues();
	void STATIC_SetFontParameterValue();
	void STATIC_SetVectorStartTime();
	void STATIC_SetLinearColorCurveParameterValue();
	void STATIC_SetLinearColorParameterValue();
	void STATIC_SetVectorCurveParameterValue();
	void STATIC_SetVectorParameterValue();
	void STATIC_SetTextureParameterValue();
	void STATIC_SetDuration();
	void STATIC_SetScalarStartTime();
	void STATIC_SetScalarCurveParameterValue();
	void STATIC_SetScalarParameterValue();
	void STATIC_SetParent();
};


// Class Engine.EmitterCameraLensEffectBase
// 0x0034 (0x02DC - 0x02A8)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x02A8(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}


	void UpdateLocation();
	void ActivateLensEffect();
	void PostBeginPlay();
	void STATIC_NotifyRetriggered();
	void STATIC_RegisterCamera();
	void Destroyed();
};


// Class Engine.ParticleEventManager
// 0x0000 (0x0274 - 0x0274)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}


	void HandleParticleModuleEventSendToGame();
};


// Class Engine.ParticleSystemComponent
// 0x018C (0x0410 - 0x0284)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x18C];                                     // 0x0284(0x018C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void ActivateParticleSystemSound();
	void TickPlaySound();
	void STATIC_SetStopSpawning();
	void STATIC_ResetToDefaults();
	void STATIC_SetActive();
	void ClearParameter();
	void STATIC_GetComponentParameter();
	void STATIC_GetMaterialParameter();
	void STATIC_GetActorParameter();
	void STATIC_GetColorParameter();
	void STATIC_GetVectorParameter();
	void STATIC_GetFloatParameter();
	void STATIC_SetSocketParameter();
	void STATIC_SetComponentParameter();
	void STATIC_SetMaterialParameter();
	void STATIC_SetActorParameter();
	void STATIC_SetColorParameter();
	void STATIC_SetVectorRandParameter();
	void STATIC_SetVectorParameter();
	void STATIC_SetFloatRandParameter();
	void STATIC_SetFloatParameter();
	void STATIC_GetEditorLODLevel();
	void STATIC_GetLODLevel();
	void STATIC_SetEditorLODLevel();
	void STATIC_SetLODLevel();
	void SystemHasCompleted();
	void STATIC_GetMaxLifespan();
	void DetermineLODLevelForLocation();
	void STATIC_SetBeamTargetStrength();
	void STATIC_SetBeamTargetTangent();
	void STATIC_SetBeamTargetPoint();
	void STATIC_SetBeamSourceStrength();
	void STATIC_SetBeamSourceTangent();
	void STATIC_SetBeamSourcePoint();
	void STATIC_SetBeamDistance();
	void STATIC_SetBeamEndPoint();
	void STATIC_SetBeamTessellationFactor();
	void STATIC_SetBeamType();
	void STATIC_RewindEmitterInstances();
	void STATIC_RewindEmitterInstance();
	void STATIC_SetKillOnCompleted();
	void STATIC_SetKillOnDeactivate();
	void STATIC_GetSkipBoundsUpdate();
	void STATIC_SetSkipBoundsUpdate();
	void STATIC_GetSkipUpdateDynamicDataDuringTick();
	void STATIC_SetSkipUpdateDynamicDataDuringTick();
	void STATIC_KillParticlesInEmitter();
	void STATIC_KillParticlesForced();
	void DeactivateSystem();
	void ActivateSystem();
	void SetTemplate();
	void OnSystemFinished();
};


// Class Engine.DistributionFloatParticleParameter
// 0x0003 (0x0094 - 0x0091)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0001 (0x00C4 - 0x00C3)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0034 (0x008C - 0x0058)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0058(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}


	void STATIC_GetMaxLifespan();
};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x008C - 0x008C)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x008C (0x00E4 - 0x0058)
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0058(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x000C (0x0064 - 0x0058)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0004 (0x0068 - 0x0064)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0028 (0x0090 - 0x0068)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0024 (0x008C - 0x0068)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0068(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBoneSocket
// 0x010C (0x0170 - 0x0064)
class UParticleModuleAttractorBoneSocket : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x10C];                                     // 0x0064(0x010C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0060 (0x00C4 - 0x0064)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0064(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x005C (0x00C0 - 0x0064)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0064(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x0070 (0x00D4 - 0x0064)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0064(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorSkelVertSurface
// 0x0130 (0x0194 - 0x0064)
class UParticleModuleAttractorSkelVertSurface : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0064(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x0080 (0x00E4 - 0x0064)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0064(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x00D4 (0x0138 - 0x0064)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0064(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x007C (0x00E0 - 0x0064)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0064(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x0080 (0x00E4 - 0x0064)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0064(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0029 (0x008D - 0x0064)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x0064(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x00D8 (0x013C - 0x0064)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0064(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionActor
// 0x0014 (0x0150 - 0x013C)
class UParticleModuleCollisionActor : public UParticleModuleCollision
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x013C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionActor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x004C (0x00B0 - 0x0064)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0064(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x001C (0x00CC - 0x00B0)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00B0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorByParameter
// 0x000C (0x0070 - 0x0064)
class UParticleModuleColorByParameter : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorByParameter");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x004C (0x00B0 - 0x0064)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0064(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverDensity
// 0x0048 (0x00AC - 0x0064)
class UParticleModuleColorScaleOverDensity : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0064(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverDensity");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x004C (0x00B0 - 0x0064)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0064(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0074 - 0x0064)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x000C (0x0070 - 0x0064)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0004 (0x0074 - 0x0070)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x004C (0x00BC - 0x0070)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0070(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x004C (0x00B0 - 0x0064)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0064(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0028 (0x008C - 0x0064)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x001C (0x00A4 - 0x0088)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0088(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x002C (0x0090 - 0x0064)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0064(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x001C (0x00AC - 0x0090)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0090(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0090 - 0x0090)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x001C (0x00AC - 0x0090)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0090(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0038 (0x009C - 0x0064)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0064(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x0090 (0x00F4 - 0x0064)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0064(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0018 (0x007C - 0x0064)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0064(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x006C - 0x0064)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x004C (0x00B0 - 0x0064)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0064(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x004D (0x00FD - 0x00B0)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x4D];                                      // 0x00B0(0x004D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x001F (0x011C - 0x00FD)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x00FD(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0024 (0x00D4 - 0x00B0)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x001C (0x00F0 - 0x00D4)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00D4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0058 (0x00BC - 0x0064)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0064(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationStaticVertSurface
// 0x0048 (0x00AC - 0x0064)
class UParticleModuleLocationStaticVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0064(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationStaticVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialByParameter
// 0x0020 (0x0084 - 0x0064)
class UParticleModuleMaterialByParameter : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0064(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialByParameter");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0074 - 0x0064)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0004 (0x0068 - 0x0064)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x007C (0x00E4 - 0x0068)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0068(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x006C - 0x0064)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x007C - 0x0064)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0064(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x001C (0x0098 - 0x007C)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x007C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x00D0 (0x0134 - 0x0064)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0064(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0028 (0x008C - 0x0064)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x001C (0x00A8 - 0x008C)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x008C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x001C (0x00A4 - 0x0088)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0088(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0028 (0x008C - 0x0064)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x001C (0x00A4 - 0x0088)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0088(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0028 (0x008C - 0x0064)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x001C (0x00A4 - 0x0088)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0088(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x001C (0x00A4 - 0x0088)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0088(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0028 (0x008C - 0x0064)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyVelocity
// 0x0040 (0x00A4 - 0x0064)
class UParticleModuleSizeMultiplyVelocity : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0064(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0028 (0x008C - 0x0064)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleByTime
// 0x0028 (0x008C - 0x0064)
class UParticleModuleSizeScaleByTime : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleByTime");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleOverDensity
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleSizeScaleOverDensity : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleOverDensity");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0004 (0x0068 - 0x0064)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x005C (0x00C4 - 0x0068)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0068(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0038 (0x00A0 - 0x0068)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleStoreSpawnTimeBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleStoreSpawnTimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleStoreSpawnTimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleStoreSpawnTime
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleStoreSpawnTime : public UParticleModuleStoreSpawnTimeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleStoreSpawnTime");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0028 (0x008C - 0x0064)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x002C (0x00B8 - 0x008C)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x008C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVDirect
// 0x0048 (0x00AC - 0x0064)
class UParticleModuleSubUVDirect : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0064(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVSelect
// 0x0024 (0x0088 - 0x0064)
class UParticleModuleSubUVSelect : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0064(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVSelect");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0048 (0x00AC - 0x0064)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0064(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSpawn
// 0x000C (0x0070 - 0x0064)
class UParticleModuleTrailSpawn : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailTaper
// 0x0028 (0x008C - 0x0064)
class UParticleModuleTrailTaper : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailTaper");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x001C (0x0080 - 0x0064)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataApex
// 0x0010 (0x0074 - 0x0064)
class UParticleModuleTypeDataApex : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataApex");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam
// 0x00C4 (0x0128 - 0x0064)
class UParticleModuleTypeDataBeam : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0064(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x0098 (0x00FC - 0x0064)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0064(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x001C (0x0080 - 0x0064)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0064(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMeshPhysX
// 0x0024 (0x00A4 - 0x0080)
class UParticleModuleTypeDataMeshPhysX : public UParticleModuleTypeDataMesh
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0080(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMeshPhysX");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataPhysX
// 0x0018 (0x007C - 0x0064)
class UParticleModuleTypeDataPhysX : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0064(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataPhysX");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0028 (0x008C - 0x0064)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataTrail
// 0x0038 (0x009C - 0x0064)
class UParticleModuleTypeDataTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0064(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataTrail2
// 0x0020 (0x0084 - 0x0064)
class UParticleModuleTypeDataTrail2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0064(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataTrail2");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberBase
// 0x0010 (0x0074 - 0x0064)
class UParticleModuleUberBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0064(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCL
// 0x00D8 (0x014C - 0x0074)
class UParticleModuleUberLTISIVCL : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0074(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCL");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCLIL
// 0x00FC (0x0170 - 0x0074)
class UParticleModuleUberLTISIVCLIL : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0074(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCLIL");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCLILIRSSBLIRR
// 0x016C (0x01E0 - 0x0074)
class UParticleModuleUberLTISIVCLILIRSSBLIRR : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0x16C];                                     // 0x0074(0x016C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCLILIRSSBLIRR");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainDrops
// 0x0088 (0x00FC - 0x0074)
class UParticleModuleUberRainDrops : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0074(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainDrops");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainImpacts
// 0x0170 (0x01E4 - 0x0074)
class UParticleModuleUberRainImpacts : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0074(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainImpacts");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainSplashA
// 0x00DC (0x0150 - 0x0074)
class UParticleModuleUberRainSplashA : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0xDC];                                      // 0x0074(0x00DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainSplashA");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainSplashB
// 0x00DC (0x0150 - 0x0074)
class UParticleModuleUberRainSplashB : public UParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0xDC];                                      // 0x0074(0x00DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainSplashB");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0004 (0x0068 - 0x0064)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0048 (0x00B0 - 0x0068)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x001C (0x00CC - 0x00B0)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00B0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0054 (0x00BC - 0x0068)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0068(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0024 (0x008C - 0x0068)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0068(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0028 (0x0090 - 0x0068)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleWorldForcesBase
// 0x0000 (0x0064 - 0x0064)
class UParticleModuleWorldForcesBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWorldForcesBase");
		return ptr;
	}

};


// Class Engine.ParticleModulePhysicsVolumes
// 0x0025 (0x0089 - 0x0064)
class UParticleModulePhysicsVolumes : public UParticleModuleWorldForcesBase
{
public:
	unsigned char                                      UnknownData00[0x25];                                      // 0x0064(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePhysicsVolumes");
		return ptr;
	}

};


// Class Engine.ParticleModuleWorldAttractor
// 0x0028 (0x008C - 0x0064)
class UParticleModuleWorldAttractor : public UParticleModuleWorldForcesBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0064(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWorldAttractor");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0058 - 0x0058)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}


	void DoEvent();
};


// Class Engine.ParticleSystemReplay
// 0x0014 (0x006C - 0x0058)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PhysXParticleSystem
// 0x006C (0x00C4 - 0x0058)
class UPhysXParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0058(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysXParticleSystem");
		return ptr;
	}

};


// Class Engine.KActor
// 0x00E4 (0x03A8 - 0x02C4)
class AKActor : public ADynamicSMActor
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x02C4(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActor");
		return ptr;
	}


	void STATIC_Reset();
	void STATIC_OnTeleport();
	void STATIC_OnToggle();
	void TakeRadiusDamage();
	void TakeDamage();
	void ApplyImpulse();
	void ReplicatedEvent();
	void SpawnedByKismet();
	void STATIC_SetPhysicalCollisionProperties();
	void Destroyed();
	void FellOutOfWorld();
	void PostBeginPlay();
	void STATIC_ResolveRBState();
	void STATIC_GetKActorPhysMaterial();
};


// Class Engine.KActorFromStatic
// 0x000C (0x03B4 - 0x03A8)
class AKActorFromStatic : public AKActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x03A8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActorFromStatic");
		return ptr;
	}


	void TakeRadiusDamage();
	void Touch();
	void Bump();
	void STATIC_ReceiveImpulse();
	void ApplyImpulse();
	void STATIC_MakeDynamic();
	void STATIC_MakeStatic();
	void BecomeStatic();
	void OnWakeRBPhysics();
	void OnSleepRBPhysics();
	void DisablePrecomputedLighting();
};


// Class Engine.KActorSpawnable
// 0x0004 (0x03AC - 0x03A8)
class AKActorSpawnable : public AKActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActorSpawnable");
		return ptr;
	}


	void STATIC_ResetComponents();
	void RecycleInternal();
	void Recycle();
	void STATIC_Initialize();
};


// Class Engine.KAsset
// 0x001C (0x0290 - 0x0274)
class AKAsset : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0274(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KAsset");
		return ptr;
	}


	void DoKismetAttachment();
	void STATIC_OnTeleport();
	void STATIC_OnToggle();
	void TakeRadiusDamage();
	void TakeDamage();
	void ReplicatedEvent();
	void STATIC_SetMeshAndPhysAsset();
	void PostBeginPlay();
};


// Class Engine.Pawn
// 0x0314 (0x0588 - 0x0274)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x314];                                     // 0x0274(0x0314) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void STATIC_OnSetVelocity();
	void Speak();
	void STATIC_SetScalarParameterInterp();
	void STATIC_SetRootMotionInterpCurrentTime();
	void STATIC_SetCinematicMode();
	void ZeroMovementVariables();
	void ClearPathStep();
	void DrawPathStep();
	void STATIC_IncrementPathChild();
	void STATIC_IncrementPathStep();
	void CreatePathGoalEvaluator();
	void CreatePathConstraint();
	void AddGoalEvaluator();
	void AddPathConstraint();
	void ClearConstraints();
	void SoakPause();
	void BecomeViewTarget();
	void MessagePlayer();
	void STATIC_HandleTeleport();
	void STATIC_OnTeleport();
	void STATIC_OnSetMaterial();
	void STATIC_GetDamageScaling();
	void DoKismetAttachment();
	void SpawnedByKismet();
	void STATIC_IsStationary();
	void STATIC_GetCollisionExtent();
	void STATIC_GetCollisionHeight();
	void STATIC_GetCollisionRadius();
	void CheatFly();
	void CheatGhost();
	void CheatWalk();
	void STATIC_PlayWeaponSwitch();
	void STATIC_SetActiveWeapon();
	void TossInventory();
	void ThrowActiveWeapon();
	void DrawHUD();
	void FindInventoryType();
	void CreateInventory();
	void AddDefaultInventory();
	void StopDriving();
	void StartDriving();
	void CanThrowWeapon();
	void Suicide();
	void STATIC_GetVehicleBase();
	void STATIC_PlayLanded();
	void CannotJumpNow();
	void PlayFootStepSound();
	void TornOff();
	void STATIC_PlayDying();
	void STATIC_SetDyingPhysics();
	void TurnOff();
	void STATIC_PlayHit();
	void STATIC_PlayDyingSound();
	void DoJump();
	void CheckWaterJump();
	void TakeDrowningDamage();
	void BreathTimer();
	void TouchingWaterVolume();
	void HeadVolumeChange();
	void TickSpecial();
	void Landed();
	void Falling();
	void DelayTriggerDeath();
	void Died();
	void ThrowWeaponOnDeath();
	void IsSameTeam();
	void STATIC_GetTeam();
	void STATIC_GetTeamNum();
	void TakeDamage();
	void STATIC_SetKillInstigator();
	void STATIC_NotifyTakeHit();
	void TakeRadiusDamageOnBones();
	void STATIC_PruneDamagedBoneList();
	void HealDamage();
	void AdjustDamage();
	void STATIC_SetMovementPhysics();
	void STATIC_Gasp();
	void STATIC_OnGiveInventory();
	void STATIC_OnAssignController();
	void ReceivedNewEvent();
	void STATIC_SpawnDefaultController();
	void PostBeginPlay();
	void PreBeginPlay();
	void Destroyed();
	void DetachFromController();
	void CrushedBy();
	void CanBeBaseForPawn();
	void BaseChange();
	void StuckOnPawn();
	void STATIC_JumpOffPawn();
	void STATIC_gibbedBy();
	void EncroachedBy();
	void EncroachingOn();
	void STATIC_FaceRotation();
	void UpdatePawnRotation();
	void ClientSetRotation();
	void ClientRestart();
	void STATIC_Restart();
	void TakeFallingDamage();
	void STATIC_KilledBy();
	void AddVelocity();
	void STATIC_HandleMomentum();
	void StartCrouch();
	void EndCrouch();
	void STATIC_ShouldCrouch();
	void UnCrouch();
	void OutsideWorldBounds();
	void FellOutOfWorld();
	void ClientMessage();
	void STATIC_HandlePickup();
	void STATIC_LineOfSightTo();
	void STATIC_SetMoveTarget();
	void STATIC_InGodMode();
	void STATIC_SetViewRotation();
	void STATIC_GetAdjustedAimFor();
	void InFreeCam();
	void GetBaseAimRotation();
	void GetWeaponStartTraceLocation();
	void GetPawnViewLocation();
	void GetViewRotation();
	void GetActorEyesViewPoint();
	void STATIC_ProcessViewRotation();
	void STATIC_IsFirstPerson();
	void STATIC_IsPlayerPawn();
	void STATIC_IsLocallyControlled();
	void STATIC_IsHumanControlled();
	void DisplayDebug();
	void ClimbLadder();
	void EndClimbLadder();
	void CanSplash();
	void SetWalking();
	void STATIC_RangedAttackTime();
	void STATIC_RecommendLongRangedAttack();
	void CanGrabLadder();
	void DropToGround();
	void STATIC_GetDefaultCameraMode();
	void UnPossessed();
	void UpdateControllerOnPossess();
	void STATIC_PossessedBy();
	void STATIC_NotifyTeamChanged();
	void STATIC_PlayTeleportEffect();
	void STATIC_GetHumanReadableName();
	void STATIC_NeedToTurn();
	void IsFiring();
	void STATIC_HasRangedAttack();
	void STATIC_FireOnRelease();
	void TooCloseToAttack();
	void CanAttack();
	void BotFire();
	void WeaponStoppedFiring();
	void WeaponFired();
	void STATIC_FlashLocationUpdated();
	void ClearFlashLocation();
	void STATIC_SetFlashLocation();
	void ClearFlashCount();
	void STATIC_FlashCountUpdated();
	void STATIC_IncrementFlashCount();
	void STATIC_FiringModeUpdated();
	void STATIC_SetFiringMode();
	void STATIC_GetWeaponFiringMode();
	void StopFire();
	void STATIC_StartFire();
	void StopFiring();
	void STATIC_Reset();
	void STATIC_PlayerChangedTeam();
	void STATIC_SetBaseEyeheight();
	void SpecialMoveThruEdge();
	void STATIC_SpecialMoveTo();
	void TermRagdoll();
	void STATIC_InitRagdoll();
	void STATIC_GetBoundingCylinder();
	void STATIC_ReachedDesiredRotation();
	void STATIC_SetPushesRigidBodies();
	void STATIC_ForceCrouch();
	void STATIC_ReachedPoint();
	void ReachedDestination();
	void STATIC_GetBestAnchor();
	void STATIC_SetAnchor();
	void STATIC_SetRemoteViewPitch();
	void STATIC_IsInvisible();
	void STATIC_IsValidEnemyTargetFor();
	void STATIC_GetFallDuration();
	void SuggestJumpVelocity();
	void ValidAnchor();
	void AdjustDestination();
	void STATIC_IsAliveAndWell();
	void ReplicatedEvent();
	void SetSkelControlScale();
	void SetMorphWeight();
	void GetActorFaceFXAsset();
	void STATIC_FaceFXAudioFinished();
	void STATIC_OnPlayFaceFXAnim();
	void CanActorPlayFaceFXAnim();
	void STATIC_IsActorPlayingFaceFXAnim();
	void GetFaceFXAudioComponent();
	void StopActorFaceFXAnim();
	void PlayActorFaceFXAnim();
	void MAT_FinishAIGroup();
	void MAT_BeginAIGroup();
	void STATIC_FinishAIGroup();
	void BeginAIGroup();
	void InterpolationFinished();
	void InterpolationStarted();
	void STATIC_MAT_SetAnimNodeBlendWeight();
	void STATIC_MAT_SetSkelControlStrength();
	void STATIC_MAT_SetSkelControlScale();
	void STATIC_MAT_SetMorphWeight();
	void STATIC_MAT_SetAnimWeights();
	void STATIC_MAT_SetAnimPosition();
	void SetAnimPosition();
	void STATIC_MAT_FinishAnimControl();
	void FinishAnimControl();
	void STATIC_MAT_BeginAnimControl();
	void BeginAnimControl();
	void RestoreAnimSetsToDefault();
	void AnimSetListUpdated();
	void AddAnimSets();
	void BuildScriptAnimSetList();
	void UpdateAnimSetList();
	void ClearAnimNodes();
	void CacheAnimNodes();
	void PostInitAnimTree();
	void STATIC_IsDesiredRotationLocked();
	void STATIC_IsDesiredRotationInUse();
	void CheckDesiredRotation();
	void STATIC_ResetDesiredRotation();
	void STATIC_LockDesiredRotation();
	void STATIC_SetDesiredRotation();
	void STATIC_PickWallAdjust();
};


// Class Engine.Vehicle
// 0x0080 (0x0608 - 0x0588)
class AVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0588(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Vehicle");
		return ptr;
	}


	void ZeroMovementVariables();
	void STATIC_NotifyDriverTakeHit();
	void ReplicatedEvent();
	void DrivingStatusChanged();
	void STATIC_SetDriving();
	void GetEntryLocation();
	void CrushedBy();
	void STATIC_PancakeOther();
	void EncroachingOn();
	void STATIC_GetCollisionDamageInstigator();
	void EncroachedBy();
	void STATIC_FaceRotation();
	void STATIC_GetDefaultCameraMode();
	void STATIC_PlayDying();
	void DriverDied();
	void Died();
	void ThrowActiveWeapon();
	void AdjustDriverDamage();
	void TakeDamage();
	void STATIC_SetKillInstigator();
	void UnPossessed();
	void TryExitPos();
	void STATIC_FindAutoExit();
	void STATIC_PlaceExitingDriver();
	void DriverLeft();
	void STATIC_SetInputs();
	void DriverLeave();
	void STATIC_GetExitRotation();
	void ContinueOnFoot();
	void DetachDriver();
	void AttachDriver();
	void EntryAnnouncement();
	void STATIC_PossessedBy();
	void DriverEnter();
	void TryToDrive();
	void AnySeatAvailable();
	void CanEnterVehicle();
	void Destroyed_HandleDriver();
	void Destroyed();
	void CheatFly();
	void CheatGhost();
	void CheatWalk();
	void PostBeginPlay();
	void STATIC_SetBaseEyeheight();
	void STATIC_PlayerChangedTeam();
	void DriverRadiusDamage();
	void TakeRadiusDamage();
	void STATIC_GetTargetLocation();
	void STATIC_GetMaxRiseForce();
	void Suicide();
	void DisplayDebug();
	void STATIC_NotifyTeamChanged();
};


// Class Engine.SVehicle
// 0x0140 (0x0748 - 0x0608)
class ASVehicle : public AVehicle
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0608(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicle");
		return ptr;
	}


	void STATIC_GetSVehicleDebug();
	void STATIC_HermiteEval();
	void DisplayWheelsDebug();
	void DisplayDebug();
	void STATIC_PostTeleport();
	void SuspensionHeavyShift();
	void RigidBodyCollision();
	void DrivingStatusChanged();
	void VehiclePlayExitSound();
	void VehiclePlayEnterSound();
	void StopEngineSoundTimed();
	void StopEngineSound();
	void STATIC_StartEngineSoundTimed();
	void STATIC_StartEngineSound();
	void STATIC_HasWheelsOnGround();
	void TryToDrive();
	void STATIC_GetDefaultCameraMode();
	void CalcCamera();
	void Died();
	void AddVelocity();
	void STATIC_InitVehicleRagdoll();
	void TakeRadiusDamage();
	void StopVehicleSounds();
	void TurnOff();
	void Destroyed();
	void PostInitAnimTree();
	void PostBeginPlay();
	void STATIC_SetWheelCollision();
	void STATIC_IsSleeping();
	void AddTorque();
	void AddImpulse();
	void AddForce();
};


// Class Engine.RB_ConstraintActor
// 0x0034 (0x02A8 - 0x0274)
class ARB_ConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0274(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintActor");
		return ptr;
	}


	void STATIC_OnToggleConstraintDrive();
	void STATIC_OnToggle();
	void STATIC_OnDestroy();
	void TermConstraint();
	void STATIC_InitConstraint();
	void STATIC_SetDisableCollision();
};


// Class Engine.RB_LineImpulseActor
// 0x0015 (0x0289 - 0x0274)
class ARB_LineImpulseActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x15];                                      // 0x0274(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_LineImpulseActor");
		return ptr;
	}


	void ReplicatedEvent();
	void STATIC_OnToggle();
	void STATIC_FireLineImpulse();
};


// Class Engine.RB_RadialImpulseActor
// 0x0011 (0x0285 - 0x0274)
class ARB_RadialImpulseActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0274(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialImpulseActor");
		return ptr;
	}


	void ReplicatedEvent();
	void STATIC_OnToggle();
};


// Class Engine.RB_Thruster
// 0x0008 (0x027C - 0x0274)
class ARB_Thruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Thruster");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.WorldAttractor
// 0x00F0 (0x0364 - 0x0274)
class AWorldAttractor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0274(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldAttractor");
		return ptr;
	}


	void STATIC_OnSetWorldAttractorParam();
};


// Class Engine.RB_ConstraintDrawComponent
// 0x0008 (0x028C - 0x0284)
class URB_ConstraintDrawComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0284(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintDrawComponent");
		return ptr;
	}

};


// Class Engine.RB_RadialImpulseComponent
// 0x0018 (0x029C - 0x0284)
class URB_RadialImpulseComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0284(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialImpulseComponent");
		return ptr;
	}


	void STATIC_FireImpulse();
};


// Class Engine.RB_Handle
// 0x0074 (0x00F8 - 0x0084)
class URB_Handle : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0084(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Handle");
		return ptr;
	}


	void STATIC_GetOrientation();
	void STATIC_SetOrientation();
	void UpdateSmoothLocation();
	void STATIC_SetSmoothLocation();
	void STATIC_SetLocation();
	void STATIC_ReleaseComponent();
	void STATIC_GrabComponent();
};


// Class Engine.RB_Spring
// 0x0060 (0x00E4 - 0x0084)
class URB_Spring : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0084(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Spring");
		return ptr;
	}


	void Clear();
	void STATIC_SetComponents();
};


// Class Engine.SVehicleSimBase
// 0x0038 (0x00BC - 0x0084)
class USVehicleSimBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0084(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimBase");
		return ptr;
	}

};


// Class Engine.SVehicleSimCar
// 0x0038 (0x00F4 - 0x00BC)
class USVehicleSimCar : public USVehicleSimBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00BC(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimCar");
		return ptr;
	}

};


// Class Engine.SVehicleSimTank
// 0x0030 (0x0124 - 0x00F4)
class USVehicleSimTank : public USVehicleSimCar
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F4(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimTank");
		return ptr;
	}

};


// Class Engine.ActorFactoryApexClothing
// 0x0018 (0x00C4 - 0x00AC)
class UActorFactoryApexClothing : public UActorFactorySkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00AC(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryApexClothing");
		return ptr;
	}

};


// Class Engine.ApexDestructibleDamageParameters
// 0x0010 (0x0068 - 0x0058)
class UApexDestructibleDamageParameters : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleDamageParameters");
		return ptr;
	}

};


// Class Engine.FractureMaterial
// 0x0010 (0x0068 - 0x0058)
class UFractureMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FractureMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0084 (0x00DC - 0x0058)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0058(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}


	void STATIC_GetPhysicalMaterialProperty();
	void STATIC_FindFractureSounds();
	void STATIC_FindPhysEffectInfo();
};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0058 - 0x0058)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x0088 (0x00E0 - 0x0058)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0058(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}


	void STATIC_FindBodyIndex();
};


// Class Engine.PhysicsAssetInstance
// 0x0090 (0x00E8 - 0x0058)
class UPhysicsAssetInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0058(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAssetInstance");
		return ptr;
	}


	void STATIC_FindConstraintInstance();
	void STATIC_FindBodyInstance();
	void STATIC_SetFullAnimWeightBonesFixed();
	void STATIC_SetFullAnimWeightBlockRigidBody();
	void STATIC_SetNamedBodiesBlockRigidBody();
	void STATIC_SetNamedRBBoneSprings();
	void STATIC_SetNamedMotorsAngularVelocityDrive();
	void STATIC_SetNamedMotorsAngularPositionDrive();
	void STATIC_SetAllMotorsAngularDriveParams();
	void STATIC_SetAllMotorsAngularVelocityDrive();
	void STATIC_SetAllMotorsAngularPositionDrive();
	void STATIC_ForceAllBodiesBelowUnfixed();
	void STATIC_SetNamedBodiesFixed();
	void STATIC_SetAllBodiesFixed();
	void STATIC_GetTotalMassBelowBone();
	void STATIC_SetAngularDriveScale();
	void STATIC_SetLinearDriveScale();
};


// Class Engine.PhysicsLODVerticalEmitter
// 0x0004 (0x005C - 0x0058)
class UPhysicsLODVerticalEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsLODVerticalEmitter");
		return ptr;
	}

};


// Class Engine.RB_BodyInstance
// 0x0074 (0x00CC - 0x0058)
class URB_BodyInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0058(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BodyInstance");
		return ptr;
	}


	void UpdateDampingProperties();
	void UpdateMassProperties();
	void STATIC_SetContactReportForceThreshold();
	void EnableCollisionResponse();
	void STATIC_SetPhysMaterialOverride();
	void STATIC_SetBlockRigidBody();
	void STATIC_SetBoneSpringTarget();
	void STATIC_SetBoneSpringParams();
	void EnableBoneSpring();
	void STATIC_GetUnrealWorldVelocityAtPoint();
	void STATIC_GetUnrealWorldAngularVelocity();
	void STATIC_GetUnrealWorldVelocity();
	void STATIC_GetUnrealWorldTM();
	void STATIC_GetPhysicsAssetInstance();
	void STATIC_IsValidBodyInstance();
	void STATIC_IsFixed();
	void STATIC_SetFixed();
	void STATIC_GetBodyMass();
};


// Class Engine.RB_ConstraintInstance
// 0x0078 (0x00D0 - 0x0058)
class URB_ConstraintInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0058(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintInstance");
		return ptr;
	}


	void STATIC_MoveKinActorTransform();
	void STATIC_SetLinearLimitSize();
	void STATIC_SetAngularDOFLimitScale();
	void STATIC_SetAngularDriveParams();
	void STATIC_SetAngularVelocityTarget();
	void STATIC_SetAngularPositionTarget();
	void STATIC_SetLinearDriveParams();
	void STATIC_SetLinearVelocityTarget();
	void STATIC_SetLinearPositionTarget();
	void STATIC_SetAngularVelocityDrive();
	void STATIC_SetAngularPositionDrive();
	void STATIC_SetLinearVelocityDrive();
	void STATIC_SetLinearPositionDrive();
	void STATIC_GetConstraintLocation();
	void STATIC_GetPhysicsAssetInstance();
	void TermConstraint();
	void STATIC_InitConstraint();
};


// Class Engine.RB_ConstraintSetup
// 0x00C4 (0x011C - 0x0058)
class URB_ConstraintSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0058(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintSetup");
		return ptr;
	}

};


// Class Engine.RB_BSJointSetup
// 0x0000 (0x011C - 0x011C)
class URB_BSJointSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BSJointSetup");
		return ptr;
	}

};


// Class Engine.RB_DistanceJointSetup
// 0x0000 (0x011C - 0x011C)
class URB_DistanceJointSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_DistanceJointSetup");
		return ptr;
	}

};


// Class Engine.RB_HingeSetup
// 0x0000 (0x011C - 0x011C)
class URB_HingeSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_HingeSetup");
		return ptr;
	}

};


// Class Engine.RB_PrismaticSetup
// 0x0000 (0x011C - 0x011C)
class URB_PrismaticSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PrismaticSetup");
		return ptr;
	}

};


// Class Engine.RB_PulleyJointSetup
// 0x0000 (0x011C - 0x011C)
class URB_PulleyJointSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PulleyJointSetup");
		return ptr;
	}

};


// Class Engine.RB_SkelJointSetup
// 0x0000 (0x011C - 0x011C)
class URB_SkelJointSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_SkelJointSetup");
		return ptr;
	}

};


// Class Engine.RB_StayUprightSetup
// 0x0000 (0x011C - 0x011C)
class URB_StayUprightSetup : public URB_ConstraintSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_StayUprightSetup");
		return ptr;
	}

};


// Class Engine.SVehicleWheel
// 0x00E0 (0x0148 - 0x0068)
class USVehicleWheel : public UComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0068(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleWheel");
		return ptr;
	}

};


// Class Engine.NxGenericForceFieldBrush
// 0x00E0 (0x0390 - 0x02B0)
class ANxGenericForceFieldBrush : public AVolume
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x02B0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldBrush");
		return ptr;
	}


	void StopsProjectile();
	void PostBeginPlay();
};


// Class Engine.RB_ForceFieldExcludeVolume
// 0x0008 (0x02B8 - 0x02B0)
class ARB_ForceFieldExcludeVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ForceFieldExcludeVolume");
		return ptr;
	}

};


// Class Engine.NxForceField
// 0x0054 (0x02C8 - 0x0274)
class ANxForceField : public AActor
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0274(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceField");
		return ptr;
	}


	void STATIC_OnToggle();
	void DoInitRBPhys();
};


// Class Engine.NxCylindricalForceField
// 0x0030 (0x02F8 - 0x02C8)
class ANxCylindricalForceField : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxCylindricalForceField");
		return ptr;
	}

};


// Class Engine.NxCylindricalForceFieldCapsule
// 0x0008 (0x0300 - 0x02F8)
class ANxCylindricalForceFieldCapsule : public ANxCylindricalForceField
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxCylindricalForceFieldCapsule");
		return ptr;
	}


	void DoInitRBPhys();
};


// Class Engine.NxForceFieldGeneric
// 0x00BC (0x0384 - 0x02C8)
class ANxForceFieldGeneric : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0xBC];                                      // 0x02C8(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldGeneric");
		return ptr;
	}


	void DoInitRBPhys();
};


// Class Engine.NxForceFieldRadial
// 0x0028 (0x02F0 - 0x02C8)
class ANxForceFieldRadial : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldRadial");
		return ptr;
	}


	void DoInitRBPhys();
};


// Class Engine.NxForceFieldTornado
// 0x0044 (0x030C - 0x02C8)
class ANxForceFieldTornado : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x02C8(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldTornado");
		return ptr;
	}


	void DoInitRBPhys();
};


// Class Engine.NxGenericForceField
// 0x00A0 (0x0368 - 0x02C8)
class ANxGenericForceField : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02C8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceField");
		return ptr;
	}

};


// Class Engine.NxGenericForceFieldBox
// 0x0014 (0x037C - 0x0368)
class ANxGenericForceFieldBox : public ANxGenericForceField
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0368(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldBox");
		return ptr;
	}


	void DoInitRBPhys();
};


// Class Engine.NxGenericForceFieldCapsule
// 0x0010 (0x0378 - 0x0368)
class ANxGenericForceFieldCapsule : public ANxGenericForceField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxRadialForceField
// 0x001C (0x02E4 - 0x02C8)
class ANxRadialForceField : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02C8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxRadialForceField");
		return ptr;
	}

};


// Class Engine.NxRadialCustomForceField
// 0x000C (0x02F0 - 0x02E4)
class ANxRadialCustomForceField : public ANxRadialForceField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxRadialCustomForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoAngularForceField
// 0x0034 (0x02FC - 0x02C8)
class ANxTornadoAngularForceField : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x02C8(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoAngularForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoAngularForceFieldCapsule
// 0x0008 (0x0304 - 0x02FC)
class ANxTornadoAngularForceFieldCapsule : public ANxTornadoAngularForceField
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02FC(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoAngularForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxTornadoForceField
// 0x0030 (0x02F8 - 0x02C8)
class ANxTornadoForceField : public ANxForceField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoForceFieldCapsule
// 0x0008 (0x0300 - 0x02F8)
class ANxTornadoForceFieldCapsule : public ANxTornadoForceField
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxForceFieldSpawnable
// 0x0008 (0x027C - 0x0274)
class ANxForceFieldSpawnable : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldSpawnable");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.RB_CylindricalForceActor
// 0x0034 (0x02A8 - 0x0274)
class ARB_CylindricalForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0274(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_CylindricalForceActor");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.RB_RadialForceActor
// 0x0024 (0x0298 - 0x0274)
class ARB_RadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0274(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialForceActor");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.NxForceFieldComponent
// 0x0080 (0x0304 - 0x0284)
class UNxForceFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0284(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldComponent");
		return ptr;
	}


	void DoInitRBPhys();
	void OnForceFieldDestroy();
};


// Class Engine.NxForceFieldCylindricalComponent
// 0x0030 (0x0334 - 0x0304)
class UNxForceFieldCylindricalComponent : public UNxForceFieldComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0304(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldCylindricalComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldGenericComponent
// 0x00AC (0x03B0 - 0x0304)
class UNxForceFieldGenericComponent : public UNxForceFieldComponent
{
public:
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0304(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldGenericComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldRadialComponent
// 0x0018 (0x031C - 0x0304)
class UNxForceFieldRadialComponent : public UNxForceFieldComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0304(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldRadialComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldTornadoComponent
// 0x0034 (0x0338 - 0x0304)
class UNxForceFieldTornadoComponent : public UNxForceFieldComponent
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0304(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldTornadoComponent");
		return ptr;
	}

};


// Class Engine.ForceFieldShape
// 0x0000 (0x0058 - 0x0058)
class UForceFieldShape : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShape");
		return ptr;
	}


	void GetDrawComponent();
	void FillByCylinder();
	void FillByCapsule();
	void FillByBox();
	void FillBySphere();
};


// Class Engine.ForceFieldShapeBox
// 0x0008 (0x0060 - 0x0058)
class UForceFieldShapeBox : public UForceFieldShape
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeBox");
		return ptr;
	}


	void GetDrawComponent();
	void FillByCylinder();
	void FillByCapsule();
	void FillByBox();
	void FillBySphere();
	void GetRadii();
};


// Class Engine.ForceFieldShapeCapsule
// 0x0008 (0x0060 - 0x0058)
class UForceFieldShapeCapsule : public UForceFieldShape
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeCapsule");
		return ptr;
	}


	void GetDrawComponent();
	void FillByCylinder();
	void FillByCapsule();
	void FillByBox();
	void FillBySphere();
	void GetRadius();
	void GetHeight();
};


// Class Engine.ForceFieldShapeSphere
// 0x0008 (0x0060 - 0x0058)
class UForceFieldShapeSphere : public UForceFieldShape
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeSphere");
		return ptr;
	}


	void GetDrawComponent();
	void FillByCylinder();
	void FillByCapsule();
	void FillByBox();
	void FillBySphere();
	void GetRadius();
};


// Class Engine.PrefabInstance
// 0x00EC (0x0360 - 0x0274)
class APrefabInstance : public AActor
{
public:
	unsigned char                                      UnknownData00[0xEC];                                      // 0x0274(0x00EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabInstance");
		return ptr;
	}

};


// Class Engine.Prefab
// 0x0034 (0x008C - 0x0058)
class UPrefab : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0058(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Prefab");
		return ptr;
	}

};


// Class Engine.SequenceObject
// 0x006C (0x00C4 - 0x0058)
class USequenceObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0058(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceObject");
		return ptr;
	}


	void GetObjClassVersion();
	void ShouldClearNameOnPasting();
	void IsPastingIntoLevelSequenceAllowed();
	void IsValidLevelSequenceObject();
	void STATIC_GetWorldInfo();
	void ScriptLog();
};


// Class Engine.SequenceFrame
// 0x0028 (0x00EC - 0x00C4)
class USequenceFrame : public USequenceObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C4(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceFrame");
		return ptr;
	}

};


// Class Engine.SequenceFrameWrapped
// 0x0000 (0x00EC - 0x00EC)
class USequenceFrameWrapped : public USequenceFrame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceFrameWrapped");
		return ptr;
	}

};


// Class Engine.SequenceOp
// 0x0068 (0x012C - 0x00C4)
class USequenceOp : public USequenceObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C4(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceOp");
		return ptr;
	}


	void STATIC_ForceActivateOutput();
	void STATIC_ForceActivateInput();
	void STATIC_GetController();
	void STATIC_GetPawn();
	void STATIC_Reset();
	void STATIC_PublishLinkedVariableValues();
	void STATIC_PopulateLinkedVariableValues();
	void VersionUpdated();
	void Deactivated();
	void Activated();
	void ActivateNamedOutputLink();
	void ActivateOutputLink();
	void STATIC_LinkedVariables();
	void STATIC_GetBoolVars();
	void STATIC_GetInterpDataVars();
	void STATIC_GetObjectVars();
	void STATIC_GetLinkedObjects();
	void STATIC_HasLinkedOps();
};


// Class Engine.Sequence
// 0x0088 (0x01B4 - 0x012C)
class USequence : public USequenceOp
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x012C(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Sequence");
		return ptr;
	}


	void SetEnabled();
	void STATIC_Reset();
	void STATIC_FindSeqObjectsByName();
	void STATIC_FindSeqObjectsByClass();
};


// Class Engine.PrefabSequence
// 0x0008 (0x01BC - 0x01B4)
class UPrefabSequence : public USequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B4(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabSequence");
		return ptr;
	}


	void STATIC_GetOwnerPrefab();
	void STATIC_SetOwnerPrefab();
};


// Class Engine.PrefabSequenceContainer
// 0x0000 (0x01B4 - 0x01B4)
class UPrefabSequenceContainer : public USequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabSequenceContainer");
		return ptr;
	}

};


// Class Engine.SequenceAction
// 0x002C (0x0158 - 0x012C)
class USequenceAction : public USequenceOp
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x012C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceAction");
		return ptr;
	}

};


// Class Engine.SeqAct_ActivateRemoteEvent
// 0x0014 (0x016C - 0x0158)
class USeqAct_ActivateRemoteEvent : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActivateRemoteEvent");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_AndGate
// 0x0024 (0x017C - 0x0158)
class USeqAct_AndGate : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0158(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AndGate");
		return ptr;
	}

};


// Class Engine.SeqAct_ApplySoundNode
// 0x0010 (0x0168 - 0x0158)
class USeqAct_ApplySoundNode : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ApplySoundNode");
		return ptr;
	}

};


// Class Engine.SeqAct_AttachToEvent
// 0x0004 (0x015C - 0x0158)
class USeqAct_AttachToEvent : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AttachToEvent");
		return ptr;
	}

};


// Class Engine.SeqAct_CameraFade
// 0x002C (0x0184 - 0x0158)
class USeqAct_CameraFade : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0158(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraFade");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_CameraLookAt
// 0x0038 (0x0190 - 0x0158)
class USeqAct_CameraLookAt : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0158(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraLookAt");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_CameraShake
// 0x0028 (0x0180 - 0x0158)
class USeqAct_CameraShake : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0158(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraShake");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_ChangeCollision
// 0x0005 (0x015D - 0x0158)
class USeqAct_ChangeCollision : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0158(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ChangeCollision");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_CommitMapChange
// 0x0000 (0x0158 - 0x0158)
class USeqAct_CommitMapChange : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CommitMapChange");
		return ptr;
	}

};


// Class Engine.SeqAct_ConvertToString
// 0x0018 (0x0170 - 0x0158)
class USeqAct_ConvertToString : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ConvertToString");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_DrawText
// 0x0048 (0x01A0 - 0x0158)
class USeqAct_DrawText : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0158(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DrawText");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_FinishSequence
// 0x0010 (0x0168 - 0x0158)
class USeqAct_FinishSequence : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FinishSequence");
		return ptr;
	}

};


// Class Engine.SeqAct_Gate
// 0x000C (0x0164 - 0x0158)
class USeqAct_Gate : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Gate");
		return ptr;
	}

};


// Class Engine.SeqAct_GetDistance
// 0x0004 (0x015C - 0x0158)
class USeqAct_GetDistance : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetDistance");
		return ptr;
	}

};


// Class Engine.SeqAct_GetLocationAndRotation
// 0x002C (0x0184 - 0x0158)
class USeqAct_GetLocationAndRotation : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0158(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetLocationAndRotation");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_GetProperty
// 0x0008 (0x0160 - 0x0158)
class USeqAct_GetProperty : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetProperty");
		return ptr;
	}

};


// Class Engine.SeqAct_GetVectorComponents
// 0x0018 (0x0170 - 0x0158)
class USeqAct_GetVectorComponents : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetVectorComponents");
		return ptr;
	}

};


// Class Engine.SeqAct_GetVelocity
// 0x0010 (0x0168 - 0x0158)
class USeqAct_GetVelocity : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetVelocity");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_HeadTrackingControl
// 0x009C (0x01F4 - 0x0158)
class USeqAct_HeadTrackingControl : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0158(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_HeadTrackingControl");
		return ptr;
	}


	void Activated();
	void GetObjClassVersion();
};


// Class Engine.SeqAct_IsInObjectList
// 0x0004 (0x015C - 0x0158)
class USeqAct_IsInObjectList : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_IsInObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_Latent
// 0x0018 (0x0170 - 0x0158)
class USeqAct_Latent : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Latent");
		return ptr;
	}


	void Update();
	void AbortFor();
};


// Class Engine.SeqAct_ActorFactory
// 0x0058 (0x01C8 - 0x0170)
class USeqAct_ActorFactory : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0170(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActorFactory");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_ActorFactoryEx
// 0x0000 (0x01C8 - 0x01C8)
class USeqAct_ActorFactoryEx : public USeqAct_ActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActorFactoryEx");
		return ptr;
	}

};


// Class Engine.SeqAct_ProjectileFactory
// 0x0018 (0x01E0 - 0x01C8)
class USeqAct_ProjectileFactory : public USeqAct_ActorFactory
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ProjectileFactory");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_AIMoveToActor
// 0x0024 (0x0194 - 0x0170)
class USeqAct_AIMoveToActor : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0170(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AIMoveToActor");
		return ptr;
	}


	void STATIC_PickDestination();
	void GetObjClassVersion();
};


// Class Engine.SeqAct_Delay
// 0x0014 (0x0184 - 0x0170)
class USeqAct_Delay : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0170(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Delay");
		return ptr;
	}


	void STATIC_ResetDelayActive();
	void STATIC_Reset();
};


// Class Engine.SeqAct_DelaySwitch
// 0x0010 (0x0180 - 0x0170)
class USeqAct_DelaySwitch : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DelaySwitch");
		return ptr;
	}

};


// Class Engine.SeqAct_ForceGarbageCollection
// 0x0000 (0x0170 - 0x0170)
class USeqAct_ForceGarbageCollection : public USeqAct_Latent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ForceGarbageCollection");
		return ptr;
	}

};


// Class Engine.SeqAct_Interp
// 0x00FC (0x026C - 0x0170)
class USeqAct_Interp : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0170(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Interp");
		return ptr;
	}


	void GetObjClassVersion();
	void STATIC_Reset();
	void AddPlayerToDirectorTracks();
	void Stop();
	void STATIC_SetPosition();
};


// Class Engine.SeqAct_LevelStreamingBase
// 0x0004 (0x0174 - 0x0170)
class USeqAct_LevelStreamingBase : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0170(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelStreamingBase");
		return ptr;
	}

};


// Class Engine.SeqAct_LevelStreaming
// 0x0014 (0x0188 - 0x0174)
class USeqAct_LevelStreaming : public USeqAct_LevelStreamingBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0174(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelStreaming");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiLevelStreaming
// 0x0014 (0x0188 - 0x0174)
class USeqAct_MultiLevelStreaming : public USeqAct_LevelStreamingBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0174(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiLevelStreaming");
		return ptr;
	}

};


// Class Engine.SeqAct_LevelVisibility
// 0x0014 (0x0184 - 0x0170)
class USeqAct_LevelVisibility : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0170(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelVisibility");
		return ptr;
	}

};


// Class Engine.SeqAct_PlaySound
// 0x0028 (0x0198 - 0x0170)
class USeqAct_PlaySound : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0170(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlaySound");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_PrepareMapChange
// 0x001C (0x018C - 0x0170)
class USeqAct_PrepareMapChange : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0170(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PrepareMapChange");
		return ptr;
	}

};


// Class Engine.SeqAct_SetDOFParams
// 0x0058 (0x01C8 - 0x0170)
class USeqAct_SetDOFParams : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0170(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetDOFParams");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMotionBlurParams
// 0x0010 (0x0180 - 0x0170)
class USeqAct_SetMotionBlurParams : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMotionBlurParams");
		return ptr;
	}

};


// Class Engine.SeqAct_StreamInTextures
// 0x003C (0x01AC - 0x0170)
class USeqAct_StreamInTextures : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0170(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_StreamInTextures");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_WaitForLevelsVisible
// 0x0014 (0x0184 - 0x0170)
class USeqAct_WaitForLevelsVisible : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0170(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_WaitForLevelsVisible");
		return ptr;
	}


	void Activated();
	void CheckLevelsVisible();
};


// Class Engine.SeqAct_Log
// 0x0024 (0x017C - 0x0158)
class USeqAct_Log : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0158(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Log");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_FeatureTest
// 0x0028 (0x01A4 - 0x017C)
class USeqAct_FeatureTest : public USeqAct_Log
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x017C(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FeatureTest");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyCover
// 0x0018 (0x0170 - 0x0158)
class USeqAct_ModifyCover : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyCover");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyHealth
// 0x0020 (0x0178 - 0x0158)
class USeqAct_ModifyHealth : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyHealth");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_ParticleEventGenerator
// 0x0050 (0x01A8 - 0x0158)
class USeqAct_ParticleEventGenerator : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0158(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ParticleEventGenerator");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_PlayCameraAnim
// 0x0028 (0x0180 - 0x0158)
class USeqAct_PlayCameraAnim : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0158(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayCameraAnim");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_PlayFaceFXAnim
// 0x0038 (0x0190 - 0x0158)
class USeqAct_PlayFaceFXAnim : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0158(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayFaceFXAnim");
		return ptr;
	}

};


// Class Engine.SeqAct_PlayMusicTrack
// 0x002C (0x0184 - 0x0158)
class USeqAct_PlayMusicTrack : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0158(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayMusicTrack");
		return ptr;
	}

};


// Class Engine.SeqAct_Possess
// 0x000C (0x0164 - 0x0158)
class USeqAct_Possess : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Possess");
		return ptr;
	}

};


// Class Engine.SeqAct_RangeSwitch
// 0x0010 (0x0168 - 0x0158)
class USeqAct_RangeSwitch : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_RangeSwitch");
		return ptr;
	}

};


// Class Engine.SeqAct_SetActiveAnimChild
// 0x0010 (0x0168 - 0x0158)
class USeqAct_SetActiveAnimChild : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetActiveAnimChild");
		return ptr;
	}

};


// Class Engine.SeqAct_SetApexClothingParam
// 0x0004 (0x015C - 0x0158)
class USeqAct_SetApexClothingParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetApexClothingParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetBlockRigidBody
// 0x0000 (0x0158 - 0x0158)
class USeqAct_SetBlockRigidBody : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetBlockRigidBody");
		return ptr;
	}

};


// Class Engine.SeqAct_SetCameraTarget
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetCameraTarget : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetCameraTarget");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetMaterial
// 0x000C (0x0164 - 0x0158)
class USeqAct_SetMaterial : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMaterial");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMatInstScalarParam
// 0x0014 (0x016C - 0x0158)
class USeqAct_SetMatInstScalarParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstScalarParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMesh
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetMesh : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMesh");
		return ptr;
	}

};


// Class Engine.SeqAct_SetPhysics
// 0x0001 (0x0159 - 0x0158)
class USeqAct_SetPhysics : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0158(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetPhysics");
		return ptr;
	}

};


// Class Engine.SeqAct_SetRigidBodyIgnoreVehicles
// 0x0000 (0x0158 - 0x0158)
class USeqAct_SetRigidBodyIgnoreVehicles : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetRigidBodyIgnoreVehicles");
		return ptr;
	}

};


// Class Engine.SeqAct_SetSequenceVariable
// 0x0000 (0x0158 - 0x0158)
class USeqAct_SetSequenceVariable : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSequenceVariable");
		return ptr;
	}

};


// Class Engine.SeqAct_AccessObjectList
// 0x000C (0x0164 - 0x0158)
class USeqAct_AccessObjectList : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AccessObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_AddFloat
// 0x0010 (0x0168 - 0x0158)
class USeqAct_AddFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_AddInt
// 0x0010 (0x0168 - 0x0158)
class USeqAct_AddInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddInt");
		return ptr;
	}

};


// Class Engine.SeqAct_CastToFloat
// 0x0008 (0x0160 - 0x0158)
class USeqAct_CastToFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CastToFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_CastToInt
// 0x000C (0x0164 - 0x0158)
class USeqAct_CastToInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CastToInt");
		return ptr;
	}

};


// Class Engine.SeqAct_DivideFloat
// 0x0010 (0x0168 - 0x0158)
class USeqAct_DivideFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DivideFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_DivideInt
// 0x0010 (0x0168 - 0x0158)
class USeqAct_DivideInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DivideInt");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyObjectList
// 0x0004 (0x015C - 0x0158)
class USeqAct_ModifyObjectList : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiplyFloat
// 0x0010 (0x0168 - 0x0158)
class USeqAct_MultiplyFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiplyFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiplyInt
// 0x0010 (0x0168 - 0x0158)
class USeqAct_MultiplyInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiplyInt");
		return ptr;
	}

};


// Class Engine.SeqAct_SetBool
// 0x0004 (0x015C - 0x0158)
class USeqAct_SetBool : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetBool");
		return ptr;
	}

};


// Class Engine.SeqAct_SetFloat
// 0x0014 (0x016C - 0x0158)
class USeqAct_SetFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetFloat");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetInt
// 0x0014 (0x016C - 0x0158)
class USeqAct_SetInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetInt");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetLocation
// 0x0024 (0x017C - 0x0158)
class USeqAct_SetLocation : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0158(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetLocation");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetObject
// 0x0010 (0x0168 - 0x0158)
class USeqAct_SetObject : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetObject");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetString
// 0x0020 (0x0178 - 0x0158)
class USeqAct_SetString : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetString");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SubtractFloat
// 0x0010 (0x0168 - 0x0158)
class USeqAct_SubtractFloat : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SubtractFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_SubtractInt
// 0x0010 (0x0168 - 0x0158)
class USeqAct_SubtractInt : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SubtractInt");
		return ptr;
	}

};


// Class Engine.SeqAct_SetVectorComponents
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetVectorComponents : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVectorComponents");
		return ptr;
	}

};


// Class Engine.SeqAct_SetWorldAttractorParam
// 0x0084 (0x01DC - 0x0158)
class USeqAct_SetWorldAttractorParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0158(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetWorldAttractorParam");
		return ptr;
	}

};


// Class Engine.SeqAct_Switch
// 0x001C (0x0174 - 0x0158)
class USeqAct_Switch : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0158(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Switch");
		return ptr;
	}

};


// Class Engine.SeqAct_RandomSwitch
// 0x0010 (0x0184 - 0x0174)
class USeqAct_RandomSwitch : public USeqAct_Switch
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0174(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_RandomSwitch");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_Timer
// 0x0008 (0x0160 - 0x0158)
class USeqAct_Timer : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Timer");
		return ptr;
	}

};


// Class Engine.SeqAct_Toggle
// 0x0000 (0x0158 - 0x0158)
class USeqAct_Toggle : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Toggle");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleCinematicMode
// 0x0000 (0x0158 - 0x0158)
class USeqAct_ToggleCinematicMode : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleCinematicMode");
		return ptr;
	}


	void SwitchCinematic();
};


// Class Engine.SeqAct_Trace
// 0x0040 (0x0198 - 0x0158)
class USeqAct_Trace : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0158(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Trace");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SequenceCondition
// 0x0000 (0x012C - 0x012C)
class USequenceCondition : public USequenceOp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceCondition");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareBool
// 0x0004 (0x0130 - 0x012C)
class USeqCond_CompareBool : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareBool");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqCond_CompareFloat
// 0x0008 (0x0134 - 0x012C)
class USeqCond_CompareFloat : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x012C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareFloat");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareInt
// 0x0008 (0x0134 - 0x012C)
class USeqCond_CompareInt : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x012C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareInt");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareObject
// 0x0000 (0x012C - 0x012C)
class USeqCond_CompareObject : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareObject");
		return ptr;
	}

};


// Class Engine.SeqCond_GetServerType
// 0x0000 (0x012C - 0x012C)
class USeqCond_GetServerType : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_GetServerType");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqCond_Increment
// 0x000C (0x0138 - 0x012C)
class USeqCond_Increment : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x012C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_Increment");
		return ptr;
	}

};


// Class Engine.SeqCond_IncrementFloat
// 0x000C (0x0138 - 0x012C)
class USeqCond_IncrementFloat : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x012C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IncrementFloat");
		return ptr;
	}

};


// Class Engine.SeqCond_IsAlive
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsAlive : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsAlive");
		return ptr;
	}

};


// Class Engine.SeqCond_IsBenchmarking
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsBenchmarking : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsBenchmarking");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqCond_IsConsole
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsConsole : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsConsole");
		return ptr;
	}

};


// Class Engine.SeqCond_IsInCombat
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsInCombat : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsInCombat");
		return ptr;
	}

};


// Class Engine.SeqCond_IsLoggedIn
// 0x0004 (0x0130 - 0x012C)
class USeqCond_IsLoggedIn : public USequenceCondition
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsLoggedIn");
		return ptr;
	}


	void CheckLogins();
};


// Class Engine.SeqCond_IsPIE
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsPIE : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsPIE");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqCond_IsSameTeam
// 0x0000 (0x012C - 0x012C)
class USeqCond_IsSameTeam : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsSameTeam");
		return ptr;
	}

};


// Class Engine.SeqCond_MatureLanguage
// 0x0000 (0x012C - 0x012C)
class USeqCond_MatureLanguage : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_MatureLanguage");
		return ptr;
	}

};


// Class Engine.SeqCond_ShowGore
// 0x0000 (0x012C - 0x012C)
class USeqCond_ShowGore : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_ShowGore");
		return ptr;
	}

};


// Class Engine.SeqCond_SwitchBase
// 0x0000 (0x012C - 0x012C)
class USeqCond_SwitchBase : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchBase");
		return ptr;
	}


	void RemoveValueEntry();
	void InsertValueEntry();
	void IsFallThruEnabled();
	void VerifyDefaultCaseValue();
};


// Class Engine.SeqCond_SwitchClass
// 0x0010 (0x013C - 0x012C)
class USeqCond_SwitchClass : public USeqCond_SwitchBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x012C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchClass");
		return ptr;
	}


	void RemoveValueEntry();
	void InsertValueEntry();
	void IsFallThruEnabled();
	void VerifyDefaultCaseValue();
};


// Class Engine.SeqCond_SwitchObject
// 0x0010 (0x013C - 0x012C)
class USeqCond_SwitchObject : public USeqCond_SwitchBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x012C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchObject");
		return ptr;
	}


	void RemoveValueEntry();
	void InsertValueEntry();
	void IsFallThruEnabled();
	void VerifyDefaultCaseValue();
};


// Class Engine.SeqCond_SwitchPlatform
// 0x0000 (0x012C - 0x012C)
class USeqCond_SwitchPlatform : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchPlatform");
		return ptr;
	}

};


// Class Engine.SequenceEvent
// 0x003C (0x0168 - 0x012C)
class USequenceEvent : public USequenceOp
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x012C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceEvent");
		return ptr;
	}


	void Toggled();
	void STATIC_Reset();
	void CheckActivate();
	void RegisterEvent();
};


// Class Engine.SeqEvent_AISeeEnemy
// 0x0004 (0x016C - 0x0168)
class USeqEvent_AISeeEnemy : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AISeeEnemy");
		return ptr;
	}

};


// Class Engine.SeqEvent_AnalogInput
// 0x0018 (0x0180 - 0x0168)
class USeqEvent_AnalogInput : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AnalogInput");
		return ptr;
	}

};


// Class Engine.SeqEvent_AnimNotify
// 0x0008 (0x0170 - 0x0168)
class USeqEvent_AnimNotify : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AnimNotify");
		return ptr;
	}

};


// Class Engine.SeqEvent_Console
// 0x0018 (0x0180 - 0x0168)
class USeqEvent_Console : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Console");
		return ptr;
	}

};


// Class Engine.SeqEvent_ConstraintBroken
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_ConstraintBroken : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ConstraintBroken");
		return ptr;
	}

};


// Class Engine.SeqEvent_Destroyed
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_Destroyed : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Destroyed");
		return ptr;
	}

};


// Class Engine.SeqEvent_GetInventory
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_GetInventory : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_GetInventory");
		return ptr;
	}

};


// Class Engine.SeqEvent_Input
// 0x0018 (0x0180 - 0x0168)
class USeqEvent_Input : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Input");
		return ptr;
	}

};


// Class Engine.SeqEvent_LevelBeginning
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_LevelBeginning : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelBeginning");
		return ptr;
	}

};


// Class Engine.SeqEvent_LevelLoaded
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_LevelLoaded : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelLoaded");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqEvent_LevelStartup
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_LevelStartup : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelStartup");
		return ptr;
	}

};


// Class Engine.SeqEvent_Mover
// 0x0004 (0x016C - 0x0168)
class USeqEvent_Mover : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Mover");
		return ptr;
	}


	void STATIC_NotifyFinishedOpen();
	void STATIC_NotifyDetached();
	void STATIC_NotifyAttached();
	void STATIC_NotifyEncroachingOn();
	void RegisterEvent();
};


// Class Engine.SeqEvent_ParticleEvent
// 0x0034 (0x019C - 0x0168)
class USeqEvent_ParticleEvent : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0168(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ParticleEvent");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqEvent_ProjectileLanded
// 0x0004 (0x016C - 0x0168)
class USeqEvent_ProjectileLanded : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ProjectileLanded");
		return ptr;
	}

};


// Class Engine.SeqEvent_RemoteEvent
// 0x0024 (0x018C - 0x0168)
class USeqEvent_RemoteEvent : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0168(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_RemoteEvent");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqEvent_RigidBodyCollision
// 0x0004 (0x016C - 0x0168)
class USeqEvent_RigidBodyCollision : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_RigidBodyCollision");
		return ptr;
	}

};


// Class Engine.SeqEvent_SeeDeath
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_SeeDeath : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_SeeDeath");
		return ptr;
	}

};


// Class Engine.SeqEvent_SequenceActivated
// 0x0010 (0x0178 - 0x0168)
class USeqEvent_SequenceActivated : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_SequenceActivated");
		return ptr;
	}

};


// Class Engine.SeqEvent_TakeDamage
// 0x0030 (0x0198 - 0x0168)
class USeqEvent_TakeDamage : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0168(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_TakeDamage");
		return ptr;
	}


	void Toggled();
	void GetObjClassVersion();
	void STATIC_Reset();
	void STATIC_HandleDamage();
	void STATIC_IsValidDamageType();
};


// Class Engine.SeqEvent_Touch
// 0x0038 (0x01A0 - 0x0168)
class USeqEvent_Touch : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0168(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Touch");
		return ptr;
	}


	void GetObjClassVersion();
	void STATIC_NotifyTouchingPawnDied();
	void Toggled();
	void CheckUnTouchActivate();
	void CheckTouchActivate();
};


// Class Engine.SeqEvent_TouchInput
// 0x0010 (0x0178 - 0x0168)
class USeqEvent_TouchInput : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_TouchInput");
		return ptr;
	}

};


// Class Engine.SeqEvent_Used
// 0x0040 (0x01A8 - 0x0168)
class USeqEvent_Used : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0168(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Used");
		return ptr;
	}

};


// Class Engine.SequenceVariable
// 0x0008 (0x00CC - 0x00C4)
class USequenceVariable : public USequenceObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C4(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceVariable");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x006C (0x0138 - 0x00CC)
class UInterpData : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x00CC(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.SeqVar_Bool
// 0x0004 (0x00D0 - 0x00CC)
class USeqVar_Bool : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Bool");
		return ptr;
	}

};


// Class Engine.SeqVar_External
// 0x0018 (0x00E4 - 0x00CC)
class USeqVar_External : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00CC(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_External");
		return ptr;
	}

};


// Class Engine.SeqVar_Float
// 0x0004 (0x00D0 - 0x00CC)
class USeqVar_Float : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Float");
		return ptr;
	}

};


// Class Engine.SeqVar_RandomFloat
// 0x0008 (0x00D8 - 0x00D0)
class USeqVar_RandomFloat : public USeqVar_Float
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_RandomFloat");
		return ptr;
	}

};


// Class Engine.SeqVar_Int
// 0x0004 (0x00D0 - 0x00CC)
class USeqVar_Int : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Int");
		return ptr;
	}

};


// Class Engine.SeqVar_RandomInt
// 0x0008 (0x00D8 - 0x00D0)
class USeqVar_RandomInt : public USeqVar_Int
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_RandomInt");
		return ptr;
	}

};


// Class Engine.SeqVar_Named
// 0x0014 (0x00E0 - 0x00CC)
class USeqVar_Named : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Named");
		return ptr;
	}

};


// Class Engine.SeqVar_Object
// 0x0028 (0x00F4 - 0x00CC)
class USeqVar_Object : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00CC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Object");
		return ptr;
	}


	void STATIC_SetObjectValue();
	void STATIC_GetObjectValue();
};


// Class Engine.SeqVar_Character
// 0x0008 (0x00FC - 0x00F4)
class USeqVar_Character : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F4(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Character");
		return ptr;
	}

};


// Class Engine.SeqVar_Group
// 0x001C (0x0110 - 0x00F4)
class USeqVar_Group : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00F4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Group");
		return ptr;
	}

};


// Class Engine.SeqVar_ObjectList
// 0x0010 (0x0104 - 0x00F4)
class USeqVar_ObjectList : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F4(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_ObjectList");
		return ptr;
	}


	void STATIC_SetObjectValue();
	void STATIC_GetObjectValue();
};


// Class Engine.SeqVar_ObjectVolume
// 0x0028 (0x011C - 0x00F4)
class USeqVar_ObjectVolume : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F4(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_ObjectVolume");
		return ptr;
	}

};


// Class Engine.SeqVar_Player
// 0x0018 (0x010C - 0x00F4)
class USeqVar_Player : public USeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F4(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Player");
		return ptr;
	}


	void STATIC_GetObjectValue();
	void UpdatePlayersList();
};


// Class Engine.SeqVar_String
// 0x0010 (0x00DC - 0x00CC)
class USeqVar_String : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00CC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_String");
		return ptr;
	}

};


// Class Engine.SeqVar_Vector
// 0x000C (0x00D8 - 0x00CC)
class USeqVar_Vector : public USequenceVariable
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00CC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Vector");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x000C (0x0288 - 0x027C)
class AAmbientSound : public AKeypoint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x027C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}

};


// Class Engine.AmbientSoundMovable
// 0x0000 (0x0288 - 0x0288)
class AAmbientSoundMovable : public AAmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundMovable");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimple
// 0x0018 (0x02A0 - 0x0288)
class AAmbientSoundSimple : public AAmbientSound
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimple");
		return ptr;
	}

};


// Class Engine.AmbientSoundNonLoop
// 0x0000 (0x02A0 - 0x02A0)
class AAmbientSoundNonLoop : public AAmbientSoundSimple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundNonLoop");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleToggleable
// 0x0014 (0x02B4 - 0x02A0)
class AAmbientSoundSimpleToggleable : public AAmbientSoundSimple
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x02A0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleToggleable");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_OnToggle();
	void StopPlaying();
	void StartPlaying();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.AmbientSoundNonLoopingToggleable
// 0x0000 (0x02B4 - 0x02B4)
class AAmbientSoundNonLoopingToggleable : public AAmbientSoundSimpleToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundNonLoopingToggleable");
		return ptr;
	}

};


// Class Engine.AmbientSoundSpline
// 0x0018 (0x02A0 - 0x0288)
class AAmbientSoundSpline : public AAmbientSound
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSpline");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleSpline
// 0x0004 (0x02A4 - 0x02A0)
class AAmbientSoundSimpleSpline : public AAmbientSoundSpline
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleSpline");
		return ptr;
	}

};


// Class Engine.AmbientSoundSplineMultiCue
// 0x0004 (0x02A4 - 0x02A0)
class AAmbientSoundSplineMultiCue : public AAmbientSoundSpline
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSplineMultiCue");
		return ptr;
	}

};


// Class Engine.DistributionFloatSoundParameter
// 0x0003 (0x0094 - 0x0091)
class UDistributionFloatSoundParameter : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatSoundParameter");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0014 (0x006C - 0x0058)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.ForcedLoopSoundNode
// 0x0000 (0x006C - 0x006C)
class UForcedLoopSoundNode : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForcedLoopSoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbient
// 0x003C (0x00A8 - 0x006C)
class USoundNodeAmbient : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x006C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbient");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoop
// 0x002C (0x00D4 - 0x00A8)
class USoundNodeAmbientNonLoop : public USoundNodeAmbient
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00A8(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoop");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoopToggle
// 0x0000 (0x00D4 - 0x00D4)
class USoundNodeAmbientNonLoopToggle : public USoundNodeAmbientNonLoop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoopToggle");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x0020 (0x008C - 0x006C)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x006C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuationAndGain
// 0x0030 (0x009C - 0x006C)
class USoundNodeAttenuationAndGain : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x006C(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuationAndGain");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x007C - 0x006C)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x006C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenatorRadio
// 0x0000 (0x006C - 0x006C)
class USoundNodeConcatenatorRadio : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenatorRadio");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x002C (0x0098 - 0x006C)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x006C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x007C - 0x006C)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x006C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0004 (0x0070 - 0x006C)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0024 (0x0090 - 0x006C)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x006C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0030 (0x009C - 0x006C)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x006C(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x006C - 0x006C)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x007C - 0x006C)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x006C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0058 (0x00C4 - 0x006C)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x006C(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0048 (0x00B4 - 0x006C)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x006C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x00B4 (0x0120 - 0x006C)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x006C(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x002C (0x0098 - 0x006C)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x006C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeWave
// 0x0284 (0x02F0 - 0x006C)
class USoundNodeWave : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x284];                                     // 0x006C(0x0284) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWave");
		return ptr;
	}


	void GeneratePCMData();
};


// Class Engine.SoundNodeWaveStreaming
// 0x0014 (0x0304 - 0x02F0)
class USoundNodeWaveStreaming : public USoundNodeWave
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x02F0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveStreaming");
		return ptr;
	}


	void GeneratePCMData();
	void AvailableAudioBytes();
	void ResetAudio();
	void QueueSilence();
	void QueueAudio();
};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0074 - 0x006C)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x006C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.LandscapeProxy
// 0x013C (0x03B0 - 0x0274)
class ALandscapeProxy : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x13C];                                     // 0x0274(0x013C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeProxy");
		return ptr;
	}

};


// Class Engine.Landscape
// 0x0020 (0x03D0 - 0x03B0)
class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Landscape");
		return ptr;
	}

};


// Class Engine.Terrain
// 0x0134 (0x03A8 - 0x0274)
class ATerrain : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x134];                                     // 0x0274(0x0134) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Terrain");
		return ptr;
	}


	void PostBeginPlay();
	void CalcLayerBounds();
};


// Class Engine.LandscapeGizmoActor
// 0x0020 (0x0294 - 0x0274)
class ALandscapeGizmoActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0274(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoActiveActor
// 0x0120 (0x03B4 - 0x0294)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0294(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Engine.LandscapeComponent
// 0x0134 (0x03B8 - 0x0284)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x134];                                     // 0x0284(0x0134) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeComponent");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoRenderComponent
// 0x0000 (0x0284 - 0x0284)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Engine.LandscapeHeightfieldCollisionComponent
// 0x00E8 (0x036C - 0x0284)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0284(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Engine.TerrainComponent
// 0x0098 (0x031C - 0x0284)
class UTerrainComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0284(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainComponent");
		return ptr;
	}

};


// Class Engine.LandscapeInfo
// 0x02BC (0x0314 - 0x0058)
class ULandscapeInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2BC];                                     // 0x0058(0x02BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeInfo");
		return ptr;
	}

};


// Class Engine.LandscapeLayerInfoObject
// 0x0028 (0x0080 - 0x0058)
class ULandscapeLayerInfoObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Engine.TerrainWeightMapTexture
// 0x0018 (0x0244 - 0x022C)
class UTerrainWeightMapTexture : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x022C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainWeightMapTexture");
		return ptr;
	}

};


// Class Engine.TerrainLayerSetup
// 0x0010 (0x0068 - 0x0058)
class UTerrainLayerSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainLayerSetup");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.TerrainMaterial
// 0x0070 (0x00C8 - 0x0058)
class UTerrainMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainMaterial");
		return ptr;
	}

};


// Class Engine.DataStoreClient
// 0x0050 (0x00B8 - 0x0068)
class UDataStoreClient : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataStoreClient");
		return ptr;
	}


	void DebugDumpDataStoreInfo();
	void NotifyGameSessionEnded();
	void STATIC_FindDataStoreClass();
	void STATIC_GetPlayerDataStoreClasses();
	void STATIC_FindPlayerDataStoreIndex();
	void UnregisterDataStore();
	void STATIC_RegisterDataStore();
	void CreateDataStore();
	void STATIC_FindDataStore();
};


// Class Engine.Console
// 0x01C0 (0x0268 - 0x00A8)
class UConsole : public UInteraction
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x00A8(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}


	void UpdateCompleteIndices();
	void BuildRuntimeAutoCompleteList();
	void AppendInputText();
	void STATIC_ProcessControlKey();
	void STATIC_FlushPlayerInput();
	void STATIC_InputChar();
	void InputKey();
	void STATIC_PostRender_Console();
	void StartTyping();
	void OutputText();
	void STATIC_OutputTextLine();
	void ClearOutput();
	void ConsoleCommand();
	void STATIC_PurgeCommandFromHistory();
	void STATIC_SetCursorPos();
	void STATIC_SetInputText();
	void STATIC_Initialized();
};


// Class Engine.Input
// 0x00C8 (0x0170 - 0x00A8)
class UInput : public UInteraction
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00A8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Input");
		return ptr;
	}


	void STATIC_SetBind();
	void STATIC_GetBind();
	void STATIC_ResetInput();
};


// Class Engine.PlayerInput
// 0x0148 (0x02B8 - 0x0170)
class UPlayerInput : public UInput
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0170(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void PreClientTravel();
	void ClientInitInputSystem();
	void InitInputSystem();
	void STATIC_SmoothMouse();
	void ClearSmoothing();
	void STATIC_SmartJump();
	void STATIC_Jump();
	void STATIC_ProcessInputMatching();
	void CheckForDoubleClickMove();
	void CatchDoubleClickInput();
	void PlayerInput();
	void AdjustMouseSensitivity();
	void STATIC_PostProcessInput();
	void STATIC_PreProcessInput();
	void DrawHUD();
	void STATIC_SetSensitivity();
	void STATIC_InvertTurn();
	void STATIC_InvertMouse();
	void CancelMobileInput();
};


// Class Engine.PlayerManagerInteraction
// 0x0000 (0x00A8 - 0x00A8)
class UPlayerManagerInteraction : public UInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerManagerInteraction");
		return ptr;
	}

};


// Class Engine.UISceneClient
// 0x00B4 (0x011C - 0x0068)
class UUISceneClient : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0068(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UISceneClient");
		return ptr;
	}


	void InitializeSceneClient();
	void STATIC_GetInverseCanvasToScreen();
	void STATIC_GetCanvasToScreen();
	void STATIC_IsUIActive();
};


// Class Engine.UISoundTheme
// 0x0010 (0x0068 - 0x0058)
class UUISoundTheme : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UISoundTheme");
		return ptr;
	}


	void ProcessSoundEvent();
};


// Class Engine.UIDataStoreSubscriber
// 0x0000 (0x0058 - 0x0058)
class UUIDataStoreSubscriber : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStoreSubscriber");
		return ptr;
	}


	void ClearBoundDataStores();
	void STATIC_GetBoundDataStores();
	void STATIC_NotifyDataStoreValueUpdated();
	void STATIC_RefreshSubscriberValue();
	void STATIC_GetDataStoreBinding();
	void STATIC_SetDataStoreBinding();
};


// Class Engine.UIDataStorePublisher
// 0x0000 (0x0058 - 0x0058)
class UUIDataStorePublisher : public UUIDataStoreSubscriber
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStorePublisher");
		return ptr;
	}


	void STATIC_SaveSubscriberValue();
};


// Class Engine.UIDataProvider
// 0x0000 (0x0068 - 0x0068)
class UUIDataProvider : public UUIRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlinePlayerDataBase
// 0x0004 (0x006C - 0x0068)
class UUIDataProvider_OnlinePlayerDataBase : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0068(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerDataBase");
		return ptr;
	}


	void OnUnregister();
	void OnRegister();
};


// Class Engine.UIDataProvider_OnlineFriendMessages
// 0x0070 (0x00DC - 0x006C)
class UUIDataProvider_OnlineFriendMessages : public UUIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x006C(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineFriendMessages");
		return ptr;
	}


	void STATIC_OnGameInviteReceived();
	void STATIC_OnLoginChange();
	void STATIC_OnFriendMessageReceived();
	void STATIC_OnFriendInviteReceived();
	void STATIC_ReadMessages();
	void OnUnregister();
	void OnRegister();
};


// Class Engine.UIDataProvider_OnlineFriends
// 0x00F0 (0x015C - 0x006C)
class UUIDataProvider_OnlineFriends : public UUIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x006C(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineFriends");
		return ptr;
	}


	void RefreshFriendsList();
	void STATIC_OnLoginChange();
	void STATIC_OnFriendsReadComplete();
	void OnUnregister();
	void OnRegister();
};


// Class Engine.UIDataProvider_OnlinePartyChatList
// 0x0090 (0x00FC - 0x006C)
class UUIDataProvider_OnlinePartyChatList : public UUIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x006C(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePartyChatList");
		return ptr;
	}


	void RefreshMembersList();
	void STATIC_OnLoginChange();
	void OnUnregister();
	void OnRegister();
};


// Class Engine.UIDataProvider_OnlinePlayerStorage
// 0x0028 (0x0094 - 0x006C)
class UUIDataProvider_OnlinePlayerStorage : public UUIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x006C(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerStorage");
		return ptr;
	}


	void STATIC_OnExternalUIChange();
	void STATIC_OnStorageDeviceChange();
	void STATIC_OnDeviceSelectionComplete();
	void STATIC_ShowDeviceSelection();
	void STATIC_RefreshStorageData();
	void STATIC_OnLoginChange();
	void STATIC_OnReadStorageComplete();
	void OnUnregister();
	void OnRegister();
	void ClearReadCompleteDelegate();
	void AddReadCompleteDelegate();
	void GetData();
	void WriteData();
	void STATIC_ReadData();
};


// Class Engine.UIDataProvider_OnlineProfileSettings
// 0x0000 (0x0094 - 0x0094)
class UUIDataProvider_OnlineProfileSettings : public UUIDataProvider_OnlinePlayerStorage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineProfileSettings");
		return ptr;
	}


	void STATIC_OnStorageDeviceChange();
	void STATIC_RefreshStorageData();
	void ClearReadCompleteDelegate();
	void AddReadCompleteDelegate();
	void GetData();
	void WriteData();
	void STATIC_ReadData();
};


// Class Engine.UIDataProvider_PlayerAchievements
// 0x0010 (0x007C - 0x006C)
class UUIDataProvider_PlayerAchievements : public UUIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x006C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_PlayerAchievements");
		return ptr;
	}


	void UpdateAchievements();
	void STATIC_OnLoginChange();
	void OnUnregister();
	void OnRegister();
	void STATIC_OnPlayerAchievementUnlocked();
	void STATIC_OnPlayerAchievementsChanged();
	void STATIC_GetAchievementDetails();
	void STATIC_GetAchievementIconPathName();
	void STATIC_PopulateAchievementIcons();
	void STATIC_GetMaxTotalGamerScore();
	void STATIC_GetTotalGamerScore();
};


// Class Engine.UIDataProvider_OnlinePlayerStorageArray
// 0x002C (0x0094 - 0x0068)
class UUIDataProvider_OnlinePlayerStorageArray : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0068(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerStorageArray");
		return ptr;
	}

};


// Class Engine.UIDataProvider_SettingsArray
// 0x0034 (0x009C - 0x0068)
class UUIDataProvider_SettingsArray : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_SettingsArray");
		return ptr;
	}

};


// Class Engine.UIDataStore
// 0x0028 (0x0090 - 0x0068)
class UUIDataStore : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore");
		return ptr;
	}


	void STATIC_GetDataStoreClient();
	void RefreshSubscribers();
	void NotifyGameSessionEnded();
	void SubscriberDetached();
	void SubscriberAttached();
	void Unregistered();
	void Registered();
	void OnDataStoreValueUpdated();
};


// Class Engine.UIDataStore_DynamicResource
// 0x0068 (0x00F8 - 0x0090)
class UUIDataStore_DynamicResource : public UUIDataStore
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0090(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_DynamicResource");
		return ptr;
	}


	void Unregistered();
	void Registered();
	void STATIC_OnLoginChange();
	void STATIC_GetResourceProviders();
	void STATIC_FindProviderTypeIndex();
};


// Class Engine.UIDataStore_Fonts
// 0x0000 (0x0090 - 0x0090)
class UUIDataStore_Fonts : public UUIDataStore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Fonts");
		return ptr;
	}

};


// Class Engine.UIDataStore_GameResource
// 0x0058 (0x00E8 - 0x0090)
class UUIDataStore_GameResource : public UUIDataStore
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0090(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_GameResource");
		return ptr;
	}


	void STATIC_GetResourceProviders();
	void STATIC_FindProviderTypeIndex();
};


// Class Engine.UIDataStore_MenuItems
// 0x0060 (0x0148 - 0x00E8)
class UUIDataStore_MenuItems : public UUIDataStore_GameResource
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_MenuItems");
		return ptr;
	}


	void Unregistered();
	void Registered();
	void STATIC_OnGameSettingsChanged();
};


// Class Engine.UIDataStore_GameState
// 0x0010 (0x00A0 - 0x0090)
class UUIDataStore_GameState : public UUIDataStore
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_GameState");
		return ptr;
	}


	void NotifyGameSessionEnded();
	void OnRefreshDataFieldValue();
};


// Class Engine.UIDataStore_Registry
// 0x0010 (0x00A0 - 0x0090)
class UUIDataStore_Registry : public UUIDataStore
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Registry");
		return ptr;
	}


	void SetData();
	void GetData();
};


// Class Engine.UIDataStore_Remote
// 0x0000 (0x0090 - 0x0090)
class UUIDataStore_Remote : public UUIDataStore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Remote");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlineGameSearch
// 0x0038 (0x00C8 - 0x0090)
class UUIDataStore_OnlineGameSearch : public UUIDataStore_Remote
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0090(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineGameSearch");
		return ptr;
	}


	void ClearAllSearchResults();
	void MoveToPrevious();
	void MoveToNext();
	void SetCurrentByName();
	void SetCurrentByIndex();
	void STATIC_FindSearchConfigurationIndex();
	void GetActiveGameSearch();
	void GetCurrentGameSearch();
	void ShowHostGamercard();
	void GetSearchResultFromIndex();
	void STATIC_OnSearchComplete();
	void STATIC_OverrideQuerySubmission();
	void SubmitGameSearch();
	void STATIC_InvalidateCurrentSearchResults();
	void Init();
};


// Class Engine.UIDataStore_OnlinePlayerData
// 0x0104 (0x0194 - 0x0090)
class UUIDataStore_OnlinePlayerData : public UUIDataStore_Remote
{
public:
	unsigned char                                      UnknownData00[0x104];                                     // 0x0090(0x0104) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlinePlayerData");
		return ptr;
	}


	void GetCachedPlayerStorage();
	void GetCachedPlayerProfile();
	void ClearDelegates();
	void STATIC_RegisterDelegates();
	void STATIC_OnPlayerDataChange();
	void STATIC_OnLoginChange();
	void OnUnregister();
	void OnRegister();
};


// Class Engine.UIDataStore_OnlineStats
// 0x008C (0x011C - 0x0090)
class UUIDataStore_OnlineStats : public UUIDataStore_Remote
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0090(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineStats");
		return ptr;
	}


	void STATIC_SortResultsByRank();
	void OnReadComplete();
	void ShowGamercard();
	void RefreshStats();
	void STATIC_SetStatsReadInfo();
	void Init();
};


// Class Engine.UIDataStore_Settings
// 0x0000 (0x0090 - 0x0090)
class UUIDataStore_Settings : public UUIDataStore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Settings");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlineGameSettings
// 0x001C (0x00AC - 0x0090)
class UUIDataStore_OnlineGameSettings : public UUIDataStore_Settings
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0090(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineGameSettings");
		return ptr;
	}


	void Unregistered();
	void Registered();
	void MoveToPrevious();
	void MoveToNext();
	void SetCurrentByName();
	void SetCurrentByIndex();
	void GetCurrentProvider();
	void GetCurrentGameSettings();
	void CreateGame();
};


// Class Engine.UIDataStore_StringBase
// 0x0000 (0x0090 - 0x0090)
class UUIDataStore_StringBase : public UUIDataStore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_StringBase");
		return ptr;
	}

};


// Class Engine.UIDataStore_InputAlias
// 0x0058 (0x00E8 - 0x0090)
class UUIDataStore_InputAlias : public UUIDataStore_StringBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0090(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_InputAlias");
		return ptr;
	}


	void STATIC_HasAliasMappingForPlatform();
	void STATIC_FindInputAliasIndex();
	void STATIC_GetAliasInputKeyDataByIndex();
	void STATIC_GetAliasInputKeyData();
	void STATIC_GetAliasInputKeyNameByIndex();
	void STATIC_GetAliasInputKeyName();
	void STATIC_GetAliasFontMarkupByIndex();
	void STATIC_GetAliasFontMarkup();
};


// Class Engine.UIDataStore_StringAliasMap
// 0x005C (0x00EC - 0x0090)
class UUIDataStore_StringAliasMap : public UUIDataStore_StringBase
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0090(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_StringAliasMap");
		return ptr;
	}


	void STATIC_GetStringWithFieldName();
	void STATIC_FindMappingWithFieldName();
	void STATIC_GetPlayerOwner();
};


// Class Engine.UIPropertyDataProvider
// 0x0020 (0x0088 - 0x0068)
class UUIPropertyDataProvider : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIPropertyDataProvider");
		return ptr;
	}


	void CanSupportComplexPropertyType();
};


// Class Engine.UIDataProvider_Settings
// 0x000C (0x0094 - 0x0088)
class UUIDataProvider_Settings : public UUIPropertyDataProvider
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0088(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_Settings");
		return ptr;
	}

};


// Class Engine.UIResourceDataProvider
// 0x0004 (0x008C - 0x0088)
class UUIResourceDataProvider : public UUIPropertyDataProvider
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIResourceDataProvider");
		return ptr;
	}


	void InitializeProvider();
};


// Class Engine.UIDataProvider_MenuItem
// 0x00A8 (0x0134 - 0x008C)
class UUIDataProvider_MenuItem : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x008C(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_MenuItem");
		return ptr;
	}

};


// Class Engine.UIResourceCombinationProvider
// 0x0010 (0x0078 - 0x0068)
class UUIResourceCombinationProvider : public UUIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIResourceCombinationProvider");
		return ptr;
	}


	void ClearProviderReferences();
	void InitializeProvider();
};


// Class Engine.GameUISceneClient
// 0x0080 (0x019C - 0x011C)
class UGameUISceneClient : public UUISceneClient
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x011C(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUISceneClient");
		return ptr;
	}


	void STATIC_FindLocalPlayerIndex();
	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void NotifyGameSessionEnded();
	void STATIC_NotifyClientTravel();
	void PauseGame();
	void CanUnpauseInternalUI();
	void STATIC_RequestInputProcessingUpdate();
	void STATIC_GetCurrentNetMode();
};


// Class Engine.Scene
// 0x0000 (0x0058 - 0x0058)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.InstancedFoliageActor
// 0x0060 (0x02D4 - 0x0274)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0274(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedFoliageActor");
		return ptr;
	}

};


// Class Engine.InteractiveFoliageActor
// 0x005F (0x02F8 - 0x0299)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0299(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageActor");
		return ptr;
	}


	void Touch();
	void TakeDamage();
};


// Class Engine.InteractiveFoliageComponent
// 0x0008 (0x031C - 0x0314)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0314(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Engine.ActorFactoryInteractiveFoliage
// 0x0000 (0x00A8 - 0x00A8)
class UActorFactoryInteractiveFoliage : public UActorFactoryStaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryInteractiveFoliage");
		return ptr;
	}

};


// Class Engine.FluidInfluenceActor
// 0x001C (0x0290 - 0x0274)
class AFluidInfluenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0274(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidInfluenceActor");
		return ptr;
	}


	void ReplicatedEvent();
	void STATIC_OnToggle();
};


// Class Engine.FluidSurfaceActor
// 0x0010 (0x0284 - 0x0274)
class AFluidSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceActor");
		return ptr;
	}


	void Touch();
	void TakeDamage();
};


// Class Engine.FluidSurfaceActorMovable
// 0x0000 (0x0284 - 0x0284)
class AFluidSurfaceActorMovable : public AFluidSurfaceActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceActorMovable");
		return ptr;
	}

};


// Class Engine.FluidInfluenceComponent
// 0x0068 (0x02EC - 0x0284)
class UFluidInfluenceComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0284(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidInfluenceComponent");
		return ptr;
	}

};


// Class Engine.FluidSurfaceComponent
// 0x00FC (0x0380 - 0x0284)
class UFluidSurfaceComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0284(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceComponent");
		return ptr;
	}


	void STATIC_SetSimulationPosition();
	void STATIC_SetDetailPosition();
	void ApplyForce();
};


// Class Engine.SpeedTreeActor
// 0x0008 (0x027C - 0x0274)
class ASpeedTreeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeActor");
		return ptr;
	}

};


// Class Engine.SpeedTreeComponent
// 0x00F8 (0x037C - 0x0284)
class USpeedTreeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0284(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeComponent");
		return ptr;
	}


	void STATIC_SetMaterial();
	void STATIC_GetMaterial();
};


// Class Engine.SpeedTreeActorFactory
// 0x0008 (0x009C - 0x0094)
class USpeedTreeActorFactory : public UActorFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeActorFactory");
		return ptr;
	}

};


// Class Engine.SpeedTreeComponentFactory
// 0x0008 (0x0064 - 0x005C)
class USpeedTreeComponentFactory : public UPrimitiveComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x005C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeComponentFactory");
		return ptr;
	}

};


// Class Engine.SpeedTree
// 0x0060 (0x00B8 - 0x0058)
class USpeedTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTree");
		return ptr;
	}

};


// Class Engine.LensFlareSource
// 0x000C (0x0280 - 0x0274)
class ALensFlareSource : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlareSource");
		return ptr;
	}


	void STATIC_SetActorParameter();
	void STATIC_SetExtColorParameter();
	void STATIC_SetColorParameter();
	void STATIC_SetVectorParameter();
	void STATIC_SetFloatParameter();
	void ReplicatedEvent();
	void STATIC_OnToggle();
	void PostBeginPlay();
	void SetTemplate();
};


// Class Engine.LensFlareComponent
// 0x0064 (0x02E8 - 0x0284)
class ULensFlareComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0284(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlareComponent");
		return ptr;
	}


	void CreateAndSetMaterialInstanceConstant();
	void STATIC_SetMaterial();
	void STATIC_GetMaterial();
	void STATIC_SetIsActive();
	void STATIC_SetSourceColor();
	void SetTemplate();
};


// Class Engine.LensFlare
// 0x0230 (0x0288 - 0x0058)
class ULensFlare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0058(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlare");
		return ptr;
	}

};


// Class Engine.TextureFlipBook
// 0x0048 (0x0274 - 0x022C)
class UTextureFlipBook : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x022C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureFlipBook");
		return ptr;
	}


	void STATIC_SetCurrentFrame();
	void Stop();
	void STATIC_Pause();
	void Play();
};


// Class Engine.Texture2DComposite
// 0x001C (0x0140 - 0x0124)
class UTexture2DComposite : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0124(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DComposite");
		return ptr;
	}


	void STATIC_ResetSourceRegions();
	void UpdateCompositeTexture();
	void STATIC_SourceTexturesFullyStreamedIn();
};


// Class Engine.Texture2DDynamic
// 0x0014 (0x0138 - 0x0124)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}


	void Create();
	void UpdateMipFromJPEG();
	void UpdateMip();
	void Init();
};


// Class Engine.TextureCube
// 0x0044 (0x0168 - 0x0124)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0124(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureMovie
// 0x0068 (0x018C - 0x0124)
class UTextureMovie : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0124(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureMovie");
		return ptr;
	}


	void STATIC_SetPause();
	void Close();
	void Stop();
	void STATIC_Pause();
	void Play();
};


// Class Engine.TextureRenderTarget
// 0x0008 (0x012C - 0x0124)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0124(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0020 (0x014C - 0x012C)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x012C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}


	void Create();
};


// Class Engine.ScriptedTexture
// 0x0014 (0x0160 - 0x014C)
class UScriptedTexture : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x014C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptedTexture");
		return ptr;
	}


	void Render();
};


// Class Engine.TextureRenderTargetCube
// 0x0005 (0x0131 - 0x012C)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x012C(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.AudioDevice
// 0x0300 (0x0360 - 0x0060)
class UAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0060(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioDevice");
		return ptr;
	}


	void STATIC_FindSoundClass();
	void STATIC_SetSoundMode();
};


// Class Engine.SoundClass
// 0x0080 (0x00D8 - 0x0058)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundMode
// 0x0048 (0x00A0 - 0x0058)
class USoundMode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMode");
		return ptr;
	}

};


// Class Engine.MatineePawn
// 0x0008 (0x0590 - 0x0588)
class AMatineePawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineePawn");
		return ptr;
	}

};


// Class Engine.Scout
// 0x0098 (0x0620 - 0x0588)
class AScout : public APawn
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0588(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scout");
		return ptr;
	}


	void PreBeginPlay();
};


// Class Engine.Light
// 0x000C (0x0280 - 0x0274)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void STATIC_OnToggle();
	void ReplicatedEvent();
};


// Class Engine.DirectionalLight
// 0x0000 (0x0280 - 0x0280)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.DirectionalLightMovable
// 0x0000 (0x0280 - 0x0280)
class ADirectionalLightMovable : public ADirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightMovable");
		return ptr;
	}

};


// Class Engine.DirectionalLightToggleable
// 0x0000 (0x0280 - 0x0280)
class ADirectionalLightToggleable : public ADirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightToggleable");
		return ptr;
	}

};


// Class Engine.DominantDirectionalLight
// 0x0010 (0x0290 - 0x0280)
class ADominantDirectionalLight : public ADirectionalLight
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLight");
		return ptr;
	}

};


// Class Engine.DominantDirectionalLightMovable
// 0x0000 (0x0290 - 0x0290)
class ADominantDirectionalLightMovable : public ADominantDirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLightMovable");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0000 (0x0280 - 0x0280)
class APointLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}

};


// Class Engine.DominantPointLight
// 0x0000 (0x0280 - 0x0280)
class ADominantPointLight : public APointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantPointLight");
		return ptr;
	}

};


// Class Engine.PointLightMovable
// 0x0000 (0x0280 - 0x0280)
class APointLightMovable : public APointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightMovable");
		return ptr;
	}

};


// Class Engine.PointLightToggleable
// 0x0000 (0x0280 - 0x0280)
class APointLightToggleable : public APointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightToggleable");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
};


// Class Engine.SkyLight
// 0x0000 (0x0280 - 0x0280)
class ASkyLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}

};


// Class Engine.SkyLightToggleable
// 0x0000 (0x0280 - 0x0280)
class ASkyLightToggleable : public ASkyLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightToggleable");
		return ptr;
	}

};


// Class Engine.SpotLight
// 0x0000 (0x0280 - 0x0280)
class ASpotLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}

};


// Class Engine.DominantSpotLight
// 0x0000 (0x0280 - 0x0280)
class ADominantSpotLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantSpotLight");
		return ptr;
	}

};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x0280 - 0x0280)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.SpotLightMovable
// 0x0000 (0x0280 - 0x0280)
class ASpotLightMovable : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightMovable");
		return ptr;
	}

};


// Class Engine.SpotLightToggleable
// 0x0000 (0x0280 - 0x0280)
class ASpotLightToggleable : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightToggleable");
		return ptr;
	}


	void ApplyCheckpointRecord();
	void CreateCheckpointRecord();
	void STATIC_ShouldSaveForCheckpoint();
};


// Class Engine.StaticLightCollectionActor
// 0x0014 (0x0294 - 0x0280)
class AStaticLightCollectionActor : public ALight
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0280(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticLightCollectionActor");
		return ptr;
	}

};


// Class Engine.LightComponent
// 0x011C (0x01A0 - 0x0084)
class ULightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x11C];                                     // 0x0084(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void STATIC_OnUpdatePropertyDoNothing();
	void STATIC_OnUpdatePropertyLightColor();
	void STATIC_OnUpdatePropertyBrightness();
	void STATIC_OnUpdatePropertyOcclusionMaskDarkness();
	void STATIC_OnUpdatePropertyBloomTint();
	void STATIC_OnUpdatePropertyBloomScale();
	void UpdateLightShaftParameters();
	void UpdateColorAndBrightness();
	void STATIC_GetDirection();
	void STATIC_GetOrigin();
	void STATIC_SetLightProperties();
	void SetEnabled();
};


// Class Engine.DirectionalLightComponent
// 0x0020 (0x01C0 - 0x01A0)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void STATIC_OnUpdatePropertyBrightness();
	void STATIC_OnUpdatePropertyLightColor();
};


// Class Engine.DominantDirectionalLightComponent
// 0x00C0 (0x0280 - 0x01C0)
class UDominantDirectionalLightComponent : public UDirectionalLightComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x01C0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLightComponent");
		return ptr;
	}

};


// Class Engine.PointLightComponent
// 0x00A0 (0x0240 - 0x01A0)
class UPointLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x01A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void STATIC_OnUpdatePropertyBrightness();
	void STATIC_OnUpdatePropertyLightColor();
	void STATIC_SetTranslation();
};


// Class Engine.DominantPointLightComponent
// 0x0000 (0x0240 - 0x0240)
class UDominantPointLightComponent : public UPointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantPointLightComponent");
		return ptr;
	}

};


// Class Engine.SpotLightComponent
// 0x0028 (0x0268 - 0x0240)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void STATIC_SetRotation();
};


// Class Engine.DominantSpotLightComponent
// 0x00C8 (0x0330 - 0x0268)
class UDominantSpotLightComponent : public USpotLightComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0268(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantSpotLightComponent");
		return ptr;
	}

};


// Class Engine.SkyLightComponent
// 0x0008 (0x01A8 - 0x01A0)
class USkyLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}

};


// Class Engine.SphericalHarmonicLightComponent
// 0x0094 (0x0234 - 0x01A0)
class USphericalHarmonicLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x01A0(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphericalHarmonicLightComponent");
		return ptr;
	}

};


// Class Engine.LightEnvironmentComponent
// 0x0020 (0x00A4 - 0x0084)
class ULightEnvironmentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0084(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightEnvironmentComponent");
		return ptr;
	}


	void IsEnabled();
	void SetEnabled();
};


// Class Engine.DynamicLightEnvironmentComponent
// 0x00B0 (0x0154 - 0x00A4)
class UDynamicLightEnvironmentComponent : public ULightEnvironmentComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00A4(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicLightEnvironmentComponent");
		return ptr;
	}


	void STATIC_ResetEnvironment();
};


// Class Engine.ParticleLightEnvironmentComponent
// 0x001C (0x0170 - 0x0154)
class UParticleLightEnvironmentComponent : public UDynamicLightEnvironmentComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0154(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLightEnvironmentComponent");
		return ptr;
	}

};


// Class Engine.DrawLightConeComponent
// 0x0000 (0x0294 - 0x0294)
class UDrawLightConeComponent : public UDrawConeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawLightConeComponent");
		return ptr;
	}

};


// Class Engine.DrawLightRadiusComponent
// 0x0000 (0x029C - 0x029C)
class UDrawLightRadiusComponent : public UDrawSphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawLightRadiusComponent");
		return ptr;
	}

};


// Class Engine.LightFunction
// 0x0018 (0x0070 - 0x0058)
class ULightFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightFunction");
		return ptr;
	}

};


// Class Engine.SkeletalMeshComponent
// 0x0654 (0x08E8 - 0x0294)
class USkeletalMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x654];                                     // 0x0294(0x0654) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void STATIC_SetMaterial();
	void STATIC_GetRotation();
	void STATIC_GetPosition();
	void BreakConstraint();
	void STATIC_SkelMeshCompOnParticleSystemFinished();
	void PlayParticleEffect();
	void CreateForceField();
	void StopAnim();
	void STATIC_PlayAnim();
	void STATIC_ShowAllMaterialSections();
	void STATIC_ShowMaterialSection();
	void UpdateMeshForBrokenConstraints();
	void UnHideBoneByName();
	void STATIC_HideBoneByName();
	void STATIC_IsBoneHidden();
	void UnHideBone();
	void STATIC_HideBone();
	void STATIC_SetFaceFXRegisterEx();
	void STATIC_SetFaceFXRegister();
	void STATIC_GetFaceFXRegister();
	void DeclareFaceFXRegister();
	void STATIC_IsPlayingFaceFXAnim();
	void StopFaceFXAnim();
	void STATIC_PlayFaceFXAnim();
	void ToggleInstanceVertexWeights();
	void UpdateInstanceVertexWeightBones();
	void STATIC_FindInstanceVertexweightBonePair();
	void STATIC_RemoveInstanceVertexWeightBoneParented();
	void AddInstanceVertexWeightBoneParented();
	void STATIC_GetBonesWithinRadius();
	void UpdateAnimations();
	void STATIC_ForceSkelUpdate();
	void UpdateRBBonesFromSpaceBases();
	void STATIC_SetHasPhysicsAssetInstance();
	void STATIC_FindBodyInstanceNamed();
	void STATIC_FindConstraintBoneName();
	void STATIC_FindConstraintIndex();
	void STATIC_InitMorphTargets();
	void STATIC_InitSkelControls();
	void UpdateParentBoneMap();
	void STATIC_SetParentAnimComponent();
	void STATIC_SetAnimTreeTemplate();
	void STATIC_GetClosestCollidingBoneLocation();
	void STATIC_FindClosestBone();
	void TransformFromBoneSpace();
	void TransformToBoneSpace();
	void STATIC_GetBoneAxis();
	void STATIC_GetRefPosePosition();
	void BoneIsChildOf();
	void STATIC_GetBoneNames();
	void STATIC_GetParentBone();
	void STATIC_GetBoneMatrix();
	void STATIC_GetBoneName();
	void STATIC_MatchRefBone();
	void STATIC_GetBoneLocation();
	void STATIC_GetBoneQuaternion();
	void STATIC_FindMorphNode();
	void STATIC_FindSkelControl();
	void AllAnimNodes();
	void STATIC_FindAnimNode();
	void STATIC_FindMorphTarget();
	void STATIC_GetAnimLength();
	void STATIC_GetAnimRateByDuration();
	void STATIC_RestoreSavedAnimSets();
	void STATIC_SaveAnimSets();
	void STATIC_FindAnimSequence();
	void WakeSoftBody();
	void STATIC_SetSoftBodyFrozen();
	void UpdateSoftBodyParams();
	void STATIC_SetClothValidBounds();
	void EnableClothValidBounds();
	void AttachClothToCollidingShapes();
	void STATIC_SetClothVelocity();
	void STATIC_SetClothPosition();
	void STATIC_SetClothSleep();
	void STATIC_SetClothThickness();
	void STATIC_SetClothTearFactor();
	void STATIC_SetClothStretchingStiffness();
	void STATIC_SetClothSolverIterations();
	void STATIC_SetClothSleepLinearVelocity();
	void STATIC_SetClothPressure();
	void STATIC_SetClothFriction();
	void STATIC_SetClothFlags();
	void STATIC_SetClothDampingCoefficient();
	void STATIC_SetClothCollisionResponseCoefficient();
	void STATIC_SetClothBendingStiffness();
	void STATIC_SetClothAttachmentTearFactor();
	void STATIC_SetClothAttachmentResponseCoefficient();
	void STATIC_GetClothThickness();
	void STATIC_GetClothTearFactor();
	void STATIC_GetClothStretchingStiffness();
	void STATIC_GetClothSolverIterations();
	void STATIC_GetClothSleepLinearVelocity();
	void STATIC_GetClothPressure();
	void STATIC_GetClothFriction();
	void STATIC_GetClothFlags();
	void STATIC_GetClothDampingCoefficient();
	void STATIC_GetClothCollisionResponseCoefficient();
	void STATIC_GetClothBendingStiffness();
	void STATIC_GetClothAttachmentTearFactor();
	void STATIC_GetClothAttachmentResponseCoefficient();
	void STATIC_ForceApexClothingTeleport();
	void STATIC_ForceApexClothingTeleportAndReset();
	void STATIC_ResetClothVertsToRefPose();
	void STATIC_SetAttachClothVertsToBaseBody();
	void STATIC_SetClothExternalForce();
	void UpdateClothParams();
	void STATIC_SetEnableClothingSimulation();
	void STATIC_SetClothFrozen();
	void STATIC_SetEnableClothSimulation();
	void STATIC_SetForceRefPose();
	void STATIC_SetPhysicsAsset();
	void STATIC_SetSkeletalMesh();
	void STATIC_GetTransformMatrix();
	void AttachedComponents();
	void STATIC_IsComponentAttached();
	void STATIC_FindComponentAttachedToBone();
	void STATIC_GetSocketBoneName();
	void STATIC_GetSocketByName();
	void STATIC_GetSocketWorldLocationAndRotation();
	void AttachComponentToSocketEx();
	void AttachComponentEx();
	void AttachComponentToSocket();
	void DetachComponent();
	void AttachComponent();
};


// Class Engine.SkeletalMesh
// 0x0480 (0x04D8 - 0x0058)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x0058(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0078 (0x00D0 - 0x0058)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0058(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}

};


// Class Engine.SplineActor
// 0x0074 (0x02E8 - 0x0274)
class ASplineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0274(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineActor");
		return ptr;
	}


	void STATIC_OnToggleHidden();
	void STATIC_OnToggle();
	void STATIC_GetAllConnectedSplineActors();
	void STATIC_FindSplinePathTo();
	void STATIC_GetBestConnectionInDirection();
	void STATIC_GetRandomConnection();
	void BreakAllConnectionsFrom();
	void BreakAllConnections();
	void BreakConnectionTo();
	void STATIC_FindTargetForComponent();
	void STATIC_FindSplineComponentTo();
	void STATIC_IsConnectedTo();
	void AddConnectionTo();
	void UpdateConnectedSplineComponents();
	void UpdateSplineComponents();
	void STATIC_GetWorldSpaceTangent();
};


// Class Engine.SplineLoftActor
// 0x0058 (0x0340 - 0x02E8)
class ASplineLoftActor : public ASplineActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineLoftActor");
		return ptr;
	}


	void UpdateSplineParams();
	void ClearLoftMesh();
};


// Class Engine.SplineLoftActorMovable
// 0x0000 (0x0340 - 0x0340)
class ASplineLoftActorMovable : public ASplineLoftActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineLoftActorMovable");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x003C (0x02C0 - 0x0284)
class USplineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0284(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void STATIC_GetTangentAtDistanceAlongSpline();
	void STATIC_GetLocationAtDistanceAlongSpline();
	void STATIC_GetSplineLength();
	void UpdateSplineReparamTable();
	void UpdateSplineCurviness();
};


// Class Engine.ProcBuilding
// 0x0118 (0x03C8 - 0x02B0)
class AProcBuilding : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x02B0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuilding");
		return ptr;
	}


	void STATIC_FindEdgeForTopLevelScope();
	void BreakFractureComponent();
	void STATIC_GetAllGroupedProcBuildings();
	void STATIC_GetBaseMostBuilding();
	void STATIC_FindComponentsForTopLevelScope();
	void ClearBuildingMeshes();
};


// Class Engine.ProcBuilding_SimpleLODActor
// 0x0003 (0x029C - 0x0299)
class AProcBuilding_SimpleLODActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0299(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuilding_SimpleLODActor");
		return ptr;
	}

};


// Class Engine.PBRuleNodeBase
// 0x0034 (0x008C - 0x0058)
class UPBRuleNodeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0058(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeBase");
		return ptr;
	}

};


// Class Engine.PBRuleNodeAlternate
// 0x0010 (0x009C - 0x008C)
class UPBRuleNodeAlternate : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x008C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeAlternate");
		return ptr;
	}

};


// Class Engine.PBRuleNodeComment
// 0x0018 (0x00A4 - 0x008C)
class UPBRuleNodeComment : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x008C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeComment");
		return ptr;
	}

};


// Class Engine.PBRuleNodeCorner
// 0x002C (0x00B8 - 0x008C)
class UPBRuleNodeCorner : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x008C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeCorner");
		return ptr;
	}

};


// Class Engine.PBRuleNodeCycle
// 0x0010 (0x009C - 0x008C)
class UPBRuleNodeCycle : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x008C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeCycle");
		return ptr;
	}

};


// Class Engine.PBRuleNodeEdgeAngle
// 0x0014 (0x00A0 - 0x008C)
class UPBRuleNodeEdgeAngle : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x008C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeEdgeAngle");
		return ptr;
	}

};


// Class Engine.PBRuleNodeEdgeMesh
// 0x0008 (0x0094 - 0x008C)
class UPBRuleNodeEdgeMesh : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x008C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeEdgeMesh");
		return ptr;
	}

};


// Class Engine.PBRuleNodeExtractTopBottom
// 0x0010 (0x009C - 0x008C)
class UPBRuleNodeExtractTopBottom : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x008C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeExtractTopBottom");
		return ptr;
	}

};


// Class Engine.PBRuleNodeLODQuad
// 0x0004 (0x0090 - 0x008C)
class UPBRuleNodeLODQuad : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeLODQuad");
		return ptr;
	}

};


// Class Engine.PBRuleNodeMesh
// 0x0060 (0x00EC - 0x008C)
class UPBRuleNodeMesh : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x008C(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeMesh");
		return ptr;
	}


	void STATIC_PickRandomBuildingMesh();
};


// Class Engine.PBRuleNodeOcclusion
// 0x0000 (0x008C - 0x008C)
class UPBRuleNodeOcclusion : public UPBRuleNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeOcclusion");
		return ptr;
	}

};


// Class Engine.PBRuleNodeQuad
// 0x001C (0x00A8 - 0x008C)
class UPBRuleNodeQuad : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x008C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeQuad");
		return ptr;
	}

};


// Class Engine.PBRuleNodeRandom
// 0x000C (0x0098 - 0x008C)
class UPBRuleNodeRandom : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x008C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeRandom");
		return ptr;
	}

};


// Class Engine.PBRuleNodeRepeat
// 0x0008 (0x0094 - 0x008C)
class UPBRuleNodeRepeat : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x008C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeRepeat");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSize
// 0x000C (0x0098 - 0x008C)
class UPBRuleNodeSize : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x008C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSize");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSplit
// 0x0014 (0x00A0 - 0x008C)
class UPBRuleNodeSplit : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x008C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSplit");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSubRuleset
// 0x0008 (0x0094 - 0x008C)
class UPBRuleNodeSubRuleset : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x008C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSubRuleset");
		return ptr;
	}

};


// Class Engine.PBRuleNodeTransform
// 0x0018 (0x00A4 - 0x008C)
class UPBRuleNodeTransform : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x008C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeTransform");
		return ptr;
	}

};


// Class Engine.PBRuleNodeVariation
// 0x0004 (0x0090 - 0x008C)
class UPBRuleNodeVariation : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeVariation");
		return ptr;
	}

};


// Class Engine.PBRuleNodeWindowWall
// 0x0028 (0x00B4 - 0x008C)
class UPBRuleNodeWindowWall : public UPBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x008C(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeWindowWall");
		return ptr;
	}

};


// Class Engine.ProcBuildingRuleset
// 0x0084 (0x00DC - 0x0058)
class UProcBuildingRuleset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0058(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuildingRuleset");
		return ptr;
	}

};


// Class Engine.ReplicationInfo
// 0x0000 (0x0274 - 0x0274)
class AReplicationInfo : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationInfo");
		return ptr;
	}

};


// Class Engine.GameReplicationInfo
// 0x0068 (0x02DC - 0x0274)
class AGameReplicationInfo : public AReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0274(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameReplicationInfo");
		return ptr;
	}


	void ShouldShowGore();
	void STATIC_IsCoopMultiplayerGame();
	void STATIC_IsMultiplayerGame();
	void EndGame();
	void StartMatch();
	void SetTeam();
	void STATIC_RemovePRI();
	void AddPRI();
	void STATIC_OnSameTeam();
	void Timer();
	void STATIC_Reset();
	void STATIC_ReceivedGameClass();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.PlayerReplicationInfo
// 0x00D0 (0x0344 - 0x0274)
class APlayerReplicationInfo : public AReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0274(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerReplicationInfo");
		return ptr;
	}


	void STATIC_IsPrimaryPlayer();
	void UnregisterPlayerFromSession();
	void STATIC_RegisterPlayerWithSession();
	void STATIC_IsInvalidName();
	void STATIC_GetTeamNum();
	void STATIC_SetUniqueId();
	void STATIC_SeamlessTravelTo();
	void STATIC_IncrementDeaths();
	void CopyProperties();
	void STATIC_OverrideWith();
	void STATIC_Duplicate();
	void STATIC_SetWaitingPlayer();
	void SetPlayerName();
	void DisplayDebug();
	void STATIC_GetHumanReadableName();
	void STATIC_Reset();
	void Destroyed();
	void STATIC_ShouldBroadCastWelcomeMessage();
	void UpdatePing();
	void ReplicatedEvent();
	void STATIC_SetPlayerTeam();
	void ClientInitialize();
	void PostBeginPlay();
};


// Class Engine.TeamInfo
// 0x0020 (0x0294 - 0x0274)
class ATeamInfo : public AReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0274(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TeamInfo");
		return ptr;
	}


	void STATIC_GetTeamNum();
	void STATIC_GetHumanReadableName();
	void STATIC_RemoveFromTeam();
	void AddToTeam();
	void Destroyed();
	void ReplicatedEvent();
};


// Class Engine.Camera
// 0x0360 (0x05D4 - 0x0274)
class ACamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0274(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Camera");
		return ptr;
	}


	void StopCameraAnim();
	void StopAllCameraAnimsByType();
	void StopAllCameraAnims();
	void STATIC_PlayCameraAnim();
	void ClearAllCameraShakes();
	void STATIC_PlayWorldCameraShake();
	void CalcRadialShakeScale();
	void StopCameraShake();
	void STATIC_PlayCameraShake();
	void ClearCameraLensEffects();
	void STATIC_RemoveCameraLensEffect();
	void AddCameraLensEffect();
	void STATIC_FindCameraLensEffect();
	void DisplayDebug();
	void STATIC_ProcessViewRotation();
	void STATIC_SetViewTarget();
	void UpdateViewTarget();
	void CheckViewTarget();
	void STATIC_FillCameraCache();
	void BlendViewTargets();
	void ApplyAudioFade();
	void DoUpdateCamera();
	void UpdateCamera();
	void STATIC_SetDesiredColorScale();
	void STATIC_GetCameraRotation();
	void STATIC_GetCameraViewPoint();
	void STATIC_SetFOV();
	void GetFOVAngle();
	void AdjustViewportFOV();
	void STATIC_InitializeFor();
	void ApplyCameraModifiers();
	void Destroyed();
	void PostBeginPlay();
	void CreateCameraModifier();
};


// Class Engine.CameraActor
// 0x01DC (0x0450 - 0x0274)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1DC];                                     // 0x0274(0x01DC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	void DisplayDebug();
	void STATIC_GetCameraView();
};


// Class Engine.DynamicCameraActor
// 0x0000 (0x0450 - 0x0450)
class ADynamicCameraActor : public ACameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicCameraActor");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x01AC (0x0204 - 0x0058)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1AC];                                     // 0x0058(0x01AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x021C (0x0274 - 0x0058)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x21C];                                     // 0x0058(0x021C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void STATIC_SetPlaySpace();
	void ApplyTransientScaling();
	void Stop();
	void AdvanceAnim();
	void Update();
	void Play();
};


// Class Engine.CameraModifier
// 0x0020 (0x0078 - 0x0058)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}


	void UpdateAlpha();
	void STATIC_ProcessViewRotation();
	void ToggleModifier();
	void EnableModifier();
	void DisableModifier();
	void STATIC_RemoveCameraModifier();
	void AddCameraModifier();
	void STATIC_IsDisabled();
	void STATIC_ModifyCamera();
	void Init();
};


// Class Engine.CameraModifier_CameraShake
// 0x0014 (0x008C - 0x0078)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0078(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}


	void STATIC_ModifyCamera();
	void UpdateCameraShake();
	void STATIC_RemoveAllCameraShakes();
	void STATIC_RemoveCameraShake();
	void AddCameraShake();
	void STATIC_InitializeShake();
	void STATIC_ReinitShake();
	void STATIC_InitializeOffset();
};


// Class Engine.CameraShake
// 0x0080 (0x00D8 - 0x0058)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}


	void STATIC_GetLocOscillationMagnitude();
	void STATIC_GetRotOscillationMagnitude();
};


// Class Engine.CloudStorageUpgradeHelper
// 0x0000 (0x0058 - 0x0058)
class UCloudStorageUpgradeHelper : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageUpgradeHelper");
		return ptr;
	}


	void GetCloudUpgradeKeys();
	void HandleLocalKeyValue();
	void HandleLocalDocument();
};


// Class Engine.AnalyticEventsBase
// 0x0018 (0x0090 - 0x0078)
class UAnalyticEventsBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnalyticEventsBase");
		return ptr;
	}


	void SendCachedEvents();
	void LogCurrencyGivenEvent();
	void LogCurrencyPurchaseEvent();
	void LogItemPurchaseEvent();
	void LogUserAttributeUpdateArray();
	void LogUserAttributeUpdate();
	void LogErrorMessage();
	void EndStringEventParamArray();
	void LogStringEventParamArray();
	void EndStringEventParam();
	void LogStringEventParam();
	void EndStringEvent();
	void LogStringEvent();
	void EndSession();
	void StartSession();
	void SetUserId();
	void Init();
	void STATIC_IsSessionInProgress();
};


// Class Engine.MultiProviderAnalytics
// 0x0020 (0x00B0 - 0x0090)
class UMultiProviderAnalytics : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiProviderAnalytics");
		return ptr;
	}


	void SendCachedEvents();
	void LogCurrencyGivenEvent();
	void LogCurrencyPurchaseEvent();
	void LogItemPurchaseEvent();
	void LogUserAttributeUpdateArray();
	void LogUserAttributeUpdate();
	void LogErrorMessage();
	void EndStringEventParamArray();
	void LogStringEventParamArray();
	void EndStringEventParam();
	void LogStringEventParam();
	void EndStringEvent();
	void LogStringEvent();
	void EndSession();
	void StartSession();
	void SetUserId();
	void Init();
};


// Class Engine.AppNotificationsBase
// 0x006C (0x00E4 - 0x0078)
class UAppNotificationsBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0078(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AppNotificationsBase");
		return ptr;
	}


	void DebugLogNotification();
	void OnApplicationWillEnterForeground();
	void AllowsRemoteNotificationsSounds();
	void AllowsRemoteNotificationsBadegeIcons();
	void AllowsRemoteNotificationsAlerts();
	void AreRemoteNotificationsEnabled();
	void OnRegisterForRemoteNotificationsComplete();
	void STATIC_RegisterForRemoteNotifications();
	void OnReceivedRemoteNotification();
	void OnReceivedLocalNotification();
	void CancelScheduledLocalNotification();
	void CancelAllScheduledLocalNotifications();
	void STATIC_ScheduleLocalNotification();
	void WasLaunchedViaNotification();
	void Init();
};


// Class Engine.CloudStorageBase
// 0x0014 (0x008C - 0x0078)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0078(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}


	void UpgradeLocalStorageToCloud();
	void ResolveConflictWithVersionIndex();
	void ResolveConflictWithNewestDocument();
	void WaitForWritesToFinish();
	void IsStillWritingFiles();
	void SaveDocumentWithObject();
	void SaveDocumentWithBytes();
	void SaveDocumentWithString();
	void WriteCloudDocument();
	void ParseDocumentAsObject();
	void ParseDocumentAsBytes();
	void ParseDocumentAsString();
	void ReadCloudDocument();
	void DeleteAllCloudDocuments();
	void CreateCloudDocument();
	void GetCloudDocumentName();
	void GetNumCloudDocuments();
	void QueryForCloudDocuments();
	void WriteKeyValue();
	void ReadKeyValueFromLocalStore();
	void ReadKeyValue();
	void STATIC_IsUsingLocalStorage();
	void Init();
};


// Class Engine.FacebookIntegration
// 0x0060 (0x00D8 - 0x0078)
class UFacebookIntegration : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0078(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FacebookIntegration");
		return ptr;
	}


	void Disconnect();
	void FacebookDialog();
	void FacebookRequest();
	void IsAuthorized();
	void Authorize();
	void Init();
};


// Class Engine.GoogleIntegration
// 0x00A0 (0x0118 - 0x0078)
class UGoogleIntegration : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0078(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GoogleIntegration");
		return ptr;
	}


	void SubscribeToYouTubeChannel();
	void RevokeAuthorization();
	void IsAuthorized();
	void Authorize();
	void Init();
};


// Class Engine.InAppMessageBase
// 0x0000 (0x0078 - 0x0078)
class UInAppMessageBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InAppMessageBase");
		return ptr;
	}


	void ShowInAppEmailUI();
	void ShowInAppSMSUI();
	void Init();
};


// Class Engine.InGameAdManager
// 0x0004 (0x007C - 0x0078)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}


	void STATIC_SetPauseWhileAdOpen();
	void STATIC_ForceCloseAd();
	void STATIC_HideBanner();
	void STATIC_ShowBanner();
	void Init();
};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0078 - 0x0078)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	void TwitterRequest();
	void GetAccountId();
	void GetAccountName();
	void GetNumAccounts();
	void AuthorizeAccounts();
	void ShowTweetUI();
	void CanShowTweetUI();
	void Init();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0080 (0x00D8 - 0x0058)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	void STATIC_GetHeaderValue();
	void STATIC_GetHeader();
	void STATIC_GetNumHeaders();
};


// Class Engine.SeqEvent_HitWall
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_HitWall : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_HitWall");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0014 (0x006C - 0x0058)
class ULocalMessage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}


	void STATIC_PartiallyDuplicates();
	void STATIC_IsConsoleMessage();
	void STATIC_GetLifeTime();
	void STATIC_GetFontSize();
	void STATIC_GetPos();
	void STATIC_GetColor();
	void STATIC_GetConsoleColor();
	void STATIC_GetString();
	void ClientReceive();
};


// Class Engine.SeqAct_Destroy
// 0x0014 (0x016C - 0x0158)
class USeqAct_Destroy : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Destroy");
		return ptr;
	}

};


// Class Engine.SeqAct_Teleport
// 0x0018 (0x0170 - 0x0158)
class USeqAct_Teleport : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Teleport");
		return ptr;
	}


	void GetObjClassVersion();
	void STATIC_ShouldTeleport();
};


// Class Engine.SeqAct_SetVelocity
// 0x0014 (0x016C - 0x0158)
class USeqAct_SetVelocity : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVelocity");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_ToggleHidden
// 0x0014 (0x016C - 0x0158)
class USeqAct_ToggleHidden : public USeqAct_Toggle
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleHidden");
		return ptr;
	}

};


// Class Engine.SeqAct_AttachToActor
// 0x0030 (0x0188 - 0x0158)
class USeqAct_AttachToActor : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0158(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AttachToActor");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqEvent_MobileTouch
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_MobileTouch : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_MobileTouch");
		return ptr;
	}

};


// Class Engine.OnlinePlayerInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlinePlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerInterface");
		return ptr;
	}


	void STATIC_GetAchievements();
	void ClearReadAchievementsCompleteDelegate();
	void AddReadAchievementsCompleteDelegate();
	void STATIC_OnReadAchievementsComplete();
	void STATIC_ReadAchievements();
	void ClearUnlockAchievementCompleteDelegate();
	void AddUnlockAchievementCompleteDelegate();
	void STATIC_OnUnlockAchievementComplete();
	void UnlockAchievement();
	void DeleteMessage();
	void ClearFriendMessageReceivedDelegate();
	void AddFriendMessageReceivedDelegate();
	void STATIC_OnFriendMessageReceived();
	void STATIC_GetFriendMessages();
	void ClearJoinFriendGameCompleteDelegate();
	void AddJoinFriendGameCompleteDelegate();
	void STATIC_OnJoinFriendGameComplete();
	void STATIC_JoinFriendGame();
	void ClearReceivedGameInviteDelegate();
	void AddReceivedGameInviteDelegate();
	void STATIC_OnReceivedGameInvite();
	void STATIC_SendGameInviteToFriends();
	void STATIC_SendGameInviteToFriend();
	void STATIC_SendMessageToFriend();
	void ClearFriendInviteReceivedDelegate();
	void AddFriendInviteReceivedDelegate();
	void STATIC_OnFriendInviteReceived();
	void STATIC_RemoveFriend();
	void DenyFriendInvite();
	void AcceptFriendInvite();
	void ClearAddFriendByNameCompleteDelegate();
	void AddAddFriendByNameCompleteDelegate();
	void STATIC_OnAddFriendByNameComplete();
	void AddFriendByName();
	void AddFriend();
	void STATIC_GetKeyboardInputResults();
	void ClearKeyboardInputDoneDelegate();
	void AddKeyboardInputDoneDelegate();
	void STATIC_OnKeyboardInputComplete();
	void STATIC_ShowKeyboardUI();
	void STATIC_SetOnlineStatus();
	void STATIC_GetFriendsList();
	void ClearReadFriendsCompleteDelegate();
	void AddReadFriendsCompleteDelegate();
	void STATIC_OnReadFriendsComplete();
	void STATIC_ReadFriendsList();
	void ClearWritePlayerStorageCompleteDelegate();
	void AddWritePlayerStorageCompleteDelegate();
	void STATIC_OnWritePlayerStorageComplete();
	void WritePlayerStorage();
	void STATIC_GetPlayerStorage();
	void ClearReadPlayerStorageForNetIdCompleteDelegate();
	void AddReadPlayerStorageForNetIdCompleteDelegate();
	void STATIC_OnReadPlayerStorageForNetIdComplete();
	void STATIC_ReadPlayerStorageForNetId();
	void ClearReadPlayerStorageCompleteDelegate();
	void AddReadPlayerStorageCompleteDelegate();
	void STATIC_OnReadPlayerStorageComplete();
	void STATIC_ReadPlayerStorage();
	void ClearWriteProfileSettingsCompleteDelegate();
	void AddWriteProfileSettingsCompleteDelegate();
	void STATIC_OnWriteProfileSettingsComplete();
	void WriteProfileSettings();
	void STATIC_GetProfileSettings();
	void ClearReadProfileSettingsCompleteDelegate();
	void AddReadProfileSettingsCompleteDelegate();
	void STATIC_OnReadProfileSettingsComplete();
	void STATIC_ReadProfileSettings();
	void ClearFriendsChangeDelegate();
	void AddFriendsChangeDelegate();
	void ClearMutingChangeDelegate();
	void AddMutingChangeDelegate();
	void ClearLoginCancelledDelegate();
	void AddLoginCancelledDelegate();
	void ClearLoginStatusChangeDelegate();
	void AddLoginStatusChangeDelegate();
	void STATIC_OnLoginStatusChange();
	void ClearLoginChangeDelegate();
	void AddLoginChangeDelegate();
	void STATIC_ShowFriendsUI();
	void STATIC_IsMuted();
	void AreAnyFriends();
	void STATIC_IsFriend();
	void CanShowPresenceInformation();
	void CanViewPlayerProfiles();
	void CanPurchaseContent();
	void CanDownloadUserContent();
	void CanCommunicate();
	void CanPlayOnline();
	void STATIC_IsLocalLogin();
	void STATIC_IsGuestLogin();
	void STATIC_GetPlayerNickname();
	void STATIC_GetUniquePlayerId();
	void GetLoginStatus();
	void ClearLogoutCompletedDelegate();
	void AddLogoutCompletedDelegate();
	void STATIC_OnLogoutCompleted();
	void STATIC_Logout();
	void ClearLoginFailedDelegate();
	void AddLoginFailedDelegate();
	void STATIC_OnLoginFailed();
	void AutoLogin();
	void Login();
	void STATIC_ShowLoginUI();
	void STATIC_OnFriendsChange();
	void STATIC_OnMutingChange();
	void STATIC_OnLoginCancelled();
	void STATIC_OnLoginChange();
};


// Class Engine.SharedCloudFileInterface
// 0x0000 (0x0058 - 0x0058)
class USharedCloudFileInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SharedCloudFileInterface");
		return ptr;
	}


	void ClearWriteSharedFileCompleteDelegate();
	void AddWriteSharedFileCompleteDelegate();
	void WriteSharedFile();
	void STATIC_OnWriteSharedFileComplete();
	void ClearReadSharedFileCompleteDelegate();
	void AddReadSharedFileCompleteDelegate();
	void STATIC_ReadSharedFile();
	void STATIC_OnReadSharedFileComplete();
	void ClearSharedFile();
	void ClearSharedFiles();
	void STATIC_GetSharedFileContents();
};


// Class Engine.UserCloudFileInterface
// 0x0000 (0x0058 - 0x0058)
class UUserCloudFileInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserCloudFileInterface");
		return ptr;
	}


	void STATIC_GetLastNCloudSaveOwners();
	void ClearReadLastNCloudSaveOwnersCompleteDelegate();
	void AddReadLastNCloudSaveOwnersCompleteDelegate();
	void STATIC_OnReadLastNCloudSaveOwnersComplete();
	void STATIC_ReadLastNCloudSaveOwners();
	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate();
	void AddDeleteUserFileCompleteDelegate();
	void DeleteUserFile();
	void STATIC_OnDeleteUserFileComplete();
	void ClearWriteUserFileCompleteDelegate();
	void AddWriteUserFileCompleteDelegate();
	void WriteUserFile();
	void STATIC_OnWriteUserFileComplete();
	void ClearReadUserFileCompleteDelegate();
	void AddReadUserFileCompleteDelegate();
	void STATIC_ReadUserFile();
	void STATIC_OnReadUserFileComplete();
	void STATIC_GetUserFileList();
	void ClearEnumerateUserFileCompleteDelegate();
	void AddEnumerateUserFileCompleteDelegate();
	void EnumerateUserFiles();
	void STATIC_OnEnumerateUserFilesComplete();
	void ClearFile();
	void ClearFiles();
	void STATIC_GetFileContents();
};


// Class Engine.OnlineSocialInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineSocialInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSocialInterface");
		return ptr;
	}


	void ClearPostLinkCompleted();
	void AddPostLinkCompleted();
	void STATIC_OnPostLinkCompleted();
	void STATIC_PostLink();
	void ClearPostImageCompleted();
	void AddPostImageCompleted();
	void STATIC_OnPostImageCompleted();
	void STATIC_PostImage();
	void ClearQuerySocialPostPrivilegesCompleted();
	void AddQuerySocialPostPrivilegesCompleted();
	void STATIC_OnQuerySocialPostPrivilegesCompleted();
	void STATIC_QuerySocialPostPrivileges();
};


// Class Engine.OnlineTitleFileCacheInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineTitleFileCacheInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineTitleFileCacheInterface");
		return ptr;
	}


	void DeleteTitleFile();
	void DeleteTitleFiles();
	void ClearCachedFile();
	void ClearCachedFiles();
	void STATIC_GetTitleFileLogicalName();
	void STATIC_GetTitleFileHash();
	void STATIC_GetTitleFileState();
	void STATIC_GetTitleFileContents();
	void ClearSaveTitleFileCompleteDelegate();
	void AddSaveTitleFileCompleteDelegate();
	void STATIC_OnSaveTitleFileComplete();
	void STATIC_SaveTitleFile();
	void ClearLoadTitleFileCompleteDelegate();
	void AddLoadTitleFileCompleteDelegate();
	void STATIC_OnLoadTitleFileComplete();
	void STATIC_LoadTitleFile();
};


// Class Engine.OnlineTitleFileInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineTitleFileInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineTitleFileInterface");
		return ptr;
	}


	void STATIC_GetTitleFileList();
	void ClearRequestTitleFileListCompleteDelegate();
	void AddRequestTitleFileListCompleteDelegate();
	void STATIC_OnRequestTitleFileListComplete();
	void STATIC_RequestTitleFileList();
	void ClearDownloadedFile();
	void ClearDownloadedFiles();
	void STATIC_GetTitleFileState();
	void STATIC_GetTitleFileContents();
	void ClearReadTitleFileCompleteDelegate();
	void AddReadTitleFileCompleteDelegate();
	void STATIC_ReadTitleFile();
	void OnReadTitleFileComplete();
};


// Class Engine.OnlinePartyChatInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlinePartyChatInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePartyChatInterface");
		return ptr;
	}


	void STATIC_IsInPartyChat();
	void STATIC_ShowCommunitySessionsUI();
	void STATIC_ShowVoiceChannelUI();
	void STATIC_ShowPartyUI();
	void STATIC_GetPartyBandwidth();
	void STATIC_SetPartyMemberCustomData();
	void ClearPartyMembersInfoChangedDelegate();
	void AddPartyMembersInfoChangedDelegate();
	void STATIC_OnPartyMembersInfoChanged();
	void ClearPartyMemberListChangedDelegate();
	void AddPartyMemberListChangedDelegate();
	void STATIC_OnPartyMemberListChanged();
	void STATIC_GetPartyMemberInformation();
	void STATIC_GetPartyMembersInformation();
	void ClearSendPartyGameInvitesCompleteDelegate();
	void AddSendPartyGameInvitesCompleteDelegate();
	void STATIC_OnSendPartyGameInvitesComplete();
	void STATIC_SendPartyGameInvites();
};


// Class Engine.OnlineNewsInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineNewsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineNewsInterface");
		return ptr;
	}


	void STATIC_GetNews();
	void ClearReadNewsCompletedDelegate();
	void AddReadNewsCompletedDelegate();
	void STATIC_OnReadNewsCompleted();
	void STATIC_ReadNews();
};


// Class Engine.OnlineStatsInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineStatsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsInterface");
		return ptr;
	}


	void CalcAggregateSkill();
	void STATIC_RegisterStatGuid();
	void STATIC_GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate();
	void AddRegisterHostStatGuidCompleteDelegate();
	void STATIC_OnRegisterHostStatGuidComplete();
	void STATIC_RegisterHostStatGuid();
	void STATIC_GetHostStatGuid();
	void WriteOnlinePlayerScores();
	void ClearFlushOnlineStatsCompleteDelegate();
	void AddFlushOnlineStatsCompleteDelegate();
	void STATIC_OnFlushOnlineStatsComplete();
	void STATIC_FlushOnlineStats();
	void WriteOnlineStats();
	void STATIC_FreeStats();
	void ClearReadOnlineStatsCompleteDelegate();
	void AddReadOnlineStatsCompleteDelegate();
	void STATIC_OnReadOnlineStatsComplete();
	void STATIC_ReadOnlineStatsByRankAroundPlayer();
	void STATIC_ReadOnlineStatsByRank();
	void STATIC_ReadOnlineStatsForFriends();
	void STATIC_ReadOnlineStats();
};


// Class Engine.OnlineVoiceInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineVoiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineVoiceInterface");
		return ptr;
	}


	void UnmuteAll();
	void STATIC_MuteAll();
	void STATIC_SetSpeechRecognitionObject();
	void STATIC_SelectVocabulary();
	void ClearRecognitionCompleteDelegate();
	void AddRecognitionCompleteDelegate();
	void STATIC_OnRecognitionComplete();
	void STATIC_GetRecognitionResults();
	void StopSpeechRecognition();
	void StartSpeechRecognition();
	void StopNetworkedVoice();
	void StartNetworkedVoice();
	void ClearPlayerTalkingDelegate();
	void AddPlayerTalkingDelegate();
	void STATIC_OnPlayerTalkingStateChange();
	void UnmuteRemoteTalker();
	void STATIC_MuteRemoteTalker();
	void STATIC_SetRemoteTalkerPriority();
	void STATIC_IsHeadsetPresent();
	void STATIC_IsRemotePlayerTalking();
	void STATIC_IsLocalPlayerTalking();
	void UnregisterRemoteTalker();
	void STATIC_RegisterRemoteTalker();
	void UnregisterLocalTalker();
	void STATIC_RegisterLocalTalker();
};


// Class Engine.OnlineContentInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineContentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineContentInterface");
		return ptr;
	}


	void ClearSaveGames();
	void DeleteSaveGame();
	void ClearWriteSaveGameDataComplete();
	void AddWriteSaveGameDataComplete();
	void STATIC_OnWriteSaveGameDataComplete();
	void WriteSaveGameData();
	void ClearReadSaveGameDataComplete();
	void AddReadSaveGameDataComplete();
	void STATIC_OnReadSaveGameDataComplete();
	void STATIC_GetSaveGameData();
	void STATIC_ReadSaveGameData();
	void STATIC_GetAvailableDownloadCounts();
	void ClearQueryAvailableDownloadsComplete();
	void AddQueryAvailableDownloadsComplete();
	void STATIC_OnQueryAvailableDownloadsComplete();
	void STATIC_QueryAvailableDownloads();
	void ClearCrossTitleSaveGames();
	void ClearReadCrossTitleSaveGameDataComplete();
	void AddReadCrossTitleSaveGameDataComplete();
	void STATIC_OnReadCrossTitleSaveGameDataComplete();
	void STATIC_GetCrossTitleSaveGameData();
	void STATIC_ReadCrossTitleSaveGameData();
	void ClearReadCrossTitleContentCompleteDelegate();
	void AddReadCrossTitleContentCompleteDelegate();
	void STATIC_OnReadCrossTitleContentComplete();
	void STATIC_GetCrossTitleContentList();
	void ClearCrossTitleContentList();
	void STATIC_ReadCrossTitleContentList();
	void STATIC_GetContentList();
	void ClearContentList();
	void STATIC_ReadContentList();
	void ClearReadContentComplete();
	void AddReadContentComplete();
	void STATIC_OnReadContentComplete();
	void ClearContentChangeDelegate();
	void AddContentChangeDelegate();
	void STATIC_OnContentChange();
};


// Class Engine.OnlineGameInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineGameInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameInterface");
		return ptr;
	}


	void ClearJoinMigratedOnlineGameCompleteDelegate();
	void AddJoinMigratedOnlineGameCompleteDelegate();
	void STATIC_OnJoinMigratedOnlineGameComplete();
	void STATIC_JoinMigratedOnlineGame();
	void ClearMigrateOnlineGameCompleteDelegate();
	void AddMigrateOnlineGameCompleteDelegate();
	void STATIC_OnMigrateOnlineGameComplete();
	void STATIC_MigrateOnlineGame();
	void ClearRecalculateSkillRatingCompleteDelegate();
	void AddRecalculateSkillRatingCompleteDelegate();
	void STATIC_OnRecalculateSkillRatingComplete();
	void STATIC_RecalculateSkillRating();
	void AcceptGameInvite();
	void ClearGameInviteAcceptedDelegate();
	void AddGameInviteAcceptedDelegate();
	void STATIC_OnGameInviteAccepted();
	void STATIC_GetArbitratedPlayers();
	void ClearArbitrationRegistrationCompleteDelegate();
	void AddArbitrationRegistrationCompleteDelegate();
	void STATIC_OnArbitrationRegistrationComplete();
	void STATIC_RegisterForArbitration();
	void ClearEndOnlineGameCompleteDelegate();
	void AddEndOnlineGameCompleteDelegate();
	void STATIC_OnEndOnlineGameComplete();
	void EndOnlineGame();
	void ClearStartOnlineGameCompleteDelegate();
	void AddStartOnlineGameCompleteDelegate();
	void STATIC_OnStartOnlineGameComplete();
	void StartOnlineGame();
	void ClearUnregisterPlayerCompleteDelegate();
	void AddUnregisterPlayerCompleteDelegate();
	void STATIC_OnUnregisterPlayerComplete();
	void UnregisterPlayers();
	void UnregisterPlayer();
	void ClearRegisterPlayerCompleteDelegate();
	void AddRegisterPlayerCompleteDelegate();
	void STATIC_OnRegisterPlayerComplete();
	void STATIC_RegisterPlayers();
	void STATIC_RegisterPlayer();
	void STATIC_GetResolvedConnectString();
	void ClearJoinOnlineGameCompleteDelegate();
	void AddJoinOnlineGameCompleteDelegate();
	void STATIC_OnJoinOnlineGameComplete();
	void STATIC_JoinOnlineGame();
	void STATIC_QueryNonAdvertisedData();
	void STATIC_FreeSearchResults();
	void STATIC_GetGameSearch();
	void BindPlatformSpecificSessionToSearch();
	void STATIC_ReadPlatformSpecificSessionInfoBySessionName();
	void STATIC_ReadPlatformSpecificSessionInfo();
	void ClearQosStatusChangedDelegate();
	void AddQosStatusChangedDelegate();
	void STATIC_OnQosStatusChanged();
	void ClearCancelFindOnlineGamesCompleteDelegate();
	void AddCancelFindOnlineGamesCompleteDelegate();
	void STATIC_OnCancelFindOnlineGamesComplete();
	void CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate();
	void AddFindOnlineGamesCompleteDelegate();
	void STATIC_OnFindOnlineGamesComplete();
	void STATIC_FindOnlineGames();
	void ClearDestroyOnlineGameCompleteDelegate();
	void AddDestroyOnlineGameCompleteDelegate();
	void STATIC_OnDestroyOnlineGameComplete();
	void DestroyOnlineGame();
	void STATIC_GetGameSettings();
	void ClearUpdateOnlineGameCompleteDelegate();
	void AddUpdateOnlineGameCompleteDelegate();
	void STATIC_OnUpdateOnlineGameComplete();
	void UpdateOnlineGame();
	void ClearCreateOnlineGameCompleteDelegate();
	void AddCreateOnlineGameCompleteDelegate();
	void STATIC_OnCreateOnlineGameComplete();
	void CreateOnlineGame();
};


// Class Engine.OnlineSystemInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSystemInterface");
		return ptr;
	}


	void STATIC_GetLocale();
	void ClearStorageDeviceChangeDelegate();
	void AddStorageDeviceChangeDelegate();
	void STATIC_OnStorageDeviceChange();
	void GetNATType();
	void ClearConnectionStatusChangeDelegate();
	void AddConnectionStatusChangeDelegate();
	void STATIC_OnConnectionStatusChange();
	void STATIC_IsControllerConnected();
	void ClearControllerChangeDelegate();
	void AddControllerChangeDelegate();
	void STATIC_OnControllerChange();
	void STATIC_SetNetworkNotificationPosition();
	void STATIC_GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate();
	void AddExternalUIChangeDelegate();
	void STATIC_OnExternalUIChange();
	void ClearLinkStatusChangeDelegate();
	void AddLinkStatusChangeDelegate();
	void STATIC_OnLinkStatusChange();
	void HasLinkConnection();
};


// Class Engine.OnlinePlayerInterfaceEx
// 0x0000 (0x0058 - 0x0058)
class UOnlinePlayerInterfaceEx : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerInterfaceEx");
		return ptr;
	}


	void STATIC_ShowCustomMessageUI();
	void ClearCrossTitleProfileSettings();
	void STATIC_GetCrossTitleProfileSettings();
	void ClearReadCrossTitleProfileSettingsCompleteDelegate();
	void AddReadCrossTitleProfileSettingsCompleteDelegate();
	void STATIC_OnReadCrossTitleProfileSettingsComplete();
	void STATIC_ReadCrossTitleProfileSettings();
	void UnlockAvatarAward();
	void STATIC_ShowCustomPlayersUI();
	void STATIC_ShowPlayersUI();
	void STATIC_ShowFriendsInviteUI();
	void ClearProfileDataChangedDelegate();
	void AddProfileDataChangedDelegate();
	void STATIC_OnProfileDataChanged();
	void UnlockGamerPicture();
	void STATIC_IsDeviceValid();
	void STATIC_GetDeviceSelectionResults();
	void ClearDeviceSelectionDoneDelegate();
	void AddDeviceSelectionDoneDelegate();
	void STATIC_OnDeviceSelectionComplete();
	void STATIC_ShowDeviceSelectionUI();
	void STATIC_ShowMembershipMarketplaceUI();
	void STATIC_ShowContentMarketplaceUI();
	void STATIC_ShowInviteUI();
	void STATIC_ShowAchievementsUI();
	void STATIC_ShowMessagesUI();
	void STATIC_ShowGamerCardUI();
	void STATIC_ShowFeedbackUI();
};


// Class Engine.OnlineAccountInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineAccountInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineAccountInterface");
		return ptr;
	}


	void STATIC_GetLocalAccountNames();
	void DeleteLocalAccount();
	void STATIC_RenameLocalAccount();
	void CreateLocalAccount();
	void ClearCreateOnlineAccountCompletedDelegate();
	void AddCreateOnlineAccountCompletedDelegate();
	void STATIC_OnCreateOnlineAccountCompleted();
	void CreateOnlineAccount();
};


// Class Engine.AccessControl
// 0x0164 (0x03D8 - 0x0274)
class AAccessControl : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x164];                                     // 0x0274(0x0164) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AccessControl");
		return ptr;
	}


	void STATIC_IsPendingAuth();
	void Cleanup();
	void STATIC_NotifyExit();
	void STATIC_NotifyGameEnding();
	void STATIC_NotifyServerTravel();
	void STATIC_OnDestroyOnlineGameComplete();
	void StaticOnClientConnectionClose();
	void OnClientConnectionClose();
	void STATIC_ListenHostAuthTimeout();
	void EndListenHostAuth();
	void ContinueListenHostAuth();
	void BeginListenHostAuth();
	void STATIC_ProcessServerAuthRetryRequest();
	void STATIC_ProcessServerAuthRequest();
	void OnClientAuthComplete();
	void STATIC_ProcessClientAuthResponse();
	void OnAuthReady();
	void STATIC_PendingAuthTimer();
	void PostLogin();
	void PreLogin();
	void ClearAuthDelegates();
	void STATIC_RegisterAuthDelegates();
	void STATIC_InitAuthHooks();
	void STATIC_IsIDBanned();
	void CheckIPPolicy();
	void ValidLogin();
	void STATIC_ParseAdminOptions();
	void AdminExited();
	void AdminEntered();
	void AdminLogout();
	void AdminLogin();
	void STATIC_KickPlayer();
	void ForceKickPlayer();
	void STATIC_KickBan();
	void STATIC_Kick();
	void STATIC_GetControllerFromString();
	void STATIC_RequiresPassword();
	void STATIC_SetGamePassword();
	void STATIC_SetAdminPassword();
	void STATIC_IsAdmin();
	void Destroyed();
	void PostBeginPlay();
};


// Class Engine.Admin
// 0x0000 (0x0780 - 0x0780)
class AAdmin : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Admin");
		return ptr;
	}


	void STATIC_ServerSwitch();
	void Switch();
	void STATIC_ServerRestartMap();
	void STATIC_RestartMap();
	void STATIC_PlayerList();
	void STATIC_ServerKick();
	void STATIC_Kick();
	void STATIC_ServerKickBan();
	void STATIC_KickBan();
	void STATIC_ServerAdmin();
	void Admin();
	void PostBeginPlay();
};


// Class Engine.ApexDestructibleActorSpawnable
// 0x0000 (0x02CC - 0x02CC)
class AApexDestructibleActorSpawnable : public AApexDestructibleActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleActorSpawnable");
		return ptr;
	}

};


// Class Engine.EmitterSpawnable
// 0x0008 (0x02B0 - 0x02A8)
class AEmitterSpawnable : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterSpawnable");
		return ptr;
	}


	void ReplicatedEvent();
	void SetTemplate();
};


// Class Engine.KAssetSpawnable
// 0x0000 (0x0290 - 0x0290)
class AKAssetSpawnable : public AKAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KAssetSpawnable");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMeshCinematic
// 0x0000 (0x00AC - 0x00AC)
class UActorFactorySkeletalMeshCinematic : public UActorFactorySkeletalMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMeshCinematic");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMeshMAT
// 0x0000 (0x00AC - 0x00AC)
class UActorFactorySkeletalMeshMAT : public UActorFactorySkeletalMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMeshMAT");
		return ptr;
	}

};


// Class Engine.SeqEvent_Death
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_Death : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Death");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleGodMode
// 0x0000 (0x0158 - 0x0158)
class USeqAct_ToggleGodMode : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleGodMode");
		return ptr;
	}

};


// Class Engine.SeqAct_ControlMovieTexture
// 0x0008 (0x0160 - 0x0158)
class USeqAct_ControlMovieTexture : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ControlMovieTexture");
		return ptr;
	}


	void Activated();
};


// Class Engine.CoverReplicator
// 0x0010 (0x0284 - 0x0274)
class ACoverReplicator : public AReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0274(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverReplicator");
		return ptr;
	}


	void ClientReceiveLinkDisabledState();
	void STATIC_ServerSendLinkDisabledState();
	void STATIC_NotifyLinkDisabledStateChange();
	void ClientReceiveManualCoverTypeSlots();
	void STATIC_ServerSendManualCoverTypeSlots();
	void STATIC_NotifySetManualCoverTypeForSlots();
	void ClientReceiveAdjustedSlots();
	void STATIC_ServerSendAdjustedSlots();
	void STATIC_NotifyAutoAdjustSlots();
	void ClientReceiveDisabledSlots();
	void STATIC_ServerSendDisabledSlots();
	void STATIC_NotifyDisabledSlots();
	void ClientReceiveEnabledSlots();
	void STATIC_ServerSendEnabledSlots();
	void STATIC_NotifyEnabledSlots();
	void ClientReceiveInitialCoverReplicationInfo();
	void STATIC_ServerSendInitialCoverReplicationInfo();
	void ClientSetOwner();
	void STATIC_ReplicateInitialCoverInfo();
	void STATIC_PurgeOldEntries();
};


// Class Engine.GameMessage
// 0x0170 (0x01DC - 0x006C)
class UGameMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x006C(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMessage");
		return ptr;
	}


	void STATIC_GetString();
};


// Class Engine.DmgType_Suicided
// 0x0000 (0x0088 - 0x0088)
class UDmgType_Suicided : public UKillZDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Suicided");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleInput
// 0x0004 (0x015C - 0x0158)
class USeqAct_ToggleInput : public USeqAct_Toggle
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleInput");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleHUD
// 0x0000 (0x0158 - 0x0158)
class USeqAct_ToggleHUD : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleHUD");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_ForceFeedback
// 0x0010 (0x0168 - 0x0158)
class USeqAct_ForceFeedback : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ForceFeedback");
		return ptr;
	}

};


// Class Engine.SeqAct_ConsoleCommand
// 0x0020 (0x0178 - 0x0158)
class USeqAct_ConsoleCommand : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ConsoleCommand");
		return ptr;
	}


	void GetObjClassVersion();
	void VersionUpdated();
};


// Class Engine.SeqAct_FlyThroughHasEnded
// 0x0000 (0x0158 - 0x0158)
class USeqAct_FlyThroughHasEnded : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FlyThroughHasEnded");
		return ptr;
	}

};


// Class Engine.SeqAct_SetSoundMode
// 0x000C (0x0164 - 0x0158)
class USeqAct_SetSoundMode : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSoundMode");
		return ptr;
	}


	void GetObjClassVersion();
	void Activated();
};


// Class Engine.SplineComponentSimplified
// 0x0000 (0x02C0 - 0x02C0)
class USplineComponentSimplified : public USplineComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponentSimplified");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleSplineNonLoop
// 0x0000 (0x02A4 - 0x02A4)
class AAmbientSoundSimpleSplineNonLoop : public AAmbientSoundSimpleSpline
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleSplineNonLoop");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayFaceFXAnim
// 0x0040 (0x00A0 - 0x0060)
class UAnimNotify_PlayFaceFXAnim : public UAnimNotify_Scripted
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayFaceFXAnim");
		return ptr;
	}


	void Notify();
};


// Class Engine.BroadcastHandler
// 0x0008 (0x027C - 0x0274)
class ABroadcastHandler : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BroadcastHandler");
		return ptr;
	}


	void AllowBroadcastLocalizedTeam();
	void AllowBroadcastLocalized();
	void BroadcastTeam();
	void Broadcast();
	void BroadcastLocalized();
	void BroadcastText();
	void AllowsBroadcast();
	void UpdateSentText();
};


// Class Engine.HttpFactory
// 0x0010 (0x0068 - 0x0058)
class UHttpFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpFactory");
		return ptr;
	}


	void CreateRequest();
};


// Class Engine.CloudSaveSystemKVSInterface
// 0x0000 (0x0058 - 0x0058)
class UCloudSaveSystemKVSInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystemKVSInterface");
		return ptr;
	}


	void WriteKeyValue();
	void ReadKeyValue();
};


// Class Engine.CloudSaveSystemDataBlobStoreInterface
// 0x0000 (0x0058 - 0x0058)
class UCloudSaveSystemDataBlobStoreInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystemDataBlobStoreInterface");
		return ptr;
	}


	void DeleteDataBlob();
	void DeleteDataBlobCallbackDelegate();
	void STATIC_SetDataBlob();
	void STATIC_SetDataBlobCallbackDelegate();
	void STATIC_GetDataBlob();
	void STATIC_GetDataBlobCallbackDelegate();
};


// Class Engine.CloudStorageBaseCloudSaveSystemKVS
// 0x0008 (0x0060 - 0x0058)
class UCloudStorageBaseCloudSaveSystemKVS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBaseCloudSaveSystemKVS");
		return ptr;
	}


	void STATIC_GenerateKeyNameForSaveSlot();
	void WriteKeyValue();
	void ReadKeyValue();
	void Init();
};


// Class Engine.ColorScaleVolume
// 0x0010 (0x02C0 - 0x02B0)
class AColorScaleVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ColorScaleVolume");
		return ptr;
	}


	void UnTouch();
	void Touch();
};


// Class Engine.VolumeTimer
// 0x0008 (0x027C - 0x0274)
class AVolumeTimer : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTimer");
		return ptr;
	}


	void Timer();
	void PostBeginPlay();
};


// Class Engine.SeqAct_SetDamageInstigator
// 0x0008 (0x0160 - 0x0158)
class USeqAct_SetDamageInstigator : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetDamageInstigator");
		return ptr;
	}

};


// Class Engine.DmgType_Crushed
// 0x0000 (0x0088 - 0x0088)
class UDmgType_Crushed : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Crushed");
		return ptr;
	}

};


// Class Engine.DmgType_Fell
// 0x0000 (0x0088 - 0x0088)
class UDmgType_Fell : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Fell");
		return ptr;
	}

};


// Class Engine.DmgType_Telefragged
// 0x0000 (0x0088 - 0x0088)
class UDmgType_Telefragged : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Telefragged");
		return ptr;
	}

};


// Class Engine.DynamicPhysicsVolume
// 0x0004 (0x0304 - 0x0300)
class ADynamicPhysicsVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0300(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicPhysicsVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.DynamicSMActor_Spawnable
// 0x0000 (0x02C4 - 0x02C4)
class ADynamicSMActor_Spawnable : public ADynamicSMActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSMActor_Spawnable");
		return ptr;
	}

};


// Class Engine.DynamicTriggerVolume
// 0x0004 (0x02B4 - 0x02B0)
class ADynamicTriggerVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicTriggerVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Engine.SeqAct_SetParticleSysParam
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetParticleSysParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetParticleSysParam");
		return ptr;
	}

};


// Class Engine.FailedConnect
// 0x0040 (0x00AC - 0x006C)
class UFailedConnect : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x006C(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FailedConnect");
		return ptr;
	}


	void STATIC_GetString();
	void STATIC_GetFailSwitch();
};


// Class Engine.FracturedSMActorSpawnable
// 0x0000 (0x0310 - 0x0310)
class AFracturedSMActorSpawnable : public AFracturedStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedSMActorSpawnable");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshActor_Spawnable
// 0x0000 (0x0310 - 0x0310)
class AFracturedStaticMeshActor_Spawnable : public AFracturedStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshActor_Spawnable");
		return ptr;
	}

};


// Class Engine.SeqEvent_PlayerSpawned
// 0x0008 (0x0170 - 0x0168)
class USeqEvent_PlayerSpawned : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_PlayerSpawned");
		return ptr;
	}

};


// Class Engine.HeightFog
// 0x000C (0x0280 - 0x0274)
class AHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightFog");
		return ptr;
	}


	void STATIC_OnToggle();
	void ReplicatedEvent();
	void PostBeginPlay();
};


// Class Engine.InterpActor_ForCinematic
// 0x0000 (0x0310 - 0x0310)
class AInterpActor_ForCinematic : public AInterpActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpActor_ForCinematic");
		return ptr;
	}

};


// Class Engine.MaterialInstanceTimeVaryingActor
// 0x0008 (0x027C - 0x0274)
class AMaterialInstanceTimeVaryingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceTimeVaryingActor");
		return ptr;
	}

};


// Class Engine.SeqAct_AssignController
// 0x0008 (0x0160 - 0x0158)
class USeqAct_AssignController : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AssignController");
		return ptr;
	}

};


// Class Engine.SeqAct_GiveInventory
// 0x0014 (0x016C - 0x0158)
class USeqAct_GiveInventory : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0158(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GiveInventory");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0000 (0x02B0 - 0x02B0)
class ANavMeshBoundsVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.OnlineCommunityContentInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineCommunityContentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineCommunityContentInterface");
		return ptr;
	}


	void STATIC_RateContent();
	void ClearGetContentPayloadCompleteDelegate();
	void AddGetContentPayloadCompleteDelegate();
	void STATIC_OnGetContentPayloadComplete();
	void STATIC_GetContentPayload();
	void ClearDownloadContentCompleteDelegate();
	void AddDownloadContentCompleteDelegate();
	void STATIC_OnDownloadContentComplete();
	void DownloadContent();
	void ClearUploadContentCompleteDelegate();
	void AddUploadContentCompleteDelegate();
	void STATIC_OnUploadContentComplete();
	void UploadContent();
	void STATIC_GetFriendsContentList();
	void ClearReadFriendsContentListCompleteDelegate();
	void AddReadFriendsContentListCompleteDelegate();
	void STATIC_OnReadFriendsContentListComplete();
	void STATIC_ReadFriendsContentList();
	void STATIC_GetContentList();
	void ClearReadContentListCompleteDelegate();
	void AddReadContentListCompleteDelegate();
	void STATIC_OnReadContentListComplete();
	void STATIC_ReadContentList();
	void Exit();
	void Init();
};


// Class Engine.OnlineEventsInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineEventsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEventsInterface");
		return ptr;
	}


	void UpdatePlaylistPopulation();
	void UploadGameplayEventsData();
	void UploadPlayerData();
};


// Class Engine.OnlinePlaylistGameTypeProvider
// 0x002C (0x00B8 - 0x008C)
class UOnlinePlaylistGameTypeProvider : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x008C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlaylistGameTypeProvider");
		return ptr;
	}

};


// Class Engine.OnlineRecentPlayersList
// 0x0058 (0x00B0 - 0x0058)
class UOnlineRecentPlayersList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineRecentPlayersList");
		return ptr;
	}


	void STATIC_GetCurrentPlayersListCount();
	void STATIC_SetCurrentPlayersList();
	void STATIC_ShowCurrentPlayersList();
	void STATIC_ShowLastPartyPlayerList();
	void STATIC_ShowRecentPartiesPlayerList();
	void STATIC_ShowRecentPlayerList();
	void STATIC_SetLastParty();
	void STATIC_GetTeamForCurrentPlayer();
	void STATIC_GetSkillForCurrentPlayer();
	void STATIC_GetPlayersFromCurrentPlayers();
	void STATIC_GetPlayersFromRecentParties();
	void ClearRecentParties();
	void AddPartyToRecentParties();
	void ClearRecentPlayers();
	void AddPlayerToRecentPlayers();
};


// Class Engine.OnlineSuppliedUIInterface
// 0x0000 (0x0058 - 0x0058)
class UOnlineSuppliedUIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSuppliedUIInterface");
		return ptr;
	}


	void STATIC_ShowMatchmakingUI();
	void ClearShowOnlineStatsUICompleteDelegate();
	void AddShowOnlineStatsUICompleteDelegate();
	void STATIC_ShowOnlineStatsUI();
	void STATIC_OnShowOnlineStatsUIComplete();
};


// Class Engine.PathNode_Dynamic
// 0x0000 (0x038C - 0x038C)
class APathNode_Dynamic : public APathNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathNode_Dynamic");
		return ptr;
	}


	void GetDebugAbbrev();
};


// Class Engine.SeqEvent_AIReachedRouteActor
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_AIReachedRouteActor : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AIReachedRouteActor");
		return ptr;
	}

};


// Class Engine.SeqEvent_PickupStatusChange
// 0x0000 (0x0168 - 0x0168)
class USeqEvent_PickupStatusChange : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_PickupStatusChange");
		return ptr;
	}

};


// Class Engine.RadialBlurActor
// 0x0008 (0x027C - 0x0274)
class ARadialBlurActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialBlurActor");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleConstraintDrive
// 0x0004 (0x015C - 0x0158)
class USeqAct_ToggleConstraintDrive : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleConstraintDrive");
		return ptr;
	}

};


// Class Engine.RB_BSJointActor
// 0x0000 (0x02A8 - 0x02A8)
class ARB_BSJointActor : public ARB_ConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BSJointActor");
		return ptr;
	}

};


// Class Engine.RB_ConstraintActorSpawnable
// 0x0000 (0x02A8 - 0x02A8)
class ARB_ConstraintActorSpawnable : public ARB_ConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintActorSpawnable");
		return ptr;
	}

};


// Class Engine.RB_HingeActor
// 0x0000 (0x02A8 - 0x02A8)
class ARB_HingeActor : public ARB_ConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_HingeActor");
		return ptr;
	}

};


// Class Engine.RB_PrismaticActor
// 0x0000 (0x02A8 - 0x02A8)
class ARB_PrismaticActor : public ARB_ConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PrismaticActor");
		return ptr;
	}

};


// Class Engine.RB_PulleyJointActor
// 0x0000 (0x02A8 - 0x02A8)
class ARB_PulleyJointActor : public ARB_ConstraintActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PulleyJointActor");
		return ptr;
	}

};


// Class Engine.ReverbVolumeToggleable
// 0x0000 (0x02F4 - 0x02F4)
class AReverbVolumeToggleable : public AReverbVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbVolumeToggleable");
		return ptr;
	}


	void STATIC_OnToggle();
};


// Class Engine.SeqAct_AddRemoveFaceFXAnimSet
// 0x0010 (0x0168 - 0x0158)
class USeqAct_AddRemoveFaceFXAnimSet : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddRemoveFaceFXAnimSet");
		return ptr;
	}

};


// Class Engine.SeqAct_AIAbortMoveToActor
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AIAbortMoveToActor : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AIAbortMoveToActor");
		return ptr;
	}

};


// Class Engine.SeqAct_MITV_Activate
// 0x0004 (0x015C - 0x0158)
class USeqAct_MITV_Activate : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MITV_Activate");
		return ptr;
	}


	void Activated();
	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetMatInstTexParam
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetMatInstTexParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstTexParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMatInstVectorParam
// 0x0020 (0x0178 - 0x0158)
class USeqAct_SetMatInstVectorParam : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstVectorParam");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqAct_SetSkelControlTarget
// 0x0018 (0x0170 - 0x0158)
class USeqAct_SetSkelControlTarget : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSkelControlTarget");
		return ptr;
	}

};


// Class Engine.SeqAct_SetVector
// 0x000C (0x0164 - 0x0158)
class USeqAct_SetVector : public USeqAct_SetSequenceVariable
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVector");
		return ptr;
	}


	void Activated();
};


// Class Engine.SeqAct_ToggleAffectedByHitEffects
// 0x0000 (0x0158 - 0x0158)
class USeqAct_ToggleAffectedByHitEffects : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleAffectedByHitEffects");
		return ptr;
	}

};


// Class Engine.SeqAct_UpdatePhysBonesFromAnim
// 0x0000 (0x0158 - 0x0158)
class USeqAct_UpdatePhysBonesFromAnim : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_UpdatePhysBonesFromAnim");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqEvent_LOS
// 0x000C (0x0174 - 0x0168)
class USeqEvent_LOS : public USequenceEvent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0168(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LOS");
		return ptr;
	}


	void GetObjClassVersion();
};


// Class Engine.SeqVar_Byte
// 0x0000 (0x00CC - 0x00CC)
class USeqVar_Byte : public USequenceVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Byte");
		return ptr;
	}

};


// Class Engine.SeqVar_Name
// 0x0000 (0x00CC - 0x00CC)
class USeqVar_Name : public USequenceVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Name");
		return ptr;
	}

};


// Class Engine.SeqVar_Union
// 0x0000 (0x00CC - 0x00CC)
class USeqVar_Union : public USequenceVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Union");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMATSpawnable
// 0x0000 (0x0320 - 0x0320)
class ASkeletalMeshActorMATSpawnable : public ASkeletalMeshActorMAT
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMATSpawnable");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMATWalkable
// 0x0000 (0x0320 - 0x0320)
class ASkeletalMeshActorMATWalkable : public ASkeletalMeshActorMAT
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMATWalkable");
		return ptr;
	}

};


// Class Engine.Trigger_Dynamic
// 0x0000 (0x0284 - 0x0284)
class ATrigger_Dynamic : public ATrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_Dynamic");
		return ptr;
	}

};


// Class Engine.Trigger_LOS
// 0x0010 (0x0294 - 0x0284)
class ATrigger_LOS : public ATrigger
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_LOS");
		return ptr;
	}


	void Tick();
};


// Class Engine.TriggeredPath
// 0x000C (0x0398 - 0x038C)
class ATriggeredPath : public ANavigationPoint
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x038C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggeredPath");
		return ptr;
	}


	void SuggestMovePreparation();
	void SpecialHandling();
	void STATIC_OnToggle();
};


// Class Engine.TriggerStreamingLevel
// 0x0010 (0x0294 - 0x0284)
class ATriggerStreamingLevel : public ATrigger
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0284(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerStreamingLevel");
		return ptr;
	}


	void Touch();
};


// Class Engine.UICharacterSummary
// 0x0034 (0x00C0 - 0x008C)
class UUICharacterSummary : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x008C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UICharacterSummary");
		return ptr;
	}

};


// Class Engine.UIGameInfoSummary
// 0x0064 (0x00F0 - 0x008C)
class UUIGameInfoSummary : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x008C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIGameInfoSummary");
		return ptr;
	}

};


// Class Engine.UIMapSummary
// 0x0040 (0x00CC - 0x008C)
class UUIMapSummary : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x008C(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIMapSummary");
		return ptr;
	}

};


// Class Engine.UIWeaponSummary
// 0x0034 (0x00C0 - 0x008C)
class UUIWeaponSummary : public UUIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x008C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIWeaponSummary");
		return ptr;
	}

};


// Class Engine.UserCloudFileCloudSaveSystemDataBlobStore
// 0x0070 (0x00C8 - 0x0058)
class UUserCloudFileCloudSaveSystemDataBlobStore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserCloudFileCloudSaveSystemDataBlobStore");
		return ptr;
	}


	void STATIC_OnDeleteUserFileComplete();
	void DeleteDataBlob();
	void STATIC_OnWriteUserFileComplete();
	void STATIC_SetDataBlob();
	void STATIC_OnReadUserFileComplete();
	void STATIC_GetDataBlob();
	void Init();
	void DeleteDataBlobCallbackDelegate();
	void STATIC_SetDataBlobCallbackDelegate();
	void STATIC_GetDataBlobCallbackDelegate();
};


// Class Engine.WaterVolume
// 0x0020 (0x0320 - 0x0300)
class AWaterVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0300(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterVolume");
		return ptr;
	}


	void STATIC_PlayExitSplash();
	void UnTouch();
	void STATIC_PlayEntrySplash();
	void Touch();
};


// Class Engine.WindDirectionalSource
// 0x0008 (0x027C - 0x0274)
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0274(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
