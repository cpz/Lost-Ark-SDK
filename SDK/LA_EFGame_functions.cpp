// Lost Ark (1.2.0.3) SDK

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
// (Final, Defined, Latent, PreOperator, Singular, Native)

void AEFCharacterParts::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.OnParticleSystemFinished");

	AEFCharacterParts_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFCharacterParts::STATIC_ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.ClearAttachedPSIIndex");

	AEFCharacterParts_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.NotifyChangedBase
// (Latent, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void AEFCharacterParts::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.NotifyChangedBase");

	AEFCharacterParts_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.BaseChange
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)

void AEFCharacterParts::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.BaseChange");

	AEFCharacterParts_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.EncroachingOn
// (Defined, Latent, PreOperator, Singular, Simulated)

void AEFCharacterParts::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachingOn");

	AEFCharacterParts_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.EncroachedBy
// (Final, Defined, Latent, PreOperator, Singular, Simulated)

void AEFCharacterParts::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachedBy");

	AEFCharacterParts_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCharacterParts.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFCharacterParts::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.Destroyed");

	AEFCharacterParts_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCheatManager.InternalDebugLookAt
// (Iterator, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Latent, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Latent, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Iterator, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Latent, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Iterator, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Latent, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Iterator, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Singular, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Iterator, Singular, Simulated, Native, HasOptionalParms, Const)

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
// (Iterator, PreOperator, Net, Native, HasOptionalParms, Const)

void UEFConsole::InputAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputAxis");

	UEFConsole_InputAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFConsole.InputKey
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator)

void UEFConsole::InputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputKey");

	UEFConsole_InputKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDecalFloorActor.GetBoundingCylinder
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Static, HasOptionalParms)

void AEFDecalFloorActor::STATIC_GetBoundingCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalFloorActor.GetBoundingCylinder");

	AEFDecalFloorActor_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDecalManager.SpawnDecalMinimal
// (Defined, Net, NetReliable, Exec, HasOptionalParms)

void AEFDecalManager::SpawnDecalMinimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalManager.SpawnDecalMinimal");

	AEFDecalManager_SpawnDecalMinimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.AllowCheats
// (Latent, Event, HasOptionalParms)

void AEFGameInfo::AllowCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.AllowCheats");

	AEFGameInfo_AllowCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.PostSeamlessTravel
// (Final, Iterator, PreOperator, Net, Simulated, HasOptionalParms)

void AEFGameInfo::PostSeamlessTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostSeamlessTravel");

	AEFGameInfo_PostSeamlessTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.GameEnding
// (Defined, Iterator, PreOperator, Singular, Net, HasOptionalParms)

void AEFGameInfo::GameEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.GameEnding");

	AEFGameInfo_GameEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotifyMapLoaded
// (Final, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void AEFGameInfo::NotifyMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotifyMapLoaded");

	AEFGameInfo_NotifyMapLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.NotfiyLoadingStep
// (Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void AEFGameInfo::NotfiyLoadingStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotfiyLoadingStep");

	AEFGameInfo_NotfiyLoadingStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void AEFGameInfo::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Tick");

	AEFGameInfo_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.PostLogin
// (Final, PreOperator, Net, Simulated, HasOptionalParms)

void AEFGameInfo::PostLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostLogin");

	AEFGameInfo_PostLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.Login
// (Singular, Net, NetReliable, HasOptionalParms)

void AEFGameInfo::Login()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Login");

	AEFGameInfo_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.LoadLevel
// (Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native, HasOptionalParms, Const)

void AEFGameInfo::LoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.LoadLevel");

	AEFGameInfo_LoadLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.RestartPlayer
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void AEFGameInfo::STATIC_RestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.RestartPlayer");

	AEFGameInfo_RestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.InitGame
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, HasOptionalParms)

void AEFGameInfo::InitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.InitGame");

	AEFGameInfo_InitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameInfo.GenericPlayerInitialization
// (Final, Latent, Net, Simulated, Exec, Static, HasOptionalParms)

void AEFGameInfo::STATIC_GenericPlayerInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.GenericPlayerInitialization");

	AEFGameInfo_GenericPlayerInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.StopAfterImageEffect
// (Defined, Latent, Singular, Simulated, Exec, Native, Event, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, Net, NetReliable, Native, Event, Operator, HasOptionalParms, Const)

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
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Static, HasOptionalParms)

void AEFPawn::STATIC_GetAnimTrailParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetAnimTrailParticleSystem");

	AEFPawn_GetAnimTrailParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Event, HasOptionalParms)

void AEFPawn::ApplyFluidSurfaceContinuousForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce");

	AEFPawn_ApplyFluidSurfaceContinuousForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ApplyFluidSurfaceImpact
// (Iterator, PreOperator, Singular, Net, NetReliable, Event, HasOptionalParms)

void AEFPawn::ApplyFluidSurfaceImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceImpact");

	AEFPawn_ApplyFluidSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.NotifyChangedBase
// (Latent, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void AEFPawn::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.NotifyChangedBase");

	AEFPawn_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.BaseChange
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)

void AEFPawn::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.BaseChange");

	AEFPawn_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_FinishAnimControl
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, HasOptionalParms)

void AEFPawn::STATIC_MAT_FinishAnimControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_FinishAnimControl");

	AEFPawn_MAT_FinishAnimControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.MAT_BeginAnimControl
// (PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, HasOptionalParms)

void AEFPawn::STATIC_MAT_BeginAnimControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_BeginAnimControl");

	AEFPawn_MAT_BeginAnimControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationFinished
// (Final, Defined, Iterator, Net, NetReliable, HasOptionalParms)

void AEFPawn::InterpolationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationFinished");

	AEFPawn_InterpolationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.InterpolationStarted
// (Latent, Net, NetReliable, HasOptionalParms)

void AEFPawn::InterpolationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationStarted");

	AEFPawn_InterpolationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.RigidBodyCollision
// (Defined, Iterator, NetReliable, Simulated, HasOptionalParms)

void AEFPawn::RigidBodyCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.RigidBodyCollision");

	AEFPawn_RigidBodyCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.DoKismetAttachment
// (Final, Defined, Iterator, Latent, PreOperator, Net, Native, Event, Operator, HasOptionalParms)

void AEFPawn::DoKismetAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.DoKismetAttachment");

	AEFPawn_DoKismetAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttachmentCameraActor
// (Defined, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Const)

void AEFPawn::STATIC_AttachmentCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttachmentCameraActor");

	AEFPawn_AttachmentCameraActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetGravityZ
// (PreOperator, Native, Static, HasOptionalParms)

void AEFPawn::STATIC_GetGravityZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetGravityZ");

	AEFPawn_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OnForceFieldDestroy
// (Final, Defined, Iterator, PreOperator, Simulated, HasOptionalParms)

void AEFPawn::OnForceFieldDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnForceFieldDestroy");

	AEFPawn_OnForceFieldDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.CreateForceField
// (Iterator, PreOperator, Net, HasOptionalParms)

void AEFPawn::CreateForceField()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.CreateForceField");

	AEFPawn_CreateForceField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ExplodeActor
// (Final, Defined, Iterator, Latent, Singular, Simulated, Native, Event, Operator, Static, Const)

void AEFPawn::STATIC_ExplodeActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ExplodeActor");

	AEFPawn_ExplodeActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FinishDyingDelay
// (Final, Defined, Iterator, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void AEFPawn::STATIC_FinishDyingDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FinishDyingDelay");

	AEFPawn_FinishDyingDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDefaultStateColor
// (Final, Defined, Iterator, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void AEFPawn::SetDefaultStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDefaultStateColor");

	AEFPawn_SetDefaultStateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetStateColor
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void AEFPawn::SetStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetStateColor");

	AEFPawn_SetStateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackFreezeAnim
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Const)

void AEFPawn::STATIC_AttackFreezeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackFreezeAnim");

	AEFPawn_AttackFreezeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.AttackContinueAnim
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Const)

void AEFPawn::STATIC_AttackContinueAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackContinueAnim");

	AEFPawn_AttackContinueAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineWidth
// (Final, Defined, PreOperator, Singular, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetPPOutlineWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineWidth");

	AEFPawn_SetPPOutlineWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutlineColor
// (Defined, PreOperator, Singular, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetPPOutlineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineColor");

	AEFPawn_SetPPOutlineColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetPPOutline
// (Final, PreOperator, Singular, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetPPOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutline");

	AEFPawn_SetPPOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetCloakMode
// (Final, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void AEFPawn::SetCloakMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetCloakMode");

	AEFPawn_SetCloakMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutlineColor
// (Final, Defined, PreOperator, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetOccludedOutlineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutlineColor");

	AEFPawn_SetOccludedOutlineColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetOccludedOutline
// (Defined, PreOperator, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetOccludedOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutline");

	AEFPawn_SetOccludedOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OutsideWorldBounds
// (Defined, Latent, PreOperator, Singular, Simulated, HasOptionalParms)

void AEFPawn::OutsideWorldBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OutsideWorldBounds");

	AEFPawn_OutsideWorldBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.FellOutOfWorld
// (Iterator, Latent, Singular, Net, HasOptionalParms)

void AEFPawn::FellOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FellOutOfWorld");

	AEFPawn_FellOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Landed
// (Final, PreOperator, Singular, Simulated)

void AEFPawn::Landed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Landed");

	AEFPawn_Landed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Falling
// (PreOperator, Singular, Simulated)

void AEFPawn::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Falling");

	AEFPawn_Falling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.SetDesiredRotation
// (Defined, Singular, NetReliable, Native, Event, Operator, Static, HasOptionalParms)

void AEFPawn::STATIC_SetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDesiredRotation");

	AEFPawn_SetDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.OnParticleSystemFinished
// (Final, Defined, Latent, PreOperator, Singular, Native)

void AEFPawn::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnParticleSystemFinished");

	AEFPawn_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.PostInitAll
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void AEFPawn::PostInitAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.PostInitAll");

	AEFPawn_PostInitAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.ClearAttachedPSIIndex
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFPawn::STATIC_ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ClearAttachedPSIIndex");

	AEFPawn_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Destroyed");

	AEFPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetDefaultCameraMode
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Static, HasOptionalParms)

void AEFPawn::STATIC_GetDefaultCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetDefaultCameraMode");

	AEFPawn_GetDefaultCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.GetObjectCameraStyle
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void AEFPawn::GetObjectCameraStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetObjectCameraStyle");

	AEFPawn_GetObjectCameraStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.EncroachingOn
// (Defined, Latent, PreOperator, Singular, Simulated)

void AEFPawn::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachingOn");

	AEFPawn_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPawn.EncroachedBy
// (Final, Defined, Latent, PreOperator, Singular, Simulated)

void AEFPawn::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachedBy");

	AEFPawn_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Latent, PreOperator, Singular, Simulated)

void AEFTransit::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTransit.EncroachingOn");

	AEFTransit_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.ConsoleCommand
// (Iterator, Net, Event, Operator, HasOptionalParms)

void AEFPlayerController::ConsoleCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ConsoleCommand");

	AEFPlayerController_ConsoleCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.ProcessCinematic
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void AEFPlayerController::STATIC_ProcessCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ProcessCinematic");

	AEFPlayerController_ProcessCinematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerInitPosition
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void AEFPlayerController::GetPlayerInitPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerInitPosition");

	AEFPlayerController_GetPlayerInitPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerViewPointQuat
// (Final, Defined, Singular, NetReliable, HasOptionalParms)

void AEFPlayerController::GetPlayerViewPointQuat()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPointQuat");

	AEFPlayerController_GetPlayerViewPointQuat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.GetPlayerViewPoint
// (Defined, Singular, NetReliable, HasOptionalParms)

void AEFPlayerController::GetPlayerViewPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPoint");

	AEFPlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void AEFPlayerController::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DisplayDebug");

	AEFPlayerController_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.DrawHUD
// (Final, PreOperator, Singular, NetReliable, Native, Event, Operator, HasOptionalParms)

void AEFPlayerController::DrawHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DrawHUD");

	AEFPlayerController_DrawHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.SpawnDefaultHUD
// (Defined, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms)

void AEFPlayerController::STATIC_SpawnDefaultHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.SpawnDefaultHUD");

	AEFPlayerController_SpawnDefaultHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.IsStopMovieLoading
// (Final, Defined, Latent, PreOperator, Simulated, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Net, Simulated, HasOptionalParms)

void AEFPlayerController::PlayerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PlayerTick");

	AEFPlayerController_PlayerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.UpdateRotation
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void AEFPlayerController::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.UpdateRotation");

	AEFPlayerController_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.StopMovieLoading
// (Iterator, Latent, Singular, Simulated, Exec, Native, Event, Operator, HasOptionalParms, Const)

void AEFPlayerController::StopMovieLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.StopMovieLoading");

	AEFPlayerController_StopMovieLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFPlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.Destroyed");

	AEFPlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PostBeginPlay");

	AEFPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerController.InitInputSystem
// (Defined, Net, NetReliable, HasOptionalParms)

void AEFPlayerController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.InitInputSystem");

	AEFPlayerController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.DefaultPositionControlPanel
// (Final, Singular, NetReliable, Exec, Native, Operator, Static, Const)

void UEFPlayerInput::STATIC_DefaultPositionControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.DefaultPositionControlPanel");

	UEFPlayerInput_DefaultPositionControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.FocusControlPanel
// (Final, Iterator, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFPlayerInput::STATIC_FocusControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.FocusControlPanel");

	UEFPlayerInput_FocusControlPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.ToggleControlPanel
// (Final, Defined, Iterator, Latent, Net, Simulated, Static, HasOptionalParms, Const)

void UEFPlayerInput::STATIC_ToggleControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.ToggleControlPanel");

	UEFPlayerInput_ToggleControlPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.OnMouseScrollDown
// (Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Singular, NetReliable)

void UEFPlayerInput::PlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.PlayerInput");

	UEFPlayerInput_PlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerInput.InputAxis
// (Iterator, PreOperator, Net, Native, HasOptionalParms, Const)

void UEFPlayerInput::InputAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.InputAxis");

	UEFPlayerInput_InputAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.ClearAttachedPSIIndex
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFProjectile::STATIC_ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ClearAttachedPSIIndex");

	AEFProjectile_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFProjectile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.Destroyed");

	AEFProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.BaseChange
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)

void AEFProjectile::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.BaseChange");

	AEFProjectile_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.NotifyBaseChange
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void AEFProjectile::NotifyBaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.NotifyBaseChange");

	AEFProjectile_NotifyBaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFProjectile.ProcessTouch
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void AEFProjectile::STATIC_ProcessTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ProcessTouch");

	AEFProjectile_ProcessTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFSkeletalMeshActor::STATIC_ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex");

	AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
// (Latent, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void AEFSkeletalMeshActor::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.NotifyChangedBase");

	AEFSkeletalMeshActor_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.BaseChange
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)

void AEFSkeletalMeshActor::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.BaseChange");

	AEFSkeletalMeshActor_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSkeletalMeshActor.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFSkeletalMeshActor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.Destroyed");

	AEFSkeletalMeshActor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.UnTouch
// (Final, Defined, PreOperator, Singular, Simulated)

void AEFVolume::UnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.UnTouch");

	AEFVolume_UnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFVolume.Touch
// (Defined, PreOperator, Singular, Simulated)

void AEFVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.Touch");

	AEFVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameEngine.TranslateGFxUIMessage
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Const)

void UEFGameEngine::TranslateGFxUIMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameEngine.TranslateGFxUIMessage");

	UEFGameEngine_TranslateGFxUIMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameEngine.ShowLineChecks
// (Final, NetReliable, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFGameEngine::ShowLineChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameEngine.ShowLineChecks");

	UEFGameEngine_ShowLineChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.SaveCameraValue
// (Final, Iterator, NetReliable, Exec, HasOptionalParms)

void UEFMapInfo::SaveCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.SaveCameraValue");

	UEFMapInfo_SaveCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMapInfo.LoadCameraValue
// (PreOperator, Singular, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFMapInfo::LoadCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.LoadCameraValue");

	UEFMapInfo_LoadCameraValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.GetCurrentFOV
// (PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFCameraBase::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetCurrentFOV");

	UEFCameraBase_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.GetDefaultFOV
// (Final, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFCameraBase::GetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetDefaultFOV");

	UEFCameraBase_GetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetDefaultFOV
// (Defined, Iterator, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFCameraBase::SetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetDefaultFOV");

	UEFCameraBase_SetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void UEFCameraBase::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.DisplayDebug");

	UEFCameraBase_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.UpdateRotation
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFCameraBase::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateRotation");

	UEFCameraBase_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetCurrentCameraCut
// (Final, Iterator, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFCameraBase::SetCurrentCameraCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetCurrentCameraCut");

	UEFCameraBase_SetCurrentCameraCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetContentsSettingTable
// (Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFCameraBase::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetContentsSettingTable");

	UEFCameraBase_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.SetSettingTable
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFCameraBase::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetSettingTable");

	UEFCameraBase_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
// (Final, Native, HasOptionalParms, Const)

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
// (Defined, Latent, Net, NetReliable, Simulated, Event, Static, Const)

void UEFCameraBase::STATIC_ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD");

	UEFCameraBase_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ChangeZoomStep
// (Final, Iterator, Simulated, Operator, Static, Const)

void UEFCameraBase::STATIC_ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ChangeZoomStep");

	UEFCameraBase_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.CheckZoom
// (Final, Singular, NetReliable, Simulated, Operator, Static, Const)

void UEFCameraBase::STATIC_CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.CheckZoom");

	UEFCameraBase_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFCameraBase::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomOut");

	UEFCameraBase_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFCameraBase::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomIn");

	UEFCameraBase_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.BecomeViewTarget
// (Iterator, Latent, PreOperator, HasOptionalParms)

void UEFCameraBase::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.BecomeViewTarget");

	UEFCameraBase_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFCameraBase::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateCamera");

	UEFCameraBase_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UEFCameraBase::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ResetInterpolation");

	UEFCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFCameraBase::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeInActive");

	UEFCameraBase_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFCameraBase::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeActive");

	UEFCameraBase_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraBase.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UEFCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.Init");

	UEFCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFBackViewCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFBackViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFBackViewCamera.UpdateCamera");

	UEFBackViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFCustomizingCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.UpdateCamera");

	UEFCustomizingCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFCustomizingCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomOut");

	UEFCustomizingCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFCustomizingCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomIn");

	UEFCustomizingCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCustomizingCamera.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UEFCustomizingCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.Init");

	UEFCustomizingCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFEditorViewCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeInActive");

	UEFEditorViewCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFEditorViewCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeActive");

	UEFEditorViewCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFEditorViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomOut");

	UEFEditorViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFEditorViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomIn");

	UEFEditorViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEditorViewCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFEditorViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.UpdateCamera");

	UEFEditorViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFFreeCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeInActive");

	UEFFreeCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFFreeCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeActive");

	UEFFreeCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.HideOwnerPlayer
// (Iterator, Latent, Simulated, Exec, HasOptionalParms, Const)

void UEFFreeCamera::HideOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.HideOwnerPlayer");

	UEFFreeCamera_HideOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ShowOwnerPlayer
// (Iterator, NetReliable, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFFreeCamera::ShowOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ShowOwnerPlayer");

	UEFFreeCamera_ShowOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFFreeCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomOut");

	UEFFreeCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFFreeCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomIn");

	UEFFreeCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFFreeCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFFreeCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.UpdateCamera");

	UEFFreeCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractionCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFInteractionCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.UpdateCamera");

	UEFInteractionCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractionCamera.GetCurrentFOV
// (PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFInteractionCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.GetCurrentFOV");

	UEFInteractionCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetOverrideIsometricZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep");

	UEFIsometricCamera_SetOverrideIsometricZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
// (Defined, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetFixedCameraInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed");

	UEFIsometricCamera_SetFixedCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.IsFixedCameraMode
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Singular, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedLookAtPos");

	UEFIsometricCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep
// (Iterator, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetCurIsometricZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep");

	UEFIsometricCamera_SetCurIsometricZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFIsometricCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.UpdateCamera");

	UEFIsometricCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFIsometricCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.OnBecomeActive");

	UEFIsometricCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetContentsSettingTable
// (Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetContentsSettingTable");

	UEFIsometricCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.SetSettingTable
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFIsometricCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetSettingTable");

	UEFIsometricCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.RefineFOV
// (Iterator, Singular, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Native, HasOptionalParms, Const)

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
// (Defined, Latent, Net, NetReliable, Simulated, Event, Static, Const)

void UEFIsometricCamera::STATIC_ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD");

	UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ChangeZoomStep
// (Final, Iterator, Simulated, Operator, Static, Const)

void UEFIsometricCamera::STATIC_ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ChangeZoomStep");

	UEFIsometricCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.CheckZoom
// (Final, Singular, NetReliable, Simulated, Operator, Static, Const)

void UEFIsometricCamera::STATIC_CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.CheckZoom");

	UEFIsometricCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFIsometricCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomOut");

	UEFIsometricCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFIsometricCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomIn");

	UEFIsometricCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFIsometricCamera.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UEFIsometricCamera::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ResetInterpolation");

	UEFIsometricCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateRotation
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFMacroCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateRotation");

	UEFMacroCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFMacroCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomOut");

	UEFMacroCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFMacroCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomIn");

	UEFMacroCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFMacroCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateCamera");

	UEFMacroCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFPanningCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeInActive");

	UEFPanningCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFPanningCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeActive");

	UEFPanningCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.EndPanningCamera
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Operator, Static, Const)

void UEFPanningCamera::STATIC_EndPanningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.EndPanningCamera");

	UEFPanningCamera_EndPanningCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.StartPanningCamera
// (Defined, Iterator, Singular, Net, NetReliable, Native, Event, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFPanningCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomOut");

	UEFPanningCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFPanningCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomIn");

	UEFPanningCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPanningCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFPanningCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.UpdateCamera");

	UEFPanningCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateRotation
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFThirdPersonCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateRotation");

	UEFThirdPersonCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFThirdPersonCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomOut");

	UEFThirdPersonCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFThirdPersonCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomIn");

	UEFThirdPersonCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFThirdPersonCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateCamera");

	UEFThirdPersonCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFThirdPersonCamera.GetCurrentFOV
// (PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFThirdPersonCamera::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.GetCurrentFOV");

	UEFThirdPersonCamera_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFTopViewCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.UpdateCamera");

	UEFTopViewCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFTopViewCamera::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeInActive");

	UEFTopViewCamera_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFTopViewCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeActive");

	UEFTopViewCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
// (Final, Defined, PreOperator, Native, Operator, HasOptionalParms, Const)

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
// (Defined, PreOperator, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTopViewCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetContentsSettingTable");

	UEFTopViewCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.SetSettingTable
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTopViewCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetSettingTable");

	UEFTopViewCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
// (Final, Native, HasOptionalParms, Const)

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
// (Defined, Latent, Net, NetReliable, Simulated, Event, Static, Const)

void UEFTopViewCamera::STATIC_ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD");

	UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ChangeZoomStep
// (Final, Iterator, Simulated, Operator, Static, Const)

void UEFTopViewCamera::STATIC_ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ChangeZoomStep");

	UEFTopViewCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.CheckZoom
// (Final, Singular, NetReliable, Simulated, Operator, Static, Const)

void UEFTopViewCamera::STATIC_CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.CheckZoom");

	UEFTopViewCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFTopViewCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomOut");

	UEFTopViewCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFTopViewCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomIn");

	UEFTopViewCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTopViewCamera.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UEFTopViewCamera::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ResetInterpolation");

	UEFTopViewCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
// (Defined, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTPSCamera::SetFixedCameraInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed");

	UEFTPSCamera_SetFixedCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.IsFixedCameraMode
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Singular, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTPSCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedLookAtPos");

	UEFTPSCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFTPSCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.UpdateCamera");

	UEFTPSCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFTPSCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.OnBecomeActive");

	UEFTPSCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetContentsSettingTable
// (Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTPSCamera::SetContentsSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetContentsSettingTable");

	UEFTPSCamera_SetContentsSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.SetSettingTable
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFTPSCamera::SetSettingTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetSettingTable");

	UEFTPSCamera_SetSettingTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
// (Final, Native, HasOptionalParms, Const)

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
// (Defined, Latent, Net, NetReliable, Simulated, Event, Static, Const)

void UEFTPSCamera::STATIC_ActivateSkeletalMeshForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD");

	UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ChangeZoomStep
// (Final, Iterator, Simulated, Operator, Static, Const)

void UEFTPSCamera::STATIC_ChangeZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ChangeZoomStep");

	UEFTPSCamera_ChangeZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.CheckZoom
// (Final, Singular, NetReliable, Simulated, Operator, Static, Const)

void UEFTPSCamera::STATIC_CheckZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.CheckZoom");

	UEFTPSCamera_CheckZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFTPSCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomOut");

	UEFTPSCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFTPSCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomIn");

	UEFTPSCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFTPSCamera.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UEFTPSCamera::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ResetInterpolation");

	UEFTPSCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetFixedLookAtPos
// (Final, Defined, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFWatchCamera::SetFixedLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetFixedLookAtPos");

	UEFWatchCamera_SetFixedLookAtPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.SetWatchCameraType
// (Defined, Iterator, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFWatchCamera::SetWatchCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetWatchCameraType");

	UEFWatchCamera_SetWatchCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UEFWatchCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.UpdateCamera");

	UEFWatchCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFWatchCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.OnBecomeActive");

	UEFWatchCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFWatchCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomOut");

	UEFWatchCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFWatchCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFWatchCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomIn");

	UEFWatchCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Event, Static, Const)

void UEFCameraModifier_CameraShake::STATIC_AddCameraShakeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame");

	UEFCameraModifier_CameraShake_AddCameraShakeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

void UEFCameraModifier_CameraShake::RemoveGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake");

	UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
// (Defined, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFCameraModifier_CameraShake::OnRemoveGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake");

	UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
// (Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFCameraModifier_CameraShake::OnAddGameCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake");

	UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Event, Static, HasOptionalParms)

void UEFCameraModifier_CameraShake::STATIC_ModifyCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.ModifyCamera");

	UEFCameraModifier_CameraShake_ModifyCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Event, Static, Const)

void UEFCameraModifier_CameraShake::STATIC_AddEFCameraViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake");

	UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
// (Defined, Singular, Simulated, Event, Operator, Static, HasOptionalParms)

void UEFCameraModifier_CameraShake::STATIC_RemoveAllCameraShakes()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes");

	UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
// (Iterator, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void UEFCameraShakePlayGroup::STATIC_UpdateViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.UpdateViewShake");

	UEFCameraShakePlayGroup_UpdateViewShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms, Const)

void UEFCameraShakePlayGroup::PreUpdateViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake");

	UEFCameraShakePlayGroup_PreUpdateViewShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
// (NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Iterator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Latent, PreOperator, Exec, Event, Static, Const)

void UEFCameraShakePlayGroup::STATIC_AddViewShakeInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance");

	UEFCameraShakePlayGroup_AddViewShakeInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraShakePlayGroup.AddViewShake
// (Final, Latent, PreOperator, Exec, Event, Static, Const)

void UEFCameraShakePlayGroup::STATIC_AddViewShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShake");

	UEFCameraShakePlayGroup_AddViewShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFCameraViewShake.GetAmplitudeSize
// (Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFCameraViewShake::GetAmplitudeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraViewShake.GetAmplitudeSize");

	UEFCameraViewShake_GetAmplitudeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.GetCameraView
// (Defined, PreOperator, NetReliable, Simulated, Exec, Static, HasOptionalParms)

void AEFInputRotCameraActor::STATIC_GetCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.GetCameraView");

	AEFInputRotCameraActor_GetCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.EndViewTarget
// (Latent, Singular, Net, HasOptionalParms)

void AEFInputRotCameraActor::EndViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.EndViewTarget");

	AEFInputRotCameraActor_EndViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.BecomeViewTarget
// (Iterator, Latent, PreOperator, HasOptionalParms)

void AEFInputRotCameraActor::BecomeViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.BecomeViewTarget");

	AEFInputRotCameraActor_BecomeViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Event, Static, Const)

void AEFInputRotCameraActor::STATIC_ActivateInputRotMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.ActivateInputRotMode");

	AEFInputRotCameraActor_ActivateInputRotMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
// (Defined, Latent, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)

void AEFMacroCameraSplineActor::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakAllConnections");

	AEFMacroCameraSplineActor_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)

void AEFMacroCameraSplineActor::BreakConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo");

	AEFMacroCameraSplineActor_BreakConnectionTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
// (Final, Defined, NetReliable, Event, Static, HasOptionalParms)

void AEFMacroCameraSplineActor::STATIC_IsConnectedTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.IsConnectedTo");

	AEFMacroCameraSplineActor_IsConnectedTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
// (Final, Iterator, Simulated, Exec, Native, HasOptionalParms)

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
// (Final, Iterator, Native, Const)

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
// (Final, Latent, Singular, Native, Const)

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
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Native, HasOptionalParms, Const)

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
// (Final, Defined, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void AEFPlayerCamera::STATIC_UpdateTranslucentActorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend");

	AEFPlayerCamera_UpdateTranslucentActorBlend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend
// (Defined, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void AEFPlayerCamera::STATIC_UpdateOccludedActorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend");

	AEFPlayerCamera_UpdateOccludedActorBlend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void AEFPlayerCamera::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DisplayDebug");

	AEFPlayerCamera_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.FOV
// (Defined, Iterator, Singular, Net, Exec, HasOptionalParms)

void AEFPlayerCamera::FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FOV");

	AEFPlayerCamera_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.AdjustViewportFOV
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Native, HasOptionalParms)

void AEFPlayerCamera::AdjustViewportFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.AdjustViewportFOV");

	AEFPlayerCamera_AdjustViewportFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SaveCameraValue
// (Final, Iterator, NetReliable, Exec, HasOptionalParms)

void AEFPlayerCamera::SaveCameraValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SaveCameraValue");

	AEFPlayerCamera_SaveCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SetCameraType
// (PreOperator, NetReliable, Exec, HasOptionalParms)

void AEFPlayerCamera::SetCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetCameraType");

	AEFPlayerCamera_SetCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateRotation
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void AEFPlayerCamera::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateRotation");

	AEFPlayerCamera_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomOut
// (Final, Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void AEFPlayerCamera::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomOut");

	AEFPlayerCamera_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ZoomIn
// (Defined, Iterator, Net, NetReliable, Exec, HasOptionalParms)

void AEFPlayerCamera::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomIn");

	AEFPlayerCamera_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.UpdateViewTarget
// (Defined, PreOperator, Singular, Native, Const)

void AEFPlayerCamera::UpdateViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateViewTarget");

	AEFPlayerCamera_UpdateViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.DoUpdateCamera
// (Iterator, NetReliable, Native, Event, Operator, HasOptionalParms)

void AEFPlayerCamera::DoUpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DoUpdateCamera");

	AEFPlayerCamera_DoUpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
// (Defined, Iterator, PreOperator, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)

void AEFPlayerCamera::STATIC_ChangeCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraMode");

	AEFPlayerCamera_ChangeCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
// (Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)

void AEFPlayerCamera::STATIC_ChangeCameraContentsSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting");

	AEFPlayerCamera_ChangeCameraContentsSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)

void AEFPlayerCamera::STATIC_ChangeCameraZoomStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraZoomStep");

	AEFPlayerCamera_ChangeCameraZoomStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ChangeCameraSetting
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)

void AEFPlayerCamera::STATIC_ChangeCameraSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraSetting");

	AEFPlayerCamera_ChangeCameraSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Event, Static, Const)

void AEFPlayerCamera::STATIC_ApplyVehicleFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle");

	AEFPlayerCamera_ApplyVehicleFOVAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
// (Final, Iterator, Simulated, Event, Operator, HasOptionalParms, Const)

void AEFPlayerCamera::SetVehicleFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetVehicleFOVAngle");

	AEFPlayerCamera_SetVehicleFOVAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Event, Static, Const)

void AEFPlayerCamera::STATIC_ApplyCamOverrideFogSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting");

	AEFPlayerCamera_ApplyCamOverrideFogSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
// (Final, Iterator, PreOperator, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, PreOperator, Net, Simulated, Exec, Static, Const)

void AEFPlayerCamera::STATIC_FindBestCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FindBestCameraType");

	AEFPlayerCamera_FindBestCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetCurrentCameraMode
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void AEFPlayerCamera::GetCurrentCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCurrentCameraMode");

	AEFPlayerCamera_GetCurrentCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.CreateCamera
// (Final, Defined, Latent, Singular, Net, Exec, Static, Const)

void AEFPlayerCamera::STATIC_CreateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CreateCamera");

	AEFPlayerCamera_CreateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFPlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.PostBeginPlay");

	AEFPlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetFOV
// (Defined, Iterator, Latent, Singular, Net, Exec, HasOptionalParms)

void AEFPlayerCamera::GetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetFOV");

	AEFPlayerCamera_GetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.GetCameraDistance
// (Iterator, Latent, Singular, Net, Exec, HasOptionalParms)

void AEFPlayerCamera::GetCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCameraDistance");

	AEFPlayerCamera_GetCameraDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFPlayerCamera::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.Destroyed");

	AEFPlayerCamera_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPlayerCamera.CalcVerticalFOV
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)

void AEFPlayerCamera::STATIC_CalcVerticalFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CalcVerticalFOV");

	AEFPlayerCamera_CalcVerticalFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitter.HideSelf
// (Defined, Latent, PreOperator, Exec, Native, Static, HasOptionalParms)

void AEFEmitter::STATIC_HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.HideSelf");

	AEFEmitter_HideSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitter.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFEmitter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.PostBeginPlay");

	AEFEmitter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFEnvironmentActionEmitter::STATIC_ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool");

	AEFEnvironmentActionEmitter_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
// (Final, Defined, Latent, PreOperator, Singular, Native)

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
// (Final, Latent, Simulated, Exec, HasOptionalParms, Const)

void AEFSpawnedEmitter::HideBecauseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.HideBecauseFinished");

	AEFSpawnedEmitter_HideBecauseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.ClearExtendPool
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFSpawnedEmitter::STATIC_ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.ClearExtendPool");

	AEFSpawnedEmitter_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
// (Final, Defined, Latent, PreOperator, Singular, Native)

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
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFEmitterPool::STATIC_ClearPoolPSInfoComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents");

	AEFEmitterPool_ClearPoolPSInfoComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEmitterPool.OnPSInfoFinished
// (Final, Iterator, Singular, Net, Exec, Native, Event)

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
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFEmitterPool::STATIC_ClearExtendPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearExtendPool");

	AEFEmitterPool_ClearExtendPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.IsActivateEffect
// (Defined, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Iterator, Latent, PreOperator, Net, Exec, Native, Operator, Static, Const)

void AEFPickingEmitter::STATIC_DeactivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.DeactivateEffect");

	AEFPickingEmitter_DeactivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.ActivateEffect
// (Final, Iterator, Net, NetReliable, Simulated, Event, Static, Const)

void AEFPickingEmitter::STATIC_ActivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.ActivateEffect");

	AEFPickingEmitter_ActivateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPickingEmitter.OnParticleSystemFinished
// (Final, Defined, Latent, PreOperator, Singular, Native)

void AEFPickingEmitter::OnParticleSystemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.OnParticleSystemFinished");

	AEFPickingEmitter_OnParticleSystemFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.Update
// (Latent, PreOperator, Singular, NetReliable, Native, Event, Operator)

void UEFSeqAct_NPCController::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Update");

	UEFSeqAct_NPCController_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_NPCController::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Activated");

	UEFSeqAct_NPCController_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
// (Iterator, Latent, PreOperator, Net, Native, Event, Static, Const)

void UEFSeqAct_NPCController::STATIC_BackupMainMovingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.BackupMainMovingState");

	UEFSeqAct_NPCController_BackupMainMovingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
// (Final, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_NPCController::SetEventMoveCompleteProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess");

	UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SetMoving
// (Final, Defined, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_NPCController::SetMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetMoving");

	UEFSeqAct_NPCController_SetMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.SettingReady
// (Simulated, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_NPCController::SettingReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SettingReady");

	UEFSeqAct_NPCController_SettingReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
// (Final, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_NPCController::setPlayWaitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation");

	UEFSeqAct_NPCController_setPlayWaitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.setPlayAnimation
// (PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_NPCController::setPlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayAnimation");

	UEFSeqAct_NPCController_setPlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.GetAnimationName
// (Final, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFSeqAct_NPCController::GetAnimationName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.GetAnimationName");

	UEFSeqAct_NPCController_GetAnimationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_NPCController.initial
// (Final, Defined, Latent, PreOperator, Singular, Native, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, Singular, Simulated)

void AEFEnvironmentInfoVolume::UnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UnTouch");

	AEFEnvironmentInfoVolume_UnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.Touch
// (Defined, PreOperator, Singular, Simulated)

void AEFEnvironmentInfoVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.Touch");

	AEFEnvironmentInfoVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
// (Simulated, Exec, Native, Static, HasOptionalParms, Const)

void AEFEnvironmentInfoVolume::STATIC_UpdateEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment");

	AEFEnvironmentInfoVolume_UpdateEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFEnvironmentInfoVolume.OnToggle
// (Iterator, Net, Exec, Operator, Static, HasOptionalParms)

void AEFEnvironmentInfoVolume::STATIC_OnToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.OnToggle");

	AEFEnvironmentInfoVolume_OnToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFPathBlockingVolume.StopsProjectile
// (Iterator, Singular, NetReliable, Const)

void AEFPathBlockingVolume::StopsProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFPathBlockingVolume.StopsProjectile");

	AEFPathBlockingVolume_StopsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.GetStringINI
// (Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFGFxMoviePlayer::GetStringINI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.GetStringINI");

	UEFGFxMoviePlayer_GetStringINI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.SetStringINI
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxMoviePlayer::SetStringINI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.SetStringINI");

	UEFGFxMoviePlayer_SetStringINI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.CreateArrayEx
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Operator, Static, Const)

void UEFGFxMoviePlayer::STATIC_CreateArrayEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateArrayEx");

	UEFGFxMoviePlayer_CreateArrayEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.CreateObjectEx
// (Singular, Net, NetReliable, Native, Operator, Static, Const)

void UEFGFxMoviePlayer::STATIC_CreateObjectEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateObjectEx");

	UEFGFxMoviePlayer_CreateObjectEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.PostAdvance
// (PreOperator, Static, Const)

void UEFGFxMoviePlayer::STATIC_PostAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.PostAdvance");

	UEFGFxMoviePlayer_PostAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMoviePlayer::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetUnloaded");

	UEFGFxMoviePlayer_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMoviePlayer.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMoviePlayer::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetInitialized");

	UEFGFxMoviePlayer_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxEditorMoviePlayer.Start
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxEditorMoviePlayer::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxEditorMoviePlayer.Start");

	UEFGFxEditorMoviePlayer_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.GetExternalTexture
// (Final, Defined, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFGFxMovieWidget::GetExternalTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GetExternalTexture");

	UEFGFxMovieWidget_GetExternalTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
// (Iterator, Latent, Singular, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxMovieWidget::HasGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding");

	UEFGFxMovieWidget_HasGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Native, Operator, Static, Const)

void UEFGFxMovieWidget::STATIC_DelGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding");

	UEFGFxMovieWidget_DelGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Event, Static, Const)

void UEFGFxMovieWidget::STATIC_AddGFxObjectBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding");

	UEFGFxMovieWidget_AddGFxObjectBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.SetVisible
// (Final, Defined, Iterator, Latent, Net, Static, Const)

void UEFGFxMovieWidget::STATIC_SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.SetVisible");

	UEFGFxMovieWidget_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
// (Final, Defined, PreOperator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFGFxMovieWidget::GFxFristFrameCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback");

	UEFGFxMovieWidget_GFxFristFrameCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.PostWidgetInit
// (Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMovieWidget::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.PostWidgetInit");

	UEFGFxMovieWidget_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidget.Start
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMovieWidget::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.Start");

	UEFGFxMovieWidget_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
// (Final, Defined, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMovieWidgetMain::ActivateFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ActivateFrame");

	UEFGFxMovieWidgetMain_ActivateFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
// (Defined, PreOperator, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_ARKSlotMouseDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_ARKSlotMouseRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_ARKSlotMouseLeftClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_ClearBindWidgetByName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName");

	UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
// (Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_ClearBindWidgetByWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget");

	UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
// (Final, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxMovieWidgetMain::STATIC_UnBindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.UnBindWidget");

	UEFGFxMovieWidgetMain_UnBindWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.BindWidget
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static, Const)

void UEFGFxMovieWidgetMain::STATIC_BindWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.BindWidget");

	UEFGFxMovieWidgetMain_BindWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMovieWidgetMain::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded");

	UEFGFxMovieWidgetMain_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxMovieWidgetMain::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized");

	UEFGFxMovieWidgetMain_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.InvalidateSize
// (Final, PreOperator, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (PreOperator, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Latent, Singular, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void UEFUIComponent::STATIC_ValidateNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.ValidateNow");

	UEFUIComponent_ValidateNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.HasFocus
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFUIComponent::HasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.HasFocus");

	UEFUIComponent_HasFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetY
// (Defined, PreOperator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetY");

	UEFUIComponent_GetY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetY
// (Defined, Latent, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIComponent::SetY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetY");

	UEFUIComponent_SetY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetX
// (Final, PreOperator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetX");

	UEFUIComponent_GetX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetX
// (Final, Latent, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIComponent::SetX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetX");

	UEFUIComponent_SetX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetHeight
// (Final, Iterator, PreOperator, NetReliable, HasOptionalParms)

void UEFUIComponent::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetHeight");

	UEFUIComponent_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetHeight
// (Defined, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIComponent::SetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetHeight");

	UEFUIComponent_SetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetWidth
// (Defined, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetWidth");

	UEFUIComponent_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetWidth
// (Final, Defined, Iterator, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIComponent::SetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetWidth");

	UEFUIComponent_SetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetEnabled
// (Defined, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetEnabled");

	UEFUIComponent_GetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetEnabled
// (Singular, NetReliable, Simulated, HasOptionalParms)

void UEFUIComponent::SetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetEnabled");

	UEFUIComponent_SetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetVisible
// (Final, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetVisible");

	UEFUIComponent_GetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetVisible
// (Final, Defined, Iterator, Latent, Net, Static, Const)

void UEFUIComponent::STATIC_SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetVisible");

	UEFUIComponent_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.GetName
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIComponent::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetName");

	UEFUIComponent_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.SetName
// (Final, Iterator, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void UEFUIComponent::STATIC_SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetName");

	UEFUIComponent_SetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIComponent.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFUIComponent::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.WidgetInitialized");

	UEFUIComponent_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetItemData
// (Iterator, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFUISlot::SetItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemData");

	UEFUISlot_SetItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetDisableType
// (PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisableType");

	UEFUISlot_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetUniqueData
// (Final, Defined, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetUniqueData");

	UEFUISlot_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetUniqueData
// (Final, Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetUniqueData");

	UEFUISlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetLocked
// (Final, Defined, Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetLocked");

	UEFUISlot_SetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsLocked
// (Latent, Simulated, Native, HasOptionalParms, Const)

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
// (Final, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemGrade");

	UEFUISlot_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetItemGrade
// (Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetItemGrade");

	UEFUISlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSoundTheme
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSoundTheme");

	UEFUISlot_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSoundTheme
// (Final, Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSoundTheme");

	UEFUISlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetDisabled
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, HasOptionalParms)

void UEFUISlot::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisabled");

	UEFUISlot_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.IsDisabled
// (Final, Defined, Iterator, Latent, NetReliable, Event, Static, HasOptionalParms)

void UEFUISlot::STATIC_IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.IsDisabled");

	UEFUISlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetCooltime
// (Final, Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetCooltime");

	UEFUISlot_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetTotalCoolTime
// (Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetTotalCoolTime");

	UEFUISlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetRemainCoolTime
// (Defined, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetRemainCoolTime");

	UEFUISlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconHeight
// (Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconHeight");

	UEFUISlot_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconHeight
// (Final, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconHeight");

	UEFUISlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconWidth
// (Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconWidth");

	UEFUISlot_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconWidth
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconWidth");

	UEFUISlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconY
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconY");

	UEFUISlot_SetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconY
// (Final, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconY");

	UEFUISlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconX
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconX");

	UEFUISlot_SetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconX
// (Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconX");

	UEFUISlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconCount
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconCount");

	UEFUISlot_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconCount
// (Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconCount");

	UEFUISlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconPath
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconPath");

	UEFUISlot_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetIconPath
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconPath");

	UEFUISlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetWindowType
// (Latent, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetWindowType");

	UEFUISlot_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetWindowType
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetWindowType");

	UEFUISlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSlotIndex
// (Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotIndex");

	UEFUISlot_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotIndex
// (Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotIndex");

	UEFUISlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetBindID
// (Defined, Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetBindID");

	UEFUISlot_SetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetBindID
// (Defined, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetBindID");

	UEFUISlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetSlotType
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotType");

	UEFUISlot_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotType
// (Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotType");

	UEFUISlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.SetIconData
// (Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlot::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconData");

	UEFUISlot_SetIconData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlot.GetSlotItemData
// (Final, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlot::GetSlotItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotItemData");

	UEFUISlot_GetSlotItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogInputSelectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInputSelectType");

	UEFUIChatTabControl_ChatLogInputSelectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogMainWidgetTabInsertGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup");

	UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogInTabGroupElementStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag");

	UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogLinkClick
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogLinkClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogLinkClick");

	UEFUIChatTabControl_ChatLogLinkClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
// (NetReliable, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogTabContextMenuShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow");

	UEFUIChatTabControl_ChatLogTabContextMenuShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFUIChatTabControl::STATIC_ChatLogMainWidgetSizeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated");

	UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.SetSelectedIndex
// (Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIList::SetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.SetSelectedIndex");

	UEFUIList_SetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.GetSelectedIndex
// (Final, Defined, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIList::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetSelectedIndex");

	UEFUIList_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIList.GetData
// (Final, Latent, NetReliable, HasOptionalParms)

void UEFUIList::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetData");

	UEFUIList_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItem.HasAttribute
// (Defined, Latent, Singular, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFUIListItem::HasAttribute()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItem.HasAttribute");

	UEFUIListItem_HasAttribute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTownShow
// (Final, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetTownShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTownShow");

	UEFUIListItemSlot_SetTownShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetFriendshipShow
// (Final, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetFriendshipShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetFriendshipShow");

	UEFUIListItemSlot_SetFriendshipShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetAdvBookShow
// (Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetAdvBookShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetAdvBookShow");

	UEFUIListItemSlot_SetAdvBookShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTemporary
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetTemporary()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTemporary");

	UEFUIListItemSlot_SetTemporary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTrash
// (Defined, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetTrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTrash");

	UEFUIListItemSlot_SetTrash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetDisableType
// (PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisableType");

	UEFUIListItemSlot_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetTableID
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTableID");

	UEFUIListItemSlot_SetTableID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTableID
// (Final, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTableID");

	UEFUIListItemSlot_GetTableID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetUniqueData
// (Final, Defined, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetUniqueData");

	UEFUIListItemSlot_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetUniqueData
// (Final, Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetUniqueData");

	UEFUIListItemSlot_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetLocked
// (Final, Defined, Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLocked");

	UEFUIListItemSlot_SetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsLocked
// (Latent, Simulated, Native, HasOptionalParms, Const)

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
// (Final, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemGrade");

	UEFUIListItemSlot_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemGrade
// (Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemGrade");

	UEFUIListItemSlot_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSoundTheme
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSoundTheme");

	UEFUIListItemSlot_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSoundTheme
// (Final, Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSoundTheme");

	UEFUIListItemSlot_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetDisabled
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, HasOptionalParms)

void UEFUIListItemSlot::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisabled");

	UEFUIListItemSlot_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.IsDisabled
// (Final, Defined, Iterator, Latent, NetReliable, Event, Static, HasOptionalParms)

void UEFUIListItemSlot::STATIC_IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.IsDisabled");

	UEFUIListItemSlot_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetItemName
// (Defined, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemName");

	UEFUIListItemSlot_SetItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetItemName
// (Final, Defined, Iterator, Singular, Native, Static, HasOptionalParms)

void UEFUIListItemSlot::STATIC_GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemName");

	UEFUIListItemSlot_GetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetLabel
// (Final, Defined, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLabel");

	UEFUIListItemSlot_SetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetLabel
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetLabel");

	UEFUIListItemSlot_GetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetCooltime
// (Final, Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetCooltime");

	UEFUIListItemSlot_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetTotalCoolTime
// (Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTotalCoolTime");

	UEFUIListItemSlot_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetRemainCoolTime
// (Defined, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetRemainCoolTime");

	UEFUIListItemSlot_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconHeight
// (Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconHeight");

	UEFUIListItemSlot_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconHeight
// (Final, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconHeight");

	UEFUIListItemSlot_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconWidth
// (Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconWidth");

	UEFUIListItemSlot_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconWidth
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconWidth");

	UEFUIListItemSlot_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconY
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconY");

	UEFUIListItemSlot_SetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconY
// (Final, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconY");

	UEFUIListItemSlot_GetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconX
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconX");

	UEFUIListItemSlot_SetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconX
// (Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconX");

	UEFUIListItemSlot_GetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconCount
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconCount");

	UEFUIListItemSlot_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconCount
// (Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconCount");

	UEFUIListItemSlot_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconPath
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconPath");

	UEFUIListItemSlot_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetIconPath
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconPath");

	UEFUIListItemSlot_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetWindowType
// (Latent, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetWindowType");

	UEFUIListItemSlot_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetWindowType
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetWindowType");

	UEFUIListItemSlot_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSlotIndex
// (Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotIndex");

	UEFUIListItemSlot_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotIndex
// (Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotIndex");

	UEFUIListItemSlot_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetBindID
// (Defined, Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetBindID");

	UEFUIListItemSlot_SetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetBindID
// (Defined, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetBindID");

	UEFUIListItemSlot_GetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetSlotType
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotType");

	UEFUIListItemSlot_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.GetSlotType
// (Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUIListItemSlot::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotType");

	UEFUIListItemSlot_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIListItemSlot.SetIconData
// (Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUIListItemSlot::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconData");

	UEFUIListItemSlot_SetIconData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick
// (Final, Iterator, PreOperator, Singular, Simulated, Event, Static, Const)

void UEFGFxWidgetAchievement::STATIC_AchievementRewardTakeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick");

	UEFGFxWidgetAchievement_AchievementRewardTakeBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Static, Const)

void UEFGFxWidgetAnchorModeCrew::STATIC_AnchorCrewSkillSlotClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Static, Const)

void UEFGFxWidgetAnchorModeCrew::STATIC_AnchorCrewPageIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.showNew
// (Net, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetBuddy::showNew()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.showNew");

	UEFGFxWidgetBuddy_showNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setSelectedTab
// (Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetBuddy::setSelectedTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setSelectedTab");

	UEFGFxWidgetBuddy_setSelectedTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.setAFK
// (Final, Defined, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetBuddy::setAFK()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setAFK");

	UEFGFxWidgetBuddy_setAFK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
// (Defined, Singular, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsGroupRendererMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver");

	UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsGroupRendererRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick");

	UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
// (Final, Singular, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsGroupRendererExtended()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended");

	UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
// (Final, Iterator, PreOperator, Exec, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsRendererRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick");

	UEFGFxWidgetBuddy_FriendsRendererRightClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsInvite
// (Iterator, PreOperator, Exec, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsInvite");

	UEFGFxWidgetBuddy_FriendsInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBlock
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBlock");

	UEFGFxWidgetBuddy_FriendsBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
// (Defined, Iterator, PreOperator, Exec, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsUnBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock");

	UEFGFxWidgetBuddy_FriendsUnBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsBuddyCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel");

	UEFGFxWidgetBuddy_FriendsBuddyCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
// (Singular, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsBuddyReject()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject");

	UEFGFxWidgetBuddy_FriendsBuddyReject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetBuddy::STATIC_FriendsBuddyAgree()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree");

	UEFGFxWidgetBuddy_FriendsBuddyAgree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
// (Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetCandidate::SetCandidateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus");

	UEFGFxWidgetCandidate_SetCandidateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
// (Final, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetChattingOption::SetChannelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.SetChannelColor");

	UEFGFxWidgetChattingOption_SetChannelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetChattingOption::STATIC_ChatLogFilterOptionAddTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
// (Final, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetChattingOption::STATIC_ChatLogFilterOptionOKWnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetChattingOption::STATIC_ChatLogFilterOptionResetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
// (Latent, PreOperator, Singular, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetChattingOption::STATIC_ChatLogFilterOptionAppliedChannelList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex
// (Defined, NetReliable, Simulated, Exec, Native, Operator, Static, Const)

void UEFGFxWidgetCinematicDungeonEntrance::STATIC_DungeonEntranceDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex");

	UEFGFxWidgetCinematicDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
// (Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColorPicker::SetTargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition");

	UEFGFxWidgetColorPicker_SetTargetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColorPicker::SetTargetCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetCode");

	UEFGFxWidgetColorPicker_SetTargetCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetColor
// (Final, Iterator, Latent, Net, Simulated, Static)

void UEFGFxWidgetColorPicker::STATIC_SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetColor");

	UEFGFxWidgetColorPicker_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
// (Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColorPicker::SetDefaultColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor");

	UEFGFxWidgetColorPicker_SetDefaultColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetColorPicker::STATIC_ChatMessageInputTextHasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus");

	UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Iterator, PreOperator, Simulated, Native, Operator, Static, Const)

void UEFGFxWidgetCurrencyInfo::STATIC_CurrencyInfoTreeItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick");

	UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
// (Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCustomColorPicker::SetTargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition");

	UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCustomColorPicker::SetTargetCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode");

	UEFGFxWidgetCustomColorPicker_SetTargetCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
// (Final, Iterator, Latent, Net, Simulated, Static)

void UEFGFxWidgetCustomColorPicker::STATIC_SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetColor");

	UEFGFxWidgetCustomColorPicker_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCustomColorPicker::SetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetInit");

	UEFGFxWidgetCustomColorPicker_SetInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
// (Defined, Latent, PreOperator, Exec, Operator, Static, Const)

void UEFGFxWidgetCustomColorPicker::STATIC_ColorPickerColorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
// (Final, Defined, Latent, PreOperator, Exec, Operator, Static, Const)

void UEFGFxWidgetCustomColorPicker::STATIC_ColorPickerLightnessChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildApplicantRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick");

	UEFGFxWidgetGuild_GuildApplicantRightClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildMemberRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick");

	UEFGFxWidgetGuild_GuildMemberRightClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildReject
// (Final, Defined, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildReject()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildReject");

	UEFGFxWidgetGuild_GuildReject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildAccept
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildAccept");

	UEFGFxWidgetGuild_GuildAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
// (Final, PreOperator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildNoticeCopyButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick");

	UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildChangeGuildIntroduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction");

	UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildChangeGuildNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice");

	UEFGFxWidgetGuild_GuildChangeGuildNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
// (Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildChangeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick");

	UEFGFxWidgetGuild_GuildChangeBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildChangeGuildMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark");

	UEFGFxWidgetGuild_GuildChangeGuildMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCreate
// (Final, Iterator, Net, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCreate");

	UEFGFxWidgetGuild_GuildCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildCancel
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCancel");

	UEFGFxWidgetGuild_GuildCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetGuild.GuildApply
// (Final, PreOperator, Singular, NetReliable, Exec, HasOptionalParms, Const)

void UEFGFxWidgetGuild::GuildApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApply");

	UEFGFxWidgetGuild_GuildApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.killOptionKey
// (Final, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetHotKey::killOptionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.killOptionKey");

	UEFGFxWidgetHotKey_killOptionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
// (Final, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetHotKey::selectOptionHotKeyMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu");

	UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, NetReliable, Simulated, Exec, Native, Operator, Static, Const)

void UEFGFxWidgetInstanceDungeonEntrance::STATIC_DungeonEntranceDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInstanceDungeonEntrance.DungeonEntranceDifficultyIndex");

	UEFGFxWidgetInstanceDungeonEntrance_DungeonEntranceDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
// (PreOperator, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
// (Final, PreOperator, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
// (Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Const)

void UEFGFxWidgetInteractionAbility_Refine::STATIC_ChangeCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor");

	UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
// (Final, Defined, Iterator, Latent, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, NetReliable, Native, HasOptionalParms, Const)

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
// (Defined, PreOperator, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Latent, NetReliable, Native, Event, Static, Const)

void UEFGFxWidgetInteractionBarter::STATIC_BarterShopPurchaseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem");

	UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
// (Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteractionMail::SetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable");

	UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetInteractionMail::STATIC_ASSetNextSlotDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
// (Final, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteractionMail::SetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable");

	UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetInteractionMail::STATIC_ASSetNextSlotEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteractionMail::SetMailOpenType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType");

	UEFGFxWidgetInteractionMail_SetMailOpenType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetInteractionMail::SetOpenType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetOpenType");

	UEFGFxWidgetInteractionMail_SetOpenType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionMail.StopLoading
// (Final, Defined, Latent, Singular, Simulated, Exec, Native, Event, Operator, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, PreOperator, Exec, Event, Static, Const)

void UEFGFxWidgetInteractionMail::STATIC_AddReceiverData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData");

	UEFGFxWidgetInteractionMail_AddReceiverData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetItemAssembly.ItemCraftAlarmEffectLuckyPlayEnd
// (Defined, Latent, PreOperator, Singular, Exec, Native, HasOptionalParms, Const)

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
// (Final, Latent, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelNoramlSkillClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelNoramlSkillClick");

	UEFGFxWidgetLifeSkill_LifeLevelNoramlSkillClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick
// (Latent, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillPlusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick
// (Final, Defined, Iterator, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelMasterSkillMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick");

	UEFGFxWidgetLifeSkill_LifeLevelMasterSkillMinusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick
// (Final, Defined, Latent, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelPointPlusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick");

	UEFGFxWidgetLifeSkill_LifeLevelPointPlusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick
// (Defined, Latent, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelPointMinusClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick");

	UEFGFxWidgetLifeSkill_LifeLevelPointMinusClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick
// (Iterator, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelGuideBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick");

	UEFGFxWidgetLifeSkill_LifeLevelGuideBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed
// (Final, Iterator, Simulated, Exec, Native, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::LifeLevelGuideClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed");

	UEFGFxWidgetLifeSkill_LifeLevelGuideClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OnLifeNoramlSkillClick
// (Iterator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Iterator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Simulated, Exec, Native, HasOptionalParms, Const)

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
// (Final, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuideUI");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide
// (Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::OpenLifeLevelGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide");

	UEFGFxWidgetLifeSkill_OpenLifeLevelGuide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI
// (Defined, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetLifeSkill::SetNoSkillUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI");

	UEFGFxWidgetLifeSkill_SetNoSkillUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill
// (Iterator, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetLifeSkill::SetNoSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill");

	UEFGFxWidgetLifeSkill_SetNoSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFGFxWidgetMap::STATIC_WorldMapZoneIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex");

	UEFGFxWidgetMap_WorldMapZoneIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMap.WorldMapContinentType
// (Final, Iterator, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFGFxWidgetMap::STATIC_WorldMapContinentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapContinentType");

	UEFGFxWidgetMap_WorldMapContinentType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Event, HasOptionalParms, Const)

void UEFGFxWidgetMODWatingInfo::MinimapAlarmListRightBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick");

	UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
// (Defined, Iterator, Simulated, Static, HasOptionalParms, Const)

void UEFGFxWidgetMoviePlayer::STATIC_TestLabSendInputMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage");

	UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetNormalBox::NormalBoxItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected");

	UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetNoticeMOD::NoticeModWaitListItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick");

	UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetQuestJournal::SetMaxTreeItemCheckNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
// (Defined, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetQuestJournal::SetMaxQuestCheckNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
// (Final, PreOperator, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetQuestJournal::STATIC_ARKQuestTraceButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
// (Defined, Latent, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, HasOptionalParms, Const)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemListOverPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemListOverPool");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemListOverPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnCheckedTreeItemOverPool
// (Final, Iterator, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetQuestJournal::STATIC_ARKQuestGiveUpButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
// (Latent, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, HasOptionalParms, Const)

void UEFGFxWidgetQuestJournal::QuestJournalTreeItemMultiCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemMultiCheck");

	UEFGFxWidgetQuestJournal_QuestJournalTreeItemMultiCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestJournal.OnChecked_QuestTreeItem
// (Iterator, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetQuestSummary::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnHide");

	UEFGFxWidgetQuestSummary_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
// (Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (PreOperator, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetQuestSummary::STATIC_ARKQuestSelectedRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem");

	UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
// (Final, Latent, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetQuestSummary::STATIC_ARKQuestCompleteButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetQuestSummary::STATIC_ARKQuestAcceptButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetQuestSummary::SelectChoiceRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetQuestSummary::SetSelectedIndex_ChoiceRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UEFGFxWidgetRandomBox::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.Init");

	UEFGFxWidgetRandomBox_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.startAni
// (Final, Defined, Net, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetRandomBox::startAni()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.startAni");

	UEFGFxWidgetRandomBox_startAni_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
// (Defined, Iterator, Latent, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSelectBox::SelectBoxItemReceiveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll");

	UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
// (Iterator, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSelectBox::SelectBoxItemSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected");

	UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.closePreset
// (Final, Defined, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetSkillBook::closePreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.closePreset");

	UEFGFxWidgetSkillBook_closePreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.openPreset
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetSkillBook::openPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.openPreset");

	UEFGFxWidgetSkillBook_openPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.cancelSelection
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetSkillBook::cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.cancelSelection");

	UEFGFxWidgetSkillBook_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookPresetUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock");

	UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
// (Iterator, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookPresetApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply");

	UEFGFxWidgetSkillBook_SkillBookPresetApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookPresetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected");

	UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel
// (Final, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookInitCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel");

	UEFGFxWidgetSkillBook_SkillBookInitCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm
// (Defined, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookInitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm");

	UEFGFxWidgetSkillBook_SkillBookInitConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookPresetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit");

	UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookListSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected");

	UEFGFxWidgetSkillBook_SkillBookListSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
// (PreOperator, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookTierBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick");

	UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
// (Latent, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookDownBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick");

	UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
// (Defined, PreOperator, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetSkillBook::SkillBookUpBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick");

	UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
// (Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionButtonClickHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler");

	UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
// (Defined, Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionListIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange");

	UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Net, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionWndCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked");

	UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
// (Final, Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionChangedSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider");

	UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
// (Iterator, Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionSelectedComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
// (Final, Defined, Latent, Singular, Static, HasOptionalParms, Const)

void UEFGFxWidgetSystemOption::STATIC_SystemOptionSelectedCheckBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxWidgetUnLockBox::STATIC_UnlockBoxItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete");

	UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxWidgetUnLockBox::STATIC_UnlockBoxItemClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed");

	UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetUserTrade::SetOtherTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady");

	UEFGFxWidgetUserTrade_SetOtherTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
// (Final, Net, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetUserTrade::STATIC_ASSetOtherTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady");

	UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
// (Final, Defined, Iterator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetUserTrade::SetMyTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady");

	UEFGFxWidgetUserTrade_SetMyTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetUserTrade::STATIC_ASSetMyTradeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady");

	UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
// (Final, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetUserTrade::SetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
// (Net, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetUserTrade::STATIC_ASSetOtherTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
// (Defined, Iterator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetUserTrade::SetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm");

	UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetUserTrade::STATIC_ASSetMyTradeConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowConfirmBtnClick
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxWidgetVictoryCrest::STATIC_VictoryCrestWindowConfirmBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowConfirmBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowConfirmBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowExchangeBtnClick
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxWidgetVictoryCrest::STATIC_VictoryCrestWindowExchangeBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowExchangeBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowExchangeBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowUnlockBtnClick
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void UEFGFxWidgetVictoryCrest::STATIC_VictoryCrestWindowUnlockBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowUnlockBtnClick");

	UEFGFxWidgetVictoryCrest_VictoryCrestWindowUnlockBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFUIFrame::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.WidgetInitialized");

	UEFUIFrame_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.Deactivate
// (Iterator, Singular, Net, Exec, HasOptionalParms)

void UEFUIFrame::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Deactivate");

	UEFUIFrame_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUIFrame.Activate
// (Defined, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFUIFrame::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Activate");

	UEFUIFrame_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetAnnounce::STATIC_AnnounceFrameMotionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete");

	UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
// (Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::cleanUpLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer");

	UEFGFxWidgetAnnounce_cleanUpLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
// (Final, Iterator, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::setAnnouncePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition");

	UEFGFxWidgetAnnounce_setAnnouncePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
// (Defined, Latent, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::getAnnounceListPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition");

	UEFGFxWidgetAnnounce_getAnnounceListPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
// (Iterator, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::setAnnounceItemTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime");

	UEFGFxWidgetAnnounce_setAnnounceItemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
// (Latent, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::getAnnounceItemTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime");

	UEFGFxWidgetAnnounce_getAnnounceItemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
// (Final, Latent, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::getAnnounceListItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem");

	UEFGFxWidgetAnnounce_getAnnounceListItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
// (Defined, Iterator, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::setAnnounceTotalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem");

	UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
// (Final, Defined, Latent, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::getAnnounceMaxItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem");

	UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
// (Final, Defined, Iterator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::getAnnounceCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem");

	UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
// (Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetAnnounce::addAnnounceMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage");

	UEFGFxWidgetAnnounce_addAnnounceMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
// (Defined, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetClassPreview::SetEnableResetButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton");

	UEFGFxWidgetClassPreview_SetEnableResetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetShowType
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetClassPreview::SetShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetShowType");

	UEFGFxWidgetClassPreview_SetShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
// (Iterator, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetClassPreview::SetClassUpgradeChoiceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo");

	UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
// (PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetClassPreview::SetPlayingClassData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData");

	UEFGFxWidgetClassPreview_SetPlayingClassData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeCancelRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeSelectClassID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID");

	UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
// (PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeConfirmClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass");

	UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
// (Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeReturnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeAddBossMonster()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradeAddNormalMonster()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
// (Final, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradePlayReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset");

	UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradePreviewRequestCloseWnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
// (Defined, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetClassPreview::STATIC_ClassUpgradePreviewPlaySelectClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
// (Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::setObserverMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setObserverMod");

	UEFGFxWidgetColosseum_New_setObserverMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
// (Final, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::setTimerPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setTimerPause");

	UEFGFxWidgetColosseum_New_setTimerPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.AddItem
// (Final, PreOperator, Singular, NetReliable, Native)

void UEFGFxWidgetColosseum_New::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.AddItem");

	UEFGFxWidgetColosseum_New_AddItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setModType
// (Final, Iterator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::setModType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setModType");

	UEFGFxWidgetColosseum_New_setModType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
// (Iterator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::roundAnnounceShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType");

	UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.announceShowType
// (Defined, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::announceShowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.announceShowType");

	UEFGFxWidgetColosseum_New_announceShowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setStartData
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::setStartData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setStartData");

	UEFGFxWidgetColosseum_New_setStartData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetColosseum_New.setWaitData
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetColosseum_New::setWaitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setWaitData");

	UEFGFxWidgetColosseum_New_setWaitData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCommon::SetPartyMemberValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue");

	UEFGFxWidgetCommon_SetPartyMemberValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
// (Final, Iterator, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCommon::SetCommonObjectAvailableSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetCommon::ShowCommonObjectAvailableSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetCommon.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetCommon::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.WidgetInitialized");

	UEFGFxWidgetCommon_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
// (Iterator, Latent, Singular, Net, Native, Operator, Static, Const)

void UEFGFxWidgetContentsUnlock::STATIC_ContentsUnlockCallbackTypeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID");

	UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Iterator, NetReliable, Event, Operator, Static, Const)

void UEFGFxWidgetDamage::STATIC_EFDataBinding_UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData");

	UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Event, HasOptionalParms, Const)

void UEFGFxWidgetExcavationMiniGame::MiniGameStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged");

	UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
// (Final, Defined, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, Latent, NetReliable, Simulated, Exec, Event, Static, Const)

void UEFGFxWidgetExcavationMiniGame::STATIC_ArcheologyResultComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete");

	UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
// (Defined, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Event, HasOptionalParms, Const)

void UEFGFxWidgetFishingNetMiniGame::MiniGameStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged");

	UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
// (Final, Defined, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Defined, PreOperator, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetFishingNetMiniGame::STATIC_FishingGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver");

	UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Defined, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetHeadStatus::MoveHeadStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus");

	UEFGFxWidgetHeadStatus_MoveHeadStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
// (Defined, Iterator, Latent, Net, Simulated, Exec, HasOptionalParms, Const)

void UEFGFxWidgetHudCommonExp::HUD_CommonTabIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex");

	UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, Static, Const)

void UEFGFxWidgetHudCommonExp::STATIC_CommonTabIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex");

	UEFGFxWidgetHudCommonExp_CommonTabIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Static, HasOptionalParms, Const)

void UEFGFxWidgetHudLeftTop::STATIC_TopHUDAlarmListRightBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Static, HasOptionalParms, Const)

void UEFGFxWidgetHudLeftTop::STATIC_TopHUDAlarmListLeftBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Static, HasOptionalParms, Const)

void UEFGFxWidgetHudLeftTop::STATIC_TopHUDAlarmListItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
// (Final, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::RelationShipLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp");

	UEFGFxWidgetInteraction_RelationShipLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.CloseBackGround
// (Defined, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::CloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.CloseBackGround");

	UEFGFxWidgetInteraction_CloseBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
// (Defined, Iterator, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionCloseBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround");

	UEFGFxWidgetInteraction_InteractionCloseBackGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.OpenBackGround
// (Final, Defined, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::OpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.OpenBackGround");

	UEFGFxWidgetInteraction_OpenBackGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
// (Final, Defined, PreOperator, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionOpenBackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround");

	UEFGFxWidgetInteraction_InteractionOpenBackGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
// (Defined, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::SelectQuestListIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex");

	UEFGFxWidgetInteraction_SelectQuestListIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectQuestList
// (Final, Latent, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::SelectQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestList");

	UEFGFxWidgetInteraction_SelectQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
// (Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::SelectFunctionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionType");

	UEFGFxWidgetInteraction_SelectFunctionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
// (Latent, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::SelectFunctionContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer");

	UEFGFxWidgetInteraction_SelectFunctionContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::ShowMaxIntimatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
// (Final, Defined, NetReliable, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::ShowMaximumIntimatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
// (Final, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::ClearInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearInteractionState");

	UEFGFxWidgetInteraction_ClearInteractionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetInteraction::STATIC_ClearFunctionButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState");

	UEFGFxWidgetInteraction_ClearFunctionButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
// (Latent, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionCommonCloseBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick");

	UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Operator, Static, Const)

void UEFGFxWidgetInteraction::STATIC_EndInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.EndInteractionMode");

	UEFGFxWidgetInteraction_EndInteractionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
// (Final, Defined, Latent, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionCommonPlayerTalkListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetInteraction::STATIC_ClickInteractionTalkSelectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList");

	UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
// (Defined, Latent, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionCommonNPCTalkListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
// (Final, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetInteraction::STATIC_ClickInteractionTalkList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList");

	UEFGFxWidgetInteraction_ClickInteractionTalkList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
// (Final, Latent, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteraction::InteractionCommonMenuListClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick");

	UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
// (Latent, Singular, Net, NetReliable, Simulated, Operator, Static, Const)

void UEFGFxWidgetInteraction::STATIC_ClickInteractionFunctionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu");

	UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetInteraction::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.WidgetInitialized");

	UEFGFxWidgetInteraction_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
// (Final, Iterator, Latent, NetReliable, Native, HasOptionalParms, Const)

void UEFGFxWidgetInteractionKeyIcon::InteractionKeySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected");

	UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
// (Final, Latent, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetInteractionKeyIcon::STATIC_FinishSwitchInteractionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode");

	UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
// (PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetLifeToolDurability::HideLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability");

	UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
// (Final, Iterator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetLifeToolDurability::DecreaseLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability");

	UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetLifeToolDurability::ShowLifeDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability");

	UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
// (Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms, Const)

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
// (Singular, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::GetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.GetMenu");

	UEFGFxWidgetMenu_GetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetEnableButton
// (Final, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::SetEnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetEnableButton");

	UEFGFxWidgetMenu_SetEnableButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetToolTip
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::SetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetToolTip");

	UEFGFxWidgetMenu_SetToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetBindKey
// (Final, Defined, Iterator, Latent, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::SetBindKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetBindKey");

	UEFGFxWidgetMenu_SetBindKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SetSelectButton
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::SetSelectButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetSelectButton");

	UEFGFxWidgetMenu_SetSelectButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMenu.SelectButton
// (Defined, Iterator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMenu::SelectButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SelectButton");

	UEFGFxWidgetMenu_SelectButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Singular, Net, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetMOD_Cube::ModCommonMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
// (Latent, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UEFGFxWidgetMOD_Cube::STATIC_FinishMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation");

	UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
// (Final, Defined, Iterator, Latent, PreOperator, Net, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetMOD_Cube::ModCommonEndCubeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect");

	UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Operator, Static, Const)

void UEFGFxWidgetMOD_Cube::STATIC_EndBuffEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect");

	UEFGFxWidgetMOD_Cube_EndBuffEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::PlayModCommonMergeCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
// (Defined, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonRandomState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState");

	UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
// (Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonCurrentCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonAccumulateCompensation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
// (Iterator, Net, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::UpdateModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState");

	UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
// (Defined, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::RemoveModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState");

	UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
// (Final, Iterator, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::AddModCommonCubeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState");

	UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
// (Final, Defined, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonStateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList");

	UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
// (Iterator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonWaveStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep");

	UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
// (Final, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetMOD_Cube::SetModCommonHudType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType");

	UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
// (Defined, Latent, Singular, Net, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetMOD_PlatinumArea::ModPlatinumCoopComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete");

	UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
// (Defined, Iterator, Singular, Net, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetMODEntrance::ModEntranceMapCanvasItemClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick");

	UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.setNoticeIcon
// (Final, Defined, Latent, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetNotice::setNoticeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.setNoticeIcon");

	UEFGFxWidgetNotice_setNoticeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
// (Iterator, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void UEFGFxWidgetNotice::NoticeFrameAlarmBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick");

	UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
// (Final, Defined, Iterator, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCreateHUD::SetDefaultClassData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData");

	UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCustomizing::previewImg()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.previewImg");

	UEFGFxWidgetPcCustomizing_previewImg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setCostume
// (Defined, Iterator, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCustomizing::setCostume()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setCostume");

	UEFGFxWidgetPcCustomizing_setCostume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setClassID
// (Final, Defined, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCustomizing::setClassID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setClassID");

	UEFGFxWidgetPcCustomizing_setClassID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
// (Defined, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCustomizing::setPreviewcostumeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData");

	UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
// (Final, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcCustomizing::setPresetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPresetData");

	UEFGFxWidgetPcCustomizing_setPresetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
// (Final, Defined, Iterator, Latent, Net, Simulated, Native, Operator, Static, Const)

void UEFGFxWidgetPcCustomizing::STATIC_CustomizingSettingValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged");

	UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowAnim
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcSelect::ShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowAnim");

	UEFGFxWidgetPcSelect_ShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.ShowNotice
// (Final, Net, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcSelect::ShowNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowNotice");

	UEFGFxWidgetPcSelect_ShowNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
// (Defined, PreOperator, NetReliable, Exec, HasOptionalParms)

void UEFGFxWidgetPcSelect::SetCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect");

	UEFGFxWidgetPcSelect_SetCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
// (Iterator, Latent, PreOperator, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetPcSelect::STATIC_CharacterSelectMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving");

	UEFGFxWidgetPcSelect_CharacterSelectMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
// (Final, Defined, Iterator, Latent, Singular, Event, Static, HasOptionalParms, Const)

void UEFGFxWidgetPcSelect::STATIC_WallpaperCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel");

	UEFGFxWidgetPcSelect_WallpaperCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
// (Defined, PreOperator, Singular, Event, Static, HasOptionalParms, Const)

void UEFGFxWidgetPcSelect::STATIC_WallpaperSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected");

	UEFGFxWidgetPcSelect_WallpaperSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
// (PreOperator, Singular, Event, Static, HasOptionalParms, Const)

void UEFGFxWidgetPcSelect::STATIC_WallpaperConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm");

	UEFGFxWidgetPcSelect_WallpaperConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
// (Defined, Latent, PreOperator, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetPcSelect::STATIC_CharacterSelectDeleteCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel");

	UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
// (Final, Defined, Latent, PreOperator, Net, Simulated, Operator, Static, Const)

void UEFGFxWidgetPcSelect::STATIC_CharacterSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex");

	UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
// (Final, PreOperator, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Defined, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Defined, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Final, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetTownShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTownShow");

	UEFUISlotData_SetTownShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetToolTip
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)

void UEFUISlotData::SetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetToolTip");

	UEFUISlotData_SetToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetRecommend
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetRecommend()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetRecommend");

	UEFUISlotData_SetRecommend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetFriendshipShow
// (Final, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetFriendshipShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetFriendshipShow");

	UEFUISlotData_SetFriendshipShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetAdvBookShow
// (Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetAdvBookShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetAdvBookShow");

	UEFUISlotData_SetAdvBookShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTemporary
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetTemporary()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTemporary");

	UEFUISlotData_SetTemporary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTrash
// (Defined, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetTrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTrash");

	UEFUISlotData_SetTrash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetDisableType
// (PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetDisableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisableType");

	UEFUISlotData_SetDisableType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetTableID
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTableID");

	UEFUISlotData_SetTableID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTableID
// (Final, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetTableID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTableID");

	UEFUISlotData_GetTableID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetUniqueData
// (Final, Defined, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetUniqueData");

	UEFUISlotData_SetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetUniqueData
// (Final, Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetUniqueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetUniqueData");

	UEFUISlotData_GetUniqueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetLocked
// (Final, Defined, Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLocked");

	UEFUISlotData_SetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsLocked
// (Latent, Simulated, Native, HasOptionalParms, Const)

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
// (Final, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetItemGrade");

	UEFUISlotData_SetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetItemGrade
// (Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetItemGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetItemGrade");

	UEFUISlotData_GetItemGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSoundTheme
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSoundTheme");

	UEFUISlotData_SetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSoundTheme
// (Final, Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetSoundTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSoundTheme");

	UEFUISlotData_GetSoundTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetDisabled
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, HasOptionalParms)

void UEFUISlotData::SetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisabled");

	UEFUISlotData_SetDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.IsDisabled
// (Final, Defined, Iterator, Latent, NetReliable, Event, Static, HasOptionalParms)

void UEFUISlotData::STATIC_IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.IsDisabled");

	UEFUISlotData_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetLabelName
// (Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLabelName");

	UEFUISlotData_SetLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetLabelName
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetLabelName");

	UEFUISlotData_GetLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetCooltime
// (Final, Defined, Latent, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetCooltime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetCooltime");

	UEFUISlotData_SetCooltime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetTotalCoolTime
// (Defined, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetTotalCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTotalCoolTime");

	UEFUISlotData_GetTotalCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetRemainCoolTime
// (Defined, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetRemainCoolTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetRemainCoolTime");

	UEFUISlotData_GetRemainCoolTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconHeight
// (Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconHeight");

	UEFUISlotData_SetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconHeight
// (Final, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconHeight");

	UEFUISlotData_GetIconHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconWidth
// (Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconWidth");

	UEFUISlotData_SetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconWidth
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconWidth");

	UEFUISlotData_GetIconWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconY
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconY");

	UEFUISlotData_SetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconY
// (Final, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconY()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconY");

	UEFUISlotData_GetIconY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconX
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconX");

	UEFUISlotData_SetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconX
// (Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconX");

	UEFUISlotData_GetIconX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconCount
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconCount");

	UEFUISlotData_SetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconCount
// (Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconCount");

	UEFUISlotData_GetIconCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconPath
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconPath");

	UEFUISlotData_SetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetIconPath
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetIconPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconPath");

	UEFUISlotData_GetIconPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetWindowType
// (Latent, Simulated, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetWindowType");

	UEFUISlotData_SetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetWindowType
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetWindowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetWindowType");

	UEFUISlotData_GetWindowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSlotIndex
// (Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotIndex");

	UEFUISlotData_SetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotIndex
// (Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotIndex");

	UEFUISlotData_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetBindID
// (Defined, Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetBindID");

	UEFUISlotData_SetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetBindID
// (Defined, Iterator, Latent, Singular, Net, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetBindID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetBindID");

	UEFUISlotData_GetBindID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetSlotType
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotType");

	UEFUISlotData_SetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.GetSlotType
// (Defined, Iterator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFUISlotData::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotType");

	UEFUISlotData_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconData_New
// (Final, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconData_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData_New");

	UEFUISlotData_SetIconData_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetIconData
// (Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData");

	UEFUISlotData_SetIconData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData_New
// (Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetImageData_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData_New");

	UEFUISlotData_SetImageData_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFUISlotData.SetImageData
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFUISlotData::SetImageData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData");

	UEFUISlotData_SetImageData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UEFGameViewportClient::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.Tick");

	UEFGameViewportClient_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void UEFGameViewportClient::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostRender");

	UEFGameViewportClient_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.CreateScreenshot
// (Final, Singular, Net, NetReliable, Native, Operator, Static, Const)

void UEFGameViewportClient::STATIC_CreateScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CreateScreenshot");

	UEFGameViewportClient_CreateScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Native, HasOptionalParms, Const)

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
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Const)

void UEFGameViewportClient::STATIC_CacheViewProjectionMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix");

	UEFGameViewportClient_CacheViewProjectionMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.PostFadeInOutRender
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms, Const)

void UEFGameViewportClient::PostFadeInOutRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostFadeInOutRender");

	UEFGameViewportClient_PostFadeInOutRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
// (Final, Defined, Singular, NetReliable, Simulated, HasOptionalParms)

void UEFGameViewportClient::SetHardwareMouseCursorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility");

	UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Const)

void AEFNxForceFieldTornado::STATIC_UpdateDynamicProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty");

	AEFNxForceFieldTornado_UpdateDynamicProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
// (Final, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyHeightOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset");

	AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyForceHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyEscapeVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity");

	AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
// (Defined, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftFalloffHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
// (PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyForceTopRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyForceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyLiftStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyRotationalStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

void AEFNxForceFieldTornado::OnUpdatePropertyRadialStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFData_MaskInfo.GetProperLevel
// (Final, NetReliable, Simulated, HasOptionalParms, Const)

void UEFData_MaskInfo::GetProperLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFData_MaskInfo.GetProperLevel");

	UEFData_MaskInfo_GetProperLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.GetColumNum
// (Final, Iterator, Latent, Singular, Net, Exec, HasOptionalParms)

void UEFExcelShell::GetColumNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetColumNum");

	UEFExcelShell_GetColumNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.NewLine
// (Final, Defined, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UEFExcelShell::NewLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewLine");

	UEFExcelShell_NewLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ResetEdit
// (Final, Defined, NetReliable, Exec, HasOptionalParms)

void UEFExcelShell::ResetEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ResetEdit");

	UEFExcelShell_ResetEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetPosition
// (Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetLookPresetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetPosition");

	UEFExcelShell_SetLookPresetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetLookPresetRange
// (Final, Latent, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetLookPresetRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetRange");

	UEFExcelShell_SetLookPresetRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.ReadStringRange
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Operator, HasOptionalParms, Const)

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
// (Iterator, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFExcelShell::STATIC_WriteString()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteString");

	UEFExcelShell_WriteString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteName
// (Final, Defined, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFExcelShell::STATIC_WriteName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteName");

	UEFExcelShell_WriteName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteFloat
// (Final, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFExcelShell::STATIC_WriteFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteFloat");

	UEFExcelShell_WriteFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteInt
// (Defined, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFExcelShell::STATIC_WriteInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteInt");

	UEFExcelShell_WriteInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.WriteUINT
// (Final, Iterator, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFExcelShell::STATIC_WriteUINT()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteUINT");

	UEFExcelShell_WriteUINT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetSheetName
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetSheetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetSheetName");

	UEFExcelShell_SetSheetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetFont
// (Iterator, PreOperator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetFont");

	UEFExcelShell_SetFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetBorder
// (Final, Defined, Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBorder");

	UEFExcelShell_SetBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SetBackgroundColor
// (Final, Iterator, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBackgroundColor");

	UEFExcelShell_SetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.GetWorkSheetName
// (PreOperator, NetReliable, Simulated, HasOptionalParms, Const)

void UEFExcelShell::GetWorkSheetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetWorkSheetName");

	UEFExcelShell_GetWorkSheetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SelectWorkSheet
// (Defined, Latent, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SelectWorkSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheet");

	UEFExcelShell_SelectWorkSheet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SelectWorkSheetByName
// (Final, Defined, Latent, PreOperator, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFExcelShell::SelectWorkSheetByName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheetByName");

	UEFExcelShell_SelectWorkSheetByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.SaveAs
// (Final, Net, Simulated, Exec, Static)

void UEFExcelShell::STATIC_SaveAs()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SaveAs");

	UEFExcelShell_SaveAs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.OpenExcelFile
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, HasOptionalParms, Const)

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
// (Final, Latent, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void UEFExcelShell::NewSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewSheet");

	UEFExcelShell_NewSheet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.NewExcelFile
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Event, HasOptionalParms, Const)

void UEFExcelShell::NewExcelFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewExcelFile");

	UEFExcelShell_NewExcelFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.AutoFitColomn
// (Final, Iterator, PreOperator, Native, Event, Static, Const)

void UEFExcelShell::STATIC_AutoFitColomn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColomn");

	UEFExcelShell_AutoFitColomn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFExcelShell.AutoFitColumn
// (Defined, Iterator, PreOperator, Native, Event, Static, Const)

void UEFExcelShell::STATIC_AutoFitColumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColumn");

	UEFExcelShell_AutoFitColumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.Touch
// (Defined, PreOperator, Singular, Simulated)

void AEFLocalTrigger::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.Touch");

	AEFLocalTrigger_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFLocalTrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.PostBeginPlay");

	AEFLocalTrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTrigger.IsCinematicControl
// (Iterator, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Simulated, Native, HasOptionalParms, Const)

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
// (Defined, PreOperator, Singular, Simulated)

void AEFLocalTriggerVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.Touch");

	AEFLocalTriggerVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFLocalTriggerVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.PostBeginPlay");

	AEFLocalTriggerVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLocalTriggerVolume.IsCinematicControl
// (Iterator, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms, Const)

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
// (Final, Defined, Iterator, Simulated, Native, HasOptionalParms, Const)

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
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XmlExport");

	UEFDataContainer_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer.XlsExport
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer::STATIC_XlsExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsExport");

	UEFDataContainer_XlsExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer.XlsImport
// (Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer::STATIC_XlsImport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsImport");

	UEFDataContainer_XlsImport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_CharacterCustomizing::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport");

	UEFDataContainer_CharacterCustomizing_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_ColorPalette.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_ColorPalette::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_ColorPalette.XmlExport");

	UEFDataContainer_ColorPalette_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_CustomizeBoneScale::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport");

	UEFDataContainer_CustomizeBoneScale_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_LookInfos.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_LookInfos::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_LookInfos.XmlExport");

	UEFDataContainer_LookInfos_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_NpcFunction.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_NpcFunction::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_NpcFunction.XmlExport");

	UEFDataContainer_NpcFunction_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_Quest.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_Quest::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_Quest.XmlExport");

	UEFDataContainer_Quest_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFDataContainer_TexturePalette.XmlExport
// (Final, Singular, NetReliable, Event, Static, HasOptionalParms, Const)

void UEFDataContainer_TexturePalette::STATIC_XmlExport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_TexturePalette.XmlExport");

	UEFDataContainer_TexturePalette_XmlExport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFLightBeam.SetActive
// (Final, Iterator, PreOperator, Singular, Native, Event, Operator, Static, HasOptionalParms)

void AEFLightBeam::STATIC_SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFLightBeam.SetActive");

	AEFLightBeam_SetActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForceUpdateComponent
// (Defined, Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void AEFItem::SetLocationForceUpdateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForceUpdateComponent");

	AEFItem_SetLocationForceUpdateComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.SetLocationForce
// (Final, Iterator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void AEFItem::SetLocationForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForce");

	AEFItem_SetLocationForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.ClearAttachedPSIIndex
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Static, Const)

void AEFItem::STATIC_ClearAttachedPSIIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.ClearAttachedPSIIndex");

	AEFItem_ClearAttachedPSIIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.NotifyChangedBase
// (Latent, Singular, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)

void AEFItem::NotifyChangedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.NotifyChangedBase");

	AEFItem_NotifyChangedBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.EncroachedBy
// (Final, Defined, Latent, PreOperator, Singular, Simulated)

void AEFItem::EncroachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.EncroachedBy");

	AEFItem_EncroachedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.BaseChange
// (Final, Defined, Iterator, PreOperator, Singular, Simulated)

void AEFItem::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.BaseChange");

	AEFItem_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFItem.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFItem::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.Destroyed");

	AEFItem_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFInteractiveFoliageActor.TakeDamage
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void AEFInteractiveFoliageActor::TakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractiveFoliageActor.TakeDamage");

	AEFInteractiveFoliageActor_TakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)

void AEFMatineePathNode::BreakAllConnectionsFrom()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom");

	AEFMatineePathNode_BreakAllConnectionsFrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakAllConnections
// (Defined, Latent, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)

void AEFMatineePathNode::BreakAllConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnections");

	AEFMatineePathNode_BreakAllConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.BreakConnectionTo
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Operator, HasOptionalParms)

void AEFMatineePathNode::BreakConnectionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakConnectionTo");

	AEFMatineePathNode_BreakConnectionTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.IsConnectedTo
// (Final, Defined, NetReliable, Event, Static, HasOptionalParms)

void AEFMatineePathNode::STATIC_IsConnectedTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.IsConnectedTo");

	AEFMatineePathNode_IsConnectedTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.AddConnectionTo
// (Final, Iterator, Simulated, Exec, Native, HasOptionalParms)

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
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Const)

void AEFMatineePathNode::STATIC_UpdateConnectedLineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents");

	AEFMatineePathNode_UpdateConnectedLineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFMatineePathNode.UpdateLineComponents
// (Final, Simulated, Exec, Native, Static, HasOptionalParms, Const)

void AEFMatineePathNode::STATIC_UpdateLineComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateLineComponents");

	AEFMatineePathNode_UpdateLineComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void AEFGFxHUDWrapper::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostRender");

	AEFGFxHUDWrapper_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AEFGFxHUDWrapper::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostBeginPlay");

	AEFGFxHUDWrapper_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFGFxHUDWrapper.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AEFGFxHUDWrapper::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.Destroyed");

	AEFGFxHUDWrapper_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
// (NetReliable, Simulated, HasOptionalParms, Const)

void UEFSeqAct_SetPostProcessEffectProperties::GetPostProcessEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects");

	UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetAmbientOcclusionEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated");

	UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated");

	UEFSeqAct_SetBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
// (Defined, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_SetDOFEffectProperties::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties");

	UEFSeqAct_SetDOFEffectProperties_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetDOFEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated");

	UEFSeqAct_SetDOFEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
// (Defined, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_SetDOFAndBloomEffectProperties::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties");

	UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
// (Defined, PreOperator, Singular, Net, NetReliable, Event, Operator, HasOptionalParms, Const)

void UEFSeqAct_SetDOFBloomMotionBlurEffect::SetProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties");

	UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetMaterialEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated");

	UEFSeqAct_SetMaterialEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetMotionBlurEffectProperties::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated");

	UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
// (Defined, Latent, HasOptionalParms)

void UEFSeqAct_SetUberPostProcessEffect::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated");

	UEFSeqAct_SetUberPostProcessEffect_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
// (Defined, Latent, HasOptionalParms)

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
