#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_GameFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameFramework.GameAIController.GetActionString
struct AGameAIController_GetActionString_Params
{
};

// Function GameFramework.GameAIController.SetDesiredRotation
struct AGameAIController_SetDesiredRotation_Params
{
};

// Function GameFramework.GameAIController.AILog_Internal
struct AGameAIController_AILog_Internal_Params
{
};

// Function GameFramework.GameAIController.RecordDemoAILog
struct AGameAIController_RecordDemoAILog_Params
{
};

// Function GameFramework.GameAIController.Destroyed
struct AGameAIController_Destroyed_Params
{
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
struct AGameAIController_ReachedIntermediateMoveGoal_Params
{
};

// Function GameFramework.GameAIController.ReachedMoveGoal
struct AGameAIController_ReachedMoveGoal_Params
{
};

// Function GameFramework.GameAIController.GetDestinationOffset
struct AGameAIController_GetDestinationOffset_Params
{
};

// Function GameFramework.GameAIController.GetAICommandInStack
struct AGameAIController_GetAICommandInStack_Params
{
};

// Function GameFramework.GameAIController.FindCommandOfClass
struct AGameAIController_FindCommandOfClass_Params
{
};

// Function GameFramework.GameAIController.DumpCommandStack
struct AGameAIController_DumpCommandStack_Params
{
};

// Function GameFramework.GameAIController.CheckCommandCount
struct AGameAIController_CheckCommandCount_Params
{
};

// Function GameFramework.GameAIController.GetActiveCommand
struct AGameAIController_GetActiveCommand_Params
{
};

// Function GameFramework.GameAIController.AbortCommand
struct AGameAIController_AbortCommand_Params
{
};

// Function GameFramework.GameAIController.PopCommand
struct AGameAIController_PopCommand_Params
{
};

// Function GameFramework.GameAIController.PushCommand
struct AGameAIController_PushCommand_Params
{
};

// Function GameFramework.GameAIController.AllCommands
struct AGameAIController_AllCommands_Params
{
};

// Function GameFramework.GameAICommand.HandlePathObstruction
struct UGameAICommand_HandlePathObstruction_Params
{
};

// Function GameFramework.GameAICommand.MoveUnreachable
struct UGameAICommand_MoveUnreachable_Params
{
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
struct UGameAICommand_NotifyNeedRepath_Params
{
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
struct UGameAICommand_GetDebugVerboseText_Params
{
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
struct UGameAICommand_GetDebugOverheadText_Params
{
};

// Function GameFramework.GameAICommand.DrawDebug
struct UGameAICommand_DrawDebug_Params
{
};

// Function GameFramework.GameAICommand.GetDumpString
struct UGameAICommand_GetDumpString_Params
{
};

// Function GameFramework.GameAICommand.Resumed
struct UGameAICommand_Resumed_Params
{
};

// Function GameFramework.GameAICommand.Paused
struct UGameAICommand_Paused_Params
{
};

// Function GameFramework.GameAICommand.Popped
struct UGameAICommand_Popped_Params
{
};

// Function GameFramework.GameAICommand.Pushed
struct UGameAICommand_Pushed_Params
{
};

// Function GameFramework.GameAICommand.PostPopped
struct UGameAICommand_PostPopped_Params
{
};

// Function GameFramework.GameAICommand.PrePushed
struct UGameAICommand_PrePushed_Params
{
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
struct UGameAICommand_AllowStateTransitionTo_Params
{
};

// Function GameFramework.GameAICommand.AllowTransitionTo
struct UGameAICommand_AllowTransitionTo_Params
{
};

// Function GameFramework.GameAICommand.Tick
struct UGameAICommand_Tick_Params
{
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
struct UGameAICommand_ShouldIgnoreNotifies_Params
{
};

// Function GameFramework.GameAICommand.InternalTick
struct UGameAICommand_InternalTick_Params
{
};

// Function GameFramework.GameAICommand.InternalResumed
struct UGameAICommand_InternalResumed_Params
{
};

// Function GameFramework.GameAICommand.InternalPaused
struct UGameAICommand_InternalPaused_Params
{
};

// Function GameFramework.GameAICommand.InternalPopped
struct UGameAICommand_InternalPopped_Params
{
};

// Function GameFramework.GameAICommand.InternalPushed
struct UGameAICommand_InternalPushed_Params
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
struct UGameAICommand_InternalPrePushed_Params
{
};

// Function GameFramework.GameAICommand.InitCommand
struct UGameAICommand_InitCommand_Params
{
};

// Function GameFramework.GameAICommand.InitCommandUserActor
struct UGameAICommand_InitCommandUserActor_Params
{
};

// Function GameFramework.GamePlayerController.ClientColorFade
struct AGamePlayerController_ClientColorFade_Params
{
};

// Function GameFramework.GamePlayerController.WarmupPause
struct AGamePlayerController_WarmupPause_Params
{
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
struct AGamePlayerController_CanUnpauseWarmup_Params
{
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
struct AGamePlayerController_GetCurrentMovie_Params
{
};

// Function GameFramework.GamePlayerController.ClientStopMovie
struct AGamePlayerController_ClientStopMovie_Params
{
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
struct AGamePlayerController_ClientPlayMovie_Params
{
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
struct AGamePlayerController_KeepPlayingLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
struct AGamePlayerController_ShowLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.SetSoundMode
struct AGamePlayerController_SetSoundMode_Params
{
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
struct AGamePlayerController_DoForceFeedbackForScreenShake_Params
{
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
struct AGamePlayerController_NotifyCrowdAgentInRadius_Params
{
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
struct AGamePlayerController_NotifyCrowdAgentRefresh_Params
{
};

// Function GameFramework.GamePlayerController.CrowdDebug
struct AGamePlayerController_CrowdDebug_Params
{
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
struct AGamePlayerController_GetUIPlayerIndex_Params
{
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
struct AGamePlayerController_OnToggleMouseCursor_Params
{
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
struct UGameCheatManager_EnableDebugCamera_Params
{
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
struct UGameCheatManager_TeleportPawnToCamera_Params
{
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
struct UGameCheatManager_ToggleDebugCamera_Params
{
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
struct UGameCheatManager_PatchDebugCameraController_Params
{
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
struct AGameCrowdAgent_InitDebugColor_Params
{
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
struct AGameCrowdAgent_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdAgent.GetDestString
struct AGameCrowdAgent_GetDestString_Params
{
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
struct AGameCrowdAgent_PostRenderFor_Params
{
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
struct AGameCrowdAgent_NativePostRenderFor_Params
{
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
struct AGameCrowdAgent_GeneratePathToActor_Params
{
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
struct AGameCrowdAgent_InitNavigationHandle_Params
{
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
struct AGameCrowdAgent_OverlappedActorEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.TakeDamage
struct AGameCrowdAgent_TakeDamage_Params
{
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
struct AGameCrowdAgent_FireDeathEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayDeath
struct AGameCrowdAgent_PlayDeath_Params
{
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
struct AGameCrowdAgent_UpdateIntermediatePoint_Params
{
};

// Function GameFramework.GameCrowdAgent.CalcCamera
struct AGameCrowdAgent_CalcCamera_Params
{
};

// Function GameFramework.GameCrowdAgent.IsIdle
struct AGameCrowdAgent_IsIdle_Params
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
struct AGameCrowdAgent_SetCurrentBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.StopBehavior
struct AGameCrowdAgent_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
struct AGameCrowdAgent_HandleBehaviorEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
struct AGameCrowdAgent_ActivateInstancedBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
struct AGameCrowdAgent_ActivateBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
struct AGameCrowdAgent_ResetSeePlayer_Params
{
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
struct AGameCrowdAgent_TryRandomBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
struct AGameCrowdAgent_NotifySeePlayer_Params
{
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
struct AGameCrowdAgent_PlaySpawnBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
struct AGameCrowdAgent_HandlePotentialAgentEncounter_Params
{
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
struct AGameCrowdAgent_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
struct AGameCrowdAgent_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
struct AGameCrowdAgent_OnPlayAgentAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
struct AGameCrowdAgent_InitializeAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
struct AGameCrowdAgent_GetAttemptedSpawnLocation_Params
{
};

// Function GameFramework.GameCrowdAgent.SetLighting
struct AGameCrowdAgent_SetLighting_Params
{
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
struct AGameCrowdAgent_DisplayDebug_Params
{
};

// Function GameFramework.GameCrowdAgent.Destroyed
struct AGameCrowdAgent_Destroyed_Params
{
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
struct AGameCrowdAgent_ResetPooledAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.KillAgent
struct AGameCrowdAgent_KillAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
struct AGameCrowdAgent_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
struct AGameCrowdAgent_SetMaxSpeed_Params
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
struct AGameCrowdAgent_SetCurrentDestination_Params
{
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
struct AGameCrowdAgent_WaitForGroupMembers_Params
{
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
struct AGameCrowdAgent_PickBehaviorFrom_Params
{
};

// Function GameFramework.GameCrowdAgent.IsPanicked
struct AGameCrowdAgent_IsPanicked_Params
{
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
struct AGameCrowdAgent_FellOutOfWorld_Params
{
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
struct AGameCrowdAgent_GetCollisionExtent_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
struct AGameCrowdAgentSkeletal_CreateAttachments_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
struct AGameCrowdAgentSkeletal_OnAnimEnd_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
struct AGameCrowdAgentSkeletal_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
struct AGameCrowdAgentSkeletal_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
struct AGameCrowdAgentSkeletal_ClearLatentAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
struct AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
struct AGameCrowdAgentSkeletal_SetRootMotion_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
struct AGameCrowdAgentSkeletal_PlayDeath_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
struct AGameCrowdAgentSkeletal_SetLighting_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
struct AGameCrowdAgentSkeletal_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
struct AGameCrowdAgentSM_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
struct AGameCrowdAgentSM_ActivateBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
struct AGameCrowdAgentSM_ChangeDebugColor_Params
{
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
struct AGameCrowdAgentSM_InitDebugColor_Params
{
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
struct AGameCrowdAgentSM_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
struct UGameCrowdAgentBehavior_AllowBehaviorAt_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
struct UGameCrowdAgentBehavior_AllowThisDestination_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
struct UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
struct UGameCrowdAgentBehavior_GetBehaviorInstigator_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
struct UGameCrowdAgentBehavior_ActivatedBy_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
struct UGameCrowdAgentBehavior_GetDestinationActor_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
struct UGameCrowdAgentBehavior_ChangingDestination_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
struct UGameCrowdAgentBehavior_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
struct UGameCrowdAgentBehavior_OnAnimEnd_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
struct UGameCrowdAgentBehavior_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
struct UGameCrowdAgentBehavior_InitBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
struct UGameCrowdAgentBehavior_HandleMovement_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
struct UGameCrowdAgentBehavior_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
struct UGameCrowdAgentBehavior_CanBeUsedBy_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
struct UGameCrowdAgentBehavior_Tick_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
struct UGameCrowdAgentBehavior_ShouldEndIdle_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
struct UGameCrowdAgentBehavior_TriggerCrowdBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
struct UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
struct UGameCrowdBehavior_PlayAnimation_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
struct UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
struct UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
struct UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
struct UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
struct UGameCrowdBehavior_PlayAnimation_InitBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
struct UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
struct UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
struct UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
struct UGameCrowdBehavior_RunFromPanic_GetBehaviorInstigator_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
struct UGameCrowdBehavior_RunFromPanic_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
struct UGameCrowdBehavior_RunFromPanic_InitBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
struct UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
struct UGameCrowdBehavior_WaitForGroup_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
struct UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
struct UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
struct UGameCrowdBehavior_WaitForGroup_InitBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
struct UGameCrowdBehavior_WaitInQueue_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
struct UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
struct UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
struct UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
struct UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
struct UGameCrowdBehavior_WaitInQueue_HandleMovement_Params
{
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
struct UGameCrowdGroup_UpdateDestinations_Params
{
};

// Function GameFramework.GameCrowdGroup.RemoveMember
struct UGameCrowdGroup_RemoveMember_Params
{
};

// Function GameFramework.GameCrowdGroup.AddMember
struct UGameCrowdGroup_AddMember_Params
{
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
struct AGameCrowdInfoVolume_UnTouch_Params
{
};

// Function GameFramework.GameCrowdInfoVolume.Touch
struct AGameCrowdInfoVolume_Touch_Params
{
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
struct AGameCrowdInteractionPoint_OnToggle_Params
{
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
struct AGameCrowdBehaviorPoint_Touch_Params
{
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
struct AGameCrowdBehaviorPoint_DestroySelf_Params
{
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
struct AGameCrowdBehaviorPoint_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdDestination.DrawDebug
struct AGameCrowdDestination_DrawDebug_Params
{
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
struct AGameCrowdDestination_GetDestinationRadius_Params
{
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
struct AGameCrowdDestination_PrioritizeSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
struct AGameCrowdDestination_AnalyzeSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
struct AGameCrowdDestination_GetSpawnPosition_Params
{
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
struct AGameCrowdDestination_GetSpawnRadius_Params
{
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
struct AGameCrowdDestination_AllowableDestinationFor_Params
{
};

// Function GameFramework.GameCrowdDestination.AtCapacity
struct AGameCrowdDestination_AtCapacity_Params
{
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
struct AGameCrowdDestination_IncrementCustomerCount_Params
{
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
struct AGameCrowdDestination_DecrementCustomerCount_Params
{
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
struct AGameCrowdDestination_PickNewDestinationFor_Params
{
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
struct AGameCrowdDestination_ReachedDestination_Params
{
};

// Function GameFramework.GameCrowdDestination.Destroyed
struct AGameCrowdDestination_Destroyed_Params
{
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
struct AGameCrowdDestination_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
struct AGameCrowdDestination_ReachedByAgent_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
struct AGameCrowdDestinationQueuePoint_HasCustomer_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
struct AGameCrowdDestinationQueuePoint_ClearQueue_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
struct AGameCrowdDestinationQueuePoint_AddCustomer_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
struct AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
struct AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
struct AGameCrowdDestinationQueuePoint_ReachedDestination_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
struct AGameCrowdDestinationQueuePoint_HasSpace_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
struct AGameCrowdDestinationQueuePoint_QueueReachedBy_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
struct AGameCrowdPopulationManager_CreateNewAgent_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
struct AGameCrowdPopulationManager_Warmup_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
struct AGameCrowdPopulationManager_SpawnAgent_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
struct AGameCrowdPopulationManager_SpawnAgentByIdx_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
struct AGameCrowdPopulationManager_ValidateSpawnAt_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
struct AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
struct AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
struct AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
struct AGameCrowdPopulationManager_StaticGetPlayerInfo_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
struct AGameCrowdPopulationManager_GetPlayerInfo_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
struct AGameCrowdPopulationManager_PickSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
struct AGameCrowdPopulationManager_UpdateSpawner_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
struct AGameCrowdPopulationManager_UpdateAllSpawners_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.Tick
struct AGameCrowdPopulationManager_Tick_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
struct AGameCrowdPopulationManager_ShouldDebugDestinations_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
struct AGameCrowdPopulationManager_IsSpawningActive_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
struct AGameCrowdPopulationManager_DisplayDebug_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
struct AGameCrowdPopulationManager_AgentDestroyed_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
struct AGameCrowdPopulationManager_FlushAllAgents_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
struct AGameCrowdPopulationManager_FlushAgents_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
struct AGameCrowdPopulationManager_CreateSpawner_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
struct AGameCrowdPopulationManager_SetCrowdInfoVolume_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
struct AGameCrowdPopulationManager_RemoveSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
struct AGameCrowdPopulationManager_AddSpawnPoint_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
struct AGameCrowdPopulationManager_NotifyPathChanged_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
struct AGameCrowdPopulationManager_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
struct AGameCrowdReplicationActor_ReplicatedEvent_Params
{
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
struct AGameExplosionActor_ChooseCameraShake_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
struct AGameExplosionActor_SpawnCameraLensEffects_Params
{
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
struct AGameExplosionActor_DoExplosionCameraEffects_Params
{
};

// Function GameFramework.GameExplosionActor.DrawDebug
struct AGameExplosionActor_DrawDebug_Params
{
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
struct AGameExplosionActor_DelayedExplosionDamage_Params
{
};

// Function GameFramework.GameExplosionActor.Explode
struct AGameExplosionActor_Explode_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
struct AGameExplosionActor_SpawnExplosionFogVolume_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
struct AGameExplosionActor_SpawnExplosionDecal_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
struct AGameExplosionActor_SpawnExplosionParticleSystem_Params
{
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
struct AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params
{
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
struct AGameExplosionActor_SpecialCringeEffectsFor_Params
{
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
struct AGameExplosionActor_SpecialPawnEffectsFor_Params
{
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
struct AGameExplosionActor_GetEffectCheckRadius_Params
{
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
struct AGameExplosionActor_DoExplosionDamage_Params
{
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
struct AGameExplosionActor_BoxDistanceToPoint_Params
{
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
struct AGameExplosionActor_IsBehindExplosion_Params
{
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
struct AGameExplosionActor_DoFullDamageToActor_Params
{
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
struct AGameExplosionActor_GetPhysicalMaterial_Params
{
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
struct AGameExplosionActor_PreBeginPlay_Params
{
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
struct AGamePawn_ReattachMeshWithoutBeingSeen_Params
{
};

// Function GameFramework.GamePawn.ReattachMesh
struct AGamePawn_ReattachMesh_Params
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
struct AGamePawn_UpdateShadowSettings_Params
{
};

// Function GameFramework.DebugCameraController.ConsoleCommand
struct ADebugCameraController_ConsoleCommand_Params
{
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
struct ADebugCameraController_ShowDebugSelectedInfo_Params
{
};

// Function GameFramework.DebugCameraController.NativeInputKey
struct ADebugCameraController_NativeInputKey_Params
{
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
struct ADebugCameraController_InitDebugInputSystem_Params
{
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
struct ADebugCameraController_DisableDebugCamera_Params
{
};

// Function GameFramework.DebugCameraController.NormalSpeed
struct ADebugCameraController_NormalSpeed_Params
{
};

// Function GameFramework.DebugCameraController.MoreSpeed
struct ADebugCameraController_MoreSpeed_Params
{
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
struct ADebugCameraController_SetFreezeRendering_Params
{
};

// Function GameFramework.DebugCameraController.OnDeactivate
struct ADebugCameraController_OnDeactivate_Params
{
};

// Function GameFramework.DebugCameraController.OnActivate
struct ADebugCameraController_OnActivate_Params
{
};

// Function GameFramework.DebugCameraController.PostBeginPlay
struct ADebugCameraController_PostBeginPlay_Params
{
};

// Function GameFramework.DebugCameraController.Unselect
struct ADebugCameraController_Unselect_Params
{
};

// Function GameFramework.DebugCameraController.SecondarySelect
struct ADebugCameraController_SecondarySelect_Params
{
};

// Function GameFramework.DebugCameraController.PrimarySelect
struct ADebugCameraController_PrimarySelect_Params
{
};

// Function GameFramework.MobileHUD.RenderKismetHud
struct AMobileHUD_RenderKismetHud_Params
{
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
struct AMobileHUD_AddKismetRenderEvent_Params
{
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
struct AMobileHUD_RefreshKismetLinks_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
struct AMobileHUD_DrawMobileZone_Slider_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileTilt
struct AMobileHUD_DrawMobileTilt_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
struct AMobileHUD_DrawMobileZone_Trackball_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
struct AMobileHUD_DrawMobileZone_Joystick_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
struct AMobileHUD_DrawMobileZone_Button_Params
{
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
struct AMobileHUD_DrawInputZoneOverlays_Params
{
};

// Function GameFramework.MobileHUD.RenderMobileMenu
struct AMobileHUD_RenderMobileMenu_Params
{
};

// Function GameFramework.MobileHUD.ShowMobileHud
struct AMobileHUD_ShowMobileHud_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
struct AMobileHUD_DrawMobileDebugString_Params
{
};

// Function GameFramework.MobileHUD.PostRender
struct AMobileHUD_PostRender_Params
{
};

// Function GameFramework.MobileHUD.PostBeginPlay
struct AMobileHUD_PostBeginPlay_Params
{
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
struct UMobileInputZone_AddKismetEventHandler_Params
{
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
struct UMobileInputZone_OnPostDrawZone_Params
{
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
struct UMobileInputZone_OnPreDrawZone_Params
{
};

// Function GameFramework.MobileInputZone.OnProcessSlide
struct UMobileInputZone_OnProcessSlide_Params
{
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
struct UMobileInputZone_OnDoubleTapDelegate_Params
{
};

// Function GameFramework.MobileInputZone.OnTapDelegate
struct UMobileInputZone_OnTapDelegate_Params
{
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
struct UMobileInputZone_OnProcessInputDelegate_Params
{
};

// Function GameFramework.MobileInputZone.DeactivateZone
struct UMobileInputZone_DeactivateZone_Params
{
};

// Function GameFramework.MobileInputZone.ActivateZone
struct UMobileInputZone_ActivateZone_Params
{
};

// Function GameFramework.MobileMenuObject.GetIconIndexes
struct UMobileMenuObject_GetIconIndexes_Params
{
};

// Function GameFramework.MobileMenuObject.RenderObject
struct UMobileMenuObject_RenderObject_Params
{
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
struct UMobileMenuObject_SetCanvasPos_Params
{
};

// Function GameFramework.MobileMenuObject.InitMenuObject
struct UMobileMenuObject_InitMenuObject_Params
{
};

// Function GameFramework.MobileMenuObject.GetRealPosition
struct UMobileMenuObject_GetRealPosition_Params
{
};

// Function GameFramework.MobileMenuObject.OnTouch
struct UMobileMenuObject_OnTouch_Params
{
};

// Function GameFramework.MobileMenuImage.RenderObject
struct UMobileMenuImage_RenderObject_Params
{
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
struct UMobileMenuScene_MobileMenuCommand_Params
{
};

// Function GameFramework.MobileMenuScene.FindMenuObject
struct UMobileMenuScene_FindMenuObject_Params
{
};

// Function GameFramework.MobileMenuScene.CleanUpScene
struct UMobileMenuScene_CleanUpScene_Params
{
};

// Function GameFramework.MobileMenuScene.Closed
struct UMobileMenuScene_Closed_Params
{
};

// Function GameFramework.MobileMenuScene.Closing
struct UMobileMenuScene_Closing_Params
{
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
struct UMobileMenuScene_MadeTopMenu_Params
{
};

// Function GameFramework.MobileMenuScene.Opened
struct UMobileMenuScene_Opened_Params
{
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
struct UMobileMenuScene_OnSceneTouch_Params
{
};

// Function GameFramework.MobileMenuScene.OnTouch
struct UMobileMenuScene_OnTouch_Params
{
};

// Function GameFramework.MobileMenuScene.PostRenderMenuObject
struct UMobileMenuScene_PostRenderMenuObject_Params
{
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
struct UMobileMenuScene_PreRenderMenuObject_Params
{
};

// Function GameFramework.MobileMenuScene.RenderScene
struct UMobileMenuScene_RenderScene_Params
{
};

// Function GameFramework.MobileMenuScene.GetSceneFont
struct UMobileMenuScene_GetSceneFont_Params
{
};

// Function GameFramework.MobileMenuScene.InitMenuScene
struct UMobileMenuScene_InitMenuScene_Params
{
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
struct UMobileMenuScene_GetGlobalScaleY_Params
{
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
struct UMobileMenuScene_GetGlobalScaleX_Params
{
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
struct UMobilePlayerInput_OpenMobileMenuMode_Params
{
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
struct UMobilePlayerInput_OpenMobileMenu_Params
{
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
struct UMobilePlayerInput_MobileMenuCommand_Params
{
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
struct UMobilePlayerInput_SceneRenderToggle_Params
{
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
struct UMobilePlayerInput_PreClientTravel_Params
{
};

// Function GameFramework.MobilePlayerInput.RenderMenus
struct UMobilePlayerInput_RenderMenus_Params
{
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
struct UMobilePlayerInput_CloseAllMenus_Params
{
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
struct UMobilePlayerInput_CloseMenuScene_Params
{
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
struct UMobilePlayerInput_OpenMenuScene_Params
{
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
struct UMobilePlayerInput_SetMobileInputConfig_Params
{
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
struct UMobilePlayerInput_ActivateInputGroup_Params
{
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
struct UMobilePlayerInput_GetCurrentZones_Params
{
};

// Function GameFramework.MobilePlayerInput.HasZones
struct UMobilePlayerInput_HasZones_Params
{
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
struct UMobilePlayerInput_FindorAddZone_Params
{
};

// Function GameFramework.MobilePlayerInput.FindZone
struct UMobilePlayerInput_FindZone_Params
{
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
struct UMobilePlayerInput_AddKismetRawInputEventHandler_Params
{
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
struct UMobilePlayerInput_AddKismetEventHandler_Params
{
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
struct UMobilePlayerInput_RefreshKismetLinks_Params
{
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
struct UMobilePlayerInput_SwapZoneOwners_Params
{
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
struct UMobilePlayerInput_InitializeInputZones_Params
{
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
struct UMobilePlayerInput_InitTouchSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
struct UMobilePlayerInput_ClientInitInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
struct UMobilePlayerInput_InitInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
struct UMobilePlayerInput_ProcessWorldTouch_Params
{
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
struct UMobilePlayerInput_SendInputAxis_Params
{
};

// Function GameFramework.MobilePlayerInput.SendInputKey
struct UMobilePlayerInput_SendInputKey_Params
{
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
struct UMobilePlayerInput_ConditionalUpdateInputZones_Params
{
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
struct UMobilePlayerInput_NativeInitializeInputZones_Params
{
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
struct UMobilePlayerInput_NativeInitializeInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
struct UMobilePlayerInput_OnInputTouch_Params
{
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
struct UMobilePlayerInput_OnPreviewTouch_Params
{
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
struct UMobilePlayerInput_OnTouchNotHandledInMenu_Params
{
};

// Function GameFramework.MobilePlayerInput.PlayerInput
struct UMobilePlayerInput_PlayerInput_Params
{
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
struct UMobilePlayerInput_CancelMobileInput_Params
{
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
struct UMobilePlayerInput_ProcessMobileInput_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
struct UNavMeshGoal_OutOfViewFrom_Recycle_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
struct UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
struct UNavMeshGoal_OutOfViewFrom_RecycleNative_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params
{
};

// Function GameFramework.SecondaryViewportClient.PostRender
struct USecondaryViewportClient_PostRender_Params
{
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
struct UMobileSecondaryViewportClient_PostRender_Params
{
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
struct USeqAct_GameCrowdPopulationManagerToggle_AgentDestroyed_Params
{
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
struct USeqAct_GameCrowdPopulationManagerToggle_GetMaxSpawnDist_Params
{
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
struct USeqAct_GameCrowdPopulationManagerToggle_FillCrowdSpawnInfoItem_Params
{
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
struct USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
struct USeqAct_GameCrowdSpawner_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
struct USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
struct USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params
{
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
struct USeqAct_PlayAgentAnimation_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqEvent_HudRender.Render
struct USeqEvent_HudRender_Render_Params
{
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
struct USeqEvent_HudRender_RegisterEvent_Params
{
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
struct USeqEvent_MobileBase_AddToMobileInput_Params
{
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
struct USeqEvent_MobileBase_RegisterEvent_Params
{
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
struct USeqEvent_MobileMotion_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
struct USeqEvent_MobileZoneBase_AddToMobileInput_Params
{
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
struct USeqEvent_MobileRawInput_RegisterEvent_Params
{
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
struct UGameCameraBase_ModifyPostProcessSettings_Params
{
};

// Function GameFramework.GameCameraBase.Init
struct UGameCameraBase_Init_Params
{
};

// Function GameFramework.GameCameraBase.DisplayDebug
struct UGameCameraBase_DisplayDebug_Params
{
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
struct UGameCameraBase_ProcessViewRotation_Params
{
};

// Function GameFramework.GameCameraBase.UpdateCamera
struct UGameCameraBase_UpdateCamera_Params
{
};

// Function GameFramework.GameCameraBase.ResetInterpolation
struct UGameCameraBase_ResetInterpolation_Params
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
struct UGameCameraBase_OnBecomeInActive_Params
{
};

// Function GameFramework.GameCameraBase.OnBecomeActive
struct UGameCameraBase_OnBecomeActive_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
struct UGameThirdPersonCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
struct UGameThirdPersonCamera_ModifyPostProcessSettings_Params
{
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
struct UGameThirdPersonCamera_OnBecomeActive_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
struct UGameThirdPersonCamera_ProcessViewRotation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
struct UGameThirdPersonCamera_UpdateCameraMode_Params
{
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
struct UGameThirdPersonCamera_FindBestCameraMode_Params
{
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
struct UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
struct UGameThirdPersonCamera_GetActualFocusLocation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
struct UGameThirdPersonCamera_UpdateFocusPoint_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
struct UGameThirdPersonCamera_ClearFocusPoint_Params
{
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
struct UGameThirdPersonCamera_GetFocusActor_Params
{
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
struct UGameThirdPersonCamera_SetFocusOnActor_Params
{
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
struct UGameThirdPersonCamera_SetFocusOnLoc_Params
{
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
struct UGameThirdPersonCamera_AdjustTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
struct UGameThirdPersonCamera_EndTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
struct UGameThirdPersonCamera_BeginTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
struct UGameThirdPersonCamera_PlayerUpdateCamera_Params
{
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
struct UGameThirdPersonCamera_UpdateCamera_Params
{
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
struct UGameThirdPersonCamera_GetDesiredFOV_Params
{
};

// Function GameFramework.GameThirdPersonCamera.Init
struct UGameThirdPersonCamera_Init_Params
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
struct UGameThirdPersonCamera_Reset_Params
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
struct UGameThirdPersonCamera_CreateCameraMode_Params
{
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
struct AGamePlayerCamera_AdjustFOVForViewport_Params
{
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
struct AGamePlayerCamera_ProcessViewRotation_Params
{
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
struct AGamePlayerCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
struct AGamePlayerCamera_SetColorScale_Params
{
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
struct AGamePlayerCamera_DisplayDebug_Params
{
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
struct AGamePlayerCamera_UpdateCameraLensEffects_Params
{
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
struct AGamePlayerCamera_UpdateViewTarget_Params
{
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
struct AGamePlayerCamera_ShouldConstrainAspectRatio_Params
{
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
struct AGamePlayerCamera_FindBestCameraType_Params
{
};

// Function GameFramework.GamePlayerCamera.Reset
struct AGamePlayerCamera_Reset_Params
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
struct AGamePlayerCamera_PostBeginPlay_Params
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
struct AGamePlayerCamera_CacheLastTargetBaseInfo_Params
{
};

// Function GameFramework.GamePlayerCamera.CreateCamera
struct AGamePlayerCamera_CreateCamera_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
struct UGameThirdPersonCameraMode_SetViewOffset_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
struct UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
struct UGameThirdPersonCameraMode_UpdatePostProcess_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
struct UGameThirdPersonCameraMode_DOFTrace_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
struct UGameThirdPersonCameraMode_GetDOFFocusLoc_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
struct UGameThirdPersonCameraMode_ProcessViewRotation_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
struct UGameThirdPersonCameraMode_SetFocusPoint_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
struct UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
struct UGameThirdPersonCameraMode_GetDesiredFOV_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
struct UGameThirdPersonCameraMode_AdjustViewOffset_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
struct UGameThirdPersonCameraMode_OnBecomeInActive_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
struct UGameThirdPersonCameraMode_OnBecomeActive_Params
{
};

// Function GameFramework.GameThirdPersonCameraMode.Init
struct UGameThirdPersonCameraMode_Init_Params
{
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
struct UGameSpecialMove_RelativeToWorldOffset_Params
{
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
struct UGameSpecialMove_WorldToRelativeOffset_Params
{
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
struct UGameSpecialMove_ForcePawnRotation_Params
{
};

// Function GameFramework.GameSpecialMove.MessageEvent
struct UGameSpecialMove_MessageEvent_Params
{
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
struct UGameSpecialMove_ResetFacePreciseRotation_Params
{
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
struct UGameSpecialMove_ReachedPrecisePosition_Params
{
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
struct UGameSpecialMove_SetFacePreciseRotation_Params
{
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
struct UGameSpecialMove_SetReachPreciseDestination_Params
{
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
struct UGameSpecialMove_ShouldReplicate_Params
{
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
struct UGameSpecialMove_SpecialMoveFlagsUpdated_Params
{
};

// Function GameFramework.GameSpecialMove.Tick
struct UGameSpecialMove_Tick_Params
{
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
struct UGameSpecialMove_SpecialMoveEnded_Params
{
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
struct UGameSpecialMove_SpecialMoveStarted_Params
{
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
struct UGameSpecialMove_InternalCanDoSpecialMove_Params
{
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
struct UGameSpecialMove_CanDoSpecialMove_Params
{
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
struct UGameSpecialMove_CanOverrideSpecialMove_Params
{
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
struct UGameSpecialMove_CanOverrideMoveWith_Params
{
};

// Function GameFramework.GameSpecialMove.CanChainMove
struct UGameSpecialMove_CanChainMove_Params
{
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
struct UGameSpecialMove_ExtractSpecialMoveFlags_Params
{
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
struct UGameSpecialMove_InitSpecialMoveFlags_Params
{
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
struct UGameSpecialMove_InitSpecialMove_Params
{
};

// Function GameFramework.GameStateObject.Reset
struct UGameStateObject_Reset_Params
{
};

// Function GameFramework.GameStateObject.PreProcessStream
struct UGameStateObject_PreProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
struct UGameStatsAggregator_GetAggregateMappingIDs_Params
{
};

// Function GameFramework.GameStatsAggregator.Reset
struct UGameStatsAggregator_Reset_Params
{
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
struct UGameStatsAggregator_PostProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
struct UGameStatsAggregator_PreProcessStream_Params
{
};

// Function GameFramework.DebugCameraHUD.PostRender
struct ADebugCameraHUD_PostRender_Params
{
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
struct ADebugCameraHUD_DisplayMaterials_Params
{
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
struct ADebugCameraHUD_PostBeginPlay_Params
{
};

// Function GameFramework.DebugCameraInput.InputKey
struct UDebugCameraInput_InputKey_Params
{
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
struct UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params
{
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
struct UGameCrowdSpawnerInterface_AgentDestroyed_Params
{
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
struct UGameCrowdSpawnInterface_GetSpawnPosition_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
struct UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
struct UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
struct UGameAICmd_Hover_MoveToGoal_Pushed_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
struct UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
struct UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
struct UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
struct UGameAICmd_Hover_MoveToGoal_Mesh_ShouldUpdateBreadCrumbs_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
struct UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
struct UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
struct UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
struct UGameAICmd_Hover_MoveToGoal_Mesh_Tick_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
struct UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
struct UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverBackToMesh_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params
{
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
struct UGameFixedCamera_OnBecomeActive_Params
{
};

// Function GameFramework.GameFixedCamera.UpdateCamera
struct UGameFixedCamera_UpdateCamera_Params
{
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
struct AGameKActorSpawnableEffect_StartScalingDown_Params
{
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
struct AGameKActorSpawnableEffect_FellOutOfWorld_Params
{
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
struct AGameKActorSpawnableEffect_PostBeginPlay_Params
{
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
struct AMobileDebugCameraController_SetupDebugZones_Params
{
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
struct AMobileDebugCameraController_InitInputSystem_Params
{
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
struct AMobileDebugCameraController_OnDeactivate_Params
{
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
struct AMobileDebugCameraController_InitDebugInputSystem_Params
{
};

// Function GameFramework.MobileDebugCameraController.OnActivate
struct AMobileDebugCameraController_OnActivate_Params
{
};

// Function GameFramework.MobileDebugCameraInput.InputKey
struct UMobileDebugCameraInput_InputKey_Params
{
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
struct AMobileDebugCameraHUD_PostRender_Params
{
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
struct AMobileDebugCameraHUD_DisplayMaterials_Params
{
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
struct AMobileDebugCameraHUD_PostBeginPlay_Params
{
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
struct UMobileMenuBar_UpdateItemViewports_Params
{
};

// Function GameFramework.MobileMenuBar.SetFirstItem
struct UMobileMenuBar_SetFirstItem_Params
{
};

// Function GameFramework.MobileMenuBar.RenderItem
struct UMobileMenuBar_RenderItem_Params
{
};

// Function GameFramework.MobileMenuBar.RenderObject
struct UMobileMenuBar_RenderObject_Params
{
};

// Function GameFramework.MobileMenuBar.OnTouch
struct UMobileMenuBar_OnTouch_Params
{
};

// Function GameFramework.MobileMenuBar.GetSelected
struct UMobileMenuBar_GetSelected_Params
{
};

// Function GameFramework.MobileMenuBar.Num
struct UMobileMenuBar_Num_Params
{
};

// Function GameFramework.MobileMenuBar.AddItem
struct UMobileMenuBar_AddItem_Params
{
};

// Function GameFramework.MobileMenuBar.InitMenuObject
struct UMobileMenuBar_InitMenuObject_Params
{
};

// Function GameFramework.MobileMenuBarItem.RenderItem
struct UMobileMenuBarItem_RenderItem_Params
{
};

// Function GameFramework.MobileMenuButton.RenderCaption
struct UMobileMenuButton_RenderCaption_Params
{
};

// Function GameFramework.MobileMenuButton.RenderObject
struct UMobileMenuButton_RenderObject_Params
{
};

// Function GameFramework.MobileMenuButton.InitMenuObject
struct UMobileMenuButton_InitMenuObject_Params
{
};

// Function GameFramework.MobileMenuElement.GetIconIndexes
struct UMobileMenuElement_GetIconIndexes_Params
{
};

// Function GameFramework.MobileMenuElement.RenderElement
struct UMobileMenuElement_RenderElement_Params
{
};

// Function GameFramework.MobileMenuElement.OnTouch
struct UMobileMenuElement_OnTouch_Params
{
};

// Function GameFramework.MobileMenuGame.RestartPlayer
struct AMobileMenuGame_RestartPlayer_Params
{
};

// Function GameFramework.MobileMenuGame.StartMatch
struct AMobileMenuGame_StartMatch_Params
{
};

// Function GameFramework.MobileMenuGame.PostLogin
struct AMobileMenuGame_PostLogin_Params
{
};

// Function GameFramework.MobileMenuInventory.GetIconIndexes
struct UMobileMenuInventory_GetIconIndexes_Params
{
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
struct UMobileMenuInventory_RenderDragItem_Params
{
};

// Function GameFramework.MobileMenuInventory.RenderObject
struct UMobileMenuInventory_RenderObject_Params
{
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
struct UMobileMenuInventory_GetIndexOfItem_Params
{
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
struct UMobileMenuInventory_FindSlotIndexAt_Params
{
};

// Function GameFramework.MobileMenuInventory.InitDragAt
struct UMobileMenuInventory_InitDragAt_Params
{
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
struct UMobileMenuInventory_UpdateItemInSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
struct UMobileMenuInventory_AddItemToSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
struct UMobileMenuInventory_SwapItemsInSlots_Params
{
};

// Function GameFramework.MobileMenuInventory.OnTouch
struct UMobileMenuInventory_OnTouch_Params
{
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
struct UMobileMenuInventory_CanPutItemInSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
struct UMobileMenuInventory_ScaleSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.AddSlot
struct UMobileMenuInventory_AddSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
struct UMobileMenuInventory_InitMenuObject_Params
{
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
struct UMobileMenuInventory_OnUpdateDrag_Params
{
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
struct UMobileMenuInventory_DoCanPutItemInSlot_Params
{
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
struct UMobileMenuInventory_OnUpdateItemInSlot_Params
{
};

// Function GameFramework.MobileMenuLabel.RenderObject
struct UMobileMenuLabel_RenderObject_Params
{
};

// Function GameFramework.MobileMenuList.GetIconIndexes
struct UMobileMenuList_GetIconIndexes_Params
{
};

// Function GameFramework.MobileMenuList.ItemScrollSize
struct UMobileMenuList_ItemScrollSize_Params
{
};

// Function GameFramework.MobileMenuList.RenderObject
struct UMobileMenuList_RenderObject_Params
{
};

// Function GameFramework.MobileMenuList.UpdateScroll
struct UMobileMenuList_UpdateScroll_Params
{
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
struct UMobileMenuList_CalculateSelectedItem_Params
{
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
struct UMobileMenuList_GetItemClickPosition_Params
{
};

// Function GameFramework.MobileMenuList.OnTouch
struct UMobileMenuList_OnTouch_Params
{
};

// Function GameFramework.MobileMenuList.SetSelectedItem
struct UMobileMenuList_SetSelectedItem_Params
{
};

// Function GameFramework.MobileMenuList.GetNumVisible
struct UMobileMenuList_GetNumVisible_Params
{
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
struct UMobileMenuList_SetSelectedToVisibleIndex_Params
{
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
struct UMobileMenuList_GetVisibleIndexOfSelected_Params
{
};

// Function GameFramework.MobileMenuList.GetAmountSelected
struct UMobileMenuList_GetAmountSelected_Params
{
};

// Function GameFramework.MobileMenuList.GetSelected
struct UMobileMenuList_GetSelected_Params
{
};

// Function GameFramework.MobileMenuList.Num
struct UMobileMenuList_Num_Params
{
};

// Function GameFramework.MobileMenuList.AddItem
struct UMobileMenuList_AddItem_Params
{
};

// Function GameFramework.MobileMenuList.InitMenuObject
struct UMobileMenuList_InitMenuObject_Params
{
};

// Function GameFramework.MobileMenuListItem.RenderItem
struct UMobileMenuListItem_RenderItem_Params
{
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
struct UMobileMenuObjectProxy_RenderObject_Params
{
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
struct UMobileMenuObjectProxy_OnTouch_Params
{
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
struct UMobileMenuObjectProxy_OnRenderObject_Params
{
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
struct UMobileMenuObjectProxy_OnTouchEvent_Params
{
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
struct AMobileTouchInputVolume_HandleDragOver_Params
{
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
struct AMobileTouchInputVolume_HandleDoubleClick_Params
{
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
struct AMobileTouchInputVolume_HandleClick_Params
{
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
struct AMobileTouchInputVolume_OnToggle_Params
{
};

// Function GameFramework.TouchableElement3D.HandleDragOver
struct UTouchableElement3D_HandleDragOver_Params
{
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
struct UTouchableElement3D_HandleDoubleClick_Params
{
};

// Function GameFramework.TouchableElement3D.HandleClick
struct UTouchableElement3D_HandleClick_Params
{
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
struct APlayerCollectorGame_GetSeamlessTravelActorList_Params
{
};

// Function GameFramework.PlayerCollectorGame.Login
struct APlayerCollectorGame_Login_Params
{
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
struct USeqEvent_HudRenderImage_Render_Params
{
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
struct USeqEvent_HudRenderText_GetObjClassVersion_Params
{
};

// Function GameFramework.SeqEvent_HudRenderText.Render
struct USeqEvent_HudRenderText_Render_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
