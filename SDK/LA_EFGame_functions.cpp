// Lost Ark (1.12.11.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_EFGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EFGame.EFCharacterParts.OnParticleSystemFinished
// (Defined, Simulated, Public)

void AEFCharacterParts::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.OnParticleSystemFinished");

	AEFCharacterParts_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
// (Native, Public)

void AEFCharacterParts::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.ClearAttachedPSIIndex");

	AEFCharacterParts_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.NotifyChangedBase
// (Native, Public)

void AEFCharacterParts::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.NotifyChangedBase");

	AEFCharacterParts_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.BaseChange
// (Defined, Singular, Event, Public)

void AEFCharacterParts::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.BaseChange");

	AEFCharacterParts_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.EncroachingOn
// (Defined, Event, Public)

void AEFCharacterParts::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachingOn");

	AEFCharacterParts_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.EncroachedBy
// (Event, Public)

void AEFCharacterParts::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachedBy");

	AEFCharacterParts_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.Destroyed
// (Defined, Simulated, Event, Public)

void AEFCharacterParts::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.Destroyed");

	AEFCharacterParts_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalDebugLookAt
// (Native, Public)

void UEFCheatManager::InternalDebugLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalDebugLookAt");

	UEFCheatManager_InternalDebugLookAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage
// (Native, Public)

void UEFCheatManager::InternalVisualizePhysicsCompartmentUsage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage");

	UEFCheatManager_InternalVisualizePhysicsCompartmentUsage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount
// (Native, Public)

void UEFCheatManager::InternalSetPhysicsCompartmentCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount");

	UEFCheatManager_InternalSetPhysicsCompartmentCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns
// (Native, Public)

void UEFCheatManager::InternalTogglePhysicsCompartmentForEFPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns");

	UEFCheatManager_InternalTogglePhysicsCompartmentForEFPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime
// (Native, Public)

void UEFCheatManager::InternalSetCamTargetBlendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime");

	UEFCheatManager_InternalSetCamTargetBlendTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalClearCamTarget
// (Native, Public)

void UEFCheatManager::InternalClearCamTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalClearCamTarget");

	UEFCheatManager_InternalClearCamTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalSetCamTarget
// (Native, Public)

void UEFCheatManager::InternalSetCamTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetCamTarget");

	UEFCheatManager_InternalSetCamTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalCamPrevTarget
// (Native, Public)

void UEFCheatManager::InternalCamPrevTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalCamPrevTarget");

	UEFCheatManager_InternalCamPrevTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalCamNextTarget
// (Native, Public)

void UEFCheatManager::InternalCamNextTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalCamNextTarget");

	UEFCheatManager_InternalCamNextTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalGetPlayerCamera
// (Native, Public)

void UEFCheatManager::InternalGetPlayerCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalGetPlayerCamera");

	UEFCheatManager_InternalGetPlayerCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume
// (Native, Public)

void UEFCheatManager::InternalToggleCullDistanceVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume");

	UEFCheatManager_InternalToggleCullDistanceVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleCPUSkinning
// (Native, Public)

void UEFCheatManager::InternalToggleCPUSkinning()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleCPUSkinning");

	UEFCheatManager_InternalToggleCPUSkinning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag
// (Native, Public)

void UEFCheatManager::InternalToggleOneFrameThreadLag()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag");

	UEFCheatManager_InternalToggleOneFrameThreadLag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleUpdateDLEOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize");

	UEFCheatManager_InternalToggleUpdateDLEOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleMeshObjectUpdateOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize");

	UEFCheatManager_InternalToggleMeshObjectUpdateOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleUpdateBoundsOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize");

	UEFCheatManager_InternalToggleUpdateBoundsOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleDynamicFoliageOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize");

	UEFCheatManager_InternalToggleDynamicFoliageOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleCameraODAOptimize
// (Native, Public)

void UEFCheatManager::InternalToggleCameraODAOptimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleCameraODAOptimize");

	UEFCheatManager_InternalToggleCameraODAOptimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG
// (Native, Public)

void UEFCheatManager::InternalToggleParticleOptimizeILG()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG");

	UEFCheatManager_InternalToggleParticleOptimizeILG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFConsole.IsValidEFCommand
// (Final, Native, Public)

void UEFConsole::IsValidEFCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.IsValidEFCommand");

	UEFConsole_IsValidEFCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFConsole.InputAxis
// (Defined, HasOptionalParms, Public)

void UEFConsole::InputAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputAxis");

	UEFConsole_InputAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFConsole.InputKey
// (Defined, HasOptionalParms, Public)

void UEFConsole::InputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputKey");

	UEFConsole_InputKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDecalFloorActor.GetBoundingCylinder
// (Native, Public, HasOutParms)

void AEFDecalFloorActor::GetBoundingCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalFloorActor.GetBoundingCylinder");

	AEFDecalFloorActor_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDecalManager.SpawnDecalMinimal
// (Defined, Event, Public)

void AEFDecalManager::SpawnDecalMinimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalManager.SpawnDecalMinimal");

	AEFDecalManager_SpawnDecalMinimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.AllowCheats
// (Defined, Public)

void AEFGameInfo::AllowCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.AllowCheats");

	AEFGameInfo_AllowCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.PostSeamlessTravel
// (Native, Event, Public)

void AEFGameInfo::PostSeamlessTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostSeamlessTravel");

	AEFGameInfo_PostSeamlessTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.GameEnding
// (Native, Event, Public)

void AEFGameInfo::GameEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.GameEnding");

	AEFGameInfo_GameEnding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotifyMapLoaded
// (Native, Event, Public)

void AEFGameInfo::NotifyMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotifyMapLoaded");

	AEFGameInfo_NotifyMapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotfiyLoadingStep
// (Native, Event, Public)

void AEFGameInfo::NotfiyLoadingStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotfiyLoadingStep");

	AEFGameInfo_NotfiyLoadingStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Tick
// (Defined, Event, Public)

void AEFGameInfo::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Tick");

	AEFGameInfo_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.PostLogin
// (Defined, Event, Public)

void AEFGameInfo::PostLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostLogin");

	AEFGameInfo_PostLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Login
// (Defined, Event, Public, HasOutParms)

void AEFGameInfo::Login()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Login");

	AEFGameInfo_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.LoadLevel
// (Defined, Public)

void AEFGameInfo::LoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.LoadLevel");

	AEFGameInfo_LoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.RestartPlayer
// (Defined, Public)

void AEFGameInfo::RestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.RestartPlayer");

	AEFGameInfo_RestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.InitGame
// (Defined, Event, Public, HasOutParms)

void AEFGameInfo::InitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.InitGame");

	AEFGameInfo_InitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.GenericPlayerInitialization
// (Defined, Public)

void AEFGameInfo::GenericPlayerInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.GenericPlayerInitialization");

	AEFGameInfo_GenericPlayerInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.StopAfterImageEffect
// (Native, Public)

void AEFPawn::StopAfterImageEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.StopAfterImageEffect");

	AEFPawn_StopAfterImageEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.StartAfterImageEffect
// (Native, Public, HasOutParms)

void AEFPawn::StartAfterImageEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.StartAfterImageEffect");

	AEFPawn_StartAfterImageEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetAnimTrailParticleSystem
// (Native, Public)

void AEFPawn::GetAnimTrailParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetAnimTrailParticleSystem");

	AEFPawn_GetAnimTrailParticleSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
// (Simulated, Native, Public)

void AEFPawn::ApplyFluidSurfaceContinuousForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce");

	AEFPawn_ApplyFluidSurfaceContinuousForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceImpact
// (Simulated, Native, Public, HasOutParms)

void AEFPawn::ApplyFluidSurfaceImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceImpact");

	AEFPawn_ApplyFluidSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.NotifyChangedBase
// (Native, Public)

void AEFPawn::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.NotifyChangedBase");

	AEFPawn_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.BaseChange
// (Defined, Singular, Event, Public)

void AEFPawn::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.BaseChange");

	AEFPawn_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_FinishAnimControl
// (Native, Public)

void AEFPawn::MAT_FinishAnimControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_FinishAnimControl");

	AEFPawn_MAT_FinishAnimControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_BeginAnimControl
// (Native, Public)

void AEFPawn::MAT_BeginAnimControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_BeginAnimControl");

	AEFPawn_MAT_BeginAnimControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationFinished
// (Simulated, Native, Event, Public)

void AEFPawn::InterpolationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationFinished");

	AEFPawn_InterpolationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationStarted
// (Simulated, Native, Event, Public)

void AEFPawn::InterpolationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationStarted");

	AEFPawn_InterpolationStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.RigidBodyCollision
// (Simulated, Native, Event, Public, HasOutParms)

void AEFPawn::RigidBodyCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.RigidBodyCollision");

	AEFPawn_RigidBodyCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.DoKismetAttachment
// (Defined, Public)

void AEFPawn::DoKismetAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.DoKismetAttachment");

	AEFPawn_DoKismetAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttachmentCameraActor
// (Native, Public)

void AEFPawn::AttachmentCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttachmentCameraActor");

	AEFPawn_AttachmentCameraActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetGravityZ
// (Native, Public)

void AEFPawn::GetGravityZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetGravityZ");

	AEFPawn_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OnForceFieldDestroy
// (Defined, Simulated, Public)

void AEFPawn::OnForceFieldDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnForceFieldDestroy");

	AEFPawn_OnForceFieldDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.CreateForceField
// (Defined, Event, Public)

void AEFPawn::CreateForceField()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.CreateForceField");

	AEFPawn_CreateForceField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ExplodeActor
// (Native, Public)

void AEFPawn::ExplodeActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ExplodeActor");

	AEFPawn_ExplodeActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FinishDyingDelay
// (Native, Public)

void AEFPawn::FinishDyingDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FinishDyingDelay");

	AEFPawn_FinishDyingDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDefaultStateColor
// (Native, Public)

void AEFPawn::SetDefaultStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDefaultStateColor");

	AEFPawn_SetDefaultStateColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetStateColor
// (Native, HasOptionalParms, Public)

void AEFPawn::SetStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetStateColor");

	AEFPawn_SetStateColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackFreezeAnim
// (Native, HasOptionalParms, Public)

void AEFPawn::AttackFreezeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackFreezeAnim");

	AEFPawn_AttackFreezeAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackContinueAnim
// (Native, Public)

void AEFPawn::AttackContinueAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackContinueAnim");

	AEFPawn_AttackContinueAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineWidth
// (Native, Public)

void AEFPawn::SetPPOutlineWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineWidth");

	AEFPawn_SetPPOutlineWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineColor
// (Native, Public)

void AEFPawn::SetPPOutlineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineColor");

	AEFPawn_SetPPOutlineColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutline
// (Native, Public)

void AEFPawn::SetPPOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutline");

	AEFPawn_SetPPOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetCloakMode
// (Native, Public)

void AEFPawn::SetCloakMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetCloakMode");

	AEFPawn_SetCloakMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutlineColor
// (Native, Public)

void AEFPawn::SetOccludedOutlineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutlineColor");

	AEFPawn_SetOccludedOutlineColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutline
// (Native, HasOptionalParms, Public)

void AEFPawn::SetOccludedOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutline");

	AEFPawn_SetOccludedOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OutsideWorldBounds
// (Singular, Simulated, Native, Event, Public)

void AEFPawn::OutsideWorldBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OutsideWorldBounds");

	AEFPawn_OutsideWorldBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FellOutOfWorld
// (Simulated, Native, Event, Public)

void AEFPawn::FellOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FellOutOfWorld");

	AEFPawn_FellOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Landed
// (Native, Event, Public)

void AEFPawn::Landed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Landed");

	AEFPawn_Landed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Falling
// (Native, Event, Public)

void AEFPawn::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Falling");

	AEFPawn_Falling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDesiredRotation
// (Native, HasOptionalParms, Public)

void AEFPawn::SetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDesiredRotation");

	AEFPawn_SetDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OnParticleSystemFinished
// (Defined, Simulated, Public)

void AEFPawn::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnParticleSystemFinished");

	AEFPawn_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.PostInitAll
// (Defined, Event, Public)

void AEFPawn::PostInitAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.PostInitAll");

	AEFPawn_PostInitAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ClearAttachedPSIIndex
// (Native, Public)

void AEFPawn::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ClearAttachedPSIIndex");

	AEFPawn_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Destroyed
// (Defined, Simulated, Event, Public)

void AEFPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Destroyed");

	AEFPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetDefaultCameraMode
// (Defined, Simulated, Public)

void AEFPawn::GetDefaultCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetDefaultCameraMode");

	AEFPawn_GetDefaultCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetObjectCameraStyle
// (Native, Public)

void AEFPawn::GetObjectCameraStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetObjectCameraStyle");

	AEFPawn_GetObjectCameraStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.EncroachingOn
// (Defined, Event, Public)

void AEFPawn::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachingOn");

	AEFPawn_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.EncroachedBy
// (Event, Public)

void AEFPawn::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachedBy");

	AEFPawn_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
// (Native, Public)

void AEFPlayer::OnUpdatePropertyDrawScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayer.OnUpdatePropertyDrawScale");

	AEFPlayer_OnUpdatePropertyDrawScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D
// (Native, Public)

void AEFPlayer::OnUpdatePropertyDrawScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D");

	AEFPlayer_OnUpdatePropertyDrawScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTransit.EncroachingOn
// (Defined, Event, Public)

void AEFTransit::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTransit.EncroachingOn");

	AEFTransit_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.ConsoleCommand
// (Native, HasOptionalParms, Public)

void AEFPlayerController::ConsoleCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ConsoleCommand");

	AEFPlayerController_ConsoleCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.ProcessCinematic
// (Exec, Native, Public)

void AEFPlayerController::ProcessCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ProcessCinematic");

	AEFPlayerController_ProcessCinematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerInitPosition
// (Native, Public, HasOutParms)

void AEFPlayerController::GetPlayerInitPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerInitPosition");

	AEFPlayerController_GetPlayerInitPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerViewPointQuat
// (Simulated, Native, Event, Public, HasOutParms)

void AEFPlayerController::GetPlayerViewPointQuat()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPointQuat");

	AEFPlayerController_GetPlayerViewPointQuat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)

void AEFPlayerController::GetPlayerViewPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPoint");

	AEFPlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)

void AEFPlayerController::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DisplayDebug");

	AEFPlayerController_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.DrawHUD
// (Defined, Public)

void AEFPlayerController::DrawHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DrawHUD");

	AEFPlayerController_DrawHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.SpawnDefaultHUD
// (Defined, Public)

void AEFPlayerController::SpawnDefaultHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.SpawnDefaultHUD");

	AEFPlayerController_SpawnDefaultHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.IsStopMovieLoading
// (Native, Public)

void AEFPlayerController::IsStopMovieLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.IsStopMovieLoading");

	AEFPlayerController_IsStopMovieLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.PlayerTick
// (Native, Event, Public)

void AEFPlayerController::PlayerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PlayerTick");

	AEFPlayerController_PlayerTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.UpdateRotation
// (Public)

void AEFPlayerController::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.UpdateRotation");

	AEFPlayerController_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.StopMovieLoading
// (Defined, Public)

void AEFPlayerController::StopMovieLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.StopMovieLoading");

	AEFPlayerController_StopMovieLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.Destroyed
// (Defined, Event, Public)

void AEFPlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.Destroyed");

	AEFPlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PostBeginPlay");

	AEFPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.InitInputSystem
// (Defined, Event, Public)

void AEFPlayerController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.InitInputSystem");

	AEFPlayerController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.DefaultPositionControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::DefaultPositionControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.DefaultPositionControlPanel");

	UEFPlayerInput_DefaultPositionControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.FocusControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::FocusControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.FocusControlPanel");

	UEFPlayerInput_FocusControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.ToggleControlPanel
// (Exec, Native, Public)

void UEFPlayerInput::ToggleControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.ToggleControlPanel");

	UEFPlayerInput_ToggleControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.OnMouseScrollDown
// (Exec, Native, Public)

void UEFPlayerInput::OnMouseScrollDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.OnMouseScrollDown");

	UEFPlayerInput_OnMouseScrollDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.OnMouseScrollUp
// (Exec, Native, Public)

void UEFPlayerInput::OnMouseScrollUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.OnMouseScrollUp");

	UEFPlayerInput_OnMouseScrollUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.PlayerInput
// (Defined, Event, Public)

void UEFPlayerInput::PlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.PlayerInput");

	UEFPlayerInput_PlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.InputAxis
// (Defined, HasOptionalParms, Public)

void UEFPlayerInput::InputAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.InputAxis");

	UEFPlayerInput_InputAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.ClearAttachedPSIIndex
// (Native, Public)

void AEFProjectile::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ClearAttachedPSIIndex");

	AEFProjectile_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.Destroyed
// (Defined, Simulated, Event, Public)

void AEFProjectile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.Destroyed");

	AEFProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.BaseChange
// (Defined, Event, Public)

void AEFProjectile::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.BaseChange");

	AEFProjectile_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.NotifyBaseChange
// (Native, Public)

void AEFProjectile::NotifyBaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.NotifyBaseChange");

	AEFProjectile_NotifyBaseChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.ProcessTouch
// (Simulated, Native, Public)

void AEFProjectile::ProcessTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ProcessTouch");

	AEFProjectile_ProcessTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
// (Native, Public)

void AEFSkeletalMeshActor::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex");

	AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
// (Native, Public)

void AEFSkeletalMeshActor::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.NotifyChangedBase");

	AEFSkeletalMeshActor_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.BaseChange
// (Defined, Singular, Event, Public)

void AEFSkeletalMeshActor::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.BaseChange");

	AEFSkeletalMeshActor_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.Destroyed
// (Defined, Simulated, Event, Public)

void AEFSkeletalMeshActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.Destroyed");

	AEFSkeletalMeshActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.UnTouch
// (Native, Event, Public)

void AEFVolume::UnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.UnTouch");

	AEFVolume_UnTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.Touch
// (Native, Event, Public)

void AEFVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.Touch");

	AEFVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameEngine.TranslateGFxUIMessage
// (Native, Public)

void UEFGameEngine::TranslateGFxUIMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameEngine.TranslateGFxUIMessage");

	UEFGameEngine_TranslateGFxUIMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameEngine.ShowLineChecks
// (Native, Public)

void UEFGameEngine::ShowLineChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameEngine.ShowLineChecks");

	UEFGameEngine_ShowLineChecks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.SaveCameraValue
// (Defined, Public)

void UEFMapInfo::SaveCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.SaveCameraValue");

	UEFMapInfo_SaveCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.LoadCameraValue
// (Defined, Public)

void UEFMapInfo::LoadCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.LoadCameraValue");

	UEFMapInfo_LoadCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.GetCurrentFOV
// (Defined, Public)

void UEFCameraBase::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetCurrentFOV");

	UEFCameraBase_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.GetDefaultFOV
// (Defined, Public)

void UEFCameraBase::GetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetDefaultFOV");

	UEFCameraBase_GetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetDefaultFOV
// (Defined, Public)

void UEFCameraBase::SetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetDefaultFOV");

	UEFCameraBase_SetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)

void UEFCameraBase::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.DisplayDebug");

	UEFCameraBase_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.UpdateRotation
// (Public)

void UEFCameraBase::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateRotation");

	UEFCameraBase_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetCurrentCameraCut
// (Native, Public)

void UEFCameraBase::SetCurrentCameraCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetCurrentCameraCut");

	UEFCameraBase_SetCurrentCameraCut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetContentsSettingTable
// (Native, Public)

void UEFCameraBase::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetContentsSettingTable");

	UEFCameraBase_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetSettingTable
// (Native, HasOptionalParms, Public)

void UEFCameraBase::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetSettingTable");

	UEFCameraBase_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFCameraBase::InActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD");

	UEFCameraBase_InActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFCameraBase::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD");

	UEFCameraBase_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ChangeZoomStep
// (Native, Public)

void UEFCameraBase::ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ChangeZoomStep");

	UEFCameraBase_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.CheckZoom
// (Native, Public)

void UEFCameraBase::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.CheckZoom");

	UEFCameraBase_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ZoomOut
// (Native, Public)

void UEFCameraBase::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomOut");

	UEFCameraBase_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ZoomIn
// (Native, Public)

void UEFCameraBase::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomIn");

	UEFCameraBase_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.BecomeViewTarget
// (Simulated, Public)

void UEFCameraBase::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.BecomeViewTarget");

	UEFCameraBase_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.UpdateCamera
// (Native, Public, HasOutParms)

void UEFCameraBase::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateCamera");

	UEFCameraBase_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ResetInterpolation
// (Native, Public)

void UEFCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ResetInterpolation");

	UEFCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeInActive
// (Event, Public)

void UEFCameraBase::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeInActive");

	UEFCameraBase_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeActive
// (Event, Public)

void UEFCameraBase::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeActive");

	UEFCameraBase_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.Init
// (Public)

void UEFCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.Init");

	UEFCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFBackViewCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFBackViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFBackViewCamera.UpdateCamera");

	UEFBackViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFCustomizingCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.UpdateCamera");

	UEFCustomizingCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.ZoomOut
// (Native, Public)

void UEFCustomizingCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomOut");

	UEFCustomizingCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.ZoomIn
// (Native, Public)

void UEFCustomizingCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomIn");

	UEFCustomizingCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.Init
// (Defined, Public, HasDefaults)

void UEFCustomizingCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.Init");

	UEFCustomizingCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeInActive
// (Defined, Event, Public)

void UEFEditorViewCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeInActive");

	UEFEditorViewCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFEditorViewCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeActive");

	UEFEditorViewCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomOut
// (Native, Public)

void UEFEditorViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomOut");

	UEFEditorViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomIn
// (Native, Public)

void UEFEditorViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomIn");

	UEFEditorViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFEditorViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.UpdateCamera");

	UEFEditorViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.OnBecomeInActive
// (Defined, Event, Public)

void UEFFreeCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeInActive");

	UEFFreeCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFFreeCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeActive");

	UEFFreeCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.HideOwnerPlayer
// (Native, Public)

void UEFFreeCamera::HideOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.HideOwnerPlayer");

	UEFFreeCamera_HideOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ShowOwnerPlayer
// (Native, Public)

void UEFFreeCamera::ShowOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ShowOwnerPlayer");

	UEFFreeCamera_ShowOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomOut
// (Native, Public)

void UEFFreeCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomOut");

	UEFFreeCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomIn
// (Native, Public)

void UEFFreeCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomIn");

	UEFFreeCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFFreeCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.UpdateCamera");

	UEFFreeCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractionCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFInteractionCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.UpdateCamera");

	UEFInteractionCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractionCamera.GetCurrentFOV
// (Defined, Public)

void UEFInteractionCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.GetCurrentFOV");

	UEFInteractionCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep
// (Native, Public)

void UEFIsometricCamera::SetOverrideIsometricZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep");

	UEFIsometricCamera_SetOverrideIsometricZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
// (Native, Public)

void UEFIsometricCamera::SetFixedCameraInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed");

	UEFIsometricCamera_SetFixedCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.IsFixedCameraMode
// (Native, Public)

void UEFIsometricCamera::IsFixedCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.IsFixedCameraMode");

	UEFIsometricCamera_IsFixedCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ResetFixedCamera
// (Native, Public)

void UEFIsometricCamera::ResetFixedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ResetFixedCamera");

	UEFIsometricCamera_ResetFixedCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetFixedLookAtPos
// (Native, Public)

void UEFIsometricCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedLookAtPos");

	UEFIsometricCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep
// (Native, Public)

void UEFIsometricCamera::SetCurIsometricZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep");

	UEFIsometricCamera_SetCurIsometricZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFIsometricCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.UpdateCamera");

	UEFIsometricCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.OnBecomeActive
// (Defined, Event, Public, HasDefaults)

void UEFIsometricCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.OnBecomeActive");

	UEFIsometricCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetContentsSettingTable
// (Native, Public)

void UEFIsometricCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetContentsSettingTable");

	UEFIsometricCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetSettingTable
// (Native, HasOptionalParms, Public)

void UEFIsometricCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetSettingTable");

	UEFIsometricCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.RefineFOV
// (Native, Public)

void UEFIsometricCamera::RefineFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.RefineFOV");

	UEFIsometricCamera_RefineFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFIsometricCamera::InActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD");

	UEFIsometricCamera_InActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFIsometricCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD");

	UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ChangeZoomStep
// (Native, Public)

void UEFIsometricCamera::ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ChangeZoomStep");

	UEFIsometricCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.CheckZoom
// (Native, Public)

void UEFIsometricCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.CheckZoom");

	UEFIsometricCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ZoomOut
// (Native, Public)

void UEFIsometricCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomOut");

	UEFIsometricCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ZoomIn
// (Native, Public)

void UEFIsometricCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomIn");

	UEFIsometricCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ResetInterpolation
// (Native, Public)

void UEFIsometricCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ResetInterpolation");

	UEFIsometricCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateRotation
// (Defined, Public, HasDefaults)

void UEFMacroCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateRotation");

	UEFMacroCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomOut
// (Native, Public)

void UEFMacroCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomOut");

	UEFMacroCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomIn
// (Native, Public)

void UEFMacroCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomIn");

	UEFMacroCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFMacroCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateCamera");

	UEFMacroCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.OnBecomeInActive
// (Defined, Event, Public)

void UEFPanningCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeInActive");

	UEFPanningCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFPanningCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeActive");

	UEFPanningCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.EndPanningCamera
// (Native, Public)

void UEFPanningCamera::EndPanningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.EndPanningCamera");

	UEFPanningCamera_EndPanningCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.StartPanningCamera
// (Native, Public)

void UEFPanningCamera::StartPanningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.StartPanningCamera");

	UEFPanningCamera_StartPanningCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.ZoomOut
// (Native, Public)

void UEFPanningCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomOut");

	UEFPanningCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.ZoomIn
// (Native, Public)

void UEFPanningCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomIn");

	UEFPanningCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFPanningCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.UpdateCamera");

	UEFPanningCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateRotation
// (Defined, Public, HasDefaults)

void UEFThirdPersonCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateRotation");

	UEFThirdPersonCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomOut
// (Native, Public)

void UEFThirdPersonCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomOut");

	UEFThirdPersonCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomIn
// (Native, Public)

void UEFThirdPersonCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomIn");

	UEFThirdPersonCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFThirdPersonCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateCamera");

	UEFThirdPersonCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.GetCurrentFOV
// (Defined, Public)

void UEFThirdPersonCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.GetCurrentFOV");

	UEFThirdPersonCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFTopViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.UpdateCamera");

	UEFTopViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.OnBecomeInActive
// (Defined, Event, Public)

void UEFTopViewCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeInActive");

	UEFTopViewCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFTopViewCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeActive");

	UEFTopViewCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
// (Native, Public)

void UEFTopViewCamera::ProcessInActivateCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ProcessInActivateCameraType");

	UEFTopViewCamera_ProcessInActivateCameraType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ProcessActivateCameraType
// (Native, Public)

void UEFTopViewCamera::ProcessActivateCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ProcessActivateCameraType");

	UEFTopViewCamera_ProcessActivateCameraType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.SetContentsSettingTable
// (Native, Public)

void UEFTopViewCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetContentsSettingTable");

	UEFTopViewCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.SetSettingTable
// (Native, HasOptionalParms, Public)

void UEFTopViewCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetSettingTable");

	UEFTopViewCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTopViewCamera::InActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD");

	UEFTopViewCamera_InActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTopViewCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD");

	UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ChangeZoomStep
// (Native, Public)

void UEFTopViewCamera::ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ChangeZoomStep");

	UEFTopViewCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.CheckZoom
// (Native, Public)

void UEFTopViewCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.CheckZoom");

	UEFTopViewCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ZoomOut
// (Native, Public)

void UEFTopViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomOut");

	UEFTopViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ZoomIn
// (Native, Public)

void UEFTopViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomIn");

	UEFTopViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ResetInterpolation
// (Native, Public)

void UEFTopViewCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ResetInterpolation");

	UEFTopViewCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
// (Native, Public)

void UEFTPSCamera::SetFixedCameraInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed");

	UEFTPSCamera_SetFixedCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.IsFixedCameraMode
// (Native, Public)

void UEFTPSCamera::IsFixedCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.IsFixedCameraMode");

	UEFTPSCamera_IsFixedCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ResetFixedCamera
// (Native, Public)

void UEFTPSCamera::ResetFixedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ResetFixedCamera");

	UEFTPSCamera_ResetFixedCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetFixedLookAtPos
// (Native, Public)

void UEFTPSCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedLookAtPos");

	UEFTPSCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFTPSCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.UpdateCamera");

	UEFTPSCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFTPSCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.OnBecomeActive");

	UEFTPSCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetContentsSettingTable
// (Native, Public)

void UEFTPSCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetContentsSettingTable");

	UEFTPSCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetSettingTable
// (Native, HasOptionalParms, Public)

void UEFTPSCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetSettingTable");

	UEFTPSCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTPSCamera::InActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD");

	UEFTPSCamera_InActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD
// (Native, Public)

void UEFTPSCamera::ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD");

	UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ChangeZoomStep
// (Native, Public)

void UEFTPSCamera::ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ChangeZoomStep");

	UEFTPSCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.CheckZoom
// (Native, Public)

void UEFTPSCamera::CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.CheckZoom");

	UEFTPSCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ZoomOut
// (Native, Public)

void UEFTPSCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomOut");

	UEFTPSCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ZoomIn
// (Native, Public)

void UEFTPSCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomIn");

	UEFTPSCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ResetInterpolation
// (Native, Public)

void UEFTPSCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ResetInterpolation");

	UEFTPSCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetFixedLookAtPos
// (Native, Public)

void UEFWatchCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetFixedLookAtPos");

	UEFWatchCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetWatchCameraType
// (Native, Public)

void UEFWatchCamera::SetWatchCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetWatchCameraType");

	UEFWatchCamera_SetWatchCameraType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.UpdateCamera
// (Native, Public, HasOutParms)

void UEFWatchCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.UpdateCamera");

	UEFWatchCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.OnBecomeActive
// (Defined, Event, Public)

void UEFWatchCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.OnBecomeActive");

	UEFWatchCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomOut
// (Native, Public)

void UEFWatchCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomOut");

	UEFWatchCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomIn
// (Native, Public)

void UEFWatchCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomIn");

	UEFWatchCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
// (Defined, HasOptionalParms, Public)

void UEFCameraModifier_CameraShake::AddCameraShakeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame");

	UEFCameraModifier_CameraShake_AddCameraShakeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
// (Defined, Public)

void UEFCameraModifier_CameraShake::RemoveGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake");

	UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
// (Defined, Event, Public)

void UEFCameraModifier_CameraShake::OnRemoveGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake");

	UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
// (Defined, Event, HasOptionalParms, Public)

void UEFCameraModifier_CameraShake::OnAddGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake");

	UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
// (Native, Public, HasOutParms)

void UEFCameraModifier_CameraShake::ModifyCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.ModifyCamera");

	UEFCameraModifier_CameraShake_ModifyCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
// (Native, Public)

void UEFCameraModifier_CameraShake::RemoveAllEFViewShakes()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes");

	UEFCameraModifier_CameraShake_RemoveAllEFViewShakes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake
// (Native, Public)

void UEFCameraModifier_CameraShake::RemoveEFViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake");

	UEFCameraModifier_CameraShake_RemoveEFViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake
// (Native, HasOptionalParms, Public)

void UEFCameraModifier_CameraShake::AddEFCameraViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake");

	UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
// (Defined, Public)

void UEFCameraModifier_CameraShake::RemoveAllCameraShakes()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes");

	UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
// (Native, Public, HasOutParms)

void UEFCameraShakePlayGroup::UpdateViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.UpdateViewShake");

	UEFCameraShakePlayGroup_UpdateViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
// (Native, Public, HasOutParms)

void UEFCameraShakePlayGroup::PreUpdateViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake");

	UEFCameraShakePlayGroup_PreUpdateViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
// (Native, Public)

void UEFCameraShakePlayGroup::RemoveAllViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake");

	UEFCameraShakePlayGroup_RemoveAllViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.RemoveViewShake
// (Native, HasOptionalParms, Public)

void UEFCameraShakePlayGroup::RemoveViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.RemoveViewShake");

	UEFCameraShakePlayGroup_RemoveViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance
// (Native, Protected, HasOutParms)

void UEFCameraShakePlayGroup::AddViewShakeInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance");

	UEFCameraShakePlayGroup_AddViewShakeInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.AddViewShake
// (Native, HasOptionalParms, Public)

void UEFCameraShakePlayGroup::AddViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShake");

	UEFCameraShakePlayGroup_AddViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraViewShake.GetAmplitudeSize
// (Native, Public)

void UEFCameraViewShake::GetAmplitudeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraViewShake.GetAmplitudeSize");

	UEFCameraViewShake_GetAmplitudeSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.GetCameraView
// (Defined, Simulated, Public, HasOutParms)

void AEFInputRotCameraActor::GetCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.GetCameraView");

	AEFInputRotCameraActor_GetCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.EndViewTarget
// (Defined, Event, Public)

void AEFInputRotCameraActor::EndViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.EndViewTarget");

	AEFInputRotCameraActor_EndViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.BecomeViewTarget
// (Defined, Event, Public)

void AEFInputRotCameraActor::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.BecomeViewTarget");

	AEFInputRotCameraActor_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
// (Native, Public)

void AEFInputRotCameraActor::ActivateInputRotMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.ActivateInputRotMode");

	AEFInputRotCameraActor_ActivateInputRotMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
// (Native, Public)

void AEFMacroCameraSplineActor::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakAllConnections");

	AEFMacroCameraSplineActor_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
// (Native, Public)

void AEFMacroCameraSplineActor::BreakConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo");

	AEFMacroCameraSplineActor_BreakConnectionTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
// (Native, Public)

void AEFMacroCameraSplineActor::IsConnectedTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.IsConnectedTo");

	AEFMacroCameraSplineActor_IsConnectedTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
// (Native, Public)

void AEFMacroCameraSplineActor::AddConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.AddConnectionTo");

	AEFMacroCameraSplineActor_AddConnectionTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents
// (Native, Public)

void AEFMacroCameraSplineActor::UpdateConnectedSplineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents");

	AEFMacroCameraSplineActor_UpdateConnectedSplineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents
// (Native, Public)

void AEFMacroCameraSplineActor::UpdateSplineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents");

	AEFMacroCameraSplineActor_UpdateSplineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.LoadOutlineData
// (Native, Public)

void AEFPlayerCamera::LoadOutlineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.LoadOutlineData");

	AEFPlayerCamera_LoadOutlineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend
// (Native, Public)

void AEFPlayerCamera::UpdateTranslucentActorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend");

	AEFPlayerCamera_UpdateTranslucentActorBlend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend
// (Native, Public)

void AEFPlayerCamera::UpdateOccludedActorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend");

	AEFPlayerCamera_UpdateOccludedActorBlend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)

void AEFPlayerCamera::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DisplayDebug");

	AEFPlayerCamera_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.FOV
// (Defined, Event, Public)

void AEFPlayerCamera::FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FOV");

	AEFPlayerCamera_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.AdjustViewportFOV
// (Defined, Public, HasOutParms)

void AEFPlayerCamera::AdjustViewportFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.AdjustViewportFOV");

	AEFPlayerCamera_AdjustViewportFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SaveCameraValue
// (Defined, Event, Public)

void AEFPlayerCamera::SaveCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SaveCameraValue");

	AEFPlayerCamera_SaveCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SetCameraType
// (Defined, Event, HasOptionalParms, Public)

void AEFPlayerCamera::SetCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetCameraType");

	AEFPlayerCamera_SetCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateRotation
// (Defined, Event, Public)

void AEFPlayerCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateRotation");

	AEFPlayerCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomOut
// (Native, Event, Public)

void AEFPlayerCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomOut");

	AEFPlayerCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomIn
// (Native, Event, Public)

void AEFPlayerCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomIn");

	AEFPlayerCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateViewTarget
// (Defined, Public, HasOutParms)

void AEFPlayerCamera::UpdateViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateViewTarget");

	AEFPlayerCamera_UpdateViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.DoUpdateCamera
// (Defined, Simulated, Public)

void AEFPlayerCamera::DoUpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DoUpdateCamera");

	AEFPlayerCamera_DoUpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
// (Final, Native, Public, HasOutParms)

void AEFPlayerCamera::ProcessTestInputCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor");

	AEFPlayerCamera_ProcessTestInputCameraActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.RestoreCameraMode
// (Native, Public)

void AEFPlayerCamera::RestoreCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.RestoreCameraMode");

	AEFPlayerCamera_RestoreCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraMode
// (Native, HasOptionalParms, Public)

void AEFPlayerCamera::ChangeCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraMode");

	AEFPlayerCamera_ChangeCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
// (Native, Public)

void AEFPlayerCamera::ChangeCameraContentsSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting");

	AEFPlayerCamera_ChangeCameraContentsSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
// (Native, Public)

void AEFPlayerCamera::ChangeCameraZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraZoomStep");

	AEFPlayerCamera_ChangeCameraZoomStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraSetting
// (Native, HasOptionalParms, Public)

void AEFPlayerCamera::ChangeCameraSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraSetting");

	AEFPlayerCamera_ChangeCameraSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
// (Native, Public, HasOutParms)

void AEFPlayerCamera::ApplyVehicleFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle");

	AEFPlayerCamera_ApplyVehicleFOVAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
// (Native, Public)

void AEFPlayerCamera::SetVehicleFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetVehicleFOVAngle");

	AEFPlayerCamera_SetVehicleFOVAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
// (Native, Public)

void AEFPlayerCamera::ApplyCamOverrideFogSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting");

	AEFPlayerCamera_ApplyCamOverrideFogSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
// (Native, Public)

void AEFPlayerCamera::ProcessTargetCameraActorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend");

	AEFPlayerCamera_ProcessTargetCameraActorBlend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ResetAttachCameraActor
// (Native, Public)

void AEFPlayerCamera::ResetAttachCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ResetAttachCameraActor");

	AEFPlayerCamera_ResetAttachCameraActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.FindBestCameraType
// (Defined, Protected)

void AEFPlayerCamera::FindBestCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FindBestCameraType");

	AEFPlayerCamera_FindBestCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetCurrentCameraMode
// (Native, Public)

void AEFPlayerCamera::GetCurrentCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCurrentCameraMode");

	AEFPlayerCamera_GetCurrentCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.CreateCamera
// (Defined, Protected)

void AEFPlayerCamera::CreateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CreateCamera");

	AEFPlayerCamera_CreateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.PostBeginPlay
// (Defined, Public)

void AEFPlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.PostBeginPlay");

	AEFPlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetFOV
// (Defined, Event, Public)

void AEFPlayerCamera::GetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetFOV");

	AEFPlayerCamera_GetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetCameraDistance
// (Defined, Event, Public)

void AEFPlayerCamera::GetCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCameraDistance");

	AEFPlayerCamera_GetCameraDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.Destroyed
// (Defined, Event, Public)

void AEFPlayerCamera::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.Destroyed");

	AEFPlayerCamera_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.CalcVerticalFOV
// (Final, Native, Public, HasOutParms)

void AEFPlayerCamera::CalcVerticalFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CalcVerticalFOV");

	AEFPlayerCamera_CalcVerticalFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitter.HideSelf
// (Defined, Simulated, Public)

void AEFEmitter::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.HideSelf");

	AEFEmitter_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitter.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFEmitter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.PostBeginPlay");

	AEFEmitter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
// (Simulated, Native, Public)

void AEFEnvironmentActionEmitter::ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool");

	AEFEnvironmentActionEmitter_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
// (Simulated, Native, Public)

void AEFEnvironmentActionEmitter::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished");

	AEFEnvironmentActionEmitter_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.HideBecauseFinished
// (Final, Defined, Public)

void AEFSpawnedEmitter::HideBecauseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.HideBecauseFinished");

	AEFSpawnedEmitter_HideBecauseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.ClearExtendPool
// (Simulated, Native, Public)

void AEFSpawnedEmitter::ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.ClearExtendPool");

	AEFSpawnedEmitter_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
// (Simulated, Native, Public)

void AEFSpawnedEmitter::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished");

	AEFSpawnedEmitter_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents
// (Native, HasOptionalParms, Public)

void AEFEmitterPool::ClearPoolPSInfoComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents");

	AEFEmitterPool_ClearPoolPSInfoComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.OnPSInfoFinished
// (Native, Public)

void AEFEmitterPool::OnPSInfoFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.OnPSInfoFinished");

	AEFEmitterPool_OnPSInfoFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.ClearExtendPool
// (Native, Public)

void AEFEmitterPool::ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearExtendPool");

	AEFEmitterPool_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.IsActivateEffect
// (Native, Public)

void AEFPickingEmitter::IsActivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.IsActivateEffect");

	AEFPickingEmitter_IsActivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.DeactivateEffect
// (Native, Public)

void AEFPickingEmitter::DeactivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.DeactivateEffect");

	AEFPickingEmitter_DeactivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.ActivateEffect
// (Native, Public)

void AEFPickingEmitter::ActivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.ActivateEffect");

	AEFPickingEmitter_ActivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.OnParticleSystemFinished
// (Defined, Simulated, Public)

void AEFPickingEmitter::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.OnParticleSystemFinished");

	AEFPickingEmitter_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.Update
// (Defined, Event, Public)

void UEFSeqAct_NPCController::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Update");

	UEFSeqAct_NPCController_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.Activated
// (Defined, Event, Public)

void UEFSeqAct_NPCController::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Activated");

	UEFSeqAct_NPCController_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
// (Native, Public)

void UEFSeqAct_NPCController::BackupMainMovingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.BackupMainMovingState");

	UEFSeqAct_NPCController_BackupMainMovingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
// (Native, Public)

void UEFSeqAct_NPCController::SetEventMoveCompleteProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess");

	UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetMoving
// (Native, Public)

void UEFSeqAct_NPCController::SetMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetMoving");

	UEFSeqAct_NPCController_SetMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SettingReady
// (Native, Public)

void UEFSeqAct_NPCController::SettingReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SettingReady");

	UEFSeqAct_NPCController_SettingReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
// (Native, Public)

void UEFSeqAct_NPCController::setPlayWaitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation");

	UEFSeqAct_NPCController_setPlayWaitAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayAnimation
// (Native, Public)

void UEFSeqAct_NPCController::setPlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayAnimation");

	UEFSeqAct_NPCController_setPlayAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.GetAnimationName
// (Native, Public)

void UEFSeqAct_NPCController::GetAnimationName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.GetAnimationName");

	UEFSeqAct_NPCController_GetAnimationName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.initial
// (Native, Public)

void UEFSeqAct_NPCController::initial()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.initial");

	UEFSeqAct_NPCController_initial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.UnTouch
// (Native, Event, Public)

void AEFEnvironmentInfoVolume::UnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UnTouch");

	AEFEnvironmentInfoVolume_UnTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.Touch
// (Native, Event, Public)

void AEFEnvironmentInfoVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.Touch");

	AEFEnvironmentInfoVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
// (Native, HasOptionalParms, Public)

void AEFEnvironmentInfoVolume::UpdateEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment");

	AEFEnvironmentInfoVolume_UpdateEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.OnToggle
// (Defined, Simulated, Public)

void AEFEnvironmentInfoVolume::OnToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.OnToggle");

	AEFEnvironmentInfoVolume_OnToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPathBlockingVolume.StopsProjectile
// (Defined, Simulated, Public)

void AEFPathBlockingVolume::StopsProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPathBlockingVolume.StopsProjectile");

	AEFPathBlockingVolume_StopsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.GetStringINI
// (Defined, Public)

void UEFGFxMoviePlayer::GetStringINI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.GetStringINI");

	UEFGFxMoviePlayer_GetStringINI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.SetStringINI
// (Defined, Public, HasDefaults)

void UEFGFxMoviePlayer::SetStringINI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.SetStringINI");

	UEFGFxMoviePlayer_SetStringINI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.CreateArrayEx
// (Native, HasOptionalParms, Public)

void UEFGFxMoviePlayer::CreateArrayEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateArrayEx");

	UEFGFxMoviePlayer_CreateArrayEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.CreateObjectEx
// (Native, HasOptionalParms, Public)

void UEFGFxMoviePlayer::CreateObjectEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateObjectEx");

	UEFGFxMoviePlayer_CreateObjectEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.PostAdvance
// (Native, Public)

void UEFGFxMoviePlayer::PostAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.PostAdvance");

	UEFGFxMoviePlayer_PostAdvance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
// (Defined, Event, Public)

void UEFGFxMoviePlayer::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetUnloaded");

	UEFGFxMoviePlayer_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.WidgetInitialized
// (Defined, Event, Public)

void UEFGFxMoviePlayer::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetInitialized");

	UEFGFxMoviePlayer_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxEditorMoviePlayer.Start
// (Defined, HasOptionalParms, Public)

void UEFGFxEditorMoviePlayer::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxEditorMoviePlayer.Start");

	UEFGFxEditorMoviePlayer_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.GetExternalTexture
// (Final, Native, Public)

void UEFGFxMovieWidget::GetExternalTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GetExternalTexture");

	UEFGFxMovieWidget_GetExternalTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
// (Final, Native, Public)

void UEFGFxMovieWidget::HasGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding");

	UEFGFxMovieWidget_HasGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
// (Final, Native, Public)

void UEFGFxMovieWidget::DelGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding");

	UEFGFxMovieWidget_DelGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
// (Final, Native, Public)

void UEFGFxMovieWidget::AddGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding");

	UEFGFxMovieWidget_AddGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.SetVisible
// (Final, Native, Public)

void UEFGFxMovieWidget::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.SetVisible");

	UEFGFxMovieWidget_SetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
// (Final, Native, Public)

void UEFGFxMovieWidget::GFxFristFrameCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback");

	UEFGFxMovieWidget_GFxFristFrameCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.PostWidgetInit
// (Native, Event, Public)

void UEFGFxMovieWidget::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.PostWidgetInit");

	UEFGFxMovieWidget_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.Start
// (Native, Event, HasOptionalParms, Public)

void UEFGFxMovieWidget::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.Start");

	UEFGFxMovieWidget_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
// (Defined, Event, Public)

void UEFGFxMovieWidgetMain::ActivateFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ActivateFrame");

	UEFGFxMovieWidgetMain_ActivateFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
// (Native, Public)

void UEFGFxMovieWidgetMain::ARKSlotMouseDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
// (Native, Public)

void UEFGFxMovieWidgetMain::ARKSlotMouseRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
// (Native, Public)

void UEFGFxMovieWidgetMain::ARKSlotMouseLeftClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
// (Final, Native, Public)

void UEFGFxMovieWidgetMain::ClearBindWidgetByName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName");

	UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
// (Final, Native, Public)

void UEFGFxMovieWidgetMain::ClearBindWidgetByWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget");

	UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
// (Defined, Simulated, Public)

void UEFGFxMovieWidgetMain::UnBindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.UnBindWidget");

	UEFGFxMovieWidgetMain_UnBindWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.BindWidget
// (Defined, Simulated, Public)

void UEFGFxMovieWidgetMain::BindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.BindWidget");

	UEFGFxMovieWidgetMain_BindWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
// (Defined, Event, Public)

void UEFGFxMovieWidgetMain::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded");

	UEFGFxMovieWidgetMain_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
// (Defined, Event, Public)

void UEFGFxMovieWidgetMain::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized");

	UEFGFxMovieWidgetMain_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.InvalidateSize
// (Final, Native, Public)

void UEFUIComponent::InvalidateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.InvalidateSize");

	UEFUIComponent_InvalidateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.InvalidateData
// (Final, Native, Public)

void UEFUIComponent::InvalidateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.InvalidateData");

	UEFUIComponent_InvalidateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.Invalidate
// (Final, Native, Public)

void UEFUIComponent::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.Invalidate");

	UEFUIComponent_Invalidate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.ValidateNow
// (Final, Native, Public)

void UEFUIComponent::ValidateNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.ValidateNow");

	UEFUIComponent_ValidateNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.HasFocus
// (Final, Native, Public)

void UEFUIComponent::HasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.HasFocus");

	UEFUIComponent_HasFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetY
// (Final, Native, Public)

void UEFUIComponent::GetY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetY");

	UEFUIComponent_GetY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetY
// (Final, Native, Public)

void UEFUIComponent::SetY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetY");

	UEFUIComponent_SetY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetX
// (Final, Native, Public)

void UEFUIComponent::GetX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetX");

	UEFUIComponent_GetX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetX
// (Final, Native, Public)

void UEFUIComponent::SetX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetX");

	UEFUIComponent_SetX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetHeight
// (Final, Native, Public)

void UEFUIComponent::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetHeight");

	UEFUIComponent_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetHeight
// (Final, Native, Public)

void UEFUIComponent::SetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetHeight");

	UEFUIComponent_SetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetWidth
// (Final, Native, Public)

void UEFUIComponent::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetWidth");

	UEFUIComponent_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetWidth
// (Final, Native, Public)

void UEFUIComponent::SetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetWidth");

	UEFUIComponent_SetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetEnabled
// (Final, Native, Public)

void UEFUIComponent::GetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetEnabled");

	UEFUIComponent_GetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetEnabled
// (Final, Native, Public)

void UEFUIComponent::SetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetEnabled");

	UEFUIComponent_SetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetVisible
// (Final, Native, Public)

void UEFUIComponent::GetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetVisible");

	UEFUIComponent_GetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetVisible
// (Native, Public)

void UEFUIComponent::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetVisible");

	UEFUIComponent_SetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetName
// (Final, Native, Public)

void UEFUIComponent::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetName");

	UEFUIComponent_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetName
// (Final, Native, Public)

void UEFUIComponent::SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetName");

	UEFUIComponent_SetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.WidgetInitialized
// (Defined, Event, Public)

void UEFUIComponent::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.WidgetInitialized");

	UEFUIComponent_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetItemData
// (Defined, Event, Public)

void UEFUISlot::SetItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemData");

	UEFUISlot_SetItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetDisableType
// (Native, Public)

void UEFUISlot::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisableType");

	UEFUISlot_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetUniqueData
// (Native, Public)

void UEFUISlot::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetUniqueData");

	UEFUISlot_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetUniqueData
// (Native, Public)

void UEFUISlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetUniqueData");

	UEFUISlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetLocked
// (Native, Public)

void UEFUISlot::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetLocked");

	UEFUISlot_SetLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsLocked
// (Native, Public)

void UEFUISlot::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.IsLocked");

	UEFUISlot_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetItemGrade
// (Native, Public)

void UEFUISlot::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemGrade");

	UEFUISlot_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetItemGrade
// (Native, Public)

void UEFUISlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetItemGrade");

	UEFUISlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSoundTheme
// (Native, Public)

void UEFUISlot::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSoundTheme");

	UEFUISlot_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSoundTheme
// (Native, Public)

void UEFUISlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSoundTheme");

	UEFUISlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetDisabled
// (Native, Public)

void UEFUISlot::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisabled");

	UEFUISlot_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsDisabled
// (Native, Public)

void UEFUISlot::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.IsDisabled");

	UEFUISlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetCooltime
// (Native, Public)

void UEFUISlot::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetCooltime");

	UEFUISlot_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetTotalCoolTime
// (Native, Public)

void UEFUISlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetTotalCoolTime");

	UEFUISlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetRemainCoolTime
// (Native, Public)

void UEFUISlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetRemainCoolTime");

	UEFUISlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconHeight
// (Native, Public)

void UEFUISlot::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconHeight");

	UEFUISlot_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconHeight
// (Native, Public)

void UEFUISlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconHeight");

	UEFUISlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconWidth
// (Native, Public)

void UEFUISlot::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconWidth");

	UEFUISlot_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconWidth
// (Native, Public)

void UEFUISlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconWidth");

	UEFUISlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconY
// (Native, Public)

void UEFUISlot::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconY");

	UEFUISlot_SetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconY
// (Native, Public)

void UEFUISlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconY");

	UEFUISlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconX
// (Native, Public)

void UEFUISlot::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconX");

	UEFUISlot_SetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconX
// (Native, Public)

void UEFUISlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconX");

	UEFUISlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconCount
// (Native, Public)

void UEFUISlot::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconCount");

	UEFUISlot_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconCount
// (Native, Public)

void UEFUISlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconCount");

	UEFUISlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconPath
// (Native, Public)

void UEFUISlot::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconPath");

	UEFUISlot_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconPath
// (Native, Public)

void UEFUISlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconPath");

	UEFUISlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetWindowType
// (Native, Public)

void UEFUISlot::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetWindowType");

	UEFUISlot_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetWindowType
// (Native, Public)

void UEFUISlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetWindowType");

	UEFUISlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSlotIndex
// (Native, Public)

void UEFUISlot::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotIndex");

	UEFUISlot_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotIndex
// (Native, Public)

void UEFUISlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotIndex");

	UEFUISlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetBindID
// (Native, Public)

void UEFUISlot::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetBindID");

	UEFUISlot_SetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetBindID
// (Native, Public)

void UEFUISlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetBindID");

	UEFUISlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSlotType
// (Native, Public)

void UEFUISlot::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotType");

	UEFUISlot_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotType
// (Native, Public)

void UEFUISlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotType");

	UEFUISlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconData
// (Native, HasOptionalParms, Public)

void UEFUISlot::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconData");

	UEFUISlot_SetIconData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotItemData
// (Native, Public)

void UEFUISlot::GetSlotItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotItemData");

	UEFUISlot_GetSlotItemData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
// (Native, Public)

void UEFUIChatTabControl::ChatLogInputSelectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInputSelectType");

	UEFUIChatTabControl_ChatLogInputSelectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
// (Native, Public)

void UEFUIChatTabControl::ChatLogMainWidgetTabInsertGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup");

	UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
// (Native, Public)

void UEFUIChatTabControl::ChatLogInTabGroupElementStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag");

	UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogLinkClick
// (Native, Public)

void UEFUIChatTabControl::ChatLogLinkClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogLinkClick");

	UEFUIChatTabControl_ChatLogLinkClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
// (Native, Public)

void UEFUIChatTabControl::ChatLogTabContextMenuShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow");

	UEFUIChatTabControl_ChatLogTabContextMenuShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
// (Native, Public)

void UEFUIChatTabControl::ChatLogMainWidgetSizeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated");

	UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.SetSelectedIndex
// (Defined, Public)

void UEFUIList::SetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.SetSelectedIndex");

	UEFUIList_SetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.GetSelectedIndex
// (Defined, Public)

void UEFUIList::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetSelectedIndex");

	UEFUIList_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.GetData
// (Native, Public)

void UEFUIList::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetData");

	UEFUIList_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItem.HasAttribute
// (Native, Public)

void UEFUIListItem::HasAttribute()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItem.HasAttribute");

	UEFUIListItem_HasAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTownShow
// (Native, Public)

void UEFUIListItemSlot::SetTownShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTownShow");

	UEFUIListItemSlot_SetTownShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetFriendshipShow
// (Native, Public)

void UEFUIListItemSlot::SetFriendshipShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetFriendshipShow");

	UEFUIListItemSlot_SetFriendshipShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetAdvBookShow
// (Native, Public)

void UEFUIListItemSlot::SetAdvBookShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetAdvBookShow");

	UEFUIListItemSlot_SetAdvBookShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTemporary
// (Native, Public)

void UEFUIListItemSlot::SetTemporary()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTemporary");

	UEFUIListItemSlot_SetTemporary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTrash
// (Native, Public)

void UEFUIListItemSlot::SetTrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTrash");

	UEFUIListItemSlot_SetTrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetDisableType
// (Native, Public)

void UEFUIListItemSlot::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisableType");

	UEFUIListItemSlot_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTableID
// (Native, Public)

void UEFUIListItemSlot::SetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTableID");

	UEFUIListItemSlot_SetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTableID
// (Native, Public)

void UEFUIListItemSlot::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTableID");

	UEFUIListItemSlot_GetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetUniqueData
// (Native, Public)

void UEFUIListItemSlot::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetUniqueData");

	UEFUIListItemSlot_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetUniqueData
// (Native, Public)

void UEFUIListItemSlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetUniqueData");

	UEFUIListItemSlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetLocked
// (Native, Public)

void UEFUIListItemSlot::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLocked");

	UEFUIListItemSlot_SetLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsLocked
// (Native, Public)

void UEFUIListItemSlot::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.IsLocked");

	UEFUIListItemSlot_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetItemGrade
// (Native, Public)

void UEFUIListItemSlot::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemGrade");

	UEFUIListItemSlot_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemGrade
// (Native, Public)

void UEFUIListItemSlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemGrade");

	UEFUIListItemSlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSoundTheme
// (Native, Public)

void UEFUIListItemSlot::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSoundTheme");

	UEFUIListItemSlot_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSoundTheme
// (Native, Public)

void UEFUIListItemSlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSoundTheme");

	UEFUIListItemSlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetDisabled
// (Native, Public)

void UEFUIListItemSlot::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisabled");

	UEFUIListItemSlot_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsDisabled
// (Native, Public)

void UEFUIListItemSlot::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.IsDisabled");

	UEFUIListItemSlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetItemName
// (Native, Public)

void UEFUIListItemSlot::SetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemName");

	UEFUIListItemSlot_SetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemName
// (Native, Public)

void UEFUIListItemSlot::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemName");

	UEFUIListItemSlot_GetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetLabel
// (Native, Public)

void UEFUIListItemSlot::SetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLabel");

	UEFUIListItemSlot_SetLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetLabel
// (Native, Public)

void UEFUIListItemSlot::GetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetLabel");

	UEFUIListItemSlot_GetLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetCooltime
// (Native, Public)

void UEFUIListItemSlot::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetCooltime");

	UEFUIListItemSlot_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTotalCoolTime
// (Native, Public)

void UEFUIListItemSlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTotalCoolTime");

	UEFUIListItemSlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetRemainCoolTime
// (Native, Public)

void UEFUIListItemSlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetRemainCoolTime");

	UEFUIListItemSlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconHeight
// (Native, Public)

void UEFUIListItemSlot::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconHeight");

	UEFUIListItemSlot_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconHeight
// (Native, Public)

void UEFUIListItemSlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconHeight");

	UEFUIListItemSlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconWidth
// (Native, Public)

void UEFUIListItemSlot::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconWidth");

	UEFUIListItemSlot_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconWidth
// (Native, Public)

void UEFUIListItemSlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconWidth");

	UEFUIListItemSlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconY
// (Native, Public)

void UEFUIListItemSlot::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconY");

	UEFUIListItemSlot_SetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconY
// (Native, Public)

void UEFUIListItemSlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconY");

	UEFUIListItemSlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconX
// (Native, Public)

void UEFUIListItemSlot::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconX");

	UEFUIListItemSlot_SetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconX
// (Native, Public)

void UEFUIListItemSlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconX");

	UEFUIListItemSlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconCount
// (Native, Public)

void UEFUIListItemSlot::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconCount");

	UEFUIListItemSlot_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconCount
// (Native, Public)

void UEFUIListItemSlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconCount");

	UEFUIListItemSlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconPath
// (Native, Public)

void UEFUIListItemSlot::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconPath");

	UEFUIListItemSlot_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconPath
// (Native, Public)

void UEFUIListItemSlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconPath");

	UEFUIListItemSlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetWindowType
// (Native, Public)

void UEFUIListItemSlot::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetWindowType");

	UEFUIListItemSlot_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetWindowType
// (Native, Public)

void UEFUIListItemSlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetWindowType");

	UEFUIListItemSlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSlotIndex
// (Native, Public)

void UEFUIListItemSlot::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotIndex");

	UEFUIListItemSlot_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotIndex
// (Native, Public)

void UEFUIListItemSlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotIndex");

	UEFUIListItemSlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetBindID
// (Native, Public)

void UEFUIListItemSlot::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetBindID");

	UEFUIListItemSlot_SetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetBindID
// (Native, Public)

void UEFUIListItemSlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetBindID");

	UEFUIListItemSlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSlotType
// (Native, Public)

void UEFUIListItemSlot::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotType");

	UEFUIListItemSlot_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotType
// (Native, Public)

void UEFUIListItemSlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotType");

	UEFUIListItemSlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconData
// (Native, HasOptionalParms, Public)

void UEFUIListItemSlot::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconData");

	UEFUIListItemSlot_SetIconData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick
// (Native, Public)

void UEFGFxWidgetAchievement::AchievementRewardTakeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick");

	UEFGFxWidgetAchievement_AchievementRewardTakeBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
// (Native, Public)

void UEFGFxWidgetAnchorModeCrew::AnchorCrewSkillSlotClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
// (Native, Public)

void UEFGFxWidgetAnchorModeCrew::AnchorCrewPageIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.showNew
// (Defined, Event, Public)

void UEFGFxWidgetBuddy::showNew()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.showNew");

	UEFGFxWidgetBuddy_showNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setSelectedTab
// (Defined, Event, Public)

void UEFGFxWidgetBuddy::setSelectedTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setSelectedTab");

	UEFGFxWidgetBuddy_setSelectedTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setAFK
// (Defined, Event, Public)

void UEFGFxWidgetBuddy::setAFK()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setAFK");

	UEFGFxWidgetBuddy_setAFK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsGroupRendererMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver");

	UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsGroupRendererRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick");

	UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsGroupRendererExtended()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended");

	UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsRendererRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick");

	UEFGFxWidgetBuddy_FriendsRendererRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsInvite
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsInvite");

	UEFGFxWidgetBuddy_FriendsInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBlock
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBlock");

	UEFGFxWidgetBuddy_FriendsBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsUnBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock");

	UEFGFxWidgetBuddy_FriendsUnBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsBuddyCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel");

	UEFGFxWidgetBuddy_FriendsBuddyCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsBuddyReject()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject");

	UEFGFxWidgetBuddy_FriendsBuddyReject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
// (Native, Public)

void UEFGFxWidgetBuddy::FriendsBuddyAgree()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree");

	UEFGFxWidgetBuddy_FriendsBuddyAgree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
// (Native, Public)

void UEFGFxWidgetCandidate::SetCandidateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus");

	UEFGFxWidgetCandidate_SetCandidateFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
// (Defined, Event, Public)

void UEFGFxWidgetChattingOption::SetChannelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.SetChannelColor");

	UEFGFxWidgetChattingOption_SetChannelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
// (Native, Public)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionAddTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
// (Native, Public)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionOKWnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
// (Native, Public)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionResetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
// (Native, Public)

void UEFGFxWidgetChattingOption::ChatLogFilterOptionAppliedChannelList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex
// (Native, Public)

void UEFGFxWidgetCinematicDungeonEntrance::DungeonEntranceDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex");

	UEFGFxWidgetCinematicDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
// (Defined, Event, Public)

void UEFGFxWidgetColorPicker::SetTargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition");

	UEFGFxWidgetColorPicker_SetTargetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
// (Defined, Event, Public)

void UEFGFxWidgetColorPicker::SetTargetCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetCode");

	UEFGFxWidgetColorPicker_SetTargetCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetColor
// (Defined, Event, Public)

void UEFGFxWidgetColorPicker::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetColor");

	UEFGFxWidgetColorPicker_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
// (Defined, Event, Public)

void UEFGFxWidgetColorPicker::SetDefaultColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor");

	UEFGFxWidgetColorPicker_SetDefaultColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestEventColorPickerCursorDragEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd");

	UEFGFxWidgetColorPicker_RequestEventColorPickerCursorDragEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestEventColorPickerProgressValueChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange");

	UEFGFxWidgetColorPicker_RequestEventColorPickerProgressValueChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus
// (Native, Public)

void UEFGFxWidgetColorPicker::ChatMessageInputTextHasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus");

	UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestARKColorPickerDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting");

	UEFGFxWidgetColorPicker_RequestARKColorPickerDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestARKColorPickerSaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting");

	UEFGFxWidgetColorPicker_RequestARKColorPickerSaveSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose
// (Native, Public)

void UEFGFxWidgetColorPicker::RequestARKColorPickerClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose");

	UEFGFxWidgetColorPicker_RequestARKColorPickerClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick
// (Native, Public)

void UEFGFxWidgetCurrencyInfo::CurrencyInfoTreeItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick");

	UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
// (Defined, Event, Public)

void UEFGFxWidgetCustomColorPicker::SetTargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition");

	UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
// (Defined, Event, Public)

void UEFGFxWidgetCustomColorPicker::SetTargetCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode");

	UEFGFxWidgetCustomColorPicker_SetTargetCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
// (Defined, Event, Public)

void UEFGFxWidgetCustomColorPicker::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetColor");

	UEFGFxWidgetCustomColorPicker_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
// (Defined, Event, Public)

void UEFGFxWidgetCustomColorPicker::SetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetInit");

	UEFGFxWidgetCustomColorPicker_SetInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::ColorPickerColorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::ColorPickerLightnessChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerSaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerSaveSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose
// (Native, Public)

void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick
// (Native, Public)

void UEFGFxWidgetGuild::GuildApplicantRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick");

	UEFGFxWidgetGuild_GuildApplicantRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
// (Native, Public)

void UEFGFxWidgetGuild::GuildMemberRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick");

	UEFGFxWidgetGuild_GuildMemberRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildReject
// (Native, Public)

void UEFGFxWidgetGuild::GuildReject()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildReject");

	UEFGFxWidgetGuild_GuildReject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildAccept
// (Native, Public)

void UEFGFxWidgetGuild::GuildAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildAccept");

	UEFGFxWidgetGuild_GuildAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
// (Native, Public)

void UEFGFxWidgetGuild::GuildNoticeCopyButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick");

	UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
// (Native, Public)

void UEFGFxWidgetGuild::GuildChangeGuildIntroduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction");

	UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
// (Native, Public)

void UEFGFxWidgetGuild::GuildChangeGuildNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice");

	UEFGFxWidgetGuild_GuildChangeGuildNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
// (Native, Public)

void UEFGFxWidgetGuild::GuildChangeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick");

	UEFGFxWidgetGuild_GuildChangeBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
// (Native, Public)

void UEFGFxWidgetGuild::GuildChangeGuildMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark");

	UEFGFxWidgetGuild_GuildChangeGuildMark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCreate
// (Native, Public)

void UEFGFxWidgetGuild::GuildCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCreate");

	UEFGFxWidgetGuild_GuildCreate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCancel
// (Native, Public)

void UEFGFxWidgetGuild::GuildCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCancel");

	UEFGFxWidgetGuild_GuildCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildApply
// (Native, Public)

void UEFGFxWidgetGuild::GuildApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApply");

	UEFGFxWidgetGuild_GuildApply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.killOptionKey
// (Defined, Event, Public)

void UEFGFxWidgetHotKey::killOptionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.killOptionKey");

	UEFGFxWidgetHotKey_killOptionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
// (Defined, Event, Public)

void UEFGFxWidgetHotKey::selectOptionHotKeyMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu");

	UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyCloseBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick");

	UEFGFxWidgetHotKey_OptionHotKeyCloseBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyKillFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus");

	UEFGFxWidgetHotKey_OptionHotKeyKillFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyCancelClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick");

	UEFGFxWidgetHotKey_OptionHotKeyCancelClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyAcceptClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick");

	UEFGFxWidgetHotKey_OptionHotKeyAcceptClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyConfirmClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick");

	UEFGFxWidgetHotKey_OptionHotKeyConfirmClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyResetClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick");

	UEFGFxWidgetHotKey_OptionHotKeyResetClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyButtonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange");

	UEFGFxWidgetHotKey_OptionHotKeyButtonChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange
// (Native, Public)

void UEFGFxWidgetHotKey::OptionHotKeyMainListIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange");

	UEFGFxWidgetHotKey_OptionHotKeyMainListIndexChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInstanceDungeonEntrance.DungeonEntranceDifficultyIndex
// (Native, Public)

void UEFGFxWidgetInstanceDungeonEntrance::DungeonEntranceDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInstanceDungeonEntrance.DungeonEntranceDifficultyIndex");

	UEFGFxWidgetInstanceDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
// (Defined, Public)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
// (Defined, Public)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
// (Native, Public)

void UEFGFxWidgetInteractionAbility_Refine::ChangeCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor");

	UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
// (Native, Public)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick
// (Native, Public)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleChangeTabClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleChangeTabClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected
// (Native, Public)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem
// (Native, Public)

void UEFGFxWidgetInteractionBarter::BarterShopPurchaseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem");

	UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
// (Defined, Event, Public)

void UEFGFxWidgetInteractionMail::SetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable");

	UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
// (Defined, Public)

void UEFGFxWidgetInteractionMail::ASSetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
// (Defined, Event, Public)

void UEFGFxWidgetInteractionMail::SetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable");

	UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
// (Defined, Public)

void UEFGFxWidgetInteractionMail::ASSetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
// (Defined, Event, Public)

void UEFGFxWidgetInteractionMail::SetMailOpenType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType");

	UEFGFxWidgetInteractionMail_SetMailOpenType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
// (Defined, Public)

void UEFGFxWidgetInteractionMail::SetOpenType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetOpenType");

	UEFGFxWidgetInteractionMail_SetOpenType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.StopLoading
// (Native, Public)

void UEFGFxWidgetInteractionMail::StopLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.StopLoading");

	UEFGFxWidgetInteractionMail_StopLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData
// (Native, Public)

void UEFGFxWidgetInteractionMail::StructReceiverCacheData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData");

	UEFGFxWidgetInteractionMail_StructReceiverCacheData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData
// (Native, Public)

void UEFGFxWidgetInteractionMail::AddReceiverData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData");

	UEFGFxWidgetInteractionMail_AddReceiverData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetItemAssembly.ItemCraftAlarmEffectLuckyPlayEnd
// (Native, Public)

void UEFGFxWidgetItemAssembly::ItemCraftAlarmEffectLuckyPlayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetItemAssembly.ItemCraftAlarmEffectLuckyPlayEnd");

	UEFGFxWidgetItemAssembly_ItemCraftAlarmEffectLuckyPlayEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelNoramlSkillClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelNoramlSkillClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelNoramlSkillClick");

	UEFGFxWidgetLifeSkill_LifeLevelNoramlSkillClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillPlusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillMinusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelPointPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick");

	UEFGFxWidgetLifeSkill_LifeLevelPointPlusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelPointMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick");

	UEFGFxWidgetLifeSkill_LifeLevelPointMinusClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelGuideBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick");

	UEFGFxWidgetLifeSkill_LifeLevelGuideBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed
// (Defined, Public)

void UEFGFxWidgetLifeSkill::LifeLevelGuideClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed");

	UEFGFxWidgetLifeSkill_LifeLevelGuideClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeNoramlSkillClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifeNoramlSkillClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifeNoramlSkillClick");

	UEFGFxWidgetLifeSkill_OnLifeNoramlSkillClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillPlusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifeMasterSkillPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillPlusClick");

	UEFGFxWidgetLifeSkill_OnLifeMasterSkillPlusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillMinusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifeMasterSkillMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillMinusClick");

	UEFGFxWidgetLifeSkill_OnLifeMasterSkillMinusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointPlusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifePointPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifePointPlusClick");

	UEFGFxWidgetLifeSkill_OnLifePointPlusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointMinusClick
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifePointMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifePointMinusClick");

	UEFGFxWidgetLifeSkill_OnLifePointMinusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuide
// (Native, Public)

void UEFGFxWidgetLifeSkill::LifeLevelGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuide");

	UEFGFxWidgetLifeSkill_LifeLevelGuide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeLevelGuideClosed
// (Native, Public)

void UEFGFxWidgetLifeSkill::OnLifeLevelGuideClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OnLifeLevelGuideClosed");

	UEFGFxWidgetLifeSkill_OnLifeLevelGuideClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuideUI
// (Defined, Event, Public)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuideUI");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide
// (Defined, Public)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI
// (Defined, Event, Public)

void UEFGFxWidgetLifeSkill::SetNoSkillUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI");

	UEFGFxWidgetLifeSkill_SetNoSkillUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill
// (Defined, Public)

void UEFGFxWidgetLifeSkill::SetNoSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill");

	UEFGFxWidgetLifeSkill_SetNoSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
// (Native, Public)

void UEFGFxWidgetMap::RequestResetMapRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.RequestResetMapRotation");

	UEFGFxWidgetMap_RequestResetMapRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth
// (Native, Public)

void UEFGFxWidgetMap::RequestWorldMapUpperDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth");

	UEFGFxWidgetMap_RequestWorldMapUpperDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex
// (Native, Public)

void UEFGFxWidgetMap::WorldMapZoneIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex");

	UEFGFxWidgetMap_WorldMapZoneIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.WorldMapContinentType
// (Native, Public)

void UEFGFxWidgetMap::WorldMapContinentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapContinentType");

	UEFGFxWidgetMap_WorldMapContinentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
// (Native, Public)

void UEFGFxWidgetMODWatingInfo::MinimapAlarmListRightBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick");

	UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
// (Native, Public)

void UEFGFxWidgetMoviePlayer::TestLabSendInputMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage");

	UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
// (Native, Public)

void UEFGFxWidgetNormalBox::NormalBoxItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected");

	UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
// (Native, Public)

void UEFGFxWidgetNoticeMOD::NoticeModWaitListItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick");

	UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
// (Defined, Event, Public)

void UEFGFxWidgetQuestJournal::SetMaxTreeItemCheckNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
// (Defined, Public)

void UEFGFxWidgetQuestJournal::SetMaxQuestCheckNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
// (Defined, Public)

void UEFGFxWidgetQuestJournal::ARKQuestTraceButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
// (Native, Public)

void UEFGFxWidgetQuestJournal::OnClicked_TraceQuestButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton");

	UEFGFxWidgetQuestJournal_OnClicked_TraceQuestButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemListOverPool
// (Defined, Public)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemListOverPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemListOverPool");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemListOverPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnCheckedTreeItemOverPool
// (Native, Public)

void UEFGFxWidgetQuestJournal::OnCheckedTreeItemOverPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnCheckedTreeItemOverPool");

	UEFGFxWidgetQuestJournal_OnCheckedTreeItemOverPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked
// (Defined, Public)

void UEFGFxWidgetQuestJournal::ARKQuestGiveUpButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
// (Native, Public)

void UEFGFxWidgetQuestJournal::OnClicked_GiveUpButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton");

	UEFGFxWidgetQuestJournal_OnClicked_GiveUpButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemMultiCheck
// (Defined, Public)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemMultiCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemMultiCheck");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemMultiCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnChecked_QuestTreeItem
// (Native, Public)

void UEFGFxWidgetQuestJournal::OnChecked_QuestTreeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnChecked_QuestTreeItem");

	UEFGFxWidgetQuestJournal_OnChecked_QuestTreeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnHide
// (Defined, Event, Public)

void UEFGFxWidgetQuestSummary::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnHide");

	UEFGFxWidgetQuestSummary_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
// (Native, Public)

void UEFGFxWidgetQuestSummary::OnHideQuestSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary");

	UEFGFxWidgetQuestSummary_OnHideQuestSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem
// (Defined, Public)

void UEFGFxWidgetQuestSummary::ARKQuestSelectedRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem");

	UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
// (Native, Public)

void UEFGFxWidgetQuestSummary::OnClicked_SelectChoiceItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem");

	UEFGFxWidgetQuestSummary_OnClicked_SelectChoiceItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked
// (Defined, Public)

void UEFGFxWidgetQuestSummary::ARKQuestCompleteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
// (Native, Public)

void UEFGFxWidgetQuestSummary::OnClicked_CompleteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton");

	UEFGFxWidgetQuestSummary_OnClicked_CompleteButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked
// (Defined, Public)

void UEFGFxWidgetQuestSummary::ARKQuestAcceptButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
// (Native, Public)

void UEFGFxWidgetQuestSummary::OnClicked_AcceptButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton");

	UEFGFxWidgetQuestSummary_OnClicked_AcceptButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem
// (Defined, Event, Public)

void UEFGFxWidgetQuestSummary::SelectChoiceRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
// (Defined, Public)

void UEFGFxWidgetQuestSummary::SetSelectedIndex_ChoiceRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.Init
// (Defined, Event, Public)

void UEFGFxWidgetRandomBox::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.Init");

	UEFGFxWidgetRandomBox_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.startAni
// (Defined, Event, Public)

void UEFGFxWidgetRandomBox::startAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.startAni");

	UEFGFxWidgetRandomBox_startAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
// (Native, Public)

void UEFGFxWidgetRandomBox::RandomBoxComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete");

	UEFGFxWidgetRandomBox_RandomBoxComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed
// (Native, Public)

void UEFGFxWidgetRandomBox::RandomBoxClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed");

	UEFGFxWidgetRandomBox_RandomBoxClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll
// (Native, Public)

void UEFGFxWidgetSelectBox::SelectBoxItemReceiveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll");

	UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
// (Native, Public)

void UEFGFxWidgetSelectBox::SelectBoxItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected");

	UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.closePreset
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::closePreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.closePreset");

	UEFGFxWidgetSkillBook_closePreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.openPreset
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::openPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.openPreset");

	UEFGFxWidgetSkillBook_openPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.cancelSelection
// (Defined, Event, Public)

void UEFGFxWidgetSkillBook::cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.cancelSelection");

	UEFGFxWidgetSkillBook_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookPresetUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock");

	UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookPresetApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply");

	UEFGFxWidgetSkillBook_SkillBookPresetApply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookPresetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected");

	UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookInitCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel");

	UEFGFxWidgetSkillBook_SkillBookInitCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookInitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm");

	UEFGFxWidgetSkillBook_SkillBookInitConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookPresetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit");

	UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookListSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected");

	UEFGFxWidgetSkillBook_SkillBookListSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookTierBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick");

	UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookDownBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick");

	UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
// (Native, Public)

void UEFGFxWidgetSkillBook::SkillBookUpBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick");

	UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionButtonClickHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler");

	UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionListIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange");

	UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
// (Native, Public)

void UEFGFxWidgetSystemOption::OpenChattingOptionColorPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker");

	UEFGFxWidgetSystemOption_OpenChattingOptionColorPicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus
// (Native, Public)

void UEFGFxWidgetSystemOption::OptionHotKeyKillFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus");

	UEFGFxWidgetSystemOption_OptionHotKeyKillFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange
// (Native, Public)

void UEFGFxWidgetSystemOption::OptionHotKeyButtonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange");

	UEFGFxWidgetSystemOption_OptionHotKeyButtonChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionWndCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked");

	UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionChangedSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider");

	UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionSelectedComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
// (Native, Public)

void UEFGFxWidgetSystemOption::SystemOptionSelectedCheckBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
// (Native, Public)

void UEFGFxWidgetUnLockBox::UnlockBoxItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete");

	UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
// (Native, Public)

void UEFGFxWidgetUnLockBox::UnlockBoxItemClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed");

	UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetOtherTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady");

	UEFGFxWidgetUserTrade_SetOtherTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetOtherTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady");

	UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetMyTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady");

	UEFGFxWidgetUserTrade_SetMyTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetMyTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady");

	UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
// (Defined, Event, Public)

void UEFGFxWidgetUserTrade::SetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm");

	UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
// (Defined, Public)

void UEFGFxWidgetUserTrade::ASSetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowConfirmBtnClick
// (Native, Public)

void UEFGFxWidgetVictoryCrest::VictoryCrestWindowConfirmBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowConfirmBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowConfirmBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowExchangeBtnClick
// (Native, Public)

void UEFGFxWidgetVictoryCrest::VictoryCrestWindowExchangeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowExchangeBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowExchangeBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowUnlockBtnClick
// (Native, Public)

void UEFGFxWidgetVictoryCrest::VictoryCrestWindowUnlockBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowUnlockBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowUnlockBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.WidgetInitialized
// (Defined, Event, Public)

void UEFUIFrame::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.WidgetInitialized");

	UEFUIFrame_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.Deactivate
// (Event, Public)

void UEFUIFrame::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Deactivate");

	UEFUIFrame_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.Activate
// (Event, Public)

void UEFUIFrame::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Activate");

	UEFUIFrame_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
// (Native, Public)

void UEFGFxWidgetAnnounce::AnnounceFrameMotionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete");

	UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::cleanUpLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer");

	UEFGFxWidgetAnnounce_cleanUpLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::setAnnouncePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition");

	UEFGFxWidgetAnnounce_setAnnouncePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::getAnnounceListPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition");

	UEFGFxWidgetAnnounce_getAnnounceListPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::setAnnounceItemTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime");

	UEFGFxWidgetAnnounce_setAnnounceItemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::getAnnounceItemTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime");

	UEFGFxWidgetAnnounce_getAnnounceItemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::getAnnounceListItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem");

	UEFGFxWidgetAnnounce_getAnnounceListItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::setAnnounceTotalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem");

	UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::getAnnounceMaxItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem");

	UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::getAnnounceCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem");

	UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
// (Defined, Event, Public)

void UEFGFxWidgetAnnounce::addAnnounceMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage");

	UEFGFxWidgetAnnounce_addAnnounceMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
// (Defined, Event, Public)

void UEFGFxWidgetClassPreview::SetEnableResetButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton");

	UEFGFxWidgetClassPreview_SetEnableResetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetShowType
// (Defined, Event, Public)

void UEFGFxWidgetClassPreview::SetShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetShowType");

	UEFGFxWidgetClassPreview_SetShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
// (Defined, Event, Public)

void UEFGFxWidgetClassPreview::SetClassUpgradeChoiceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo");

	UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
// (Defined, Event, Public)

void UEFGFxWidgetClassPreview::SetPlayingClassData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData");

	UEFGFxWidgetClassPreview_SetPlayingClassData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeCancelRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeSelectClassID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID");

	UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeConfirmClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass");

	UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeReturnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeAddBossMonster()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradeAddNormalMonster()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradePlayReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset");

	UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
// (Native, Public)

void UEFGFxWidgetClassPreview::RequestStopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie");

	UEFGFxWidgetClassPreview_RequestStopMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview
// (Native, Public)

void UEFGFxWidgetClassPreview::RequestPlayMovieClassUpgradePreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview");

	UEFGFxWidgetClassPreview_RequestPlayMovieClassUpgradePreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradePreviewRequestCloseWnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
// (Native, Public)

void UEFGFxWidgetClassPreview::ClassUpgradePreviewPlaySelectClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::setObserverMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setObserverMod");

	UEFGFxWidgetColosseum_New_setObserverMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::setTimerPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setTimerPause");

	UEFGFxWidgetColosseum_New_setTimerPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.AddItem
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.AddItem");

	UEFGFxWidgetColosseum_New_AddItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setModType
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::setModType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setModType");

	UEFGFxWidgetColosseum_New_setModType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::roundAnnounceShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType");

	UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.announceShowType
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::announceShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.announceShowType");

	UEFGFxWidgetColosseum_New_announceShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setStartData
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::setStartData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setStartData");

	UEFGFxWidgetColosseum_New_setStartData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setWaitData
// (Defined, Event, Public)

void UEFGFxWidgetColosseum_New::setWaitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setWaitData");

	UEFGFxWidgetColosseum_New_setWaitData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
// (Defined, Event, Public)

void UEFGFxWidgetCommon::SetPartyMemberValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue");

	UEFGFxWidgetCommon_SetPartyMemberValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
// (Defined, Event, Public)

void UEFGFxWidgetCommon::SetCommonObjectAvailableSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
// (Defined, Event, Public)

void UEFGFxWidgetCommon::ShowCommonObjectAvailableSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.WidgetInitialized
// (Defined, Event, Public)

void UEFGFxWidgetCommon::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.WidgetInitialized");

	UEFGFxWidgetCommon_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
// (Defined, Public)

void UEFGFxWidgetContentsUnlock::ContentsUnlockCallbackTypeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID");

	UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
// (Native, Public)

void UEFGFxWidgetContentsUnlock::OnContentsUnlockCallbackTypeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID");

	UEFGFxWidgetContentsUnlock_OnContentsUnlockCallbackTypeID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData
// (Defined, Public)

void UEFGFxWidgetDamage::EFDataBinding_UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData");

	UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
// (Defined, Public)

void UEFGFxWidgetExcavationMiniGame::MiniGameStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged");

	UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
// (Native, Public)

void UEFGFxWidgetExcavationMiniGame::OnChangeGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState");

	UEFGFxWidgetExcavationMiniGame_OnChangeGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete
// (Defined, Public)

void UEFGFxWidgetExcavationMiniGame::ArcheologyResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete");

	UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
// (Native, Public)

void UEFGFxWidgetExcavationMiniGame::OnResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete");

	UEFGFxWidgetExcavationMiniGame_OnResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged
// (Defined, Public)

void UEFGFxWidgetFishingNetMiniGame::MiniGameStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged");

	UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
// (Native, Public)

void UEFGFxWidgetFishingNetMiniGame::OnChangeGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState");

	UEFGFxWidgetFishingNetMiniGame_OnChangeGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver
// (Defined, Public)

void UEFGFxWidgetFishingNetMiniGame::FishingGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver");

	UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
// (Native, Public)

void UEFGFxWidgetFishingNetMiniGame::OnFishingGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver");

	UEFGFxWidgetFishingNetMiniGame_OnFishingGameOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus
// (Defined, Event, Public)

void UEFGFxWidgetHeadStatus::MoveHeadStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus");

	UEFGFxWidgetHeadStatus_MoveHeadStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
// (Defined, Public)

void UEFGFxWidgetHudCommonExp::HUD_CommonTabIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex");

	UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
// (Native, Public)

void UEFGFxWidgetHudCommonExp::CommonTabIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex");

	UEFGFxWidgetHudCommonExp_CommonTabIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
// (Native, Public)

void UEFGFxWidgetHudIdentity::SummonerSkillButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick");

	UEFGFxWidgetHudIdentity_SummonerSkillButtonClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick
// (Native, Public)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListRightBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
// (Native, Public)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListLeftBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
// (Native, Public)

void UEFGFxWidgetHudLeftTop::TopHUDAlarmListItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::RelationShipLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp");

	UEFGFxWidgetInteraction_RelationShipLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.CloseBackGround
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::CloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.CloseBackGround");

	UEFGFxWidgetInteraction_CloseBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround");

	UEFGFxWidgetInteraction_InteractionCloseBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.OpenBackGround
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::OpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.OpenBackGround");

	UEFGFxWidgetInteraction_OpenBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionOpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround");

	UEFGFxWidgetInteraction_InteractionOpenBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::SelectQuestListIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex");

	UEFGFxWidgetInteraction_SelectQuestListIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestList
// (Defined, Public)

void UEFGFxWidgetInteraction::SelectQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestList");

	UEFGFxWidgetInteraction_SelectQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::SelectFunctionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionType");

	UEFGFxWidgetInteraction_SelectFunctionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
// (Defined, Public)

void UEFGFxWidgetInteraction::SelectFunctionContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer");

	UEFGFxWidgetInteraction_SelectFunctionContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::ShowMaxIntimatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
// (Defined, Public)

void UEFGFxWidgetInteraction::ShowMaximumIntimatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::ClearInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearInteractionState");

	UEFGFxWidgetInteraction_ClearInteractionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
// (Defined, Public)

void UEFGFxWidgetInteraction::ClearFunctionButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState");

	UEFGFxWidgetInteraction_ClearFunctionButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCommonCloseBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick");

	UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
// (Native, Public)

void UEFGFxWidgetInteraction::EndInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.EndInteractionMode");

	UEFGFxWidgetInteraction_EndInteractionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCommonPlayerTalkListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
// (Native, Public)

void UEFGFxWidgetInteraction::ClickInteractionTalkSelectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList");

	UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCommonNPCTalkListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
// (Native, Public)

void UEFGFxWidgetInteraction::ClickInteractionTalkList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList");

	UEFGFxWidgetInteraction_ClickInteractionTalkList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
// (Defined, Public)

void UEFGFxWidgetInteraction::InteractionCommonMenuListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick");

	UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
// (Native, Public)

void UEFGFxWidgetInteraction::ClickInteractionFunctionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu");

	UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
// (Defined, Event, Public)

void UEFGFxWidgetInteraction::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.WidgetInitialized");

	UEFGFxWidgetInteraction_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
// (Defined, Public)

void UEFGFxWidgetInteractionKeyIcon::InteractionKeySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected");

	UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
// (Native, Public)

void UEFGFxWidgetInteractionKeyIcon::FinishSwitchInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode");

	UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
// (Defined, Event, Public)

void UEFGFxWidgetLifeToolDurability::HideLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability");

	UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
// (Defined, Event, Public)

void UEFGFxWidgetLifeToolDurability::DecreaseLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability");

	UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
// (Defined, Event, Public)

void UEFGFxWidgetLifeToolDurability::ShowLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability");

	UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
// (Native, Public)

void UEFGFxWidgetLifeVessel::LifeVesselCompleteAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd");

	UEFGFxWidgetLifeVessel_LifeVesselCompleteAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick
// (Native, Public)

void UEFGFxWidgetMenu::QuickSlotMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick");

	UEFGFxWidgetMenu_QuickSlotMenuClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.GetMenu
// (Defined, Event, Public)

void UEFGFxWidgetMenu::GetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.GetMenu");

	UEFGFxWidgetMenu_GetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetEnableButton
// (Defined, Event, Public)

void UEFGFxWidgetMenu::SetEnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetEnableButton");

	UEFGFxWidgetMenu_SetEnableButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetToolTip
// (Defined, Event, Public)

void UEFGFxWidgetMenu::SetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetToolTip");

	UEFGFxWidgetMenu_SetToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetBindKey
// (Defined, Event, Public)

void UEFGFxWidgetMenu::SetBindKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetBindKey");

	UEFGFxWidgetMenu_SetBindKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetSelectButton
// (Defined, Event, Public)

void UEFGFxWidgetMenu::SetSelectButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetSelectButton");

	UEFGFxWidgetMenu_SetSelectButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SelectButton
// (Defined, Event, Public)

void UEFGFxWidgetMenu::SelectButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SelectButton");

	UEFGFxWidgetMenu_SelectButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
// (Native, Public)

void UEFGFxWidgetMinimap::RequestShowMinimapChannelList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList");

	UEFGFxWidgetMinimap_RequestShowMinimapChannelList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation
// (Defined, Public)

void UEFGFxWidgetMOD_Cube::ModCommonMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
// (Native, Public)

void UEFGFxWidgetMOD_Cube::FinishMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation");

	UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
// (Defined, Public)

void UEFGFxWidgetMOD_Cube::ModCommonEndCubeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect");

	UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
// (Native, Public)

void UEFGFxWidgetMOD_Cube::EndBuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect");

	UEFGFxWidgetMOD_Cube_EndBuffEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::PlayModCommonMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonRandomState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState");

	UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonCurrentCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonAccumulateCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::UpdateModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState");

	UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::RemoveModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState");

	UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::AddModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState");

	UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonStateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList");

	UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonWaveStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep");

	UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
// (Defined, Event, Public)

void UEFGFxWidgetMOD_Cube::SetModCommonHudType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType");

	UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
// (Native, Public)

void UEFGFxWidgetMOD_PlatinumArea::ModPlatinumCoopComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete");

	UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
// (Native, Public)

void UEFGFxWidgetMODEntrance::ModEntranceMapCanvasItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick");

	UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.setNoticeIcon
// (Defined, Event, Public)

void UEFGFxWidgetNotice::setNoticeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.setNoticeIcon");

	UEFGFxWidgetNotice_setNoticeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
// (Native, Public)

void UEFGFxWidgetNotice::NoticeFrameAlarmBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick");

	UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
// (Defined, Event, Public)

void UEFGFxWidgetPcCreateHUD::SetDefaultClassData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData");

	UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
// (Native, Public)

void UEFGFxWidgetPcCreateHUD::RequestStopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie");

	UEFGFxWidgetPcCreateHUD_RequestStopMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview
// (Native, Public)

void UEFGFxWidgetPcCreateHUD::RequestPlayMovieClassSelectPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview");

	UEFGFxWidgetPcCreateHUD_RequestPlayMovieClassSelectPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData
// (Native, Public)

void UEFGFxWidgetPcCreateHUD::RequestUpdateClassSelectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData");

	UEFGFxWidgetPcCreateHUD_RequestUpdateClassSelectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.previewImg
// (Defined, Event, Public)

void UEFGFxWidgetPcCustomizing::previewImg()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.previewImg");

	UEFGFxWidgetPcCustomizing_previewImg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setCostume
// (Defined, Event, Public)

void UEFGFxWidgetPcCustomizing::setCostume()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setCostume");

	UEFGFxWidgetPcCustomizing_setCostume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setClassID
// (Defined, Event, Public)

void UEFGFxWidgetPcCustomizing::setClassID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setClassID");

	UEFGFxWidgetPcCustomizing_setClassID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
// (Defined, Event, Public)

void UEFGFxWidgetPcCustomizing::setPreviewcostumeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData");

	UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
// (Defined, Event, Public)

void UEFGFxWidgetPcCustomizing::setPresetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPresetData");

	UEFGFxWidgetPcCustomizing_setPresetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
// (Native, Public)

void UEFGFxWidgetPcCustomizing::CustomizingSettingValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged");

	UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowAnim
// (Defined, Event, Public)

void UEFGFxWidgetPcSelect::ShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowAnim");

	UEFGFxWidgetPcSelect_ShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowNotice
// (Defined, Event, Public)

void UEFGFxWidgetPcSelect::ShowNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowNotice");

	UEFGFxWidgetPcSelect_ShowNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
// (Defined, Event, Public)

void UEFGFxWidgetPcSelect::SetCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect");

	UEFGFxWidgetPcSelect_SetCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
// (Native, Public)

void UEFGFxWidgetPcSelect::CharacterSelectMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving");

	UEFGFxWidgetPcSelect_CharacterSelectMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
// (Native, Public)

void UEFGFxWidgetPcSelect::WallpaperCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel");

	UEFGFxWidgetPcSelect_WallpaperCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
// (Native, Public)

void UEFGFxWidgetPcSelect::WallpaperSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected");

	UEFGFxWidgetPcSelect_WallpaperSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
// (Native, Public)

void UEFGFxWidgetPcSelect::WallpaperConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm");

	UEFGFxWidgetPcSelect_WallpaperConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
// (Native, Public)

void UEFGFxWidgetPcSelect::CharacterSelectDeleteCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel");

	UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
// (Native, Public)

void UEFGFxWidgetPcSelect::CharacterSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex");

	UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
// (Native, Public)

void UEFGFxWidgetPcSelect::RequestNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter");

	UEFGFxWidgetPcSelect_RequestNewCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete
// (Native, Public)

void UEFGFxWidgetRaidClear::RaidProcessResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete");

	UEFGFxWidgetRaidClear_RaidProcessResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut
// (Native, Public)

void UEFGFxWidgetRaidExitNotice::RaidProcessNoticeTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut");

	UEFGFxWidgetRaidExitNotice_RaidProcessNoticeTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete
// (Native, Public)

void UEFGFxWidgetRaidFail::RaidProcessResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete");

	UEFGFxWidgetRaidFail_RaidProcessResultComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut
// (Native, Public)

void UEFGFxWidgetRaidHUD::RaidProcessTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut");

	UEFGFxWidgetRaidHUD_RaidProcessTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTownShow
// (Native, Public)

void UEFUISlotData::SetTownShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTownShow");

	UEFUISlotData_SetTownShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetToolTip
// (Native, Public)

void UEFUISlotData::SetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetToolTip");

	UEFUISlotData_SetToolTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetRecommend
// (Native, Public)

void UEFUISlotData::SetRecommend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetRecommend");

	UEFUISlotData_SetRecommend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetFriendshipShow
// (Native, Public)

void UEFUISlotData::SetFriendshipShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetFriendshipShow");

	UEFUISlotData_SetFriendshipShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetAdvBookShow
// (Native, Public)

void UEFUISlotData::SetAdvBookShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetAdvBookShow");

	UEFUISlotData_SetAdvBookShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTemporary
// (Native, Public)

void UEFUISlotData::SetTemporary()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTemporary");

	UEFUISlotData_SetTemporary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTrash
// (Native, Public)

void UEFUISlotData::SetTrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTrash");

	UEFUISlotData_SetTrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetDisableType
// (Native, Public)

void UEFUISlotData::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisableType");

	UEFUISlotData_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTableID
// (Native, Public)

void UEFUISlotData::SetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTableID");

	UEFUISlotData_SetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTableID
// (Native, Public)

void UEFUISlotData::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTableID");

	UEFUISlotData_GetTableID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetUniqueData
// (Native, Public)

void UEFUISlotData::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetUniqueData");

	UEFUISlotData_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetUniqueData
// (Native, Public)

void UEFUISlotData::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetUniqueData");

	UEFUISlotData_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetLocked
// (Native, Public)

void UEFUISlotData::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLocked");

	UEFUISlotData_SetLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsLocked
// (Native, Public)

void UEFUISlotData::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.IsLocked");

	UEFUISlotData_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetItemGrade
// (Native, Public)

void UEFUISlotData::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetItemGrade");

	UEFUISlotData_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetItemGrade
// (Native, Public)

void UEFUISlotData::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetItemGrade");

	UEFUISlotData_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSoundTheme
// (Native, Public)

void UEFUISlotData::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSoundTheme");

	UEFUISlotData_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSoundTheme
// (Native, Public)

void UEFUISlotData::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSoundTheme");

	UEFUISlotData_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetDisabled
// (Native, Public)

void UEFUISlotData::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisabled");

	UEFUISlotData_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsDisabled
// (Native, Public)

void UEFUISlotData::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.IsDisabled");

	UEFUISlotData_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetLabelName
// (Native, Public)

void UEFUISlotData::SetLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLabelName");

	UEFUISlotData_SetLabelName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetLabelName
// (Native, Public)

void UEFUISlotData::GetLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetLabelName");

	UEFUISlotData_GetLabelName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetCooltime
// (Native, Public)

void UEFUISlotData::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetCooltime");

	UEFUISlotData_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTotalCoolTime
// (Native, Public)

void UEFUISlotData::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTotalCoolTime");

	UEFUISlotData_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetRemainCoolTime
// (Native, Public)

void UEFUISlotData::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetRemainCoolTime");

	UEFUISlotData_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconHeight
// (Native, Public)

void UEFUISlotData::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconHeight");

	UEFUISlotData_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconHeight
// (Native, Public)

void UEFUISlotData::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconHeight");

	UEFUISlotData_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconWidth
// (Native, Public)

void UEFUISlotData::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconWidth");

	UEFUISlotData_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconWidth
// (Native, Public)

void UEFUISlotData::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconWidth");

	UEFUISlotData_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconY
// (Native, Public)

void UEFUISlotData::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconY");

	UEFUISlotData_SetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconY
// (Native, Public)

void UEFUISlotData::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconY");

	UEFUISlotData_GetIconY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconX
// (Native, Public)

void UEFUISlotData::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconX");

	UEFUISlotData_SetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconX
// (Native, Public)

void UEFUISlotData::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconX");

	UEFUISlotData_GetIconX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconCount
// (Native, Public)

void UEFUISlotData::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconCount");

	UEFUISlotData_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconCount
// (Native, Public)

void UEFUISlotData::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconCount");

	UEFUISlotData_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconPath
// (Native, Public)

void UEFUISlotData::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconPath");

	UEFUISlotData_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconPath
// (Native, Public)

void UEFUISlotData::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconPath");

	UEFUISlotData_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetWindowType
// (Native, Public)

void UEFUISlotData::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetWindowType");

	UEFUISlotData_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetWindowType
// (Native, Public)

void UEFUISlotData::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetWindowType");

	UEFUISlotData_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSlotIndex
// (Native, Public)

void UEFUISlotData::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotIndex");

	UEFUISlotData_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotIndex
// (Native, Public)

void UEFUISlotData::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotIndex");

	UEFUISlotData_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetBindID
// (Native, Public)

void UEFUISlotData::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetBindID");

	UEFUISlotData_SetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetBindID
// (Native, Public)

void UEFUISlotData::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetBindID");

	UEFUISlotData_GetBindID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSlotType
// (Native, Public)

void UEFUISlotData::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotType");

	UEFUISlotData_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotType
// (Native, Public)

void UEFUISlotData::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotType");

	UEFUISlotData_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconData_New
// (Native, HasOptionalParms, Public)

void UEFUISlotData::SetIconData_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData_New");

	UEFUISlotData_SetIconData_New_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconData
// (Native, HasOptionalParms, Public)

void UEFUISlotData::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData");

	UEFUISlotData_SetIconData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData_New
// (Native, HasOptionalParms, Public)

void UEFUISlotData::SetImageData_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData_New");

	UEFUISlotData_SetImageData_New_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData
// (Native, HasOptionalParms, Public)

void UEFUISlotData::SetImageData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData");

	UEFUISlotData_SetImageData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.Tick
// (Defined, Event, Public)

void UEFGameViewportClient::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.Tick");

	UEFGameViewportClient_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.PostRender
// (Defined, Event, Public)

void UEFGameViewportClient::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostRender");

	UEFGameViewportClient_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.CreateScreenshot
// (Native, HasOptionalParms, Public, HasOutParms)

void UEFGameViewportClient::CreateScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CreateScreenshot");

	UEFGameViewportClient_CreateScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
// (Native, Public)

void UEFGameViewportClient::InitRelativeTimeFadeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo");

	UEFGameViewportClient_InitRelativeTimeFadeInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix
// (Native, HasOptionalParms, Public)

void UEFGameViewportClient::CacheViewProjectionMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix");

	UEFGameViewportClient_CacheViewProjectionMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.PostFadeInOutRender
// (Native, Public)

void UEFGameViewportClient::PostFadeInOutRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostFadeInOutRender");

	UEFGameViewportClient_PostFadeInOutRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
// (Defined, Simulated, Event, Public)

void UEFGameViewportClient::SetHardwareMouseCursorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility");

	UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
// (Native, Public)

void AEFNxForceFieldTornado::UpdateDynamicProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty");

	AEFNxForceFieldTornado_UpdateDynamicProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyHeightOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset");

	AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyEscapeVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity");

	AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftFalloffHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceTopRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyForceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyRotationalStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
// (Defined, Public)

void AEFNxForceFieldTornado::OnUpdatePropertyRadialStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFData_MaskInfo.GetProperLevel
// (Native, Public)

void UEFData_MaskInfo::GetProperLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFData_MaskInfo.GetProperLevel");

	UEFData_MaskInfo_GetProperLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.GetColumNum
// (Defined, Event, Public)

void UEFExcelShell::GetColumNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetColumNum");

	UEFExcelShell_GetColumNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.NewLine
// (Defined, Event, Public)

void UEFExcelShell::NewLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewLine");

	UEFExcelShell_NewLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ResetEdit
// (Defined, Event, Public)

void UEFExcelShell::ResetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ResetEdit");

	UEFExcelShell_ResetEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetPosition
// (Final, Native, Public)

void UEFExcelShell::SetLookPresetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetPosition");

	UEFExcelShell_SetLookPresetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetRange
// (Final, Native, Public)

void UEFExcelShell::SetLookPresetRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetRange");

	UEFExcelShell_SetLookPresetRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ReadStringRange
// (Final, Native, HasOptionalParms, Public, HasOutParms)

void UEFExcelShell::ReadStringRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ReadStringRange");

	UEFExcelShell_ReadStringRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ReadString
// (Final, Native, Public, HasOutParms)

void UEFExcelShell::ReadString()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ReadString");

	UEFExcelShell_ReadString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteString
// (Final, Native, Public)

void UEFExcelShell::WriteString()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteString");

	UEFExcelShell_WriteString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteName
// (Final, Native, Public)

void UEFExcelShell::WriteName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteName");

	UEFExcelShell_WriteName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteFloat
// (Final, Native, Public)

void UEFExcelShell::WriteFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteFloat");

	UEFExcelShell_WriteFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteInt
// (Final, Native, Public)

void UEFExcelShell::WriteInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteInt");

	UEFExcelShell_WriteInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteUINT
// (Final, Native, Public)

void UEFExcelShell::WriteUINT()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteUINT");

	UEFExcelShell_WriteUINT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetSheetName
// (Final, Native, Public)

void UEFExcelShell::SetSheetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetSheetName");

	UEFExcelShell_SetSheetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetFont
// (Final, Native, Public)

void UEFExcelShell::SetFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetFont");

	UEFExcelShell_SetFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetBorder
// (Final, Native, Public)

void UEFExcelShell::SetBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBorder");

	UEFExcelShell_SetBorder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetBackgroundColor
// (Final, Native, Public)

void UEFExcelShell::SetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBackgroundColor");

	UEFExcelShell_SetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.GetWorkSheetName
// (Final, Native, Public, HasOutParms)

void UEFExcelShell::GetWorkSheetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetWorkSheetName");

	UEFExcelShell_GetWorkSheetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SelectWorkSheet
// (Final, Native, Public)

void UEFExcelShell::SelectWorkSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheet");

	UEFExcelShell_SelectWorkSheet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SelectWorkSheetByName
// (Final, Native, Public)

void UEFExcelShell::SelectWorkSheetByName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheetByName");

	UEFExcelShell_SelectWorkSheetByName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SaveAs
// (Final, Native, Public)

void UEFExcelShell::SaveAs()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SaveAs");

	UEFExcelShell_SaveAs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.OpenExcelFile
// (Final, Native, Public)

void UEFExcelShell::OpenExcelFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.OpenExcelFile");

	UEFExcelShell_OpenExcelFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.NewSheet
// (Final, Native, Public)

void UEFExcelShell::NewSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewSheet");

	UEFExcelShell_NewSheet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.NewExcelFile
// (Final, Native, Public)

void UEFExcelShell::NewExcelFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewExcelFile");

	UEFExcelShell_NewExcelFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.AutoFitColomn
// (Final, Native, Public)

void UEFExcelShell::AutoFitColomn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColomn");

	UEFExcelShell_AutoFitColomn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.AutoFitColumn
// (Final, Native, Public)

void UEFExcelShell::AutoFitColumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColumn");

	UEFExcelShell_AutoFitColumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.Touch
// (Defined, Event, Public)

void AEFLocalTrigger::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.Touch");

	AEFLocalTrigger_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFLocalTrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.PostBeginPlay");

	AEFLocalTrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.IsCinematicControl
// (Native, Public)

void AEFLocalTrigger::IsCinematicControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.IsCinematicControl");

	AEFLocalTrigger_IsCinematicControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.IsLocalMode
// (Native, Public)

void AEFLocalTrigger::IsLocalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.IsLocalMode");

	AEFLocalTrigger_IsLocalMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.Touch
// (Defined, Event, Public)

void AEFLocalTriggerVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.Touch");

	AEFLocalTriggerVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AEFLocalTriggerVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.PostBeginPlay");

	AEFLocalTriggerVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.IsCinematicControl
// (Native, Public)

void AEFLocalTriggerVolume::IsCinematicControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.IsCinematicControl");

	AEFLocalTriggerVolume_IsCinematicControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.IsLocalMode
// (Native, Public)

void AEFLocalTriggerVolume::IsLocalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.IsLocalMode");

	AEFLocalTriggerVolume_IsLocalMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XmlExport");

	UEFDataContainer_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer.XlsExport
// (Native, Public)

void UEFDataContainer::XlsExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsExport");

	UEFDataContainer_XlsExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer.XlsImport
// (Native, Public)

void UEFDataContainer::XlsImport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsImport");

	UEFDataContainer_XlsImport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_CharacterCustomizing::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport");

	UEFDataContainer_CharacterCustomizing_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_ColorPalette.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_ColorPalette::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_ColorPalette.XmlExport");

	UEFDataContainer_ColorPalette_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_CustomizeBoneScale::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport");

	UEFDataContainer_CustomizeBoneScale_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_LookInfos.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_LookInfos::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_LookInfos.XmlExport");

	UEFDataContainer_LookInfos_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_NpcFunction.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_NpcFunction::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_NpcFunction.XmlExport");

	UEFDataContainer_NpcFunction_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_Quest.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_Quest::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_Quest.XmlExport");

	UEFDataContainer_Quest_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_TexturePalette.XmlExport
// (Native, Public, HasOutParms)

void UEFDataContainer_TexturePalette::XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_TexturePalette.XmlExport");

	UEFDataContainer_TexturePalette_XmlExport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLightBeam.SetActive
// (Native, Public)

void AEFLightBeam::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLightBeam.SetActive");

	AEFLightBeam_SetActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForceUpdateComponent
// (Native, Public)

void AEFItem::SetLocationForceUpdateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForceUpdateComponent");

	AEFItem_SetLocationForceUpdateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForce
// (Native, Public)

void AEFItem::SetLocationForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForce");

	AEFItem_SetLocationForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.ClearAttachedPSIIndex
// (Native, Public)

void AEFItem::ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.ClearAttachedPSIIndex");

	AEFItem_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.NotifyChangedBase
// (Native, Public)

void AEFItem::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.NotifyChangedBase");

	AEFItem_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.EncroachedBy
// (Defined, Event, Public)

void AEFItem::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.EncroachedBy");

	AEFItem_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.BaseChange
// (Defined, Singular, Event, Public)

void AEFItem::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.BaseChange");

	AEFItem_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.Destroyed
// (Defined, Simulated, Event, Public)

void AEFItem::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.Destroyed");

	AEFItem_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractiveFoliageActor.TakeDamage
// (Simulated, Native, Event, HasOptionalParms, Public)

void AEFInteractiveFoliageActor::TakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractiveFoliageActor.TakeDamage");

	AEFInteractiveFoliageActor_TakeDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
// (Native, Public)

void AEFMatineePathNode::BreakAllConnectionsFrom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom");

	AEFMatineePathNode_BreakAllConnectionsFrom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnections
// (Native, Public)

void AEFMatineePathNode::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnections");

	AEFMatineePathNode_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakConnectionTo
// (Native, Public)

void AEFMatineePathNode::BreakConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakConnectionTo");

	AEFMatineePathNode_BreakConnectionTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.IsConnectedTo
// (Native, Public)

void AEFMatineePathNode::IsConnectedTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.IsConnectedTo");

	AEFMatineePathNode_IsConnectedTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.AddConnectionTo
// (Native, Public)

void AEFMatineePathNode::AddConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.AddConnectionTo");

	AEFMatineePathNode_AddConnectionTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents
// (Native, Public)

void AEFMatineePathNode::UpdateConnectedLineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents");

	AEFMatineePathNode_UpdateConnectedLineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.UpdateLineComponents
// (Native, Public)

void AEFMatineePathNode::UpdateLineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateLineComponents");

	AEFMatineePathNode_UpdateLineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostRender
// (Defined, Event, Public)

void AEFGFxHUDWrapper::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostRender");

	AEFGFxHUDWrapper_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostBeginPlay
// (Defined, Simulated, Public)

void AEFGFxHUDWrapper::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostBeginPlay");

	AEFGFxHUDWrapper_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.Destroyed
// (Defined, Singular, Event, Public)

void AEFGFxHUDWrapper::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.Destroyed");

	AEFGFxHUDWrapper_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
// (Defined, HasOptionalParms, Public, HasOutParms)

void UEFSeqAct_SetPostProcessEffectProperties::GetPostProcessEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects");

	UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetAmbientOcclusionEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated");

	UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated");

	UEFSeqAct_SetBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
// (Defined, Public)

void UEFSeqAct_SetDOFEffectProperties::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties");

	UEFSeqAct_SetDOFEffectProperties_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetDOFEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated");

	UEFSeqAct_SetDOFEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
// (Defined, Public)

void UEFSeqAct_SetDOFAndBloomEffectProperties::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties");

	UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
// (Defined, Public)

void UEFSeqAct_SetDOFBloomMotionBlurEffect::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties");

	UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetMaterialEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated");

	UEFSeqAct_SetMaterialEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetMotionBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated");

	UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
// (Defined, Event, Public)

void UEFSeqAct_SetUberPostProcessEffect::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated");

	UEFSeqAct_SetUberPostProcessEffect_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
// (Defined, Event, Public)

void UEFSeqAct_TogglePostProcessEffect::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated");

	UEFSeqAct_TogglePostProcessEffect_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
