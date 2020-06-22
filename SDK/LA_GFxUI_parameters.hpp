#pragma once

// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "LA_GFxUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
struct UGFxFSCmdHandler_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (Parm)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
struct UGFxInteraction_CloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
struct UGFxInteraction_NotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
struct UGFxInteraction_NotifyPlayerRemoved_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	class ULocalPlayer*                                RemovedPlayer;                                            // (Parm)
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
struct UGFxInteraction_NotifyPlayerAdded_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	class ULocalPlayer*                                AddedPlayer;                                              // (Parm)
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
struct UGFxInteraction_NotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
struct UGFxInteraction_GetFocusMovie_Params
{
	int                                                ControllerId;                                             // (Parm)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
struct UGFxMoviePlayer_UpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
struct UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params
{
	bool                                               bRemoveEffect;                                            // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
struct UGFxMoviePlayer_ApplyPriorityBlurEffect_Params
{
	bool                                               bRemoveEffect;                                            // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
struct UGFxMoviePlayer_ApplyPriorityEffect_Params
{
	bool                                               bRequestedBlurState;                                      // (Parm)
	bool                                               bRequestedHiddenState;                                    // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
struct UGFxMoviePlayer_PlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                                // (Parm)
	struct FName                                       SoundThemeName;                                           // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
struct UGFxMoviePlayer_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetPC
struct UGFxMoviePlayer_GetPC_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetLP
struct UGFxMoviePlayer_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.Init
struct UGFxMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
struct UGFxMoviePlayer_SetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                             // (Parm)
	struct FName                                       Path;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
struct UGFxMoviePlayer_PostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
struct UGFxMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
struct UGFxMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
struct UGFxMoviePlayer_ActionScriptString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
struct UGFxMoviePlayer_ActionScriptFloat_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
struct UGFxMoviePlayer_ActionScriptInt_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
struct UGFxMoviePlayer_ActionScriptVoid_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer._Invoke
struct UGFxMoviePlayer__Invoke_Params
{
	struct FString                                     method;                                                   // (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
struct UGFxMoviePlayer_ActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                                   // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
struct UGFxMoviePlayer_CreateArray_Params
{
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
struct UGFxMoviePlayer_CreateObject_Params
{
	struct FString                                     ASClass;                                                  // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	TArray<struct FASValue>                            args;                                                     // (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
struct UGFxMoviePlayer_SetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FString>                             Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
struct UGFxMoviePlayer_SetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<float>                                      Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
struct UGFxMoviePlayer_SetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<int>                                        Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
struct UGFxMoviePlayer_SetVariableArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FASValue>                            Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
struct UGFxMoviePlayer_GetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FString>                             Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
struct UGFxMoviePlayer_GetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<float>                                      Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
struct UGFxMoviePlayer_GetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<int>                                        Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
struct UGFxMoviePlayer_GetVariableArray_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                Index;                                                    // (Parm)
	TArray<struct FASValue>                            Arg;                                                      // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
struct UGFxMoviePlayer_SetVariableObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  Object;                                                   // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
struct UGFxMoviePlayer_SetVariableString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
struct UGFxMoviePlayer_SetVariableInt_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
struct UGFxMoviePlayer_SetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
struct UGFxMoviePlayer_SetVariableBool_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	bool                                               B;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
struct UGFxMoviePlayer_SetVariable_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
struct UGFxMoviePlayer_GetVariableObject_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
struct UGFxMoviePlayer_GetVariableString_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
struct UGFxMoviePlayer_GetVariableInt_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
struct UGFxMoviePlayer_GetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
struct UGFxMoviePlayer_GetVariableBool_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
struct UGFxMoviePlayer_GetVariable_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
struct UGFxMoviePlayer_GetAVMVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
struct UGFxMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
struct UGFxMoviePlayer_FlushPlayerInput_Params
{
	bool                                               capturekeysonly;                                          // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
struct UGFxMoviePlayer_ClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
struct UGFxMoviePlayer_AddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                                      // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
struct UGFxMoviePlayer_ClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
struct UGFxMoviePlayer_AddCaptureKey_Params
{
	struct FName                                       Key;                                                      // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	bool                                               bCanReceiveInput;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	bool                                               bCanReceiveFocus;                                         // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                                 // (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FMatrix                                     matView;                                                  // (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
struct UGFxMoviePlayer_GetVisibleFrameRect_Params
{
	float                                              x0;                                                       // (Parm, OutParm)
	float                                              y0;                                                       // (Parm, OutParm)
	float                                              X1;                                                       // (Parm, OutParm)
	float                                              Y1;                                                       // (Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	TEnumAsByte<EGFxAlign>                             A;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	TEnumAsByte<EGFxScaleMode>                         SM;                                                       // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
struct UGFxMoviePlayer_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
struct UGFxMoviePlayer_SetPriority_Params
{
	unsigned char                                      NewPriority;                                              // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalTextureEx
struct UGFxMoviePlayer_SetExternalTextureEx_Params
{
	struct FString                                     Resource;                                                 // (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                  // (Parm)
	int                                                targetWidth;                                              // (Parm)
	int                                                targetHeight;                                             // (Parm)
	bool                                               targetStretch;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                 // (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
struct UGFxMoviePlayer_SetExternalInterface_Params
{
	class UObject*                                     H;                                                        // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	TEnumAsByte<EGFxTimingMode>                        Mode;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
struct UGFxMoviePlayer_SetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
struct UGFxMoviePlayer_ConditionalClearPause_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
struct UGFxMoviePlayer_OnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
	bool                                               Unload;                                                   // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	bool                                               bPausePlayback;                                           // (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
struct UGFxMoviePlayer_OnPostAdvance_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
struct UGFxMoviePlayer_PostAdvance_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function GFxUI.GFxMoviePlayer.Advance
struct UGFxMoviePlayer_Advance_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function GFxUI.GFxMoviePlayer.Start
struct UGFxMoviePlayer_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.DestroyGFxObject
struct UGFxObject_DestroyGFxObject_Params
{
};

// Function GFxUI.GFxObject.WidgetUnloaded
struct UGFxObject_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
struct UGFxObject_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                frame;                                                    // (Parm)
};

// Function GFxUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	struct FString                                     frame;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                frame;                                                    // (Parm)
};

// Function GFxUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	struct FString                                     frame;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptString
struct UGFxObject_ActionScriptString_Params
{
	struct FString                                     method;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
struct UGFxObject_ActionScriptFloat_Params
{
	struct FString                                     method;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
struct UGFxObject_ActionScriptInt_Params
{
	struct FString                                     method;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
struct UGFxObject_ActionScriptVoid_Params
{
	struct FString                                     method;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject._Invoke
struct UGFxObject__Invoke_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
struct UGFxObject_ActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                                   // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
struct UGFxObject_ActionScriptSetFunction_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
struct UGFxObject_SetElementMemberString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberInt
struct UGFxObject_SetElementMemberInt_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberFloat
struct UGFxObject_SetElementMemberFloat_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberBool
struct UGFxObject_SetElementMemberBool_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               B;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
struct UGFxObject_SetElementMemberObject_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetElementMember
struct UGFxObject_SetElementMember_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
struct UGFxObject_GetElementMemberString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberInt
struct UGFxObject_GetElementMemberInt_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
struct UGFxObject_GetElementMemberFloat_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
struct UGFxObject_GetElementMemberBool_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
struct UGFxObject_GetElementMemberObject_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                               // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObjectEx
struct UGFxObject_GetElementMemberObjectEx_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                               // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	struct FString                                     ASClass;                                                  // (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
struct UGFxObject_GetElementMember_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
struct UGFxObject_SetElementColorTransform_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASColorTransform                           cxform;                                                   // (Parm)
};

// Function GFxUI.GFxObject.SetElementPosition
struct UGFxObject_SetElementPosition_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementVisible
struct UGFxObject_SetElementVisible_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               Visible;                                                  // (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
struct UGFxObject_SetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (Parm)
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
struct UGFxObject_SetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASDisplayInfo                              D;                                                        // (Parm)
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
struct UGFxObject_GetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (Parm)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
struct UGFxObject_GetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASDisplayInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
struct UGFxObject_SetElementString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementInt
struct UGFxObject_SetElementInt_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                I;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementFloat
struct UGFxObject_SetElementFloat_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementBool
struct UGFxObject_SetElementBool_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               B;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetElementObject
struct UGFxObject_SetElementObject_Params
{
	int                                                Index;                                                    // (Parm)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetElement
struct UGFxObject_SetElement_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
struct UGFxObject_GetElementString_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementInt
struct UGFxObject_GetElementInt_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementFloat
struct UGFxObject_GetElementFloat_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
struct UGFxObject_GetElementBool_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
struct UGFxObject_GetElementObject_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     SourceFile;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                               // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObjectEx
struct UGFxObject_GetElementObjectEx_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     SourceFile;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                               // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	struct FString                                     ASClass;                                                  // (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
struct UGFxObject_GetElement_Params
{
	int                                                Index;                                                    // (Parm)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
struct UGFxObject_SetText_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.GetText
struct UGFxObject_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
struct UGFxObject_SetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix
struct UGFxObject_SetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                                   // (Parm)
};

// Function GFxUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                        // (Parm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
struct UGFxObject_GetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
struct UGFxObject_GetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              X;                                                        // (Parm, OutParm)
	float                                              Y;                                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.TranslateString
struct UGFxObject_TranslateString_Params
{
	struct FString                                     StringToTranslate;                                        // (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetFunction
struct UGFxObject_SetFunction_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UObject*                                     context;                                                  // (Parm)
	struct FName                                       fname;                                                    // (Parm)
};

// Function GFxUI.GFxObject.SetObject
struct UGFxObject_SetObject_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (Parm)
};

// Function GFxUI.GFxObject.SetString
struct UGFxObject_SetString_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.SetInt
struct UGFxObject_SetInt_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetFloat
struct UGFxObject_SetFloat_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              F;                                                        // (Parm)
};

// Function GFxUI.GFxObject.SetBool
struct UGFxObject_SetBool_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               B;                                                        // (Parm)
};

// Function GFxUI.GFxObject.Set
struct UGFxObject_Set_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.IsObject
struct UGFxObject_IsObject_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsString
struct UGFxObject_IsString_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsInt
struct UGFxObject_IsInt_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsFloat
struct UGFxObject_IsFloat_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsBool
struct UGFxObject_IsBool_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetObject
struct UGFxObject_GetObject_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                               // (OptionalParm, Parm)
	class UClass*                                      Type;                                                     // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetString
struct UGFxObject_GetString_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetInt
struct UGFxObject_GetInt_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetFloat
struct UGFxObject_GetFloat_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
struct UGFxObject_GetBool_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.Get
struct UGFxObject_Get_Params
{
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
struct UGFxClikWidget_ASRemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
struct UGFxClikWidget_AS3AddEventListener_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (Parm)
	bool                                               useCapture;                                               // (OptionalParm, Parm)
	int                                                listenerPriority;                                         // (OptionalParm, Parm)
	bool                                               useWeakReference;                                         // (OptionalParm, Parm)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
struct UGFxClikWidget_ASAddEventListener_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     func;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
struct UGFxClikWidget_SetListener_Params
{
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Listener;                                                 // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
struct UGFxClikWidget_GetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
struct UGFxClikWidget_RemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
struct UGFxClikWidget_AddEventListener_Params
{
	struct FName                                       Type;                                                     // (Parm)
	struct FScriptDelegate                             Listener;                                                 // (Parm, NeedCtorLink)
	bool                                               useCapture;                                               // (OptionalParm, Parm)
	int                                                listenerPriority;                                         // (OptionalParm, Parm)
	bool                                               useWeakReference;                                         // (OptionalParm, Parm)
};

// Function GFxUI.GFxClikWidget.EventListener
struct UGFxClikWidget_EventListener_Params
{
	struct FEventData                                  Data;                                                     // (Parm, NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
struct UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
struct UGFxAction_GetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
struct UGFxAction_Invoke_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
struct UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
struct UGFxAction_SetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
struct UGFxFSCmdHandler_Kismet_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (Parm)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
