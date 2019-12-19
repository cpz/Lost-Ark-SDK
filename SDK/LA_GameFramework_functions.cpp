// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_GameFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameFramework.GameAIController.GetActionString
// (Final, Defined, Iterator, PreOperator, Exec, HasOptionalParms)

void AGameAIController::GetActionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	AGameAIController_GetActionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.SetDesiredRotation
// (Defined, Singular, NetReliable, Native, Event, Operator, Static, HasOptionalParms)

void AGameAIController::STATIC_SetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	AGameAIController_SetDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AILog_Internal
// (Final, Defined, Iterator, Exec, HasOptionalParms)

void AGameAIController::AILog_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	AGameAIController_AILog_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.RecordDemoAILog
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native, Static, Const)

void AGameAIController::STATIC_RecordDemoAILog()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	AGameAIController_RecordDemoAILog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AGameAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	AGameAIController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// (Final, Net, NetReliable, Simulated, Native, Static, Const)

void AGameAIController::STATIC_ReachedIntermediateMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");

	AGameAIController_ReachedIntermediateMoveGoal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedMoveGoal
// (Defined, Net, NetReliable, Simulated, Native, Static, Const)

void AGameAIController::STATIC_ReachedMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedMoveGoal");

	AGameAIController_ReachedMoveGoal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetDestinationOffset
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameAIController::STATIC_GetDestinationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetDestinationOffset");

	AGameAIController_GetDestinationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetAICommandInStack
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameAIController::STATIC_GetAICommandInStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	AGameAIController_GetAICommandInStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.FindCommandOfClass
// (Defined, PreOperator, Net, Simulated, Exec, Static, Const)

void AGameAIController::STATIC_FindCommandOfClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	AGameAIController_FindCommandOfClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.DumpCommandStack
// (Defined, Iterator, Latent, Simulated, Exec, Static, Const)

void AGameAIController::STATIC_DumpCommandStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	AGameAIController_DumpCommandStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.CheckCommandCount
// (Iterator, Latent, Net, Exec, Static, Const)

void AGameAIController::STATIC_CheckCommandCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	AGameAIController_CheckCommandCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetActiveCommand
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameAIController::STATIC_GetActiveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	AGameAIController_GetActiveCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AbortCommand
// (Final, Defined, PreOperator, NetReliable, Static, Const)

void AGameAIController::STATIC_AbortCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	AGameAIController_AbortCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PopCommand
// (Final, Latent, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void AGameAIController::STATIC_PopCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	AGameAIController_PopCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PushCommand
// (Iterator, Singular, NetReliable, Simulated, Native, Static, Const)

void AGameAIController::STATIC_PushCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	AGameAIController_PushCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AllCommands
// (Defined, PreOperator, Net, NetReliable, Static, Const)

void AGameAIController::STATIC_AllCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AllCommands");

	AGameAIController_AllCommands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.HandlePathObstruction
// (Defined, Iterator, PreOperator, Singular, NetReliable, HasOptionalParms)

void UGameAICommand::HandlePathObstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.HandlePathObstruction");

	UGameAICommand_HandlePathObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.MoveUnreachable
// (Defined, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UGameAICommand::MoveUnreachable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.MoveUnreachable");

	UGameAICommand_MoveUnreachable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.NotifyNeedRepath
// (Final, Defined, Iterator, PreOperator, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_NotifyNeedRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.NotifyNeedRepath");

	UGameAICommand_NotifyNeedRepath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDebugVerboseText
// (Final, Latent, PreOperator, Exec, HasOptionalParms)

void UGameAICommand::GetDebugVerboseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugVerboseText");

	UGameAICommand_GetDebugVerboseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDebugOverheadText
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameAICommand::STATIC_GetDebugOverheadText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	UGameAICommand_GetDebugOverheadText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.DrawDebug
// (Final, PreOperator, Exec, HasOptionalParms)

void UGameAICommand::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	UGameAICommand_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDumpString
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms)

void UGameAICommand::GetDumpString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	UGameAICommand_GetDumpString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Resumed
// (Final, Latent, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_Resumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	UGameAICommand_Resumed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Paused
// (Net, Simulated, Exec, Event, Operator)

void UGameAICommand::Paused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	UGameAICommand_Paused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Popped
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	UGameAICommand_Popped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Pushed
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	UGameAICommand_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PostPopped
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_PostPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	UGameAICommand_PostPopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PrePushed
// (Defined, Latent, NetReliable, Simulated, Native, Static, Const)

void UGameAICommand::STATIC_PrePushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	UGameAICommand_PrePushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowStateTransitionTo
// (Defined, Iterator, PreOperator, Net, NetReliable, Static, Const)

void UGameAICommand::STATIC_AllowStateTransitionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	UGameAICommand_AllowStateTransitionTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowTransitionTo
// (Latent, PreOperator, Net, NetReliable, Static, Const)

void UGameAICommand::STATIC_AllowTransitionTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	UGameAICommand_AllowTransitionTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UGameAICommand::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	UGameAICommand_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// (Final, Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameAICommand::STATIC_ShouldIgnoreNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

	UGameAICommand_ShouldIgnoreNotifies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalTick
// (Defined, Iterator, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	UGameAICommand_InternalTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalResumed
// (Final, Iterator, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	UGameAICommand_InternalResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPaused
// (Final, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	UGameAICommand_InternalPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPopped
// (Defined, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	UGameAICommand_InternalPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPushed
// (Iterator, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	UGameAICommand_InternalPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPrePushed
// (Final, Defined, Singular, Exec, HasOptionalParms)

void UGameAICommand::InternalPrePushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	UGameAICommand_InternalPrePushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommand
// (Final, Latent, Native, Static, Const)

void UGameAICommand::STATIC_InitCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	UGameAICommand_InitCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommandUserActor
// (Defined, Latent, Native, Static, Const)

void UGameAICommand::STATIC_InitCommandUserActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	UGameAICommand_InitCommandUserActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientColorFade
// (Final, Latent, PreOperator, Net, Exec, Static, Const)

void AGamePlayerController::STATIC_ClientColorFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// (Final, Latent, Net, Exec, HasOptionalParms)

void AGamePlayerController::WarmupPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// (Final, Defined, PreOperator, Singular, Exec, Static, Const)

void AGamePlayerController::STATIC_CanUnpauseWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGamePlayerController::STATIC_GetCurrentMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// (Final, Defined, Latent, Exec, HasOptionalParms)

void AGamePlayerController::ClientStopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// (Defined, Latent, Exec, HasOptionalParms)

void AGamePlayerController::ClientPlayMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// (Iterator, Net, Native, Static, Const)

void AGamePlayerController::STATIC_KeepPlayingLoadingMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	AGamePlayerController_KeepPlayingLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ShowLoadingMovie
// (Final, Latent, PreOperator, Singular, Exec, Native, Static, Const)

void AGamePlayerController::STATIC_ShowLoadingMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// (Defined, PreOperator, Singular, Net, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void AGamePlayerController::STATIC_SetSoundMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// (Iterator, PreOperator, Net, Native, Event, Operator, HasOptionalParms)

void AGamePlayerController::DoForceFeedbackForScreenShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// (Final, Latent, Singular, Exec, HasOptionalParms)

void AGamePlayerController::NotifyCrowdAgentInRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	AGamePlayerController_NotifyCrowdAgentInRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// (Defined, Latent, Singular, Exec, HasOptionalParms)

void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	AGamePlayerController_NotifyCrowdAgentRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdDebug
// (Final, PreOperator, Singular, Net, Exec, Static, Const)

void AGamePlayerController::STATIC_CrowdDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	AGamePlayerController_CrowdDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void AGamePlayerController::STATIC_GetUIPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// (Iterator, PreOperator, Singular, Simulated, Native, Static, Const)

void AGamePlayerController::STATIC_OnToggleMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.OnToggleMouseCursor");

	AGamePlayerController_OnToggleMouseCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.EnableDebugCamera
// (Defined, Latent, PreOperator, Simulated, Exec, Static, Const)

void UGameCheatManager::STATIC_EnableDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.EnableDebugCamera");

	UGameCheatManager_EnableDebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// (Defined, Iterator, Latent, NetReliable, Exec, Native, Static, Const)

void UGameCheatManager::STATIC_TeleportPawnToCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.TeleportPawnToCamera");

	UGameCheatManager_TeleportPawnToCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.ToggleDebugCamera
// (Defined, Latent, Singular, NetReliable, Exec, Native, Static, Const)

void UGameCheatManager::STATIC_ToggleDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.ToggleDebugCamera");

	UGameCheatManager_ToggleDebugCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.PatchDebugCameraController
// (Latent, PreOperator, Net, Simulated, Native, Static, Const)

void UGameCheatManager::STATIC_PatchDebugCameraController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.PatchDebugCameraController");

	UGameCheatManager_PatchDebugCameraController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitDebugColor
// (Final, Defined, Latent, Native, Static, Const)

void AGameCrowdAgent::STATIC_InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitDebugColor");

	AGameCrowdAgent_InitDebugColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdAgent::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	AGameCrowdAgent_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetDestString
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdAgent::STATIC_GetDestString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	AGameCrowdAgent_GetDestString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostRenderFor
// (Iterator, PreOperator, Net, Simulated, HasOptionalParms)

void AGameCrowdAgent::PostRenderFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	AGameCrowdAgent_PostRenderFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// (Defined, PreOperator, Singular, NetReliable, Exec, Native, Event, Static, HasOptionalParms)

void AGameCrowdAgent::STATIC_NativePostRenderFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	AGameCrowdAgent_NativePostRenderFor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// (Latent, PreOperator, Singular, Net, HasOptionalParms)

void AGameCrowdAgent::GeneratePathToActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	AGameCrowdAgent_GeneratePathToActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// (Singular, Exec, HasOptionalParms)

void AGameCrowdAgent::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	AGameCrowdAgent_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// (Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdAgent::OverlappedActorEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	AGameCrowdAgent_OverlappedActorEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TakeDamage
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void AGameCrowdAgent::TakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	AGameCrowdAgent_TakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.FireDeathEvent
// (Iterator, PreOperator, Exec, HasOptionalParms)

void AGameCrowdAgent::FireDeathEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	AGameCrowdAgent_FireDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayDeath
// (Defined, Iterator, Latent, Singular, Net, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_PlayDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	AGameCrowdAgent_PlayDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// (Final, Iterator, Net, Exec, HasOptionalParms)

void AGameCrowdAgent::UpdateIntermediatePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	AGameCrowdAgent_UpdateIntermediatePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.CalcCamera
// (Final, Iterator, Latent, Simulated, Native, Operator, HasOptionalParms)

void AGameCrowdAgent::CalcCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	AGameCrowdAgent_CalcCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.IsIdle
// (Final, Latent, PreOperator, Singular, Native, Static, Const)

void AGameCrowdAgent::STATIC_IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

	AGameCrowdAgent_IsIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native, Static, Const)

void AGameCrowdAgent::STATIC_SetCurrentBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	AGameCrowdAgent_SetCurrentBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void AGameCrowdAgent::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	AGameCrowdAgent_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// (Iterator, Latent, PreOperator, Exec, HasOptionalParms)

void AGameCrowdAgent::HandleBehaviorEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");

	AGameCrowdAgent_HandleBehaviorEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// (Final, Defined, Latent, PreOperator, NetReliable, Static, Const)

void AGameCrowdAgent::STATIC_ActivateInstancedBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	AGameCrowdAgent_ActivateInstancedBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateBehavior
// (Iterator, Exec, HasOptionalParms)

void AGameCrowdAgent::ActivateBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	AGameCrowdAgent_ActivateBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_ResetSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	AGameCrowdAgent_ResetSeePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// (Final, Iterator, Latent, Net, NetReliable, Exec, Native, Static, Const)

void AGameCrowdAgent::STATIC_TryRandomBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	AGameCrowdAgent_TryRandomBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// (Final, Defined, Latent, Singular, Exec, HasOptionalParms)

void AGameCrowdAgent::NotifySeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	AGameCrowdAgent_NotifySeePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_PlaySpawnBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	AGameCrowdAgent_PlaySpawnBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// (Final, Iterator, Latent, PreOperator, Exec, HasOptionalParms)

void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	AGameCrowdAgent_HandlePotentialAgentEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// (Final, Defined, Net, Exec, HasOptionalParms)

void AGameCrowdAgent::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	AGameCrowdAgent_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdAgent::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	AGameCrowdAgent_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// (Defined, PreOperator, Singular, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_OnPlayAgentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	AGameCrowdAgent_OnPlayAgentAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitializeAgent
// (Iterator, PreOperator, Native, Static, Const)

void AGameCrowdAgent::STATIC_InitializeAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	AGameCrowdAgent_InitializeAgent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// (PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdAgent::STATIC_GetAttemptedSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");

	AGameCrowdAgent_GetAttemptedSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetLighting
// (Defined, Iterator, Singular, Exec, Native, Static, Const)

void AGameCrowdAgent::STATIC_SetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	AGameCrowdAgent_SetLighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void AGameCrowdAgent::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	AGameCrowdAgent_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AGameCrowdAgent::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	AGameCrowdAgent_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_ResetPooledAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	AGameCrowdAgent_ResetPooledAgent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.KillAgent
// (Final, Defined, Iterator, Singular, Exec, HasOptionalParms)

void AGameCrowdAgent::KillAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	AGameCrowdAgent_KillAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdAgent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	AGameCrowdAgent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// (Final, Defined, Iterator, Singular, Exec, Native, Static, Const)

void AGameCrowdAgent::STATIC_SetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	AGameCrowdAgent_SetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// (Final, Net, Exec, HasOptionalParms)

void AGameCrowdAgent::SetCurrentDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	AGameCrowdAgent_SetCurrentDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// (Latent, Net, Exec, HasOptionalParms)

void AGameCrowdAgent::WaitForGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	AGameCrowdAgent_WaitForGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// (Final, Latent, Singular, Net, Simulated, Native, Static, Const)

void AGameCrowdAgent::STATIC_PickBehaviorFrom()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	AGameCrowdAgent_PickBehaviorFrom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.IsPanicked
// (Defined, Latent, PreOperator, Singular, Native, Static, Const)

void AGameCrowdAgent::STATIC_IsPanicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

	AGameCrowdAgent_IsPanicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// (Iterator, Latent, Singular, Net, HasOptionalParms)

void AGameCrowdAgent::FellOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	AGameCrowdAgent_FellOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Static, HasOptionalParms)

void AGameCrowdAgent::STATIC_GetCollisionExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetCollisionExtent");

	AGameCrowdAgent_GetCollisionExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// (Defined, Latent, Singular, Net, Exec, Static, Const)

void AGameCrowdAgentSkeletal::STATIC_CreateAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	AGameCrowdAgentSkeletal_CreateAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// (Latent, Simulated, HasOptionalParms)

void AGameCrowdAgentSkeletal::OnAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	AGameCrowdAgentSkeletal_OnAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// (Final, Defined, Net, Exec, HasOptionalParms)

void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	AGameCrowdAgentSkeletal_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// (Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	AGameCrowdAgentSkeletal_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// (Final, Latent, Exec, HasOptionalParms)

void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	AGameCrowdAgentSkeletal_ClearLatentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// (Defined, PreOperator, Singular, Simulated, Native, Static, Const)

void AGameCrowdAgentSkeletal::STATIC_OnPlayAgentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// (Defined, Latent, Singular, Exec, Native, Static, Const)

void AGameCrowdAgentSkeletal::STATIC_SetRootMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	AGameCrowdAgentSkeletal_SetRootMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// (Defined, Iterator, Latent, Singular, Net, Simulated, Native, Static, Const)

void AGameCrowdAgentSkeletal::STATIC_PlayDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	AGameCrowdAgentSkeletal_PlayDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// (Defined, Iterator, Singular, Exec, Native, Static, Const)

void AGameCrowdAgentSkeletal::STATIC_SetLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	AGameCrowdAgentSkeletal_SetLighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	AGameCrowdAgentSkeletal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void AGameCrowdAgentSM::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.StopBehavior");

	AGameCrowdAgentSM_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// (Iterator, Exec, HasOptionalParms)

void AGameCrowdAgentSM::ActivateBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");

	AGameCrowdAgentSM_ActivateBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// (Final, Latent, Net, Exec, Static, Const)

void AGameCrowdAgentSM::STATIC_ChangeDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");

	AGameCrowdAgentSM_ChangeDebugColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// (Final, Defined, Latent, Native, Static, Const)

void AGameCrowdAgentSM::STATIC_InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.InitDebugColor");

	AGameCrowdAgentSM_InitDebugColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdAgentSM::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");

	AGameCrowdAgentSM_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// (Final, Iterator, PreOperator, Net, NetReliable, Static, Const)

void UGameCrowdAgentBehavior::STATIC_AllowBehaviorAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	UGameCrowdAgentBehavior_AllowBehaviorAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Static, Const)

void UGameCrowdAgentBehavior::STATIC_AllowThisDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	UGameCrowdAgentBehavior_AllowThisDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// (Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void UGameCrowdAgentBehavior::PropagateViralBehaviorTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");

	UGameCrowdAgentBehavior_GetBehaviorInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// (Final, Latent, PreOperator, NetReliable, Static, Const)

void UGameCrowdAgentBehavior::STATIC_ActivatedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	UGameCrowdAgentBehavior_ActivatedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	UGameCrowdAgentBehavior_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// (Defined, Latent, Net, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_ChangingDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	UGameCrowdAgentBehavior_ChangingDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	UGameCrowdAgentBehavior_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// (Latent, Simulated, HasOptionalParms)

void UGameCrowdAgentBehavior::OnAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	UGameCrowdAgentBehavior_OnAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void UGameCrowdAgentBehavior::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	UGameCrowdAgentBehavior_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// (Latent, Native, Static, Const)

void UGameCrowdAgentBehavior::STATIC_InitBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	UGameCrowdAgentBehavior_InitBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// (Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

	UGameCrowdAgentBehavior_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// (Final, Defined, PreOperator, Exec, HasOptionalParms)

void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	UGameCrowdAgentBehavior_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// (Iterator, Latent, Singular, Exec, Static, Const)

void UGameCrowdAgentBehavior::STATIC_CanBeUsedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	UGameCrowdAgentBehavior_CanBeUsedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UGameCrowdAgentBehavior::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

	UGameCrowdAgentBehavior_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// (Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameCrowdAgentBehavior::STATIC_ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

	UGameCrowdAgentBehavior_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// (Final, Latent, Net, NetReliable, Exec, Native, Static, Const)

void UGameCrowdAgentBehavior::STATIC_TriggerCrowdBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");

	UGameCrowdAgentBehavior_TriggerCrowdBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_PlayAnimation::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	UGameCrowdBehavior_PlayAnimation_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// (Final, Iterator, Latent, Singular, Net, Simulated, Native, Static, Const)

void UGameCrowdBehavior_PlayAnimation::STATIC_PlayAgentAnimationNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// (Latent, Simulated, HasOptionalParms)

void UGameCrowdBehavior_PlayAnimation::OnAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// (Final, Iterator, Latent, Singular, Exec, Native, Static, Const)

void UGameCrowdBehavior_PlayAnimation::STATIC_SetSequenceOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// (Final, Defined, PreOperator, Exec, HasOptionalParms)

void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// (Latent, Native, Static, Const)

void UGameCrowdBehavior_PlayAnimation::STATIC_InitBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	UGameCrowdBehavior_PlayAnimation_InitBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// (Final, Iterator, PreOperator, Net, NetReliable, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_AllowBehaviorAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_AllowThisDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// (Final, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	UGameCrowdBehavior_RunFromPanic_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// (Latent, Native, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_InitBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	UGameCrowdBehavior_RunFromPanic_InitBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// (Final, Latent, PreOperator, NetReliable, Static, Const)

void UGameCrowdBehavior_RunFromPanic::STATIC_ActivatedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	UGameCrowdBehavior_WaitForGroup_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// (Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameCrowdBehavior_WaitForGroup::STATIC_ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

	UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_WaitForGroup::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// (Latent, Native, Static, Const)

void UGameCrowdBehavior_WaitForGroup::STATIC_InitBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	UGameCrowdBehavior_WaitForGroup_InitBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// (Defined, Net, Exec, HasOptionalParms)

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	UGameCrowdBehavior_WaitInQueue_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// (Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameCrowdBehavior_WaitInQueue::STATIC_ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

	UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_WaitInQueue::STATIC_GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_WaitInQueue::STATIC_GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// (Defined, Latent, Net, Exec, Static, Const)

void UGameCrowdBehavior_WaitInQueue::STATIC_ChangingDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// (Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdBehavior_WaitInQueue::STATIC_HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

	UGameCrowdBehavior_WaitInQueue_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.UpdateDestinations
// (Final, Defined, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UGameCrowdGroup::STATIC_UpdateDestinations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	UGameCrowdGroup_UpdateDestinations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.RemoveMember
// (Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UGameCrowdGroup::STATIC_RemoveMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	UGameCrowdGroup_RemoveMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.AddMember
// (Final, Iterator, Latent, Singular, NetReliable, Static, Const)

void UGameCrowdGroup::STATIC_AddMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	UGameCrowdGroup_AddMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.UnTouch
// (Final, Defined, PreOperator, Singular, Simulated)

void AGameCrowdInfoVolume::UnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.UnTouch");

	AGameCrowdInfoVolume_UnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.Touch
// (Defined, PreOperator, Singular, Simulated)

void AGameCrowdInfoVolume::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.Touch");

	AGameCrowdInfoVolume_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// (Iterator, Net, Exec, Operator, Static, HasOptionalParms)

void AGameCrowdInteractionPoint::STATIC_OnToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	AGameCrowdInteractionPoint_OnToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.Touch
// (Defined, PreOperator, Singular, Simulated)

void AGameCrowdBehaviorPoint::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.Touch");

	AGameCrowdBehaviorPoint_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// (Iterator, Singular, Net, NetReliable, Exec, Static, Const)

void AGameCrowdBehaviorPoint::STATIC_DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");

	AGameCrowdBehaviorPoint_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdBehaviorPoint::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");

	AGameCrowdBehaviorPoint_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DrawDebug
// (Final, PreOperator, Exec, HasOptionalParms)

void AGameCrowdDestination::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DrawDebug");

	AGameCrowdDestination_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// (Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdDestination::STATIC_GetDestinationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetDestinationRadius");

	AGameCrowdDestination_GetDestinationRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdDestination::STATIC_PrioritizeSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");

	AGameCrowdDestination_PrioritizeSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Static, Const)

void AGameCrowdDestination::STATIC_AnalyzeSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");

	AGameCrowdDestination_AnalyzeSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// (Final, Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdDestination::STATIC_GetSpawnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	AGameCrowdDestination_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdDestination::STATIC_GetSpawnRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnRadius");

	AGameCrowdDestination_GetSpawnRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// (Latent, Exec, HasOptionalParms)

void AGameCrowdDestination::AllowableDestinationFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	AGameCrowdDestination_AllowableDestinationFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.AtCapacity
// (Final, Defined, Latent, Singular, Simulated, Event, HasOptionalParms)

void AGameCrowdDestination::AtCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	AGameCrowdDestination_AtCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// (Defined, Iterator, Latent, PreOperator, Exec, HasOptionalParms)

void AGameCrowdDestination::IncrementCustomerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	AGameCrowdDestination_IncrementCustomerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// (PreOperator, Exec, HasOptionalParms)

void AGameCrowdDestination::DecrementCustomerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	AGameCrowdDestination_DecrementCustomerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// (Iterator, Latent, Singular, Net, Simulated, Native, Static, Const)

void AGameCrowdDestination::STATIC_PickNewDestinationFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	AGameCrowdDestination_PickNewDestinationFor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedDestination
// (Final, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdDestination::ReachedDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	AGameCrowdDestination_ReachedDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AGameCrowdDestination::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.Destroyed");

	AGameCrowdDestination_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdDestination::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	AGameCrowdDestination_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedByAgent
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdDestination::STATIC_ReachedByAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	AGameCrowdDestination_ReachedByAgent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// (Final, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_HasCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	AGameCrowdDestinationQueuePoint_HasCustomer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// (Latent, PreOperator, Net, Exec, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_ClearQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	AGameCrowdDestinationQueuePoint_ClearQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// (Latent, Singular, NetReliable, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_AddCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	AGameCrowdDestinationQueuePoint_AddCustomer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// (Final, Defined, Iterator, Singular, NetReliable, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_ActuallyAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// (Defined, Iterator, PreOperator, Singular, NetReliable, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_AdvanceCustomerTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// (Final, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdDestinationQueuePoint::ReachedDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	AGameCrowdDestinationQueuePoint_ReachedDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_HasSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	AGameCrowdDestinationQueuePoint_HasSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdDestinationQueuePoint::STATIC_QueueReachedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	AGameCrowdDestinationQueuePoint_QueueReachedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// (Defined, Iterator, Latent, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::CreateNewAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	AGameCrowdPopulationManager_CreateNewAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.Warmup
// (PreOperator, Simulated, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_Warmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Warmup");

	AGameCrowdPopulationManager_Warmup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// (Defined, Iterator, Net, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_SpawnAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	AGameCrowdPopulationManager_SpawnAgent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// (Final, Defined, Iterator, Net, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_SpawnAgentByIdx()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");

	AGameCrowdPopulationManager_SpawnAgentByIdx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_ValidateSpawnAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	AGameCrowdPopulationManager_ValidateSpawnAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// (Defined, Iterator, Latent, Singular, NetReliable, Static, Const)

void AGameCrowdPopulationManager::STATIC_AddPrioritizedSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Static, Const)

void AGameCrowdPopulationManager::STATIC_AnalyzeSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// (Final, Defined, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::PrioritizeSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_StaticGetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");

	AGameCrowdPopulationManager_StaticGetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Static, Const)

void AGameCrowdPopulationManager::STATIC_GetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");

	AGameCrowdPopulationManager_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// (Final, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::PickSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	AGameCrowdPopulationManager_PickSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// (Final, Defined, Iterator, Net, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::UpdateSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");

	AGameCrowdPopulationManager_UpdateSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// (Singular, Net, NetReliable, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_UpdateAllSpawners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");

	AGameCrowdPopulationManager_UpdateAllSpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void AGameCrowdPopulationManager::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	AGameCrowdPopulationManager_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// (Final, Defined, PreOperator, Singular, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_ShouldDebugDestinations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");

	AGameCrowdPopulationManager_ShouldDebugDestinations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// (Final, Defined, Latent, PreOperator, Singular, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_IsSpawningActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");

	AGameCrowdPopulationManager_IsSpawningActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void AGameCrowdPopulationManager::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	AGameCrowdPopulationManager_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Static, Const)

void AGameCrowdPopulationManager::STATIC_AgentDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	AGameCrowdPopulationManager_AgentDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// (Defined, Iterator, PreOperator, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::FlushAllAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");

	AGameCrowdPopulationManager_FlushAllAgents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// (Final, Iterator, PreOperator, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::FlushAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAgents");

	AGameCrowdPopulationManager_FlushAgents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// (Final, Defined, Iterator, Latent, Exec, HasOptionalParms)

void AGameCrowdPopulationManager::CreateSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");

	AGameCrowdPopulationManager_CreateSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// (Final, Iterator, Latent, PreOperator, Exec, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_SetCrowdInfoVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");

	AGameCrowdPopulationManager_SetCrowdInfoVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void AGameCrowdPopulationManager::STATIC_RemoveSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");

	AGameCrowdPopulationManager_RemoveSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// (PreOperator, Singular, NetReliable, Static, Const)

void AGameCrowdPopulationManager::STATIC_AddSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");

	AGameCrowdPopulationManager_AddSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void AGameCrowdPopulationManager::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");

	AGameCrowdPopulationManager_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	AGameCrowdPopulationManager_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, HasOptionalParms)

void AGameCrowdReplicationActor::ReplicatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	AGameCrowdReplicationActor_ReplicatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.ChooseCameraShake
// (Final, PreOperator, Net, Exec, Static, Const)

void AGameExplosionActor::STATIC_ChooseCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	AGameExplosionActor_ChooseCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// (Final, Latent, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpawnCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");

	AGameExplosionActor_SpawnCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Static, Const)

void AGameExplosionActor::STATIC_DoExplosionCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	AGameExplosionActor_DoExplosionCameraEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DrawDebug
// (Final, PreOperator, Exec, HasOptionalParms)

void AGameExplosionActor::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	AGameExplosionActor_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// (Final, Iterator, Latent, Net, NetReliable, Exec, Static, Const)

void AGameExplosionActor::STATIC_DelayedExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");

	AGameExplosionActor_DelayedExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Explode
// (Final, Latent, Singular, Net, HasOptionalParms)

void AGameExplosionActor::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	AGameExplosionActor_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// (Final, Defined, Iterator, Latent, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpawnExplosionFogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	AGameExplosionActor_SpawnExplosionFogVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// (Defined, Iterator, Latent, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpawnExplosionDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	AGameExplosionActor_SpawnExplosionDecal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// (PreOperator, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpawnExplosionParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	AGameExplosionActor_SpawnExplosionParticleSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// (Iterator, Singular, Net, NetReliable, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_UpdateExplosionTemplateWithPerMaterialFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// (Defined, Latent, PreOperator, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpecialCringeEffectsFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");

	AGameExplosionActor_SpecialCringeEffectsFor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// (Defined, Singular, Net, Exec, Native, Static, Const)

void AGameExplosionActor::STATIC_SpecialPawnEffectsFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");

	AGameExplosionActor_SpecialPawnEffectsFor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void AGameExplosionActor::STATIC_GetEffectCheckRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");

	AGameExplosionActor_GetEffectCheckRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionDamage
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Static, Const)

void AGameExplosionActor::STATIC_DoExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	AGameExplosionActor_DoExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Static, Const)

void AGameExplosionActor::STATIC_BoxDistanceToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");

	AGameExplosionActor_BoxDistanceToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.IsBehindExplosion
// (Final, Defined, Iterator, PreOperator, Singular, Native, Static, Const)

void AGameExplosionActor::STATIC_IsBehindExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	AGameExplosionActor_IsBehindExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Static, Const)

void AGameExplosionActor::STATIC_DoFullDamageToActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	AGameExplosionActor_DoFullDamageToActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// (Final, Defined, NetReliable, Native, Static, HasOptionalParms)

void AGameExplosionActor::STATIC_GetPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	AGameExplosionActor_GetPhysicalMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.PreBeginPlay
// (Latent, Net, Simulated)

void AGameExplosionActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	AGameExplosionActor_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// (Defined, Iterator, Net, NetReliable, Simulated, Native, Static, Const)

void AGamePawn::STATIC_ReattachMeshWithoutBeingSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	AGamePawn_ReattachMeshWithoutBeingSeen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMesh
// (Final, Iterator, Net, NetReliable, Simulated, Native, Static, Const)

void AGamePawn::STATIC_ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	AGamePawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.UpdateShadowSettings
// (Defined, Iterator, Net, Exec, HasOptionalParms)

void AGamePawn::UpdateShadowSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	AGamePawn_UpdateShadowSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.ConsoleCommand
// (Iterator, Net, Event, Operator, HasOptionalParms)

void ADebugCameraController::ConsoleCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ConsoleCommand");

	ADebugCameraController_ConsoleCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// (Latent, PreOperator, Singular, Exec, Native, Static, Const)

void ADebugCameraController::STATIC_ShowDebugSelectedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");

	ADebugCameraController_ShowDebugSelectedInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NativeInputKey
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Native, Static, Const)

void ADebugCameraController::STATIC_NativeInputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NativeInputKey");

	ADebugCameraController_NativeInputKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.InitDebugInputSystem
// (Iterator, Latent, Native, Static, Const)

void ADebugCameraController::STATIC_InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.InitDebugInputSystem");

	ADebugCameraController_InitDebugInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.DisableDebugCamera
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Static, Const)

void ADebugCameraController::STATIC_DisableDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.DisableDebugCamera");

	ADebugCameraController_DisableDebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NormalSpeed
// (Defined, Iterator, PreOperator, Simulated, Native, Static, Const)

void ADebugCameraController::STATIC_NormalSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NormalSpeed");

	ADebugCameraController_NormalSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.MoreSpeed
// (Final, Defined, Singular, Net, NetReliable, Native, Static, Const)

void ADebugCameraController::STATIC_MoreSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.MoreSpeed");

	ADebugCameraController_MoreSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SetFreezeRendering
// (Final, Iterator, Singular, Exec, Native, Static, Const)

void ADebugCameraController::STATIC_SetFreezeRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SetFreezeRendering");

	ADebugCameraController_SetFreezeRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnDeactivate
// (Final, PreOperator, Singular, Simulated, Native, Static, Const)

void ADebugCameraController::STATIC_OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnDeactivate");

	ADebugCameraController_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnActivate
// (PreOperator, Singular, Simulated, Native, Static, Const)

void ADebugCameraController::STATIC_OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnActivate");

	ADebugCameraController_OnActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PostBeginPlay
// (Final, Latent, Net, Simulated)

void ADebugCameraController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PostBeginPlay");

	ADebugCameraController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.Unselect
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, Const)

void ADebugCameraController::STATIC_Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.Unselect");

	ADebugCameraController_Unselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SecondarySelect
// (Defined, Latent, Exec, Native, Static, Const)

void ADebugCameraController::STATIC_SecondarySelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SecondarySelect");

	ADebugCameraController_SecondarySelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PrimarySelect
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Native, Static, Const)

void ADebugCameraController::STATIC_PrimarySelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PrimarySelect");

	ADebugCameraController_PrimarySelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderKismetHud
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void AMobileHUD::STATIC_RenderKismetHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderKismetHud");

	AMobileHUD_RenderKismetHud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.AddKismetRenderEvent
// (Iterator, Latent, Singular, NetReliable, Static, Const)

void AMobileHUD::STATIC_AddKismetRenderEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.AddKismetRenderEvent");

	AMobileHUD_AddKismetRenderEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RefreshKismetLinks
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void AMobileHUD::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RefreshKismetLinks");

	AMobileHUD_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// (Iterator, Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileZone_Slider()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Slider");

	AMobileHUD_DrawMobileZone_Slider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileTilt
// (Final, Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileTilt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileTilt");

	AMobileHUD_DrawMobileTilt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// (Final, Iterator, Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileZone_Trackball()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");

	AMobileHUD_DrawMobileZone_Trackball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// (Final, Defined, Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileZone_Joystick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");

	AMobileHUD_DrawMobileZone_Joystick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Button
// (Defined, Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileZone_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Button");

	AMobileHUD_DrawMobileZone_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// (Final, Defined, Iterator, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawInputZoneOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputZoneOverlays");

	AMobileHUD_DrawInputZoneOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderMobileMenu
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void AMobileHUD::STATIC_RenderMobileMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderMobileMenu");

	AMobileHUD_RenderMobileMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.ShowMobileHud
// (Defined, Latent, PreOperator, Singular, Exec, Native, Static, Const)

void AMobileHUD::STATIC_ShowMobileHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ShowMobileHud");

	AMobileHUD_ShowMobileHud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileDebugString
// (Latent, Simulated, Exec, Static, Const)

void AMobileHUD::STATIC_DrawMobileDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileDebugString");

	AMobileHUD_DrawMobileDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void AMobileHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	AMobileHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AMobileHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	AMobileHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.AddKismetEventHandler
// (Defined, Latent, Singular, NetReliable, Static, Const)

void UMobileInputZone::STATIC_AddKismetEventHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.AddKismetEventHandler");

	UMobileInputZone_AddKismetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPostDrawZone
// (Defined, Iterator, Latent, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnPostDrawZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPostDrawZone");

	UMobileInputZone_OnPostDrawZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPreDrawZone
// (Final, Defined, Iterator, Latent, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnPreDrawZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPreDrawZone");

	UMobileInputZone_OnPreDrawZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnProcessSlide
// (Defined, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnProcessSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessSlide");

	UMobileInputZone_OnProcessSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// (Iterator, Latent, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnDoubleTapDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");

	UMobileInputZone_OnDoubleTapDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnTapDelegate
// (Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnTapDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnTapDelegate");

	UMobileInputZone_OnTapDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// (Final, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileInputZone::OnProcessInputDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessInputDelegate");

	UMobileInputZone_OnProcessInputDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.DeactivateZone
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, Static, Const)

void UMobileInputZone::STATIC_DeactivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.DeactivateZone");

	UMobileInputZone_DeactivateZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.ActivateZone
// (Iterator, Latent, PreOperator, NetReliable, Static, Const)

void UMobileInputZone::STATIC_ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.ActivateZone");

	UMobileInputZone_ActivateZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.GetIconIndexes
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuObject::STATIC_GetIconIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetIconIndexes");

	UMobileMenuObject_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuObject::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.RenderObject");

	UMobileMenuObject_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.SetCanvasPos
// (Final, Defined, Latent, PreOperator, Exec, Native, Static, Const)

void UMobileMenuObject::STATIC_SetCanvasPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.SetCanvasPos");

	UMobileMenuObject_SetCanvasPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.InitMenuObject
// (Final, Singular, Native, Static, Const)

void UMobileMenuObject::STATIC_InitMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.InitMenuObject");

	UMobileMenuObject_InitMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.GetRealPosition
// (Final, Defined, Latent, PreOperator, Exec, HasOptionalParms)

void UMobileMenuObject::GetRealPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetRealPosition");

	UMobileMenuObject_GetRealPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuObject::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.OnTouch");

	UMobileMenuObject_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuImage.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuImage::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuImage.RenderObject");

	UMobileMenuImage_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.MobileMenuCommand
// (Iterator, Net, NetReliable, Native, Static, Const)

void UMobileMenuScene::STATIC_MobileMenuCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MobileMenuCommand");

	UMobileMenuScene_MobileMenuCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.FindMenuObject
// (Final, Defined, PreOperator, Net, Simulated, Exec, Static, Const)

void UMobileMenuScene::STATIC_FindMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.FindMenuObject");

	UMobileMenuScene_FindMenuObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.CleanUpScene
// (Defined, Iterator, PreOperator, Net, Exec, Static, Const)

void UMobileMenuScene::STATIC_CleanUpScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.CleanUpScene");

	UMobileMenuScene_CleanUpScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closed
// (Defined, Latent, PreOperator, Net, Exec, Static, Const)

void UMobileMenuScene::STATIC_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closed");

	UMobileMenuScene_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closing
// (Final, Iterator, Latent, PreOperator, Net, Exec, Static, Const)

void UMobileMenuScene::STATIC_Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closing");

	UMobileMenuScene_Closing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.MadeTopMenu
// (Defined, Iterator, NetReliable, Native, Static, Const)

void UMobileMenuScene::STATIC_MadeTopMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MadeTopMenu");

	UMobileMenuScene_MadeTopMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Opened
// (Latent, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobileMenuScene::STATIC_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Opened");

	UMobileMenuScene_Opened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.OnSceneTouch
// (Final, Defined, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuScene::OnSceneTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnSceneTouch");

	UMobileMenuScene_OnSceneTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuScene::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnTouch");

	UMobileMenuScene_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.PostRenderMenuObject
// (NetReliable, Simulated, Native, Static, Const)

void UMobileMenuScene::STATIC_PostRenderMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PostRenderMenuObject");

	UMobileMenuScene_PostRenderMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// (Final, Defined, Latent, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuScene::STATIC_PreRenderMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PreRenderMenuObject");

	UMobileMenuScene_PreRenderMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.RenderScene
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuScene::STATIC_RenderScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.RenderScene");

	UMobileMenuScene_RenderScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetSceneFont
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuScene::STATIC_GetSceneFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetSceneFont");

	UMobileMenuScene_GetSceneFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.InitMenuScene
// (Final, Defined, Iterator, Latent, PreOperator, Exec, HasOptionalParms)

void UMobileMenuScene::InitMenuScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.InitMenuScene");

	UMobileMenuScene_InitMenuScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuScene::STATIC_GetGlobalScaleY()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleY");

	UMobileMenuScene_GetGlobalScaleY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuScene::STATIC_GetGlobalScaleX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleX");

	UMobileMenuScene_GetGlobalScaleX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// (Defined, Latent, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobilePlayerInput::STATIC_OpenMobileMenuMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");

	UMobilePlayerInput_OpenMobileMenuMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// (Final, Latent, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobilePlayerInput::STATIC_OpenMobileMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenu");

	UMobilePlayerInput_OpenMobileMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// (Iterator, Net, NetReliable, Native, Static, Const)

void UMobilePlayerInput::STATIC_MobileMenuCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.MobileMenuCommand");

	UMobilePlayerInput_MobileMenuCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// (Defined, Exec, Native, Static, Const)

void UMobilePlayerInput::STATIC_SceneRenderToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SceneRenderToggle");

	UMobilePlayerInput_SceneRenderToggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PreClientTravel
// (Final, Defined, Iterator, PreOperator, Net, Simulated, HasOptionalParms)

void UMobilePlayerInput::PreClientTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PreClientTravel");

	UMobilePlayerInput_PreClientTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RenderMenus
// (Net, Exec, HasOptionalParms)

void UMobilePlayerInput::RenderMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RenderMenus");

	UMobilePlayerInput_RenderMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseAllMenus
// (Iterator, Latent, Exec, HasOptionalParms)

void UMobilePlayerInput::CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseAllMenus");

	UMobilePlayerInput_CloseAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseMenuScene
// (Final, Iterator, Latent, Exec, HasOptionalParms)

void UMobilePlayerInput::CloseMenuScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseMenuScene");

	UMobilePlayerInput_CloseMenuScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMenuScene
// (Final, Defined, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobilePlayerInput::OpenMenuScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMenuScene");

	UMobilePlayerInput_OpenMenuScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// (Latent, Singular, Exec, Native, Static, Const)

void UMobilePlayerInput::STATIC_SetMobileInputConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");

	UMobilePlayerInput_SetMobileInputConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// (Defined, Latent, PreOperator, NetReliable, Static, Const)

void UMobilePlayerInput::STATIC_ActivateInputGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ActivateInputGroup");

	UMobilePlayerInput_ActivateInputGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.GetCurrentZones
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobilePlayerInput::STATIC_GetCurrentZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.GetCurrentZones");

	UMobilePlayerInput_GetCurrentZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.HasZones
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobilePlayerInput::STATIC_HasZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.HasZones");

	UMobilePlayerInput_HasZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.FindorAddZone
// (Iterator, PreOperator, Net, Simulated, Exec, Static, Const)

void UMobilePlayerInput::STATIC_FindorAddZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindorAddZone");

	UMobilePlayerInput_FindorAddZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.FindZone
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Static, Const)

void UMobilePlayerInput::STATIC_FindZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindZone");

	UMobilePlayerInput_FindZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// (Final, Defined, Latent, Singular, NetReliable, Static, Const)

void UMobilePlayerInput::STATIC_AddKismetRawInputEventHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");

	UMobilePlayerInput_AddKismetRawInputEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// (Defined, Latent, Singular, NetReliable, Static, Const)

void UMobilePlayerInput::STATIC_AddKismetEventHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");

	UMobilePlayerInput_AddKismetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void UMobilePlayerInput::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");

	UMobilePlayerInput_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Static, Const)

void UMobilePlayerInput::STATIC_SwapZoneOwners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SwapZoneOwners");

	UMobilePlayerInput_SwapZoneOwners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitializeInputZones
// (Final, Iterator, PreOperator, Native, Static, Const)

void UMobilePlayerInput::STATIC_InitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitializeInputZones");

	UMobilePlayerInput_InitializeInputZones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitTouchSystem
// (Iterator, Singular, Native, Static, Const)

void UMobilePlayerInput::STATIC_InitTouchSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitTouchSystem");

	UMobilePlayerInput_InitTouchSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// (Final, Iterator, Singular, Net, NetReliable, Exec, Native, Operator, HasOptionalParms)

void UMobilePlayerInput::ClientInitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");

	UMobilePlayerInput_ClientInitInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitInputSystem
// (Defined, Net, NetReliable, HasOptionalParms)

void UMobilePlayerInput::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitInputSystem");

	UMobilePlayerInput_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Static, Const)

void UMobilePlayerInput::STATIC_ProcessWorldTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessWorldTouch");

	UMobilePlayerInput_ProcessWorldTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputAxis
// (Final, Defined, PreOperator, Exec, Native, Static, Const)

void UMobilePlayerInput::STATIC_SendInputAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputAxis");

	UMobilePlayerInput_SendInputAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputKey
// (Iterator, PreOperator, Exec, Native, Static, Const)

void UMobilePlayerInput::STATIC_SendInputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputKey");

	UMobilePlayerInput_SendInputKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// (Iterator, Singular, Net, Exec, Static, Const)

void UMobilePlayerInput::STATIC_ConditionalUpdateInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");

	UMobilePlayerInput_ConditionalUpdateInputZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Native, Static, Const)

void UMobilePlayerInput::STATIC_NativeInitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");

	UMobilePlayerInput_NativeInitializeInputZones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, Static, Const)

void UMobilePlayerInput::STATIC_NativeInitializeInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");

	UMobilePlayerInput_NativeInitializeInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnInputTouch
// (Final, Iterator, Latent, Singular, Exec, HasOptionalParms)

void UMobilePlayerInput::OnInputTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnInputTouch");

	UMobilePlayerInput_OnInputTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// (PreOperator, Singular, Exec, HasOptionalParms)

void UMobilePlayerInput::OnPreviewTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnPreviewTouch");

	UMobilePlayerInput_OnPreviewTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// (Defined, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");

	UMobilePlayerInput_OnTouchNotHandledInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PlayerInput
// (Final, Defined, Singular, NetReliable)

void UMobilePlayerInput::PlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PlayerInput");

	UMobilePlayerInput_PlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CancelMobileInput
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)

void UMobilePlayerInput::CancelMobileInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CancelMobileInput");

	UMobilePlayerInput_CancelMobileInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Static, Const)

void UMobilePlayerInput::STATIC_ProcessMobileInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessMobileInput");

	UMobilePlayerInput_ProcessMobileInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// (Iterator, Latent, Singular, Net, Simulated, HasOptionalParms)

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// (Final, Latent, PreOperator, Net, Exec, Native, Event, Static, HasOptionalParms)

void UNavMeshGoal_OutOfViewFrom::STATIC_MustBeHiddenFromThisPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// (Iterator, PreOperator, Singular, NetReliable, Event, Operator, Static, HasOptionalParms)

void UNavMeshGoal_OutOfViewFrom::STATIC_RecycleNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// (Iterator, Latent, Singular, Net, Simulated, HasOptionalParms)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// (Final, NetReliable, Simulated, Static, Const)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::STATIC_BiasAgainstPolysWithinDistanceOfLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SecondaryViewportClient.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void USecondaryViewportClient::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SecondaryViewportClient.PostRender");

	USecondaryViewportClient_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileSecondaryViewportClient.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void UMobileSecondaryViewportClient::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileSecondaryViewportClient.PostRender");

	UMobileSecondaryViewportClient_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Static, Const)

void USeqAct_GameCrowdPopulationManagerToggle::STATIC_AgentDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");

	USeqAct_GameCrowdPopulationManagerToggle_AgentDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// (Defined, Net, NetReliable, Simulated, Exec, Static, Const)

void USeqAct_GameCrowdPopulationManagerToggle::STATIC_GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");

	USeqAct_GameCrowdPopulationManagerToggle_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// (Defined, PreOperator, Exec, HasOptionalParms)

void USeqAct_GameCrowdPopulationManagerToggle::FillCrowdSpawnInfoItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");

	USeqAct_GameCrowdPopulationManagerToggle_FillCrowdSpawnInfoItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqAct_GameCrowdPopulationManagerToggle::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqAct_GameCrowdSpawner::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	USeqAct_GameCrowdSpawner_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqAct_MobileSaveLoadValue::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");

	USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// (Defined, Iterator, Latent, PreOperator, Exec, Native, Static, Const)

void USeqAct_PlayAgentAnimation::STATIC_SetCurrentAnimationActionFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqAct_PlayAgentAnimation::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	USeqAct_PlayAgentAnimation_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRender.Render
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator)

void USeqEvent_HudRender::Render()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.Render");

	USeqEvent_HudRender_Render_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// (Final, Defined, PreOperator, Singular, Net, Simulated, HasOptionalParms)

void USeqEvent_HudRender::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.RegisterEvent");

	USeqEvent_HudRender_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// (Final, Iterator, Exec, HasOptionalParms)

void USeqEvent_MobileBase::AddToMobileInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");

	USeqEvent_MobileBase_AddToMobileInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// (Final, Defined, PreOperator, Singular, Net, Simulated, HasOptionalParms)

void USeqEvent_MobileBase::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");

	USeqEvent_MobileBase_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqEvent_MobileMotion::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");

	USeqEvent_MobileMotion_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// (Final, Iterator, Exec, HasOptionalParms)

void USeqEvent_MobileZoneBase::AddToMobileInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");

	USeqEvent_MobileZoneBase_AddToMobileInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// (Final, Defined, PreOperator, Singular, Net, Simulated, HasOptionalParms)

void USeqEvent_MobileRawInput::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");

	USeqEvent_MobileRawInput_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// (Latent, Singular, Exec, HasOptionalParms)

void UGameCameraBase::ModifyPostProcessSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	UGameCameraBase_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UGameCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	UGameCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void UGameCameraBase::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.DisplayDebug");

	UGameCameraBase_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ProcessViewRotation
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void UGameCameraBase::STATIC_ProcessViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	UGameCameraBase_ProcessViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UGameCameraBase::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	UGameCameraBase_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UGameCameraBase::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	UGameCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameCameraBase::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	UGameCameraBase_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameCameraBase::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	UGameCameraBase_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UGameThirdPersonCamera::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	UGameThirdPersonCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// (Latent, Singular, Exec, HasOptionalParms)

void UGameThirdPersonCamera::ModifyPostProcessSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	UGameThirdPersonCamera_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameThirdPersonCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	UGameThirdPersonCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void UGameThirdPersonCamera::STATIC_ProcessViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	UGameThirdPersonCamera_ProcessViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// (Defined, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UGameThirdPersonCamera::STATIC_UpdateCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	UGameThirdPersonCamera_UpdateCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// (PreOperator, Net, Simulated, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_FindBestCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	UGameThirdPersonCamera_FindBestCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// (Final, PreOperator, Singular, NetReliable, Static, Const)

void UGameThirdPersonCamera::STATIC_AdjustFocusPointInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_GetActualFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	UGameThirdPersonCamera_GetActualFocusLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// (Iterator, Net, Exec, HasOptionalParms)

void UGameThirdPersonCamera::UpdateFocusPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	UGameThirdPersonCamera_UpdateFocusPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// (Final, Defined, Iterator, PreOperator, Net, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_ClearFocusPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	UGameThirdPersonCamera_ClearFocusPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	UGameThirdPersonCamera_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// (Defined, Singular, Exec, Native, Static, Const)

void UGameThirdPersonCamera::STATIC_SetFocusOnActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	UGameThirdPersonCamera_SetFocusOnActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// (Final, Defined, Singular, Exec, Native, Static, Const)

void UGameThirdPersonCamera::STATIC_SetFocusOnLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	UGameThirdPersonCamera_SetFocusOnLoc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// (Iterator, PreOperator, Singular, NetReliable, Static, Const)

void UGameThirdPersonCamera::STATIC_AdjustTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	UGameThirdPersonCamera_AdjustTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.EndTurn
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_EndTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	UGameThirdPersonCamera_EndTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.BeginTurn
// (Defined, Latent, Net, Simulated, Static, Const)

void UGameThirdPersonCamera::STATIC_BeginTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	UGameThirdPersonCamera_BeginTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void UGameThirdPersonCamera::STATIC_PlayerUpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	UGameThirdPersonCamera_PlayerUpdateCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UGameThirdPersonCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	UGameThirdPersonCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// (Defined, Latent, PreOperator, Exec, HasOptionalParms)

void UGameThirdPersonCamera::GetDesiredFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	UGameThirdPersonCamera_GetDesiredFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UGameThirdPersonCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	UGameThirdPersonCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Reset
// (Iterator, PreOperator, Singular, NetReliable, Exec, Native, Static)

void UGameThirdPersonCamera::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	UGameThirdPersonCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// (Iterator, Latent, Singular, Net, Exec, Static, Const)

void UGameThirdPersonCamera::STATIC_CreateCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	UGameThirdPersonCamera_CreateCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// (Defined, PreOperator, Singular, NetReliable, Static, Const)

void AGamePlayerCamera::STATIC_AdjustFOVForViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	AGamePlayerCamera_AdjustFOVForViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void AGamePlayerCamera::STATIC_ProcessViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	AGamePlayerCamera_ProcessViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.ResetInterpolation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void AGamePlayerCamera::STATIC_ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	AGamePlayerCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.SetColorScale
// (Iterator, Latent, PreOperator, Exec, Native, Static, Const)

void AGamePlayerCamera::STATIC_SetColorScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	AGamePlayerCamera_SetColorScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.DisplayDebug
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)

void AGamePlayerCamera::DisplayDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	AGamePlayerCamera_DisplayDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// (Final, Singular, Net, NetReliable, Exec, Native, Static, Const)

void AGamePlayerCamera::STATIC_UpdateCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	AGamePlayerCamera_UpdateCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// (Defined, PreOperator, Singular, Native, Const)

void AGamePlayerCamera::UpdateViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	AGamePlayerCamera_UpdateViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// (Defined, PreOperator, Singular, Exec, Native, Static, Const)

void AGamePlayerCamera::STATIC_ShouldConstrainAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	AGamePlayerCamera_ShouldConstrainAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.FindBestCameraType
// (Final, PreOperator, Net, Simulated, Exec, Static, Const)

void AGamePlayerCamera::STATIC_FindBestCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	AGamePlayerCamera_FindBestCameraType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.Reset
// (Iterator, PreOperator, Singular, NetReliable, Exec, Native, Static)

void AGamePlayerCamera::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	AGamePlayerCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGamePlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	AGamePlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// (Defined, Iterator, PreOperator, Exec, Static, Const)

void AGamePlayerCamera::STATIC_CacheLastTargetBaseInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	AGamePlayerCamera_CacheLastTargetBaseInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CreateCamera
// (Final, Defined, Latent, Singular, Net, Exec, Static, Const)

void AGamePlayerCamera::STATIC_CreateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	AGamePlayerCamera_CreateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Static, Const)

void UGameThirdPersonCameraMode::STATIC_SetViewOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	UGameThirdPersonCameraMode_SetViewOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// (Latent, Singular, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// (Defined, Latent, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UGameThirdPersonCameraMode::STATIC_UpdatePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	UGameThirdPersonCameraMode_UpdatePostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Static, Const)

void UGameThirdPersonCameraMode::STATIC_DOFTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	UGameThirdPersonCameraMode_DOFTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameThirdPersonCameraMode::STATIC_GetDOFFocusLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	UGameThirdPersonCameraMode_GetDOFFocusLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static, HasOptionalParms)

void UGameThirdPersonCameraMode::STATIC_ProcessViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	UGameThirdPersonCameraMode_ProcessViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// (Iterator, Singular, Exec, Native, Static, Const)

void UGameThirdPersonCameraMode::STATIC_SetFocusPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	UGameThirdPersonCameraMode_SetFocusPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// (Latent, PreOperator, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::GetCameraWorstCaseLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// (Defined, Latent, PreOperator, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::GetDesiredFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	UGameThirdPersonCameraMode_GetDesiredFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// (Defined, Iterator, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::AdjustViewOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	UGameThirdPersonCameraMode_AdjustViewOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// (Latent, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::OnBecomeInActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	UGameThirdPersonCameraMode_OnBecomeInActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameThirdPersonCameraMode::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	UGameThirdPersonCameraMode_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UGameThirdPersonCameraMode::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.Init");

	UGameThirdPersonCameraMode_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UGameSpecialMove::STATIC_RelativeToWorldOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	UGameSpecialMove_RelativeToWorldOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// (Final, Latent, PreOperator, Simulated, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_WorldToRelativeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	UGameSpecialMove_WorldToRelativeOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ForcePawnRotation
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Static, Const)

void UGameSpecialMove::STATIC_ForcePawnRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	UGameSpecialMove_ForcePawnRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.MessageEvent
// (Defined, Iterator, Latent, Singular, NetReliable, Native, Static, Const)

void UGameSpecialMove::STATIC_MessageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	UGameSpecialMove_MessageEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// (Defined, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UGameSpecialMove::STATIC_ResetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	UGameSpecialMove_ResetFacePreciseRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, HasOptionalParms)

void UGameSpecialMove::ReachedPrecisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	UGameSpecialMove_ReachedPrecisePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// (Singular, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_SetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	UGameSpecialMove_SetFacePreciseRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// (Final, Latent, Singular, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_SetReachPreciseDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	UGameSpecialMove_SetReachPreciseDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ShouldReplicate
// (Defined, Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_ShouldReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	UGameSpecialMove_ShouldReplicate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// (Final, Iterator, Latent, PreOperator, Net, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_SpecialMoveFlagsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	UGameSpecialMove_SpecialMoveFlagsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UGameSpecialMove::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	UGameSpecialMove_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// (Iterator, Latent, PreOperator, Net, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_SpecialMoveEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	UGameSpecialMove_SpecialMoveEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// (Singular, Net, Exec, Native, Static, Const)

void UGameSpecialMove::STATIC_SpecialMoveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	UGameSpecialMove_SpecialMoveStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// (Final, Iterator, PreOperator, Singular, Native, Static, Const)

void UGameSpecialMove::STATIC_InternalCanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	UGameSpecialMove_InternalCanDoSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// (Final, Defined, Iterator, Latent, Singular, Exec, Static, Const)

void UGameSpecialMove::STATIC_CanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	UGameSpecialMove_CanDoSpecialMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// (Final, PreOperator, Singular, Exec, Static, Const)

void UGameSpecialMove::STATIC_CanOverrideSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	UGameSpecialMove_CanOverrideSpecialMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// (PreOperator, Singular, Exec, Static, Const)

void UGameSpecialMove::STATIC_CanOverrideMoveWith()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	UGameSpecialMove_CanOverrideMoveWith_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.CanChainMove
// (Final, Iterator, Latent, Singular, Exec, Static, Const)

void UGameSpecialMove::STATIC_CanChainMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	UGameSpecialMove_CanChainMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, Static, Const)

void UGameSpecialMove::STATIC_ExtractSpecialMoveFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	UGameSpecialMove_ExtractSpecialMoveFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// (Final, Defined, Singular, Native, Static, Const)

void UGameSpecialMove::STATIC_InitSpecialMoveFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	UGameSpecialMove_InitSpecialMoveFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMove
// (Defined, Singular, Native, Static, Const)

void UGameSpecialMove::STATIC_InitSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	UGameSpecialMove_InitSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.Reset
// (Iterator, PreOperator, Singular, NetReliable, Exec, Native, Static)

void UGameStateObject::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.Reset");

	UGameStateObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.PreProcessStream
// (Final, Defined, Latent, PreOperator, Net, Simulated, HasOptionalParms)

void UGameStateObject::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.PreProcessStream");

	UGameStateObject_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Static, Const)

void UGameStatsAggregator::STATIC_GetAggregateMappingIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	UGameStatsAggregator_GetAggregateMappingIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.Reset
// (Iterator, PreOperator, Singular, NetReliable, Exec, Native, Static)

void UGameStatsAggregator::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.Reset");

	UGameStatsAggregator_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PostProcessStream
// (Defined, PreOperator, Net, Simulated, HasOptionalParms)

void UGameStatsAggregator::PostProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PostProcessStream");

	UGameStatsAggregator_PostProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PreProcessStream
// (Final, Defined, Latent, PreOperator, Net, Simulated, HasOptionalParms)

void UGameStatsAggregator::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PreProcessStream");

	UGameStatsAggregator_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void ADebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostRender");

	ADebugCameraHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.DisplayMaterials
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Static, Const)

void ADebugCameraHUD::STATIC_DisplayMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.DisplayMaterials");

	ADebugCameraHUD_DisplayMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void ADebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostBeginPlay");

	ADebugCameraHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraInput.InputKey
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator)

void UDebugCameraInput::InputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraInput.InputKey");

	UDebugCameraInput_InputKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// (Defined, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdSpawnerInterface::STATIC_GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");

	UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Static, Const)

void UGameCrowdSpawnerInterface::STATIC_AgentDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	UGameCrowdSpawnerInterface_AgentDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// (Final, Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameCrowdSpawnInterface::STATIC_GetSpawnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	UGameCrowdSpawnInterface_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// (Latent, PreOperator, Singular, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal::STATIC_IsEnemyBasedOnInterpActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// (Defined, Iterator, PreOperator, Singular, NetReliable, HasOptionalParms)

void UGameAICmd_Hover_MoveToGoal::HandlePathObstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal::STATIC_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");

	UGameAICmd_Hover_MoveToGoal_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// (Defined, Latent, Singular, Net, NetReliable, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal::STATIC_MoveToGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");

	UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// (Final, PreOperator, Exec, HasOptionalParms)

void UGameAICmd_Hover_MoveToGoal_Mesh::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");

	UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// (Latent, PreOperator, Singular, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_IsEnemyBasedOnInterpActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_ShouldUpdateBreadCrumbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");

	UGameAICmd_Hover_MoveToGoal_Mesh_ShouldUpdateBreadCrumbs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HasReachedGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_ReEvaluatePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");

	UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// (Defined, Iterator, PreOperator, Singular, NetReliable, HasOptionalParms)

void UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");

	UGameAICmd_Hover_MoveToGoal_Mesh_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");

	UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");

	UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverBackToMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverBackToMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Static, Const)

void UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.OnBecomeActive
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, HasOptionalParms)

void UGameFixedCamera::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	UGameFixedCamera_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.UpdateCamera
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, HasOptionalParms)

void UGameFixedCamera::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	UGameFixedCamera_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// (Iterator, Latent, Singular, Net, Exec, Native, Static, Const)

void AGameKActorSpawnableEffect::STATIC_StartScalingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");

	AGameKActorSpawnableEffect_StartScalingDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// (Iterator, Latent, Singular, Net, HasOptionalParms)

void AGameKActorSpawnableEffect::FellOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	AGameKActorSpawnableEffect_FellOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	AGameKActorSpawnableEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// (Defined, Iterator, Latent, Singular, Exec, Native, Static, Const)

void AMobileDebugCameraController::STATIC_SetupDebugZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.SetupDebugZones");

	AMobileDebugCameraController_SetupDebugZones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitInputSystem
// (Defined, Net, NetReliable, HasOptionalParms)

void AMobileDebugCameraController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitInputSystem");

	AMobileDebugCameraController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnDeactivate
// (Final, PreOperator, Singular, Simulated, Native, Static, Const)

void AMobileDebugCameraController::STATIC_OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnDeactivate");

	AMobileDebugCameraController_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// (Iterator, Latent, Native, Static, Const)

void AMobileDebugCameraController::STATIC_InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");

	AMobileDebugCameraController_InitDebugInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnActivate
// (PreOperator, Singular, Simulated, Native, Static, Const)

void AMobileDebugCameraController::STATIC_OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnActivate");

	AMobileDebugCameraController_OnActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraInput.InputKey
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Operator)

void UMobileDebugCameraInput::InputKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraInput.InputKey");

	UMobileDebugCameraInput_InputKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraHUD.PostRender
// (Final, Defined, PreOperator, Net, Simulated, HasOptionalParms)

void AMobileDebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostRender");

	AMobileDebugCameraHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Static, Const)

void AMobileDebugCameraHUD::STATIC_DisplayMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");

	AMobileDebugCameraHUD_DisplayMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AMobileDebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");

	AMobileDebugCameraHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.UpdateItemViewports
// (Latent, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UMobileMenuBar::STATIC_UpdateItemViewports()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.UpdateItemViewports");

	UMobileMenuBar_UpdateItemViewports_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.SetFirstItem
// (Final, Singular, Exec, Native, Static, Const)

void UMobileMenuBar::STATIC_SetFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.SetFirstItem");

	UMobileMenuBar_SetFirstItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderItem
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuBar::STATIC_RenderItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderItem");

	UMobileMenuBar_RenderItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuBar::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderObject");

	UMobileMenuBar_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuBar::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.OnTouch");

	UMobileMenuBar_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.GetSelected
// (Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuBar::STATIC_GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.GetSelected");

	UMobileMenuBar_GetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.Num
// (Iterator, Latent, PreOperator, Singular, Net, Operator, Static, HasOptionalParms)

void UMobileMenuBar::STATIC_Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.Num");

	UMobileMenuBar_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.AddItem
// (Final, PreOperator, Singular, NetReliable, Native)

void UMobileMenuBar::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.AddItem");

	UMobileMenuBar_AddItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.InitMenuObject
// (Final, Singular, Native, Static, Const)

void UMobileMenuBar::STATIC_InitMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.InitMenuObject");

	UMobileMenuBar_InitMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBarItem.RenderItem
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuBarItem::STATIC_RenderItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBarItem.RenderItem");

	UMobileMenuBarItem_RenderItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderCaption
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuButton::STATIC_RenderCaption()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderCaption");

	UMobileMenuButton_RenderCaption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuButton::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderObject");

	UMobileMenuButton_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.InitMenuObject
// (Final, Singular, Native, Static, Const)

void UMobileMenuButton::STATIC_InitMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.InitMenuObject");

	UMobileMenuButton_InitMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.GetIconIndexes
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuElement::STATIC_GetIconIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.GetIconIndexes");

	UMobileMenuElement_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.RenderElement
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuElement::STATIC_RenderElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.RenderElement");

	UMobileMenuElement_RenderElement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuElement::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.OnTouch");

	UMobileMenuElement_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.RestartPlayer
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void AMobileMenuGame::STATIC_RestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.RestartPlayer");

	AMobileMenuGame_RestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.StartMatch
// (PreOperator, Const)

void AMobileMenuGame::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.StartMatch");

	AMobileMenuGame_StartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.PostLogin
// (Final, PreOperator, Net, Simulated, HasOptionalParms)

void AMobileMenuGame::PostLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.PostLogin");

	AMobileMenuGame_PostLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.GetIconIndexes
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuInventory::STATIC_GetIconIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIconIndexes");

	UMobileMenuInventory_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.RenderDragItem
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuInventory::STATIC_RenderDragItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderDragItem");

	UMobileMenuInventory_RenderDragItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuInventory::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderObject");

	UMobileMenuInventory_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// (Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuInventory::STATIC_GetIndexOfItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIndexOfItem");

	UMobileMenuInventory_GetIndexOfItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Static, Const)

void UMobileMenuInventory::STATIC_FindSlotIndexAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.FindSlotIndexAt");

	UMobileMenuInventory_FindSlotIndexAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.InitDragAt
// (Final, Iterator, Latent, Native, Static, Const)

void UMobileMenuInventory::STATIC_InitDragAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitDragAt");

	UMobileMenuInventory_InitDragAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UMobileMenuInventory::STATIC_UpdateItemInSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.UpdateItemInSlot");

	UMobileMenuInventory_UpdateItemInSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddItemToSlot
// (Final, Latent, Singular, NetReliable, Static, Const)

void UMobileMenuInventory::STATIC_AddItemToSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddItemToSlot");

	UMobileMenuInventory_AddItemToSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// (Final, Iterator, Latent, PreOperator, Singular, Net, Exec, Native, Static, Const)

void UMobileMenuInventory::STATIC_SwapItemsInSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.SwapItemsInSlots");

	UMobileMenuInventory_SwapItemsInSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuInventory::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnTouch");

	UMobileMenuInventory_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// (Defined, PreOperator, Singular, Exec, Static, Const)

void UMobileMenuInventory::STATIC_CanPutItemInSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.CanPutItemInSlot");

	UMobileMenuInventory_CanPutItemInSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.ScaleSlot
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuInventory::STATIC_ScaleSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.ScaleSlot");

	UMobileMenuInventory_ScaleSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddSlot
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Static, Const)

void UMobileMenuInventory::STATIC_AddSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddSlot");

	UMobileMenuInventory_AddSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.InitMenuObject
// (Final, Singular, Native, Static, Const)

void UMobileMenuInventory::STATIC_InitMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitMenuObject");

	UMobileMenuInventory_InitMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// (Defined, Iterator, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobileMenuInventory::STATIC_OnUpdateDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateDrag");

	UMobileMenuInventory_OnUpdateDrag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Static, Const)

void UMobileMenuInventory::STATIC_DoCanPutItemInSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot");

	UMobileMenuInventory_DoCanPutItemInSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobileMenuInventory::STATIC_OnUpdateItemInSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot");

	UMobileMenuInventory_OnUpdateItemInSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuLabel.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuLabel::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuLabel.RenderObject");

	UMobileMenuLabel_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetIconIndexes
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetIconIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetIconIndexes");

	UMobileMenuList_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.ItemScrollSize
// (Defined, Iterator, Latent, PreOperator, Singular, Native, Static, Const)

void UMobileMenuList::STATIC_ItemScrollSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.ItemScrollSize");

	UMobileMenuList_ItemScrollSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuList::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.RenderObject");

	UMobileMenuList_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.UpdateScroll
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Native, Static, Const)

void UMobileMenuList::STATIC_UpdateScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.UpdateScroll");

	UMobileMenuList_UpdateScroll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.CalculateSelectedItem
// (Latent, PreOperator, Exec, Static, Const)

void UMobileMenuList::STATIC_CalculateSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.CalculateSelectedItem");

	UMobileMenuList_CalculateSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetItemClickPosition
// (Final, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetItemClickPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetItemClickPosition");

	UMobileMenuList_GetItemClickPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuList::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.OnTouch");

	UMobileMenuList_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.SetSelectedItem
// (Final, Defined, Latent, Singular, Exec, Native, Static, Const)

void UMobileMenuList::STATIC_SetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedItem");

	UMobileMenuList_SetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetNumVisible
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetNumVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetNumVisible");

	UMobileMenuList_GetNumVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// (Iterator, Latent, Singular, Exec, Native, Static, Const)

void UMobileMenuList::STATIC_SetSelectedToVisibleIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex");

	UMobileMenuList_SetSelectedToVisibleIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetVisibleIndexOfSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected");

	UMobileMenuList_GetVisibleIndexOfSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetAmountSelected
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetAmountSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetAmountSelected");

	UMobileMenuList_GetAmountSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetSelected
// (Latent, Net, NetReliable, Simulated, Exec, Static, Const)

void UMobileMenuList::STATIC_GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetSelected");

	UMobileMenuList_GetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.Num
// (Iterator, Latent, PreOperator, Singular, Net, Operator, Static, HasOptionalParms)

void UMobileMenuList::STATIC_Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.Num");

	UMobileMenuList_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.AddItem
// (Final, PreOperator, Singular, NetReliable, Native)

void UMobileMenuList::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.AddItem");

	UMobileMenuList_AddItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.InitMenuObject
// (Final, Singular, Native, Static, Const)

void UMobileMenuList::STATIC_InitMenuObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.InitMenuObject");

	UMobileMenuList_InitMenuObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuListItem.RenderItem
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuListItem::STATIC_RenderItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuListItem.RenderItem");

	UMobileMenuListItem_RenderItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.RenderObject
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, Const)

void UMobileMenuObjectProxy::STATIC_RenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.RenderObject");

	UMobileMenuObjectProxy_RenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouch
// (Final, Iterator, PreOperator, Singular, Exec, HasOptionalParms)

void UMobileMenuObjectProxy::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouch");

	UMobileMenuObjectProxy_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// (Final, Defined, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobileMenuObjectProxy::STATIC_OnRenderObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnRenderObject");

	UMobileMenuObjectProxy_OnRenderObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// (Final, Iterator, PreOperator, Singular, Simulated, Native, Static, Const)

void UMobileMenuObjectProxy::STATIC_OnTouchEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouchEvent");

	UMobileMenuObjectProxy_OnTouchEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void AMobileTouchInputVolume::STATIC_HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDragOver");

	AMobileTouchInputVolume_HandleDragOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void AMobileTouchInputVolume::STATIC_HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");

	AMobileTouchInputVolume_HandleDoubleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleClick
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void AMobileTouchInputVolume::STATIC_HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleClick");

	AMobileTouchInputVolume_HandleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.OnToggle
// (Iterator, Net, Exec, Operator, Static, HasOptionalParms)

void AMobileTouchInputVolume::STATIC_OnToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.OnToggle");

	AMobileTouchInputVolume_OnToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDragOver
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void UTouchableElement3D::STATIC_HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDragOver");

	UTouchableElement3D_HandleDragOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDoubleClick
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void UTouchableElement3D::STATIC_HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDoubleClick");

	UTouchableElement3D_HandleDoubleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleClick
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Static, Const)

void UTouchableElement3D::STATIC_HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleClick");

	UTouchableElement3D_HandleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// (Latent, Singular, NetReliable, HasOptionalParms)

void APlayerCollectorGame::GetSeamlessTravelActorList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	APlayerCollectorGame_GetSeamlessTravelActorList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.Login
// (Singular, Net, NetReliable, HasOptionalParms)

void APlayerCollectorGame::Login()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.Login");

	APlayerCollectorGame_Login_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderImage.Render
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator)

void USeqEvent_HudRenderImage::Render()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderImage.Render");

	USeqEvent_HudRenderImage_Render_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// (Final, Iterator, Latent, PreOperator, NetReliable, HasOptionalParms)

void USeqEvent_HudRenderText::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");

	USeqEvent_HudRenderText_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderText.Render
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator)

void USeqEvent_HudRenderText::Render()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.Render");

	USeqEvent_HudRenderText_Render_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
