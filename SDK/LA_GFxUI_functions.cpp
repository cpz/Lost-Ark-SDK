// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_GFxUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
// (Defined, Iterator, Latent, Net, Exec, HasOptionalParms)

void UGFxFSCmdHandler::FSCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler.FSCommand");

	UGFxFSCmdHandler_FSCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxInteraction::CloseAllMoviePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");

	UGFxInteraction_CloseAllMoviePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// (Final, Defined, Latent, Singular, Net, Operator, Static, HasOptionalParms)

void UGFxInteraction::STATIC_NotifySplitscreenLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	UGFxInteraction_NotifySplitscreenLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// (Final, Iterator, Singular, Net, Operator, Static, HasOptionalParms)

void UGFxInteraction::STATIC_NotifyPlayerRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");

	UGFxInteraction_NotifyPlayerRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// (Iterator, Singular, Net, Operator, Static, HasOptionalParms)

void UGFxInteraction::STATIC_NotifyPlayerAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerAdded");

	UGFxInteraction_NotifyPlayerAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// (Final, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UGFxInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");

	UGFxInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.GetFocusMovie
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxInteraction::GetFocusMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.GetFocusMovie");

	UGFxInteraction_GetFocusMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// (PreOperator, Singular, Net, Static, Const)

void UGFxMoviePlayer::STATIC_UpdateSplitscreenLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	UGFxMoviePlayer_UpdateSplitscreenLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ApplyPriorityBlurEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	UGFxMoviePlayer_ApplyPriorityBlurEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// (Defined, Latent, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::ApplyPriorityEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	UGFxMoviePlayer_ApplyPriorityEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// (Defined, Iterator, Latent, Static, Const)

void UGFxMoviePlayer::STATIC_PlaySoundFromTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	UGFxMoviePlayer_PlaySoundFromTheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusLost
// (Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::OnFocusLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusGained
// (Final, Defined, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::OnFocusGained()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// (Iterator, Net, Event, Operator, HasOptionalParms)

void UGFxMoviePlayer::ConsoleCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConsoleCommand");

	UGFxMoviePlayer_ConsoleCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetPC
// (PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::GetPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetPC");

	UGFxMoviePlayer_GetPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetLP
// (Final, Defined, Iterator, Latent, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::GetLP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetLP");

	UGFxMoviePlayer_GetLP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UGFxMoviePlayer::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Init");

	UGFxMoviePlayer_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// (PreOperator, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetWidgetPathBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	UGFxMoviePlayer_SetWidgetPathBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// (Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostWidgetInit");

	UGFxMoviePlayer_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");

	UGFxMoviePlayer_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetInitialized");

	UGFxMoviePlayer_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptString
// (Final, Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ActionScriptString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptString");

	UGFxMoviePlayer_ActionScriptString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// (Final, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ActionScriptFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");

	UGFxMoviePlayer_ActionScriptFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// (Defined, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ActionScriptInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptInt");

	UGFxMoviePlayer_ActionScriptInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// (Defined, Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ActionScriptVoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");

	UGFxMoviePlayer_ActionScriptVoid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer._Invoke
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer._Invoke");

	UGFxMoviePlayer__Invoke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// (Final, Defined, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ActionScriptSetFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	UGFxMoviePlayer_ActionScriptSetFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateArray
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::CreateArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateArray");

	UGFxMoviePlayer_CreateArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateObject
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::CreateObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateObject");

	UGFxMoviePlayer_CreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// (Final, Defined, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableStringArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");

	UGFxMoviePlayer_SetVariableStringArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// (Final, Iterator, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableFloatArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	UGFxMoviePlayer_SetVariableFloatArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// (Final, Defined, Iterator, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableIntArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");

	UGFxMoviePlayer_SetVariableIntArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableArray
// (Final, Defined, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableArray");

	UGFxMoviePlayer_SetVariableArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableStringArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");

	UGFxMoviePlayer_GetVariableStringArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// (PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableFloatArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	UGFxMoviePlayer_GetVariableFloatArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// (Defined, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableIntArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");

	UGFxMoviePlayer_GetVariableIntArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableArray
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableArray");

	UGFxMoviePlayer_GetVariableArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableObject
// (Final, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableObject");

	UGFxMoviePlayer_SetVariableObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableString
// (Defined, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableString");

	UGFxMoviePlayer_SetVariableString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableInt
// (Defined, Iterator, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableInt");

	UGFxMoviePlayer_SetVariableInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// (Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableNumber");

	UGFxMoviePlayer_SetVariableNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableBool
// (Iterator, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariableBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableBool");

	UGFxMoviePlayer_SetVariableBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariable
// (Defined, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetVariable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariable");

	UGFxMoviePlayer_SetVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableObject
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableObject");

	UGFxMoviePlayer_GetVariableObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableString
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableString");

	UGFxMoviePlayer_GetVariableString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableInt
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableInt");

	UGFxMoviePlayer_GetVariableInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableNumber");

	UGFxMoviePlayer_GetVariableNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableBool
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariableBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableBool");

	UGFxMoviePlayer_GetVariableBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariable
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVariable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariable");

	UGFxMoviePlayer_GetVariable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetAVMVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetAVMVersion");

	UGFxMoviePlayer_GetAVMVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// (Final, Iterator, Latent, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::FilterButtonInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FilterButtonInput");

	UGFxMoviePlayer_FilterButtonInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// (Defined, Iterator, Singular, NetReliable, Simulated, Static, HasOptionalParms)

void UGFxMoviePlayer::STATIC_FlushPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");

	UGFxMoviePlayer_FlushPlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	UGFxMoviePlayer_ClearFocusIgnoreKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// (Final, Latent, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::AddFocusIgnoreKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	UGFxMoviePlayer_AddFocusIgnoreKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	UGFxMoviePlayer_ClearCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// (Final, Defined, Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::AddCaptureKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddCaptureKey");

	UGFxMoviePlayer_AddCaptureKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Final, Defined, Latent, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetMovieCanReceiveInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Defined, Latent, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetMovieCanReceiveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// (Final, Iterator, Latent, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetPerspective3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetView3D
// (Iterator, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetView3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetVisibleFrameRect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	UGFxMoviePlayer_GetVisibleFrameRect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetAlignment
// (Iterator, Latent, PreOperator, Static, Const)

void UGFxMoviePlayer::STATIC_SetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// (Defined, Iterator, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetViewScaleMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewport
// (Final, Iterator, Latent, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::GetGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");

	UGFxMoviePlayer_GetGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPriority
// (Defined, Iterator, Latent, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPriority");

	UGFxMoviePlayer_SetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTextureEx
// (Final, Iterator, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetExternalTextureEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTextureEx");

	UGFxMoviePlayer_SetExternalTextureEx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// (Iterator, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetExternalTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// (Final, Defined, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetExternalInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalInterface");

	UGFxMoviePlayer_SetExternalInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetTimingMode
// (Final, Net, Static, Const)

void UGFxMoviePlayer::STATIC_SetTimingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// (Iterator, Latent, PreOperator, Singular, Static, Const)

void UGFxMoviePlayer::STATIC_SetMovieInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieInfo");

	UGFxMoviePlayer_SetMovieInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// (Final, Defined, Latent, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::ConditionalClearPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");

	UGFxMoviePlayer_ConditionalClearPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnCleanup
// (Final, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::OnCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnCleanup");

	UGFxMoviePlayer_OnCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnClose
// (Defined, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Close
// (Defined, Iterator, PreOperator, Singular, Net, Native, Event, Operator)

void UGFxMoviePlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPause
// (Defined, Singular, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void UGFxMoviePlayer::STATIC_SetPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// (Final, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::OnPostAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnPostAdvance");

	UGFxMoviePlayer_OnPostAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostAdvance
// (PreOperator, Static, Const)

void UGFxMoviePlayer::STATIC_PostAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostAdvance");

	UGFxMoviePlayer_PostAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Advance
// (Defined, Latent, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxMoviePlayer::Advance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Advance");

	UGFxMoviePlayer_Advance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Start
// (Final, Defined, Iterator, PreOperator, Net, Exec, HasOptionalParms)

void UGFxMoviePlayer::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.DestroyGFxObject
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::DestroyGFxObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.DestroyGFxObject");

	UGFxObject_DestroyGFxObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.WidgetUnloaded
// (Final, Latent, PreOperator, Net, Exec, HasOptionalParms)

void UGFxObject::WidgetUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetUnloaded");

	UGFxObject_WidgetUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.WidgetInitialized
// (Latent, PreOperator, Net, Exec, HasOptionalParms)

void UGFxObject::WidgetInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetInitialized");

	UGFxObject_WidgetInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStopI
// (Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GotoAndStopI()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStop
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GotoAndStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlayI
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GotoAndPlayI()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlay
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GotoAndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptString
// (Final, Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptString");

	UGFxObject_ActionScriptString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptFloat
// (Final, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptFloat");

	UGFxObject_ActionScriptFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptInt
// (Defined, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptInt");

	UGFxObject_ActionScriptInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptVoid
// (Defined, Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptVoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptVoid");

	UGFxObject_ActionScriptVoid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject._Invoke
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject._Invoke");

	UGFxObject__Invoke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// (Iterator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptSetFunctionOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");

	UGFxObject_ActionScriptSetFunctionOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunction
// (Final, Defined, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::ActionScriptSetFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunction");

	UGFxObject_ActionScriptSetFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberString
// (Defined, Iterator, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMemberString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberString");

	UGFxObject_SetElementMemberString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberInt
// (Iterator, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMemberInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberInt");

	UGFxObject_SetElementMemberInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberFloat
// (Final, Defined, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMemberFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberFloat");

	UGFxObject_SetElementMemberFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberBool
// (Defined, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMemberBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberBool");

	UGFxObject_SetElementMemberBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberObject
// (Final, Iterator, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMemberObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberObject");

	UGFxObject_SetElementMemberObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMember
// (Final, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMember");

	UGFxObject_SetElementMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberString
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberString");

	UGFxObject_GetElementMemberString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberInt
// (Defined, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberInt");

	UGFxObject_GetElementMemberInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberFloat
// (Final, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberFloat");

	UGFxObject_GetElementMemberFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberBool
// (Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberBool");

	UGFxObject_GetElementMemberBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberObject
// (Final, Defined, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObject");

	UGFxObject_GetElementMemberObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberObjectEx
// (Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMemberObjectEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObjectEx");

	UGFxObject_GetElementMemberObjectEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMember
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMember");

	UGFxObject_GetElementMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementColorTransform
// (Iterator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementColorTransform");

	UGFxObject_SetElementColorTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementPosition
// (PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementPosition");

	UGFxObject_SetElementPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementVisible
// (Defined, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementVisible");

	UGFxObject_SetElementVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayMatrix
// (Defined, Iterator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayMatrix");

	UGFxObject_SetElementDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayInfo
// (Final, Iterator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayInfo");

	UGFxObject_SetElementDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayMatrix
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayMatrix");

	UGFxObject_GetElementDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayInfo
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayInfo");

	UGFxObject_GetElementDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementString
// (Final, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementString");

	UGFxObject_SetElementString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementInt
// (Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementInt");

	UGFxObject_SetElementInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementFloat
// (Final, Defined, Iterator, Singular, Static, Const)

void UGFxObject::STATIC_SetElementFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementFloat");

	UGFxObject_SetElementFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementBool
// (Final, Defined, Singular, Static, Const)

void UGFxObject::STATIC_SetElementBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementBool");

	UGFxObject_SetElementBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementObject
// (Final, Defined, Iterator, Latent, Singular, Static, Const)

void UGFxObject::STATIC_SetElementObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementObject");

	UGFxObject_SetElementObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElement
// (Defined, Singular, Static, Const)

void UGFxObject::STATIC_SetElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElement");

	UGFxObject_SetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementString
// (Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementString");

	UGFxObject_GetElementString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementInt
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementInt");

	UGFxObject_GetElementInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementFloat
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementFloat");

	UGFxObject_GetElementFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementBool
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementBool");

	UGFxObject_GetElementBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementObject
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObject");

	UGFxObject_GetElementObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementObjectEx
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElementObjectEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObjectEx");

	UGFxObject_GetElementObjectEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElement
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElement");

	UGFxObject_GetElement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetText
// (Net, Static, Const)

void UGFxObject::STATIC_SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetText");

	UGFxObject_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetText
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetText");

	UGFxObject_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetVisible
// (Final, Defined, Iterator, Latent, Net, Static, Const)

void UGFxObject::STATIC_SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix3D
// (Final, Singular, Static, Const)

void UGFxObject::STATIC_SetDisplayMatrix3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix3D");

	UGFxObject_SetDisplayMatrix3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix
// (Singular, Static, Const)

void UGFxObject::STATIC_SetDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix");

	UGFxObject_SetDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColorTransform
// (Defined, Iterator, Latent, PreOperator, Static, Const)

void UGFxObject::STATIC_SetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetPosition
// (PreOperator, Singular, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void UGFxObject::STATIC_SetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayInfo
// (Final, Defined, Iterator, Latent, PreOperator, Static, Const)

void UGFxObject::STATIC_SetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayMatrix3D
// (Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetDisplayMatrix3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix3D");

	UGFxObject_GetDisplayMatrix3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayMatrix
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix");

	UGFxObject_GetDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetColorTransform
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetPosition
// (Latent, PreOperator, NetReliable, Native, Static, HasOptionalParms)

void UGFxObject::STATIC_GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayInfo
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.TranslateString
// (Final, Iterator, Latent, Singular, Net, Static, Const)

void UGFxObject::STATIC_TranslateString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.TranslateString");

	UGFxObject_TranslateString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFunction
// (Final, Defined, Iterator, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFunction");

	UGFxObject_SetFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetObject
// (PreOperator, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void UGFxObject::STATIC_SetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetObject");

	UGFxObject_SetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetString
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetString");

	UGFxObject_SetString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetInt
// (Latent, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetInt");

	UGFxObject_SetInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFloat
// (Defined, Iterator, PreOperator, Singular, Static, Const)

void UGFxObject::STATIC_SetFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFloat");

	UGFxObject_SetFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetBool
// (Final, Iterator, Latent, PreOperator, Static, Const)

void UGFxObject::STATIC_SetBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetBool");

	UGFxObject_SetBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Set
// (Final, Defined, PreOperator, Singular, Native, Event, Operator, Static, HasOptionalParms)

void UGFxObject::STATIC_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Set");

	UGFxObject_Set_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.IsObject
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::IsObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsObject");

	UGFxObject_IsObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.IsString
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::IsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsString");

	UGFxObject_IsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.IsInt
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::IsInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsInt");

	UGFxObject_IsInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.IsFloat
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::IsFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsFloat");

	UGFxObject_IsFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.IsBool
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::IsBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsBool");

	UGFxObject_IsBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetObject
// (Final, Iterator, Latent, Singular, Net, Native, Static, HasOptionalParms)

void UGFxObject::STATIC_GetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetObject");

	UGFxObject_GetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetString
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)

void UGFxObject::STATIC_GetString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetString");

	UGFxObject_GetString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetInt
// (Singular, Native, Static, HasOptionalParms)

void UGFxObject::STATIC_GetInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetInt");

	UGFxObject_GetInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetFloat
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Static, HasOptionalParms)

void UGFxObject::STATIC_GetFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetFloat");

	UGFxObject_GetFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetBool
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::GetBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetBool");

	UGFxObject_GetBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Get
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxObject::Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Get");

	UGFxObject_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// (Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxClikWidget::ASRemoveAllEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	UGFxClikWidget_ASRemoveAllEventListeners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AS3AddEventListener
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxClikWidget::AS3AddEventListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AS3AddEventListener");

	UGFxClikWidget_AS3AddEventListener_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASAddEventListener
// (Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxClikWidget::ASAddEventListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASAddEventListener");

	UGFxClikWidget_ASAddEventListener_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.SetListener
// (Final, Latent, PreOperator, Singular, Static, Const)

void UGFxClikWidget::STATIC_SetListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.SetListener");

	UGFxClikWidget_SetListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// (Final, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Const)

void UGFxClikWidget::GetEventStringFromTypename()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");

	UGFxClikWidget_GetEventStringFromTypename_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// (Final, Defined, PreOperator, Static, Const)

void UGFxClikWidget::STATIC_RemoveAllEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");

	UGFxClikWidget_RemoveAllEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AddEventListener
// (Latent, Net, Simulated, Exec, Native, Event, Operator, Const)

void UGFxClikWidget::AddEventListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AddEventListener");

	UGFxClikWidget_AddEventListener_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.EventListener
// (Iterator, Latent, Net, Exec, HasOptionalParms)

void UGFxClikWidget::EventListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.EventListener");

	UGFxClikWidget_EventListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// (Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms)

void UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// (Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms)

void UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	UGFxAction_GetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// (Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms)

void UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	UGFxAction_Invoke_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// (Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms)

void UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// (Defined, Iterator, PreOperator, Net, NetReliable, HasOptionalParms)

void UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	UGFxAction_SetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// (Defined, Iterator, Latent, Net, Exec, HasOptionalParms)

void UGFxFSCmdHandler_Kismet::FSCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	UGFxFSCmdHandler_Kismet_FSCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
