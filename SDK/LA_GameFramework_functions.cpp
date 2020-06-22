// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "LA_GameFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameFramework.GameAIController.GetActionString
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameAIController::GetActionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	AGameAIController_GetActionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.SetDesiredRotation
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FRotator                TargetDesiredRotation          (Parm)
// bool                           InLockDesiredRotation          (OptionalParm, Parm)
// bool                           InUnlockWhenReached            (OptionalParm, Parm)
// float                          InterpolationTime              (OptionalParm, Parm)

void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	AGameAIController_SetDesiredRotation_Params params;
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AILog_Internal
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)
// struct FName                   LogCategory                    (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)

void AGameAIController::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	AGameAIController_AILog_Internal_Params params;
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.RecordDemoAILog
// (Protected)
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)

void AGameAIController::RecordDemoAILog(const struct FString& LogText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	AGameAIController_RecordDemoAILog_Params params;
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.Destroyed
// (Defined, Event, Public)

void AGameAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	AGameAIController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// (Public)

void AGameAIController::ReachedIntermediateMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");

	AGameAIController_ReachedIntermediateMoveGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedMoveGoal
// (Public)

void AGameAIController::ReachedMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedMoveGoal");

	AGameAIController_ReachedMoveGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetDestinationOffset
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameAIController::GetDestinationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetDestinationOffset");

	AGameAIController_GetDestinationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.GetAICommandInStack
// (Native, Public)
// Parameters:
// class UClass*                  InClass                        (Const, Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	AGameAIController_GetAICommandInStack_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.FindCommandOfClass
// (Final, Native, Public)
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm, CoerceParm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	AGameAIController_FindCommandOfClass_Params params;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.DumpCommandStack
// (Final, Native, Public)

void AGameAIController::DumpCommandStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	AGameAIController_DumpCommandStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.CheckCommandCount
// (Final, Native, Public)

void AGameAIController::CheckCommandCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	AGameAIController_CheckCommandCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetActiveCommand
// (Final, Native, Public)
// Parameters:
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	AGameAIController_GetActiveCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.AbortCommand
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGameAICommand*          AbortCmd                       (Parm)
// class UClass*                  AbortClass                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	AGameAIController_AbortCommand_Params params;
	params.AbortCmd = AbortCmd;
	params.AbortClass = AbortClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.PopCommand
// (Native, Public)
// Parameters:
// class UGameAICommand*          ToBePoppedCommand              (Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	AGameAIController_PopCommand_Params params;
	params.ToBePoppedCommand = ToBePoppedCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PushCommand
// (Native, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	AGameAIController_PushCommand_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AllCommands
// (Final, Iterator, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class UGameAICommand*          Cmd                            (Parm, OutParm)

void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand** Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AllCommands");

	AGameAIController_AllCommands_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cmd != nullptr)
		*Cmd = params.Cmd;
}


// Function GameFramework.GameAICommand.HandlePathObstruction
// (Defined, Public)
// Parameters:
// class AActor*                  BlockedBy                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.HandlePathObstruction");

	UGameAICommand_HandlePathObstruction_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.MoveUnreachable
// (Public)
// Parameters:
// struct FVector                 AttemptedDest                  (Parm)
// class AActor*                  AttemptedTarget                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.MoveUnreachable");

	UGameAICommand_MoveUnreachable_Params params;
	params.AttemptedDest = AttemptedDest;
	params.AttemptedTarget = AttemptedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.NotifyNeedRepath
// (Public)

void UGameAICommand::NotifyNeedRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.NotifyNeedRepath");

	UGameAICommand_NotifyNeedRepath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDebugVerboseText
// (Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameAICommand::GetDebugVerboseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugVerboseText");

	UGameAICommand_GetDebugVerboseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.GetDebugOverheadText
// (Public, HasOutParms)
// Parameters:
// class APlayerController*       PC                             (Parm)
// TArray<struct FString>         OutText                        (Parm, OutParm, NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	UGameAICommand_GetDebugOverheadText_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function GameFramework.GameAICommand.DrawDebug
// (Event, Public)
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UGameAICommand::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	UGameAICommand_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDumpString
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameAICommand::GetDumpString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	UGameAICommand_GetDumpString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Resumed
// (Defined, Public)
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::Resumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	UGameAICommand_Resumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Paused
// (Defined, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	UGameAICommand_Paused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Popped
// (Defined, Public)

void UGameAICommand::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	UGameAICommand_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Pushed
// (Defined, Public)

void UGameAICommand::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	UGameAICommand_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PostPopped
// (Public)

void UGameAICommand::PostPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	UGameAICommand_PostPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PrePushed
// (Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	UGameAICommand_PrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowStateTransitionTo
// (Defined, Public)
// Parameters:
// struct FName                   StateName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowStateTransitionTo(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	UGameAICommand_AllowStateTransitionTo_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.AllowTransitionTo
// (Defined, Public)
// Parameters:
// class UClass*                  AttemptCommand                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	UGameAICommand_AllowTransitionTo_Params params;
	params.AttemptCommand = AttemptCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Tick
// (Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	UGameAICommand_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

	UGameAICommand_ShouldIgnoreNotifies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InternalTick
// (Final, Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::InternalTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	UGameAICommand_InternalTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalResumed
// (Final, Defined, Event, Public)
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::InternalResumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	UGameAICommand_InternalResumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPaused
// (Final, Defined, Event, Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::InternalPaused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	UGameAICommand_InternalPaused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPopped
// (Defined, Event, Public)

void UGameAICommand::InternalPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	UGameAICommand_InternalPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPushed
// (Final, Defined, Event, Public)

void UGameAICommand::InternalPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	UGameAICommand_InternalPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPrePushed
// (Final, Defined, Event, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::InternalPrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	UGameAICommand_InternalPrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommand
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::STATIC_InitCommand(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	UGameAICommand_InitCommand_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InitCommandUserActor
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  UserActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::STATIC_InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	UGameAICommand_InitCommandUserActor_Params params;
	params.AI = AI;
	params.UserActor = UserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.ClientColorFade
// (Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// struct FColor                  FadeColor                      (Parm)
// unsigned char                  FromAlpha                      (Parm)
// unsigned char                  ToAlpha                        (Parm)
// float                          FadeTime                       (Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params;
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// (Defined, Event, Public, HasDefaults)
// Parameters:
// bool                           bDesiredPauseState             (Parm)

void AGamePlayerController::WarmupPause(bool bDesiredPauseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params;
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 MovieName                      (Parm, OutParm, NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// (Final, Net, NetReliable, Simulated, Native, Event, Public, NetClient)
// Parameters:
// float                          DelayInSeconds                 (Parm)
// bool                           bAllowMovieToFinish            (Parm)
// bool                           bForceStopNonSkippable         (Parm)
// bool                           bForceStopLoadingMovie         (Parm)

void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params;
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// (Final, Net, NetReliable, Simulated, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 MovieName                      (Parm, NeedCtorLink)
// int                            InStartOfRenderingMovieFrame   (Parm)
// int                            InEndOfRenderingMovieFrame     (Parm)
// bool                           bRestrictPausing               (Parm)
// bool                           bPlayOnceFromStream            (Parm)
// bool                           bOnlyBackButtonSkipsMovie      (Parm)

void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params;
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	params.bRestrictPausing = bRestrictPausing;
	params.bPlayOnceFromStream = bPlayOnceFromStream;
	params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// (Final, Native, Static, Public)

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
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// bool                           bShowMovie                     (Parm)
// bool                           bPauseAfterHide                (OptionalParm, Parm)
// float                          PauseDuration                  (OptionalParm, Parm)
// float                          KeepPlayingDuration            (OptionalParm, Parm)
// bool                           bOverridePreviousDelays        (OptionalParm, Parm)

void AGamePlayerController::STATIC_ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params;
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   InSoundModeName                (Parm)

void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params;
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// (Defined, Simulated, Protected)
// Parameters:
// class UCameraShake*            ShakeData                      (Parm)
// float                          Scale                          (Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params;
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// (Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGamePlayerController::NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	AGamePlayerController_NotifyCrowdAgentInRadius_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// (Event, Public)

void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	AGamePlayerController_NotifyCrowdAgentRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdDebug
// (Defined, Exec, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	AGamePlayerController_CrowdDebug_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGamePlayerController::GetUIPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// (Defined, Public)
// Parameters:
// class USeqAct_ToggleMouseCursor* inAction                       (Parm)

void AGamePlayerController::OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.OnToggleMouseCursor");

	AGamePlayerController_OnToggleMouseCursor_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.EnableDebugCamera
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bEnableDebugText               (Parm)

void UGameCheatManager::EnableDebugCamera(bool bEnableDebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.EnableDebugCamera");

	UGameCheatManager_EnableDebugCamera_Params params;
	params.bEnableDebugText = bEnableDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// (Defined, Exec, HasOptionalParms, Public, HasDefaults)
// Parameters:
// bool                           bToggleDebugCameraOff          (OptionalParm, Parm)

void UGameCheatManager::TeleportPawnToCamera(bool bToggleDebugCameraOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.TeleportPawnToCamera");

	UGameCheatManager_TeleportPawnToCamera_Params params;
	params.bToggleDebugCameraOff = bToggleDebugCameraOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.ToggleDebugCamera
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// bool                           bDrawDebugText                 (OptionalParm, Parm)

void UGameCheatManager::ToggleDebugCamera(bool bDrawDebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.ToggleDebugCamera");

	UGameCheatManager_ToggleDebugCamera_Params params;
	params.bDrawDebugText = bDrawDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.PatchDebugCameraController
// (Defined, Public)

void UGameCheatManager::PatchDebugCameraController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.PatchDebugCameraController");

	UGameCheatManager_PatchDebugCameraController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitDebugColor
// (Defined, Simulated, Public)

void AGameCrowdAgent::InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitDebugColor");

	AGameCrowdAgent_InitDebugColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	AGameCrowdAgent_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetDestString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetDestString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	AGameCrowdAgent_GetDestString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.PostRenderFor
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	AGameCrowdAgent_PostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	AGameCrowdAgent_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAgent::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	AGameCrowdAgent_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// (Defined, Event, Public)

void AGameCrowdAgent::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	AGameCrowdAgent_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// (Event, Public)
// Parameters:
// class AActor*                  A                              (Parm)

void AGameCrowdAgent::OverlappedActorEvent(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	AGameCrowdAgent_OverlappedActorEvent_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TakeDamage
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AGameCrowdAgent::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	AGameCrowdAgent_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.FireDeathEvent
// (Defined, Simulated, Event, Public)

void AGameCrowdAgent::FireDeathEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	AGameCrowdAgent_FireDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayDeath
// (Native, Public)
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	AGameCrowdAgent_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  DestinationActor               (OptionalParm, Parm)

void AGameCrowdAgent::UpdateIntermediatePoint(class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	AGameCrowdAgent_UpdateIntermediatePoint_Params params;
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.CalcCamera
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	AGameCrowdAgent_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.IsIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

	AGameCrowdAgent_IsIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// (Final, Native, Public)
// Parameters:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	AGameCrowdAgent_SetCurrentBehavior_Params params;
	params.BehaviorArchetype = BehaviorArchetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopBehavior
// (Defined, Event, Public)

void AGameCrowdAgent::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	AGameCrowdAgent_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ECrowdBehaviorEvent> EventType                      (Parm)
// class AActor*                  InInstigator                   (Parm)
// bool                           bViralCause                    (Parm)
// bool                           bPropagateViralFlag            (Parm)

void AGameCrowdAgent::HandleBehaviorEvent(TEnumAsByte<ECrowdBehaviorEvent> EventType, class AActor* InInstigator, bool bViralCause, bool bPropagateViralFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");

	AGameCrowdAgent_HandleBehaviorEvent_Params params;
	params.EventType = EventType;
	params.InInstigator = InInstigator;
	params.bViralCause = bViralCause;
	params.bPropagateViralFlag = bPropagateViralFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// (Defined, Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	AGameCrowdAgent_ActivateInstancedBehavior_Params params;
	params.NewBehaviorObject = NewBehaviorObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateBehavior
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (Parm)
// class AActor*                  LookAtActor                    (OptionalParm, Parm)

void AGameCrowdAgent::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	AGameCrowdAgent_ActivateBehavior_Params params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// (Defined, Public)

void AGameCrowdAgent::ResetSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	AGameCrowdAgent_ResetSeePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// (Defined, Public)

void AGameCrowdAgent::TryRandomBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	AGameCrowdAgent_TryRandomBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AGameCrowdAgent::NotifySeePlayer(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	AGameCrowdAgent_NotifySeePlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// (Defined, Public)

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	AGameCrowdAgent_PlaySpawnBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// (Defined, Event, Public)

void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	AGameCrowdAgent_HandlePotentialAgentEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// (Simulated, Event, Public)

void AGameCrowdAgent::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	AGameCrowdAgent_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// (Simulated, Event, Public)

void AGameCrowdAgent::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	AGameCrowdAgent_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	AGameCrowdAgent_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitializeAgent
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (Const, Parm, OutParm, NeedCtorLink)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// float                          AgentWarmupTime                (Parm)
// bool                           bWarmupPosition                (Parm)
// bool                           bCheckWarmupVisibility         (Parm)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	AGameCrowdAgent_InitializeAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;
	params.AgentWarmupTime = AgentWarmupTime;
	params.bWarmupPosition = bWarmupPosition;
	params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// float                          Pct                            (Parm)
// struct FVector                 CurPos                         (Parm)
// float                          CurRadius                      (Parm)
// struct FVector                 DestPos                        (Parm)
// float                          DestRadius                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation(float Pct, const struct FVector& CurPos, float CurRadius, const struct FVector& DestPos, float DestRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");

	AGameCrowdAgent_GetAttemptedSpawnLocation_Params params;
	params.Pct = Pct;
	params.CurPos = CurPos;
	params.CurRadius = CurRadius;
	params.DestPos = DestPos;
	params.DestRadius = DestRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetLighting
// (Defined, Simulated, Public)
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	AGameCrowdAgent_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	AGameCrowdAgent_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdAgent.Destroyed
// (Defined, Simulated, Public)

void AGameCrowdAgent::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	AGameCrowdAgent_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// (Defined, Public)

void AGameCrowdAgent::ResetPooledAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	AGameCrowdAgent_ResetPooledAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.KillAgent
// (Defined, Event, Public)

void AGameCrowdAgent::KillAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	AGameCrowdAgent_KillAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostBeginPlay
// (Defined, Simulated, Public, HasDefaults)

void AGameCrowdAgent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	AGameCrowdAgent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// (Defined, Public)

void AGameCrowdAgent::SetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	AGameCrowdAgent_SetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void AGameCrowdAgent::SetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	AGameCrowdAgent_SetCurrentDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// (Defined, Event, Public)

void AGameCrowdAgent::WaitForGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	AGameCrowdAgent_WaitForGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TArray<struct FBehaviorEntry>  BehaviorList                   (Parm, NeedCtorLink)
// struct FVector                 BestCameraLoc                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	AGameCrowdAgent_PickBehaviorFrom_Params params;
	params.BehaviorList = BehaviorList;
	params.BestCameraLoc = BestCameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.IsPanicked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

	AGameCrowdAgent_IsPanicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameCrowdAgent::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	AGameCrowdAgent_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAgent::GetCollisionExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetCollisionExtent");

	AGameCrowdAgent_GetCollisionExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// (Defined, Simulated, Public)

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	AGameCrowdAgentSkeletal_CreateAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// (Defined, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	AGameCrowdAgentSkeletal_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// (Defined, Simulated, Event, Public)

void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	AGameCrowdAgentSkeletal_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// (Defined, Simulated, Event, Public)

void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	AGameCrowdAgentSkeletal_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// (Defined, Event, Public)

void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	AGameCrowdAgentSkeletal_ClearLatentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// (Native, Public)
// Parameters:
// bool                           bRootMotionEnabled             (Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	AGameCrowdAgentSkeletal_SetRootMotion_Params params;
	params.bRootMotionEnabled = bRootMotionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// (Native, Public)
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	AGameCrowdAgentSkeletal_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// (Defined, Simulated, Public)
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	AGameCrowdAgentSkeletal_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	AGameCrowdAgentSkeletal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.StopBehavior
// (Defined, Public)

void AGameCrowdAgentSM::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.StopBehavior");

	AGameCrowdAgentSM_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (Parm)
// class AActor*                  LookAtActor                    (OptionalParm, Parm)

void AGameCrowdAgentSM::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");

	AGameCrowdAgentSM_ActivateBehavior_Params params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// struct FColor                  InC                            (Parm)

void AGameCrowdAgentSM::ChangeDebugColor(const struct FColor& InC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");

	AGameCrowdAgentSM_ChangeDebugColor_Params params;
	params.InC = InC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// (Defined, Simulated, Public)

void AGameCrowdAgentSM::InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.InitDebugColor");

	AGameCrowdAgentSM_InitDebugColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdAgentSM::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");

	AGameCrowdAgentSM_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	UGameCrowdAgentBehavior_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	UGameCrowdAgentBehavior_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// (Defined, Event, Public)
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (Parm)

void UGameCrowdAgentBehavior::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");

	UGameCrowdAgentBehavior_GetBehaviorInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// (Defined, Public)
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	UGameCrowdAgentBehavior_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	UGameCrowdAgentBehavior_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// (Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	UGameCrowdAgentBehavior_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	UGameCrowdAgentBehavior_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// (Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdAgentBehavior::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	UGameCrowdAgentBehavior_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// (Public)

void UGameCrowdAgentBehavior::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	UGameCrowdAgentBehavior_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	UGameCrowdAgentBehavior_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

	UGameCrowdAgentBehavior_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// (Event, Public)

void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	UGameCrowdAgentBehavior_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 CameraLoc                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	UGameCrowdAgentBehavior_CanBeUsedBy_Params params;
	params.Agent = Agent;
	params.CameraLoc = CameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.Tick
// (Native, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameCrowdAgentBehavior::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

	UGameCrowdAgentBehavior_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

	UGameCrowdAgentBehavior_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// (Native, Static, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ECrowdBehaviorEvent> EventType                      (Parm)
// class AActor*                  Instigator                     (Parm)
// struct FVector                 AtLocation                     (Parm)
// float                          InRange                        (Parm)
// float                          InDuration                     (Parm)
// class AActor*                  BaseActor                      (OptionalParm, Parm)
// bool                           bRequireLOS                    (OptionalParm, Parm)
// class AGameCrowdBehaviorPoint* ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::STATIC_TriggerCrowdBehavior(TEnumAsByte<ECrowdBehaviorEvent> EventType, class AActor* Instigator, const struct FVector& AtLocation, float InRange, float InDuration, class AActor* BaseActor, bool bRequireLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");

	UGameCrowdAgentBehavior_TriggerCrowdBehavior_Params params;
	params.EventType = EventType;
	params.Instigator = Instigator;
	params.AtLocation = AtLocation;
	params.InRange = InRange;
	params.InDuration = InDuration;
	params.BaseActor = BaseActor;
	params.bRequireLOS = bRequireLOS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	UGameCrowdBehavior_PlayAnimation_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// (Defined, Public)

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// (Defined, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdBehavior_PlayAnimation::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// (Native, Public)

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// (Defined, Event, Public)

void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	UGameCrowdBehavior_PlayAnimation_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	UGameCrowdBehavior_RunFromPanic_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	UGameCrowdBehavior_RunFromPanic_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// (Defined, Public)
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	UGameCrowdBehavior_WaitForGroup_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

	UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	UGameCrowdBehavior_WaitForGroup_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// (Defined, Public)

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	UGameCrowdBehavior_WaitInQueue_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

	UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

	UGameCrowdBehavior_WaitInQueue_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdGroup.UpdateDestinations
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   NewDestination                 (Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	UGameCrowdGroup_UpdateDestinations_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.RemoveMember
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	UGameCrowdGroup_RemoveMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.AddMember
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	UGameCrowdGroup_AddMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.UnTouch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AGameCrowdInfoVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.UnTouch");

	AGameCrowdInfoVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.Touch
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AGameCrowdInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.Touch");

	AGameCrowdInfoVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	AGameCrowdInteractionPoint_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AGameCrowdBehaviorPoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.Touch");

	AGameCrowdBehaviorPoint_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// (Defined, Public)

void AGameCrowdBehaviorPoint::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");

	AGameCrowdBehaviorPoint_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// (Defined, Event, Public)

void AGameCrowdBehaviorPoint::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");

	AGameCrowdBehaviorPoint_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DrawDebug
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (Const, Parm, OutParm, NeedCtorLink)
// bool                           bPresistent                    (OptionalParm, Parm)

void AGameCrowdDestination::DrawDebug(bool bPresistent, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DrawDebug");

	AGameCrowdDestination_DrawDebug_Params params;
	params.bPresistent = bPresistent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameCrowdDestination::GetDestinationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetDestinationRadius");

	AGameCrowdDestination_GetDestinationRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (Const, Parm, OutParm, NeedCtorLink)
// float                          MaxSpawnDist                   (Parm)

void AGameCrowdDestination::PrioritizeSpawnPoint(float MaxSpawnDist, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");

	AGameCrowdDestination_PrioritizeSpawnPoint_Params params;
	params.MaxSpawnDist = MaxSpawnDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (Const, Parm, OutParm, NeedCtorLink)
// float                          MaxSpawnDistSq                 (Parm)
// bool                           bForceNavMeshPathing           (Parm)
// class UNavigationHandle*       NavHandle                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AnalyzeSpawnPoint(float MaxSpawnDistSq, bool bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");

	AGameCrowdDestination_AnalyzeSpawnPoint_Params params;
	params.MaxSpawnDistSq = MaxSpawnDistSq;
	params.bForceNavMeshPathing = bForceNavMeshPathing;
	params.NavHandle = NavHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	AGameCrowdDestination_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameCrowdDestination::GetSpawnRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnRadius");

	AGameCrowdDestination_GetSpawnRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// (Defined, Simulated, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	AGameCrowdDestination_AllowableDestinationFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AtCapacity
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned char                  CheckCnt                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AtCapacity(unsigned char CheckCnt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	AGameCrowdDestination_AtCapacity_Params params;
	params.CheckCnt = CheckCnt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// (Defined, Simulated, Event, Public)
// Parameters:
// class AGameCrowdAgent*         ArrivingAgent                  (Parm)

void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	AGameCrowdDestination_IncrementCustomerCount_Params params;
	params.ArrivingAgent = ArrivingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// (Defined, Simulated, Event, Public)
// Parameters:
// class AGameCrowdAgent*         DepartingAgent                 (Parm)

void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	AGameCrowdDestination_DecrementCustomerCount_Params params;
	params.DepartingAgent = DepartingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// (Defined, Simulated, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           bIgnoreRestrictions            (Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	AGameCrowdDestination_PickNewDestinationFor_Params params;
	params.Agent = Agent;
	params.bIgnoreRestrictions = bIgnoreRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedDestination
// (Defined, Simulated, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	AGameCrowdDestination_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.Destroyed
// (Defined, Simulated, Public)

void AGameCrowdDestination::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.Destroyed");

	AGameCrowdDestination_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PostBeginPlay
// (Defined, Simulated, Public)

void AGameCrowdDestination::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	AGameCrowdDestination_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedByAgent
// (Simulated, Native, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           bTestExactly                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	AGameCrowdDestination_ReachedByAgent_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;
	params.bTestExactly = bTestExactly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	AGameCrowdDestinationQueuePoint_HasCustomer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// (Defined, Simulated, Public)
// Parameters:
// class AGameCrowdAgent*         OldCustomer                    (Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	AGameCrowdDestinationQueuePoint_ClearQueue_Params params;
	params.OldCustomer = OldCustomer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// (Defined, Simulated, Public)
// Parameters:
// class AGameCrowdAgent*         NewCustomer                    (Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	AGameCrowdDestinationQueuePoint_AddCustomer_Params params;
	params.NewCustomer = NewCustomer;
	params.PreviousPosition = PreviousPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// (Final, Defined, Simulated, Private)

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// (Defined, Simulated, Public)
// Parameters:
// class AGameCrowdInteractionPoint* FrontPosition                  (Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params params;
	params.FrontPosition = FrontPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// (Defined, Simulated, Event, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestinationQueuePoint::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	AGameCrowdDestinationQueuePoint_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	AGameCrowdDestinationQueuePoint_HasSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// (Native, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	AGameCrowdDestinationQueuePoint_QueueReachedBy_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// (Defined, Event, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	AGameCrowdPopulationManager_CreateNewAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.Warmup
// (Native, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// int                            WarmupNum                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::Warmup(int WarmupNum, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Warmup");

	AGameCrowdPopulationManager_Warmup_Params params;
	params.WarmupNum = WarmupNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// (Native, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	AGameCrowdPopulationManager_SpawnAgent_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// (Native, Public)
// Parameters:
// int                            SpawnerIdx                     (Parm)
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx(int SpawnerIdx, class AGameCrowdDestination* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");

	AGameCrowdPopulationManager_SpawnAgentByIdx_Params params;
	params.SpawnerIdx = SpawnerIdx;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// class AGameCrowdDestination*   Candidate                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	AGameCrowdPopulationManager_ValidateSpawnAt_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// (Defined, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// class AGameCrowdDestination*   GCD                            (Parm)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// (Defined, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// int                            StartIndex                     (Parm)
// int                            NumToUpdate                    (Parm)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params params;
	params.StartIndex = StartIndex;
	params.NumToUpdate = NumToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// float                          DeltaTime                      (Parm)

void AGameCrowdPopulationManager::PrioritizeSpawnPoints(float DeltaTime, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// (Simulated, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> out_PlayerInfo                 (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::STATIC_StaticGetPlayerInfo(TArray<struct FCrowdSpawnerPlayerInfo>* out_PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");

	AGameCrowdPopulationManager_StaticGetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_PlayerInfo != nullptr)
		*out_PlayerInfo = params.out_PlayerInfo;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::GetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");

	AGameCrowdPopulationManager_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// class AGameCrowdDestination*   ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint(struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	AGameCrowdPopulationManager_PickSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, OutParm, NeedCtorLink)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::UpdateSpawner(float DeltaTime, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");

	AGameCrowdPopulationManager_UpdateSpawner_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameCrowdPopulationManager::UpdateAllSpawners(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");

	AGameCrowdPopulationManager_UpdateAllSpawners_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameCrowdPopulationManager::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	AGameCrowdPopulationManager_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::ShouldDebugDestinations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");

	AGameCrowdPopulationManager_ShouldDebugDestinations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");

	AGameCrowdPopulationManager_IsSpawningActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	AGameCrowdPopulationManager_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	AGameCrowdPopulationManager_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// (Defined, Event, Public)

void AGameCrowdPopulationManager::FlushAllAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");

	AGameCrowdPopulationManager_FlushAllAgents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// (Defined, Event, Public)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (Parm, NeedCtorLink)

void AGameCrowdPopulationManager::FlushAgents(const struct FCrowdSpawnInfoItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAgents");

	AGameCrowdPopulationManager_FlushAgents_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// (Defined, Event, Public)
// Parameters:
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGameCrowdPopulationManager::CreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");

	AGameCrowdPopulationManager_CreateSpawner_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// (Defined, Public)
// Parameters:
// class AGameCrowdInfoVolume*    Vol                            (Parm)

void AGameCrowdPopulationManager::SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");

	AGameCrowdPopulationManager_SetCrowdInfoVolume_Params params;
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)

void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");

	AGameCrowdPopulationManager_RemoveSpawnPoint_Params params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// (Defined, Public)
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)

void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");

	AGameCrowdPopulationManager_AddSpawnPoint_Params params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// (Event, Public)

void AGameCrowdPopulationManager::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");

	AGameCrowdPopulationManager_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// (Defined, Public)

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	AGameCrowdPopulationManager_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// (Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AGameCrowdReplicationActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	AGameCrowdReplicationActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.ChooseCameraShake
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// struct FVector                 Epicenter                      (Parm)
// class APlayerController*       PC                             (Parm)
// class UCameraShake*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	AGameExplosionActor_ChooseCameraShake_Params params;
	params.Epicenter = Epicenter;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// (Defined, Simulated, Public)

void AGameExplosionActor::SpawnCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");

	AGameExplosionActor_SpawnCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// (Defined, Simulated, Public)

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	AGameExplosionActor_DoExplosionCameraEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DrawDebug
// (Defined, Simulated, Public, HasDefaults)

void AGameExplosionActor::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	AGameExplosionActor_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// (Defined, Simulated, Public)

void AGameExplosionActor::DelayedExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");

	AGameExplosionActor_DelayedExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Explode
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// class UGameExplosion*          NewExplosionTemplate           (Parm)
// struct FVector                 Direction                      (OptionalParm, Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	AGameExplosionActor_Explode_Params params;
	params.NewExplosionTemplate = NewExplosionTemplate;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// (Simulated, Public)

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	AGameExplosionActor_SpawnExplosionFogVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// (Simulated, Public)

void AGameExplosionActor::SpawnExplosionDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	AGameExplosionActor_SpawnExplosionDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// (Simulated, Public)
// Parameters:
// class UParticleSystem*         Template                       (Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	AGameExplosionActor_SpawnExplosionParticleSystem_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// (Simulated, Protected)
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params params;
	params.PhysMaterial = PhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// (Protected)
// Parameters:
// class AActor*                  Victim                         (Parm)
// float                          VictimDist                     (Parm)

void AGameExplosionActor::SpecialCringeEffectsFor(class AActor* Victim, float VictimDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");

	AGameExplosionActor_SpecialCringeEffectsFor_Params params;
	params.Victim = Victim;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// (Protected)
// Parameters:
// class AGamePawn*               VictimPawn                     (Parm)
// float                          VictimDist                     (Parm)

void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");

	AGameExplosionActor_SpecialPawnEffectsFor_Params params;
	params.VictimPawn = VictimPawn;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// (Defined, Public)
// Parameters:
// bool                           bCauseDamage                   (Parm)
// bool                           bCauseFractureEffects          (Parm)
// bool                           bCauseEffects                  (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameExplosionActor::GetEffectCheckRadius(bool bCauseDamage, bool bCauseFractureEffects, bool bCauseEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");

	AGameExplosionActor_GetEffectCheckRadius_Params params;
	params.bCauseDamage = bCauseDamage;
	params.bCauseFractureEffects = bCauseFractureEffects;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoExplosionDamage
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// bool                           bCauseDamage                   (Parm)
// bool                           bCauseEffects                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::DoExplosionDamage(bool bCauseDamage, bool bCauseEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	AGameExplosionActor_DoExplosionDamage_Params params;
	params.bCauseDamage = bCauseDamage;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FBox                    BBox                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameExplosionActor::STATIC_BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");

	AGameExplosionActor_BoxDistanceToPoint_Params params;
	params.Start = Start;
	params.BBox = BBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.IsBehindExplosion
// (Defined, Simulated, Protected)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	AGameExplosionActor_IsBehindExplosion_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Victim                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	AGameExplosionActor_DoFullDamageToActor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	AGameExplosionActor_GetPhysicalMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.PreBeginPlay
// (Defined, Event, Public)

void AGameExplosionActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	AGameExplosionActor_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// (Defined, Simulated, Public)

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	AGamePawn_ReattachMeshWithoutBeingSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMesh
// (Defined, Simulated, Public)

void AGamePawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	AGamePawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.UpdateShadowSettings
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bInWantShadow                  (Parm)

void AGamePawn::UpdateShadowSettings(bool bInWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	AGamePawn_UpdateShadowSettings_Params params;
	params.bInWantShadow = bInWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.ConsoleCommand
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bWriteToLog                    (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ADebugCameraController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ConsoleCommand");

	ADebugCameraController_ConsoleCommand_Params params;
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// (Defined, Exec, Public)

void ADebugCameraController::ShowDebugSelectedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");

	ADebugCameraController_ShowDebugSelectedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NativeInputKey
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADebugCameraController::NativeInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NativeInputKey");

	ADebugCameraController_NativeInputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraController.InitDebugInputSystem
// (Defined, Public)

void ADebugCameraController::InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.InitDebugInputSystem");

	ADebugCameraController_InitDebugInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.DisableDebugCamera
// (Defined, Public)

void ADebugCameraController::DisableDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.DisableDebugCamera");

	ADebugCameraController_DisableDebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NormalSpeed
// (Defined, Exec, Public)

void ADebugCameraController::NormalSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NormalSpeed");

	ADebugCameraController_NormalSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.MoreSpeed
// (Defined, Exec, Public)

void ADebugCameraController::MoreSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.MoreSpeed");

	ADebugCameraController_MoreSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SetFreezeRendering
// (Defined, Exec, Public)

void ADebugCameraController::SetFreezeRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SetFreezeRendering");

	ADebugCameraController_SetFreezeRendering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnDeactivate
// (Defined, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void ADebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnDeactivate");

	ADebugCameraController_OnDeactivate_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnActivate
// (Defined, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void ADebugCameraController::OnActivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnActivate");

	ADebugCameraController_OnActivate_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADebugCameraController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PostBeginPlay");

	ADebugCameraController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.Unselect
// (Native, Public)

void ADebugCameraController::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.Unselect");

	ADebugCameraController_Unselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SecondarySelect
// (Native, Public)
// Parameters:
// struct FVector                 HitLoc                         (Parm)
// struct FVector                 HitNormal                      (Parm)
// struct FTraceHitInfo           HitInfo                        (Parm)

void ADebugCameraController::SecondarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SecondarySelect");

	ADebugCameraController_SecondarySelect_Params params;
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PrimarySelect
// (Native, Public)
// Parameters:
// struct FVector                 HitLoc                         (Parm)
// struct FVector                 HitNormal                      (Parm)
// struct FTraceHitInfo           HitInfo                        (Parm)

void ADebugCameraController::PrimarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PrimarySelect");

	ADebugCameraController_PrimarySelect_Params params;
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderKismetHud
// (Defined, Public)

void AMobileHUD::RenderKismetHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderKismetHud");

	AMobileHUD_RenderKismetHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.AddKismetRenderEvent
// (Defined, Public)
// Parameters:
// class USeqEvent_HudRender*     NewEvent                       (Parm)

void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.AddKismetRenderEvent");

	AMobileHUD_AddKismetRenderEvent_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RefreshKismetLinks
// (Defined, Public)

void AMobileHUD::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RefreshKismetLinks");

	AMobileHUD_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Slider");

	AMobileHUD_DrawMobileZone_Slider_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileTilt
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      MobileInput                    (Parm)

void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileTilt");

	AMobileHUD_DrawMobileTilt_Params params;
	params.MobileInput = MobileInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// (Defined, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");

	AMobileHUD_DrawMobileZone_Trackball_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// (Defined, Public, HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");

	AMobileHUD_DrawMobileZone_Joystick_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Button
// (Defined, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Button");

	AMobileHUD_DrawMobileZone_Button_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// (Defined, Public)

void AMobileHUD::DrawInputZoneOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputZoneOverlays");

	AMobileHUD_DrawInputZoneOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderMobileMenu
// (Defined, Public)

void AMobileHUD::RenderMobileMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderMobileMenu");

	AMobileHUD_RenderMobileMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.ShowMobileHud
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobileHUD::ShowMobileHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ShowMobileHud");

	AMobileHUD_ShowMobileHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileHUD.DrawMobileDebugString
// (Defined, Public)
// Parameters:
// float                          XPos                           (Parm)
// float                          YPos                           (Parm)
// struct FString                 Str                            (Parm, NeedCtorLink)

void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileDebugString");

	AMobileHUD_DrawMobileDebugString_Params params;
	params.XPos = XPos;
	params.YPos = YPos;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostRender
// (Defined, Public)

void AMobileHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	AMobileHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostBeginPlay
// (Defined, Simulated, Public)

void AMobileHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	AMobileHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.AddKismetEventHandler
// (Defined, Public)
// Parameters:
// class USeqEvent_MobileZoneBase* NewHandler                     (Parm)

void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.AddKismetEventHandler");

	UMobileInputZone_AddKismetEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPostDrawZone
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// class UCanvas*                 Canvas                         (Parm)

void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPostDrawZone");

	UMobileInputZone_OnPostDrawZone_Params params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPreDrawZone
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// class UCanvas*                 Canvas                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPreDrawZone");

	UMobileInputZone_OnPreDrawZone_Params params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessSlide
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// int                            SlideValue                     (Parm)
// struct FVector2D               ViewportSize                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, int SlideValue, const struct FVector2D& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessSlide");

	UMobileInputZone_OnProcessSlide_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.SlideValue = SlideValue;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");

	UMobileInputZone_OnDoubleTapDelegate_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnTapDelegate
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnTapDelegate");

	UMobileInputZone_OnTapDelegate_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// (Public, Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// float                          DeltaTime                      (Parm)
// int                            Handle                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessInputDelegate");

	UMobileInputZone_OnProcessInputDelegate_Params params;
	params.Zone = Zone;
	params.DeltaTime = DeltaTime;
	params.Handle = Handle;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.DeactivateZone
// (Native, Public)

void UMobileInputZone::DeactivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.DeactivateZone");

	UMobileInputZone_DeactivateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.ActivateZone
// (Native, Public)

void UMobileInputZone::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.ActivateZone");

	UMobileInputZone_ActivateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.GetIconIndexes
// (Public, HasOutParms)
// Parameters:
// TArray<int>                    IconIndexes                    (Parm, OutParm, NeedCtorLink)

void UMobileMenuObject::GetIconIndexes(TArray<int>* IconIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetIconIndexes");

	UMobileMenuObject_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;
}


// Function GameFramework.MobileMenuObject.RenderObject
// (Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuObject::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.RenderObject");

	UMobileMenuObject_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.SetCanvasPos
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          OffsetX                        (OptionalParm, Parm)
// float                          OffsetY                        (OptionalParm, Parm)

void UMobileMenuObject::SetCanvasPos(class UCanvas* Canvas, float OffsetX, float OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.SetCanvasPos");

	UMobileMenuObject_SetCanvasPos_Params params;
	params.Canvas = Canvas;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.InitMenuObject
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.InitMenuObject");

	UMobileMenuObject_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.GetRealPosition
// (Defined, Event, Public, HasOutParms)
// Parameters:
// float                          PosX                           (Parm, OutParm)
// float                          PosY                           (Parm, OutParm)

void UMobileMenuObject::GetRealPosition(float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetRealPosition");

	UMobileMenuObject_GetRealPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function GameFramework.MobileMenuObject.OnTouch
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuObject::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.OnTouch");

	UMobileMenuObject_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuImage.RenderObject
// (Defined, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuImage::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuImage.RenderObject");

	UMobileMenuImage_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.MobileMenuCommand
// (Defined, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::MobileMenuCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MobileMenuCommand");

	UMobileMenuScene_MobileMenuCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.FindMenuObject
// (Defined, Public)
// Parameters:
// struct FString                 Tag                            (Parm, NeedCtorLink)
// class UMobileMenuObject*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuObject* UMobileMenuScene::FindMenuObject(const struct FString& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.FindMenuObject");

	UMobileMenuScene_FindMenuObject_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.CleanUpScene
// (Native, Public)

void UMobileMenuScene::CleanUpScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.CleanUpScene");

	UMobileMenuScene_CleanUpScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closed
// (Defined, Public)

void UMobileMenuScene::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closed");

	UMobileMenuScene_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closing
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closing");

	UMobileMenuScene_Closing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.MadeTopMenu
// (Public)

void UMobileMenuScene::MadeTopMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MadeTopMenu");

	UMobileMenuScene_MadeTopMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Opened
// (Public)
// Parameters:
// struct FString                 Mode                           (Parm, NeedCtorLink)

void UMobileMenuScene::Opened(const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Opened");

	UMobileMenuScene_Opened_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.OnSceneTouch
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// bool                           bInside                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::OnSceneTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, bool bInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnSceneTouch");

	UMobileMenuScene_OnSceneTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.bInside = bInside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.OnTouch
// (Event, Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)

void UMobileMenuScene::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnTouch");

	UMobileMenuScene_OnTouch_Params params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.PostRenderMenuObject
// (Public)
// Parameters:
// class UMobileMenuObject*       MenuObject                     (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuScene::PostRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PostRenderMenuObject");

	UMobileMenuScene_PostRenderMenuObject_Params params;
	params.MenuObject = MenuObject;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// (Public)
// Parameters:
// class UMobileMenuObject*       MenuObject                     (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuScene::PreRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PreRenderMenuObject");

	UMobileMenuScene_PreRenderMenuObject_Params params;
	params.MenuObject = MenuObject;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.RenderScene
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.RenderScene");

	UMobileMenuScene_RenderScene_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetSceneFont
// (Defined, Public)
// Parameters:
// class UFont*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFont* UMobileMenuScene::GetSceneFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetSceneFont");

	UMobileMenuScene_GetSceneFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.InitMenuScene
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuScene::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.InitMenuScene");

	UMobileMenuScene_InitMenuScene_Params params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuScene::STATIC_GetGlobalScaleY()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleY");

	UMobileMenuScene_GetGlobalScaleY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuScene::STATIC_GetGlobalScaleX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleX");

	UMobileMenuScene_GetGlobalScaleX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// (Defined, Exec, Public)
// Parameters:
// struct FString                 MenuClassName                  (Parm, NeedCtorLink)
// struct FString                 Mode                           (Parm, NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode(const struct FString& MenuClassName, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");

	UMobilePlayerInput_OpenMobileMenuMode_Params params;
	params.MenuClassName = MenuClassName;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// (Defined, Exec, Public)
// Parameters:
// struct FString                 MenuClassName                  (Parm, NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu(const struct FString& MenuClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenu");

	UMobilePlayerInput_OpenMobileMenu_Params params;
	params.MenuClassName = MenuClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// (Defined, Exec, Public)
// Parameters:
// struct FString                 MenuCommand                    (Parm, NeedCtorLink)

void UMobilePlayerInput::MobileMenuCommand(const struct FString& MenuCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.MobileMenuCommand");

	UMobilePlayerInput_MobileMenuCommand_Params params;
	params.MenuCommand = MenuCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// (Defined, Exec, Public)

void UMobilePlayerInput::SceneRenderToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SceneRenderToggle");

	UMobilePlayerInput_SceneRenderToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PreClientTravel
// (Defined, Public)
// Parameters:
// struct FString                 PendingURL                     (Parm, NeedCtorLink)
// TEnumAsByte<ETravelType>       TravelType                     (Parm)
// bool                           bIsSeamlessTravel              (Parm)

void UMobilePlayerInput::PreClientTravel(const struct FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PreClientTravel");

	UMobilePlayerInput_PreClientTravel_Params params;
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RenderMenus
// (Defined, Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobilePlayerInput::RenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RenderMenus");

	UMobilePlayerInput_RenderMenus_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseAllMenus
// (Defined, Event, Public)

void UMobilePlayerInput::CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseAllMenus");

	UMobilePlayerInput_CloseAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseMenuScene
// (Defined, Event, Public)
// Parameters:
// class UMobileMenuScene*        SceneToClose                   (Parm)

void UMobilePlayerInput::CloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseMenuScene");

	UMobilePlayerInput_CloseMenuScene_Params params;
	params.SceneToClose = SceneToClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMenuScene
// (Defined, Event, HasOptionalParms, Public, HasDefaults)
// Parameters:
// class UClass*                  SceneClass                     (Parm)
// struct FString                 Mode                           (OptionalParm, Parm, NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMenuScene(class UClass* SceneClass, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMenuScene");

	UMobilePlayerInput_OpenMenuScene_Params params;
	params.SceneClass = SceneClass;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// (Defined, Exec, Public)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMobilePlayerInput::SetMobileInputConfig(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");

	UMobilePlayerInput_SetMobileInputConfig_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// (Defined, Exec, Public)
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMobilePlayerInput::ActivateInputGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ActivateInputGroup");

	UMobilePlayerInput_ActivateInputGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.GetCurrentZones
// (Defined, Public)
// Parameters:
// TArray<class UMobileInputZone*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.GetCurrentZones");

	UMobilePlayerInput_GetCurrentZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.HasZones
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobilePlayerInput::HasZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.HasZones");

	UMobilePlayerInput_HasZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindorAddZone
// (Defined, Public)
// Parameters:
// struct FString                 ZoneName                       (Parm, NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindorAddZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindorAddZone");

	UMobilePlayerInput_FindorAddZone_Params params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindZone
// (Defined, Public)
// Parameters:
// struct FString                 ZoneName                       (Parm, NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindZone");

	UMobilePlayerInput_FindZone_Params params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// (Defined, Public)
// Parameters:
// class USeqEvent_MobileRawInput* NewHandler                     (Parm)

void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");

	UMobilePlayerInput_AddKismetRawInputEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// (Defined, Public)
// Parameters:
// class USeqEvent_MobileBase*    NewHandler                     (Parm)

void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");

	UMobilePlayerInput_AddKismetEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// (Defined, Event, Public)

void UMobilePlayerInput::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");

	UMobilePlayerInput_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// (Defined, Public)

void UMobilePlayerInput::SwapZoneOwners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SwapZoneOwners");

	UMobilePlayerInput_SwapZoneOwners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitializeInputZones
// (Defined, Public)

void UMobilePlayerInput::InitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitializeInputZones");

	UMobilePlayerInput_InitializeInputZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitTouchSystem
// (Defined, Public)

void UMobilePlayerInput::InitTouchSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitTouchSystem");

	UMobilePlayerInput_InitTouchSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// (Defined, Public)

void UMobilePlayerInput::ClientInitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");

	UMobilePlayerInput_ClientInitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitInputSystem
// (Defined, Public)

void UMobilePlayerInput::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitInputSystem");

	UMobilePlayerInput_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// (Native, Public)
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobilePlayerInput::ProcessWorldTouch(class UMobileInputZone* Zone, TEnumAsByte<ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessWorldTouch");

	UMobilePlayerInput_ProcessWorldTouch_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.SendInputAxis
// (Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)

void UMobilePlayerInput::SendInputAxis(const struct FName& Key, float Delta, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputAxis");

	UMobilePlayerInput_SendInputAxis_Params params;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputKey
// (Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (Parm)

void UMobilePlayerInput::SendInputKey(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputKey");

	UMobilePlayerInput_SendInputKey_Params params;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// (Native, Public)
// Parameters:
// int                            NewViewportX                   (Parm)
// int                            NewViewportY                   (Parm)
// int                            NewViewportSizeX               (Parm)
// int                            NewViewportSizeY               (Parm)

void UMobilePlayerInput::ConditionalUpdateInputZones(int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");

	UMobilePlayerInput_ConditionalUpdateInputZones_Params params;
	params.NewViewportX = NewViewportX;
	params.NewViewportY = NewViewportY;
	params.NewViewportSizeX = NewViewportSizeX;
	params.NewViewportSizeY = NewViewportSizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// (Native, Public)
// Parameters:
// bool                           bIsFirstInitialize             (Parm)

void UMobilePlayerInput::NativeInitializeInputZones(bool bIsFirstInitialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");

	UMobilePlayerInput_NativeInitializeInputZones_Params params;
	params.bIsFirstInitialize = bIsFirstInitialize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// (Native, Public)

void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");

	UMobilePlayerInput_NativeInitializeInputSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnInputTouch
// (Public, Delegate)
// Parameters:
// int                            Handle                         (Parm)
// TEnumAsByte<ETouchType>        Type                           (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// float                          DeviceTimestamp                (Parm)
// int                            TouchpadIndex                  (Parm)

void UMobilePlayerInput::OnInputTouch(int Handle, TEnumAsByte<ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnInputTouch");

	UMobilePlayerInput_OnInputTouch_Params params;
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// (Public, Delegate)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            TouchpadIndex                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnPreviewTouch");

	UMobilePlayerInput_OnPreviewTouch_Params params;
	params.X = X;
	params.Y = Y;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// (Public, Delegate)

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");

	UMobilePlayerInput_OnTouchNotHandledInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PlayerInput
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UMobilePlayerInput::PlayerInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PlayerInput");

	UMobilePlayerInput_PlayerInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CancelMobileInput
// (Native, Public)

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
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UMobilePlayerInput::ProcessMobileInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessMobileInput");

	UMobilePlayerInput_ProcessMobileInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// (Defined, Public)

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InOutOfViewLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshGoal_OutOfViewFrom::STATIC_MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params;
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// (Native, Public)

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// (Defined, Public)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InLocation                     (Const, Parm)
// struct FRotator                InRotation                     (Const, Parm)
// float                          InDistanceToCheck              (Const, Parm)
// TArray<struct FVector>         InLocationsToCheck             (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::STATIC_BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params;
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SecondaryViewportClient.PostRender
// (Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void USecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SecondaryViewportClient.PostRender");

	USecondaryViewportClient_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileSecondaryViewportClient.PostRender
// (Defined, Event, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileSecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileSecondaryViewportClient.PostRender");

	UMobileSecondaryViewportClient_PostRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// (Defined, Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");

	USeqAct_GameCrowdPopulationManagerToggle_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");

	USeqAct_GameCrowdPopulationManagerToggle_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     out_Item                       (Parm, OutParm, NeedCtorLink)
// class AGameCrowdPopulationManager* PopMgr                         (Parm)

void USeqAct_GameCrowdPopulationManagerToggle::FillCrowdSpawnInfoItem(class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");

	USeqAct_GameCrowdPopulationManagerToggle_FillCrowdSpawnInfoItem_Params params;
	params.PopMgr = PopMgr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Item != nullptr)
		*out_Item = params.out_Item;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdPopulationManagerToggle::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdSpawner::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	USeqAct_GameCrowdSpawner_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_MobileSaveLoadValue::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");

	USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// (Defined, Public)
// Parameters:
// class AGameCrowdAgentSkeletal* Agent                          (Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_PlayAgentAnimation::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	USeqAct_PlayAgentAnimation_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRender.Render
// (Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.Render");

	USeqEvent_HudRender_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// (Defined, Event, Public)

void USeqEvent_HudRender::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.RegisterEvent");

	USeqEvent_HudRender_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      MPI                            (Parm)

void USeqEvent_MobileBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");

	USeqEvent_MobileBase_AddToMobileInput_Params params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// (Defined, Event, Public)

void USeqEvent_MobileBase::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");

	USeqEvent_MobileBase_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqEvent_MobileMotion::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");

	USeqEvent_MobileMotion_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// (Defined, Event, Public)
// Parameters:
// class UMobilePlayerInput*      MPI                            (Parm)

void USeqEvent_MobileZoneBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");

	USeqEvent_MobileZoneBase_AddToMobileInput_Params params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// (Defined, Event, Public)

void USeqEvent_MobileRawInput::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");

	USeqEvent_MobileRawInput_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// (Event, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameCameraBase::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	UGameCameraBase_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameCameraBase.Init
// (Public)

void UGameCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	UGameCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.DisplayDebug
// (Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UGameCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.DisplayDebug");

	UGameCameraBase_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCameraBase.ProcessViewRotation
// (Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	UGameCameraBase_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameCameraBase.UpdateCamera
// (Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	UGameCameraBase_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameCameraBase.ResetInterpolation
// (Defined, Public)

void UGameCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	UGameCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeInActive
// (Public)
// Parameters:
// class UGameCameraBase*         NewCamera                      (Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	UGameCameraBase_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeActive
// (Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	UGameCameraBase_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// (Defined, Public)

void UGameThirdPersonCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	UGameThirdPersonCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameThirdPersonCamera::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	UGameThirdPersonCamera_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// (Defined, Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	UGameThirdPersonCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// (Defined, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	UGameThirdPersonCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// (Final, Defined, Protected)
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	UGameThirdPersonCamera_UpdateCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// (Defined, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	UGameThirdPersonCamera_FindBestCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// (Defined, Public)
// Parameters:
// struct FRotator                Delta                          (Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// (Defined, Protected, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	UGameThirdPersonCamera_GetActualFocusLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// (Defined, Event, Protected)
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateFocusPoint(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	UGameThirdPersonCamera_UpdateFocusPoint_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bLeaveCameraRotation           (OptionalParm, Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	UGameThirdPersonCamera_ClearFocusPoint_Params params;
	params.bLeaveCameraRotation = bLeaveCameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	UGameThirdPersonCamera_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AActor*                  FocusActor                     (Parm)
// struct FName                   FocusBoneName                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	UGameThirdPersonCamera_SetFocusOnActor_Params params;
	params.FocusActor = FocusActor;
	params.FocusBoneName = FocusBoneName;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FVector                 FocusWorldLoc                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	UGameThirdPersonCamera_SetFocusOnLoc_Params params;
	params.FocusWorldLoc = FocusWorldLoc;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// (Defined, Public)
// Parameters:
// int                            AngleOffset                    (Parm)

void UGameThirdPersonCamera::AdjustTurn(int AngleOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	UGameThirdPersonCamera_AdjustTurn_Params params;
	params.AngleOffset = AngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.EndTurn
// (Native, Public)

void UGameThirdPersonCamera::EndTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	UGameThirdPersonCamera_EndTurn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.BeginTurn
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            StartAngle                     (Parm)
// int                            EndAngle                       (Parm)
// float                          TimeSec                        (Parm)
// float                          DelaySec                       (OptionalParm, Parm)
// bool                           bAlignTargetWhenFinished       (OptionalParm, Parm)

void UGameThirdPersonCamera::BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	UGameThirdPersonCamera_BeginTurn_Params params;
	params.StartAngle = StartAngle;
	params.EndAngle = EndAngle;
	params.TimeSec = TimeSec;
	params.DelaySec = DelaySec;
	params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// (Native, Protected, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	UGameThirdPersonCamera_PlayerUpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// (Defined, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	UGameThirdPersonCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// (Defined, Event, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCamera::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	UGameThirdPersonCamera_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.Init
// (Defined, Public)

void UGameThirdPersonCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	UGameThirdPersonCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Reset
// (Defined, Public)

void UGameThirdPersonCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	UGameThirdPersonCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// (Defined, Protected)
// Parameters:
// class UClass*                  ModeClass                      (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	UGameThirdPersonCamera_CreateCameraMode_Params params;
	params.ModeClass = ModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// (Final, Native, Protected)
// Parameters:
// float                          inHorizFOV                     (Parm)
// class APawn*                   CameraTargetPawn               (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	AGamePlayerCamera_AdjustFOVForViewport_Params params;
	params.inHorizFOV = inHorizFOV;
	params.CameraTargetPawn = CameraTargetPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// (Defined, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	AGamePlayerCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GamePlayerCamera.ResetInterpolation
// (Defined, Simulated, Public)

void AGamePlayerCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	AGamePlayerCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.SetColorScale
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 NewColorScale                  (Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	AGamePlayerCamera_SetColorScale_Params params;
	params.NewColorScale = NewColorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	AGamePlayerCamera_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Const, Parm, OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	AGamePlayerCamera_UpdateCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// (Defined, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	AGamePlayerCamera_UpdateViewTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	AGamePlayerCamera_ShouldConstrainAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.FindBestCameraType
// (Defined, Protected)
// Parameters:
// class AActor*                  CameraTarget                   (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	AGamePlayerCamera_FindBestCameraType_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.Reset
// (Defined, Public)

void AGamePlayerCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	AGamePlayerCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.PostBeginPlay
// (Defined, Public)

void AGamePlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	AGamePlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// (Native, Protected)
// Parameters:
// class AActor*                  TargetBase                     (Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	AGamePlayerCamera_CacheLastTargetBaseInfo_Params params;
	params.TargetBase = TargetBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CreateCamera
// (Defined, Protected)
// Parameters:
// class UClass*                  CameraClass                    (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	AGamePlayerCamera_CreateCamera_Params params;
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FViewOffsetData         NewViewOffset                  (Const, Parm, OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData* NewViewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	UGameThirdPersonCameraMode_SetViewOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewOffset != nullptr)
		*NewViewOffset = params.NewViewOffset;
}


// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTViewTarget            VT                             (Const, Parm, OutParm)
// float                          DeltaTime                      (Parm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	UGameThirdPersonCameraMode_UpdatePostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VT != nullptr)
		*VT = params.VT;
}


// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// (Defined, Simulated, Protected, HasDefaults)
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	UGameThirdPersonCameraMode_DOFTrace_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// (Defined, Simulated, Protected)
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	UGameThirdPersonCameraMode_GetDOFFocusLoc_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// (Simulated, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	UGameThirdPersonCameraMode_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	UGameThirdPersonCameraMode_SetFocusPoint_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// (Defined, Simulated, Event, Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// struct FTViewTarget            CurrentViewTarget              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params params;
	params.TargetPawn = TargetPawn;
	params.CurrentViewTarget = CurrentViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// (Defined, Public)
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	UGameThirdPersonCameraMode_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// (Defined, Event, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// struct FVector                 Offset                         (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::AdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	UGameThirdPersonCameraMode_AdjustViewOffset_Params params;
	params.P = P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// (Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* NewMode                        (Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	UGameThirdPersonCameraMode_OnBecomeInActive_Params params;
	params.TargetPawn = TargetPawn;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// (Defined, Public)
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	UGameThirdPersonCameraMode_OnBecomeActive_Params params;
	params.TargetPawn = TargetPawn;
	params.PrevMode = PrevMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.Init
// (Public)

void UGameThirdPersonCameraMode::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.Init");

	UGameThirdPersonCameraMode_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// (Final, Native, Public)
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 RelativeSpaceOffset            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	UGameSpecialMove_RelativeToWorldOffset_Params params;
	params.InRotation = InRotation;
	params.RelativeSpaceOffset = RelativeSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// (Final, Native, Public)
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 WorldSpaceOffset               (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	UGameSpecialMove_WorldToRelativeOffset_Params params;
	params.InRotation = InRotation;
	params.WorldSpaceOffset = WorldSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ForcePawnRotation
// (Final, Native, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// struct FRotator                NewRotation                    (Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	UGameSpecialMove_ForcePawnRotation_Params params;
	params.P = P;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.MessageEvent
// (Defined, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// class UObject*                 Sender                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::MessageEvent(const struct FName& EventName, class UObject* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	UGameSpecialMove_MessageEvent_Params params;
	params.EventName = EventName;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// (Final, Native, Public)

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	UGameSpecialMove_ResetFacePreciseRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// (Event, Public)

void UGameSpecialMove::ReachedPrecisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	UGameSpecialMove_ReachedPrecisePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// (Final, Native, Public)
// Parameters:
// struct FRotator                RotationToFace                 (Parm)
// float                          InterpolationTime              (Parm)

void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	UGameSpecialMove_SetFacePreciseRotation_Params params;
	params.RotationToFace = RotationToFace;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 DestinationToReach             (Parm)
// bool                           bCancel                        (OptionalParm, Parm)

void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	UGameSpecialMove_SetReachPreciseDestination_Params params;
	params.DestinationToReach = DestinationToReach;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ShouldReplicate
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	UGameSpecialMove_ShouldReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// (Public)

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	UGameSpecialMove_SpecialMoveFlagsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.Tick
// (Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	UGameSpecialMove_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// (Public)
// Parameters:
// struct FName                   PrevMove                       (Parm)
// struct FName                   NextMove                       (Parm)

void UGameSpecialMove::SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	UGameSpecialMove_SpecialMoveEnded_Params params;
	params.PrevMove = PrevMove;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// (Public)
// Parameters:
// bool                           bForced                        (Parm)
// struct FName                   PrevMove                       (Parm)

void UGameSpecialMove::SpecialMoveStarted(bool bForced, const struct FName& PrevMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	UGameSpecialMove_SpecialMoveStarted_Params params;
	params.bForced = bForced;
	params.PrevMove = PrevMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// (Defined, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	UGameSpecialMove_InternalCanDoSpecialMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// (Final, Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bForceCheck                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	UGameSpecialMove_CanDoSpecialMove_Params params;
	params.bForceCheck = bForceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// (Defined, Public)
// Parameters:
// struct FName                   InMove                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideSpecialMove(const struct FName& InMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	UGameSpecialMove_CanOverrideSpecialMove_Params params;
	params.InMove = InMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// (Defined, Public)
// Parameters:
// struct FName                   NewMove                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideMoveWith(const struct FName& NewMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	UGameSpecialMove_CanOverrideMoveWith_Params params;
	params.NewMove = NewMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanChainMove
// (Defined, Public)
// Parameters:
// struct FName                   NextMove                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanChainMove(const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	UGameSpecialMove_CanChainMove_Params params;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// (Public)
// Parameters:
// int                            Flags                          (Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	UGameSpecialMove_ExtractSpecialMoveFlags_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// (Public, HasOutParms)
// Parameters:
// int                            out_Flags                      (Parm, OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int* out_Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	UGameSpecialMove_InitSpecialMoveFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Flags != nullptr)
		*out_Flags = params.out_Flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMove
// (Defined, Public)
// Parameters:
// class AGamePawn*               inPawn                         (Parm)
// struct FName                   InHandle                       (Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	UGameSpecialMove_InitSpecialMove_Params params;
	params.inPawn = inPawn;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.Reset
// (Native, Public)

void UGameStateObject::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.Reset");

	UGameStateObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.PreProcessStream
// (Native, Event, Public)

void UGameStateObject::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.PreProcessStream");

	UGameStateObject_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// (Native, Public, HasOutParms)
// Parameters:
// int                            EventID                        (Parm)
// int                            AggregateID                    (Parm, OutParm)
// int                            TargetAggregateID              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	UGameStatsAggregator_GetAggregateMappingIDs_Params params;
	params.EventID = EventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AggregateID != nullptr)
		*AggregateID = params.AggregateID;
	if (TargetAggregateID != nullptr)
		*TargetAggregateID = params.TargetAggregateID;

	return params.ReturnValue;
}


// Function GameFramework.GameStatsAggregator.Reset
// (Native, Public)

void UGameStatsAggregator::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.Reset");

	UGameStatsAggregator_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PostProcessStream
// (Native, Event, Public)

void UGameStatsAggregator::PostProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PostProcessStream");

	UGameStatsAggregator_PostProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PreProcessStream
// (Native, Event, Public)

void UGameStatsAggregator::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PreProcessStream");

	UGameStatsAggregator_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.PostRender
// (Defined, Event, Public, HasDefaults)

void ADebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostRender");

	ADebugCameraHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.DisplayMaterials
// (Defined, Public, HasOutParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm, OutParm)
// float                          DY                             (Parm)
// class UMeshComponent*          MeshComp                       (Parm, EditInline)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ADebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.DisplayMaterials");

	ADebugCameraHUD_DisplayMaterials_Params params;
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraHUD.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostBeginPlay");

	ADebugCameraHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraInput.InputKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraInput.InputKey");

	UDebugCameraInput_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");

	UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// (Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	UGameCrowdSpawnerInterface_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// (Public, HasOutParms)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	UGameCrowdSpawnInterface_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// (Defined, Public)
// Parameters:
// class APawn*                   InEnemy                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// (Defined, Public)
// Parameters:
// class AActor*                  BlockedBy                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// (Defined, Public)

void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");

	UGameAICmd_Hover_MoveToGoal_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  InGoal                         (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::STATIC_MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");

	UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// (Defined, Event, Public)
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");

	UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// (Defined, Public)
// Parameters:
// class APawn*                   InEnemy                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");

	UGameAICmd_Hover_MoveToGoal_Mesh_ShouldUpdateBreadCrumbs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// (Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");

	UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// (Defined, Public)
// Parameters:
// class AActor*                  BlockedBy                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");

	UGameAICmd_Hover_MoveToGoal_Mesh_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// (Defined, Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");

	UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// (Defined, Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");

	UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverBackToMesh(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverBackToMesh_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// struct FVector                 InPoint                        (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params params;
	params.AI = AI;
	params.InPoint = InPoint;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// (Defined, Static, Public)
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  InGoal                         (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameFixedCamera.OnBecomeActive
// (Defined, Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	UGameFixedCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.UpdateCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	UGameFixedCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// (Defined, Simulated, Public)

void AGameKActorSpawnableEffect::StartScalingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");

	AGameKActorSpawnableEffect_StartScalingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameKActorSpawnableEffect::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	AGameKActorSpawnableEffect_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	AGameKActorSpawnableEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// (Defined, Public, HasDefaults)

void AMobileDebugCameraController::SetupDebugZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.SetupDebugZones");

	AMobileDebugCameraController_SetupDebugZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitInputSystem
// (Defined, Event, Public)

void AMobileDebugCameraController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitInputSystem");

	AMobileDebugCameraController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnDeactivate
// (Defined, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AMobileDebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnDeactivate");

	AMobileDebugCameraController_OnDeactivate_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// (Defined, Public)

void AMobileDebugCameraController::InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");

	AMobileDebugCameraController_InitDebugInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnActivate
// (Defined, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AMobileDebugCameraController::OnActivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnActivate");

	AMobileDebugCameraController_OnActivate_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraInput.InputKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraInput.InputKey");

	UMobileDebugCameraInput_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileDebugCameraHUD.PostRender
// (Defined, Event, Public, HasDefaults)

void AMobileDebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostRender");

	AMobileDebugCameraHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// (Defined, Public, HasOutParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm, OutParm)
// float                          DY                             (Parm)
// class UMeshComponent*          MeshComp                       (Parm, EditInline)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobileDebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");

	AMobileDebugCameraHUD_DisplayMaterials_Params params;
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AMobileDebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");

	AMobileDebugCameraHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.UpdateItemViewports
// (Defined, Public)

void UMobileMenuBar::UpdateItemViewports()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.UpdateItemViewports");

	UMobileMenuBar_UpdateItemViewports_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.SetFirstItem
// (Defined, Public)
// Parameters:
// int                            first                          (Parm)

void UMobileMenuBar::SetFirstItem(int first)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.SetFirstItem");

	UMobileMenuBar_SetFirstItem_Params params;
	params.first = first;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderItem
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)
// int                            ItemIndex                      (Parm)

void UMobileMenuBar::RenderItem(class UCanvas* Canvas, float DeltaTime, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderItem");

	UMobileMenuBar_RenderItem_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderObject
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuBar::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderObject");

	UMobileMenuBar_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.OnTouch
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuBar::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.OnTouch");

	UMobileMenuBar_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.GetSelected
// (Defined, Public)
// Parameters:
// class UMobileMenuBarItem*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuBarItem* UMobileMenuBar::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.GetSelected");

	UMobileMenuBar_GetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.Num
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuBar::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.Num");

	UMobileMenuBar_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.AddItem
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UMobileMenuBarItem*      Item                           (Parm)
// int                            Index                          (OptionalParm, Parm)

void UMobileMenuBar::AddItem(class UMobileMenuBarItem* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.AddItem");

	UMobileMenuBar_AddItem_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.InitMenuObject
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuBar::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.InitMenuObject");

	UMobileMenuBar_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBarItem.RenderItem
// (Public)
// Parameters:
// class UMobileMenuBar*          Bar                            (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuBarItem::RenderItem(class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBarItem.RenderItem");

	UMobileMenuBarItem_RenderItem_Params params;
	params.Bar = Bar;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderCaption
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderCaption");

	UMobileMenuButton_RenderCaption_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderObject
// (Defined, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuButton::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderObject");

	UMobileMenuButton_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.InitMenuObject
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.InitMenuObject");

	UMobileMenuButton_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.GetIconIndexes
// (Public, HasOutParms)
// Parameters:
// TArray<int>                    IconIndexes                    (Parm, OutParm, NeedCtorLink)

void UMobileMenuElement::GetIconIndexes(TArray<int>* IconIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.GetIconIndexes");

	UMobileMenuElement_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;
}


// Function GameFramework.MobileMenuElement.RenderElement
// (Public)
// Parameters:
// class UMobileMenuObject*       Owner                          (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          Opacity                        (Parm)

void UMobileMenuElement::RenderElement(class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.RenderElement");

	UMobileMenuElement_RenderElement_Params params;
	params.Owner = Owner;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.OnTouch
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuElement::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.OnTouch");

	UMobileMenuElement_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuGame.RestartPlayer
// (Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.RestartPlayer");

	AMobileMenuGame_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.StartMatch
// (Public)

void AMobileMenuGame::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.StartMatch");

	AMobileMenuGame_StartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.PostLogin
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AMobileMenuGame::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.PostLogin");

	AMobileMenuGame_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.GetIconIndexes
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<int>                    IconIndexes                    (Parm, OutParm, NeedCtorLink)

void UMobileMenuInventory::GetIconIndexes(TArray<int>* IconIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIconIndexes");

	UMobileMenuInventory_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;
}


// Function GameFramework.MobileMenuInventory.RenderDragItem
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuInventory::RenderDragItem(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderDragItem");

	UMobileMenuInventory_RenderDragItem_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.RenderObject
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuInventory::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderObject");

	UMobileMenuInventory_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// (Defined, Public)
// Parameters:
// class UMobileMenuElement*      Item                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuInventory::GetIndexOfItem(class UMobileMenuElement* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIndexOfItem");

	UMobileMenuInventory_GetIndexOfItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// (Defined, Public)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuInventory::FindSlotIndexAt(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.FindSlotIndexAt");

	UMobileMenuInventory_FindSlotIndexAt_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.InitDragAt
// (Defined, Public)
// Parameters:
// int                            TouchX                         (Parm)
// int                            TouchY                         (Parm)

void UMobileMenuInventory::InitDragAt(int TouchX, int TouchY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitDragAt");

	UMobileMenuInventory_InitDragAt_Params params;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// (Defined, Protected)
// Parameters:
// int                            InSlot                         (Parm)

void UMobileMenuInventory::UpdateItemInSlot(int InSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.UpdateItemInSlot");

	UMobileMenuInventory_UpdateItemInSlot_Params params;
	params.InSlot = InSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddItemToSlot
// (Defined, Public)
// Parameters:
// class UMobileMenuElement*      Element                        (Parm)
// int                            ToSlot                         (Parm)
// class UMobileMenuElement*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot(class UMobileMenuElement* Element, int ToSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddItemToSlot");

	UMobileMenuInventory_AddItemToSlot_Params params;
	params.Element = Element;
	params.ToSlot = ToSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// (Defined, Public)
// Parameters:
// int                            Slot0                          (Parm)
// int                            Slot1                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuInventory::SwapItemsInSlots(int Slot0, int Slot1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.SwapItemsInSlots");

	UMobileMenuInventory_SwapItemsInSlots_Params params;
	params.Slot0 = Slot0;
	params.Slot1 = Slot1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.OnTouch
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuInventory::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnTouch");

	UMobileMenuInventory_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UMobileMenuElement*      Item                           (Parm)
// class UMobileMenuElement*      ToSlot                         (Parm)
// int                            ToIdx                          (Parm)
// int                            FromIdx                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuInventory::CanPutItemInSlot(class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.CanPutItemInSlot");

	UMobileMenuInventory_CanPutItemInSlot_Params params;
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.ScaleSlot
// (Final, Defined, Private)
// Parameters:
// class UMobileMenuElement*      Slot                           (Parm)

void UMobileMenuInventory::ScaleSlot(class UMobileMenuElement* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.ScaleSlot");

	UMobileMenuInventory_ScaleSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddSlot
// (Defined, Public)
// Parameters:
// class UMobileMenuElement*      Slot                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuInventory::AddSlot(class UMobileMenuElement* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddSlot");

	UMobileMenuInventory_AddSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.InitMenuObject
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuInventory::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitMenuObject");

	UMobileMenuInventory_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FDragElementInfo        Before                         (Const, Parm, OutParm)
// struct FDragElementInfo        After                          (Const, Parm, OutParm)

void UMobileMenuInventory::OnUpdateDrag(struct FDragElementInfo* Before, struct FDragElementInfo* After)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateDrag");

	UMobileMenuInventory_OnUpdateDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Before != nullptr)
		*Before = params.Before;
	if (After != nullptr)
		*After = params.After;
}


// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// (Public, Delegate)
// Parameters:
// class UMobileMenuInventory*    FromInv                        (Parm)
// class UMobileMenuElement*      Item                           (Parm)
// class UMobileMenuElement*      ToSlot                         (Parm)
// int                            ToIdx                          (Parm)
// int                            FromIdx                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuInventory::DoCanPutItemInSlot(class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot");

	UMobileMenuInventory_DoCanPutItemInSlot_Params params;
	params.FromInv = FromInv;
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// (Public, Delegate)
// Parameters:
// class UMobileMenuInventory*    FromInv                        (Parm)
// int                            SlotIndex                      (Parm)

void UMobileMenuInventory::OnUpdateItemInSlot(class UMobileMenuInventory* FromInv, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot");

	UMobileMenuInventory_OnUpdateItemInSlot_Params params;
	params.FromInv = FromInv;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuLabel.RenderObject
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuLabel::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuLabel.RenderObject");

	UMobileMenuLabel_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.GetIconIndexes
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<int>                    IconIndexes                    (Parm, OutParm, NeedCtorLink)

void UMobileMenuList::GetIconIndexes(TArray<int>* IconIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetIconIndexes");

	UMobileMenuList_GetIconIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;
}


// Function GameFramework.MobileMenuList.ItemScrollSize
// (Defined, Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuList::ItemScrollSize(class UMobileMenuListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.ItemScrollSize");

	UMobileMenuList_ItemScrollSize_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.RenderObject
// (Defined, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuList::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.RenderObject");

	UMobileMenuList_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.UpdateScroll
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UMobileMenuList::UpdateScroll(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.UpdateScroll");

	UMobileMenuList_UpdateScroll_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.CalculateSelectedItem
// (Defined, Public, HasOutParms)
// Parameters:
// struct FSelectedMenuItem       Selected                       (Parm, OutParm)
// float                          ScrollAmount                   (Parm)
// bool                           bForceZeroAdjustment           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuList::CalculateSelectedItem(float ScrollAmount, bool bForceZeroAdjustment, struct FSelectedMenuItem* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.CalculateSelectedItem");

	UMobileMenuList_CalculateSelectedItem_Params params;
	params.ScrollAmount = ScrollAmount;
	params.bForceZeroAdjustment = bForceZeroAdjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetItemClickPosition
// (Defined, Public, HasOutParms)
// Parameters:
// float                          MouseX                         (Parm, OutParm)
// float                          MouseY                         (Parm, OutParm)
// class UMobileMenuListItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition(float* MouseX, float* MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetItemClickPosition");

	UMobileMenuList_GetItemClickPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseX != nullptr)
		*MouseX = params.MouseX;
	if (MouseY != nullptr)
		*MouseY = params.MouseY;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.OnTouch
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuList::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.OnTouch");

	UMobileMenuList_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.SetSelectedItem
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ItemIndex                      (Parm)
// bool                           bForceAll                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuList::SetSelectedItem(int ItemIndex, bool bForceAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedItem");

	UMobileMenuList_SetSelectedItem_Params params;
	params.ItemIndex = ItemIndex;
	params.bForceAll = bForceAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetNumVisible
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuList::GetNumVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetNumVisible");

	UMobileMenuList_GetNumVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// (Defined, Public)
// Parameters:
// int                            VisibleIndex                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuList::SetSelectedToVisibleIndex(int VisibleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex");

	UMobileMenuList_SetSelectedToVisibleIndex_Params params;
	params.VisibleIndex = VisibleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuList::GetVisibleIndexOfSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected");

	UMobileMenuList_GetVisibleIndexOfSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetAmountSelected
// (Defined, Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuList::GetAmountSelected(class UMobileMenuListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetAmountSelected");

	UMobileMenuList_GetAmountSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetSelected
// (Defined, Public)
// Parameters:
// class UMobileMenuListItem*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuListItem* UMobileMenuList::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetSelected");

	UMobileMenuList_GetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.Num
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMobileMenuList::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.Num");

	UMobileMenuList_Num_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.AddItem
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (Parm)
// int                            Index                          (OptionalParm, Parm)

void UMobileMenuList::AddItem(class UMobileMenuListItem* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.AddItem");

	UMobileMenuList_AddItem_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.InitMenuObject
// (Defined, Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)
// bool                           bIsFirstInitialization         (Parm)

void UMobileMenuList::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.InitMenuObject");

	UMobileMenuList_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuListItem.RenderItem
// (Public)
// Parameters:
// class UMobileMenuList*         List                           (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuListItem::RenderItem(class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuListItem.RenderItem");

	UMobileMenuListItem_RenderItem_Params params;
	params.List = List;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.RenderObject
// (Defined, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuObjectProxy::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.RenderObject");

	UMobileMenuObjectProxy_RenderObject_Params params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouch
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuObjectProxy::OnTouch(TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouch");

	UMobileMenuObjectProxy_OnTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// (Public, Delegate)
// Parameters:
// class UMobileMenuObjectProxy*  Proxy                          (Parm)
// class UCanvas*                 Canvas                         (Parm)
// float                          DeltaTime                      (Parm)

void UMobileMenuObjectProxy::OnRenderObject(class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnRenderObject");

	UMobileMenuObjectProxy_OnRenderObject_Params params;
	params.Proxy = Proxy;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// (Public, Delegate)
// Parameters:
// class UMobileMenuObjectProxy*  Proxy                          (Parm)
// TEnumAsByte<ETouchType>        EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// class UMobileMenuObject*       ObjectOver                     (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuObjectProxy::OnTouchEvent(class UMobileMenuObjectProxy* Proxy, TEnumAsByte<ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouchEvent");

	UMobileMenuObjectProxy_OnTouchEvent_Params params;
	params.Proxy = Proxy;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// (Defined, Public)

void AMobileTouchInputVolume::HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDragOver");

	AMobileTouchInputVolume_HandleDragOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// (Defined, Public)

void AMobileTouchInputVolume::HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");

	AMobileTouchInputVolume_HandleDoubleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleClick
// (Defined, Public)

void AMobileTouchInputVolume::HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleClick");

	AMobileTouchInputVolume_HandleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          inAction                       (Parm)

void AMobileTouchInputVolume::OnToggle(class USeqAct_Toggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.OnToggle");

	AMobileTouchInputVolume_OnToggle_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDragOver
// (Public)

void UTouchableElement3D::HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDragOver");

	UTouchableElement3D_HandleDragOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDoubleClick
// (Public)

void UTouchableElement3D::HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDoubleClick");

	UTouchableElement3D_HandleDoubleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleClick
// (Public)

void UTouchableElement3D::HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleClick");

	UTouchableElement3D_HandleClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// (Event, Public, HasOutParms)
// Parameters:
// bool                           bToEntry                       (Parm)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, NeedCtorLink)

void APlayerCollectorGame::GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	APlayerCollectorGame_GetSeamlessTravelActorList_Params params;
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function GameFramework.PlayerCollectorGame.Login
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (Const, Parm)
// struct FString                 ErrorMessage                   (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* APlayerCollectorGame::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.Login");

	APlayerCollectorGame_Login_Params params;
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderImage.Render
// (Defined, Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderImage.Render");

	USeqEvent_HudRenderImage_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqEvent_HudRenderText::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");

	USeqEvent_HudRenderText_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderText.Render
// (Defined, Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.Render");

	USeqEvent_HudRenderText_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
