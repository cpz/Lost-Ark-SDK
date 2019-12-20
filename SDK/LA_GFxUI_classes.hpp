#pragma once

// Lost Ark (1.12.11.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_GFxUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFxUI.GFxEngine
// 0x0014 (0x006C - 0x0058)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x0058(0x0010)
	int                                                RefCount;                                                 // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEngine");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0058 - 0x0058)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		return ptr;
	}


	void FSCommand();
};


// Class GFxUI.GFxInteraction
// 0x000C (0x00B4 - 0x00A8)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x00A8(0x0008)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved();
	void NotifyPlayerAdded();
	void NotifyGameSessionEnded();
	void GetFocusMovie();
};


// Class GFxUI.GFxMoviePlayer
// 0x0194 (0x01EC - 0x0058)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                                   // 0x0058(0x0008)
	struct FPointer                                    pCaptureKeys;                                             // 0x0060(0x0008)
	struct FPointer                                    pFocusIgnoreKeys;                                         // 0x0068(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0070(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x48];                                      // 0x00B8(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                            // 0x0100(0x0004)
	class USwfMovie*                                   MovieInfo;                                                // 0x0104(0x0008)
	unsigned long                                      bMovieIsOpen : 1;                                         // 0x010C(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x010C(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x010C(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                         // 0x010C(0x0004)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;                    // 0x010C(0x0004)
	unsigned long                                      bAllowInput : 1;                                          // 0x010C(0x0004)
	unsigned long                                      bAllowFocus : 1;                                          // 0x010C(0x0004)
	unsigned long                                      bAutoPlay : 1;                                            // 0x010C(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                                // 0x010C(0x0004)
	unsigned long                                      bDisableWorldRendering : 1;                               // 0x010C(0x0004)
	unsigned long                                      bCaptureWorldRendering : 1;                               // 0x010C(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                                  // 0x010C(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                                  // 0x010C(0x0004)
	unsigned long                                      bForceFullViewport : 1;                                   // 0x010C(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                                // 0x010C(0x0004)
	unsigned long                                      bCaptureInput : 1;                                        // 0x010C(0x0004)
	unsigned long                                      bCaptureMouseInput : 1;                                   // 0x010C(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                                    // 0x010C(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                         // 0x010C(0x0004)
	unsigned long                                      bShowHardwareMouseCursor : 1;                             // 0x010C(0x0004)
	unsigned long                                      bBlurLesserMovies : 1;                                    // 0x010C(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                                    // 0x010C(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                                   // 0x010C(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                                    // 0x010C(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                              // 0x010C(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                                    // 0x010C(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0110(0x0008) (Interp, NonTransactional, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	int                                                LocalPlayerOwnerIndex;                                    // 0x0118(0x0004)
	class UObject*                                     ExternalInterface;                                        // 0x011C(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0124(0x0010)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x0134(0x0010)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x0144(0x0010)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                              // 0x0154(0x0010) (Interp, NonTransactional, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // 0x0164(0x0001)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0165(0x0001)
	unsigned char                                      Priority;                                                 // 0x0166(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x0168(0x0010)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0178(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                                  // 0x01C0(0x0008)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x01C8(0x0004)
	TArray<class UGFxObject*>                          DebugArray;                                               // 0x01CC(0x0010)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                                // 0x01DC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect();
	void ApplyPriorityBlurEffect();
	void ApplyPriorityEffect();
	void PlaySoundFromTheme();
	void OnFocusLost();
	void OnFocusGained();
	void ConsoleCommand();
	void GetPC();
	void GetLP();
	void Init();
	void SetWidgetPathBinding();
	void PostWidgetInit();
	void WidgetUnloaded();
	void WidgetInitialized();
	void ActionScriptString();
	void ActionScriptFloat();
	void ActionScriptInt();
	void ActionScriptVoid();
	void _Invoke();
	void ActionScriptSetFunction();
	void CreateArray();
	void CreateObject();
	void SetVariableStringArray();
	void SetVariableFloatArray();
	void SetVariableIntArray();
	void SetVariableArray();
	void GetVariableStringArray();
	void GetVariableFloatArray();
	void GetVariableIntArray();
	void GetVariableArray();
	void SetVariableObject();
	void SetVariableString();
	void SetVariableInt();
	void SetVariableNumber();
	void SetVariableBool();
	void SetVariable();
	void GetVariableObject();
	void GetVariableString();
	void GetVariableInt();
	void GetVariableNumber();
	void GetVariableBool();
	void GetVariable();
	void GetAVMVersion();
	void FilterButtonInput();
	void FlushPlayerInput();
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey();
	void ClearCaptureKeys();
	void AddCaptureKey();
	void SetMovieCanReceiveInput();
	void SetMovieCanReceiveFocus();
	void SetPerspective3D();
	void SetView3D();
	void GetVisibleFrameRect();
	void SetAlignment();
	void SetViewScaleMode();
	void SetViewport();
	void GetGameViewportClient();
	void SetPriority();
	void SetExternalTextureEx();
	void SetExternalTexture();
	void SetExternalInterface();
	void SetTimingMode();
	void SetMovieInfo();
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void Close();
	void SetPause();
	void OnPostAdvance();
	void PostAdvance();
	void Advance();
	void Start();
};


// Class GFxUI.GFxObject
// 0x0054 (0x00AC - 0x0058)
class UGFxObject : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x0058(0x0004)
	struct FString                                     PathInfo;                                                 // 0x0088(0x0010)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                        // 0x0098(0x0010)
	unsigned long                                      bListenExternalInterfaceCall : 1;                         // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxObject");
		return ptr;
	}


	void DestroyGFxObject();
	void WidgetUnloaded();
	void WidgetInitialized();
	void GotoAndStopI();
	void GotoAndStop();
	void GotoAndPlayI();
	void GotoAndPlay();
	void ActionScriptString();
	void ActionScriptFloat();
	void ActionScriptInt();
	void ActionScriptVoid();
	void _Invoke();
	void ActionScriptSetFunctionOn();
	void ActionScriptSetFunction();
	void SetElementMemberString();
	void SetElementMemberInt();
	void SetElementMemberFloat();
	void SetElementMemberBool();
	void SetElementMemberObject();
	void SetElementMember();
	void GetElementMemberString();
	void GetElementMemberInt();
	void GetElementMemberFloat();
	void GetElementMemberBool();
	void GetElementMemberObject();
	void GetElementMemberObjectEx();
	void GetElementMember();
	void SetElementColorTransform();
	void SetElementPosition();
	void SetElementVisible();
	void SetElementDisplayMatrix();
	void SetElementDisplayInfo();
	void GetElementDisplayMatrix();
	void GetElementDisplayInfo();
	void SetElementString();
	void SetElementInt();
	void SetElementFloat();
	void SetElementBool();
	void SetElementObject();
	void SetElement();
	void GetElementString();
	void GetElementInt();
	void GetElementFloat();
	void GetElementBool();
	void GetElementObject();
	void GetElementObjectEx();
	void GetElement();
	void SetText();
	void GetText();
	void SetVisible();
	void SetDisplayMatrix3D();
	void SetDisplayMatrix();
	void SetColorTransform();
	void SetPosition();
	void SetDisplayInfo();
	void GetDisplayMatrix3D();
	void GetDisplayMatrix();
	void GetColorTransform();
	void GetPosition();
	void GetDisplayInfo();
	void STATIC_TranslateString();
	void SetFunction();
	void SetObject();
	void SetString();
	void SetInt();
	void SetFloat();
	void SetBool();
	void Set();
	void IsObject();
	void IsString();
	void IsInt();
	void IsFloat();
	void IsBool();
	void GetObject();
	void GetString();
	void GetInt();
	void GetFloat();
	void GetBool();
	void Get();
};


// Class GFxUI.GFxClikWidget
// 0x0010 (0x00BC - 0x00AC)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x00AC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners();
	void AS3AddEventListener();
	void ASAddEventListener();
	void SetListener();
	void GetEventStringFromTypename();
	void RemoveAllEventListeners();
	void AddEventListener();
	void EventListener();
};


// Class GFxUI.GFxRawData
// 0x0040 (0x0098 - 0x0058)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                                  // 0x0058(0x0010)
	TArray<struct FString>                             ReferencedSwfs;                                           // 0x0068(0x0010) (NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class UObject*>                             References;                                               // 0x0078(0x0010) (NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<class UObject*>                             UserReferences;                                           // 0x0088(0x0010) (NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x004C (0x00E4 - 0x0098)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                         // 0x0098(0x0004) (Interp, NonTransactional, EditorOnly, NotForConsole, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                           // 0x0098(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	unsigned long                                      bPackTextures : 1;                                        // 0x0098(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	unsigned long                                      bForceSquarePacking : 1;                                  // 0x0098(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	struct FString                                     SourceFile;                                               // 0x009C(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	int                                                PackTextureSize;                                          // 0x00AC(0x0004) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x00B0(0x0001) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x00B4(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	struct FString                                     SourceFileTimestamp;                                      // 0x00C4(0x0010) (Interp, NotForConsole, PrivateWrite, ProtectedWrite, EditHide)
	int                                                RTTextures;                                               // 0x00D4(0x0004)
	int                                                RTVideoTextures;                                          // 0x00D8(0x0004)
	struct FQWord                                      ImportTimeStamp;                                          // 0x00DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.SwfMovie");
		return ptr;
	}

};


// Class GFxUI.FlashMovie
// 0x0000 (0x00E4 - 0x00E4)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0164 - 0x0158)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0158(0x0008)
	unsigned long                                      bUnload : 1;                                              // 0x0160(0x0004) (Interp, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		return ptr;
	}


	void IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0170 - 0x0158)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0158(0x0008)
	struct FString                                     Variable;                                                 // 0x0160(0x0010) (NonTransactional, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		return ptr;
	}


	void IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0180 - 0x0158)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0158(0x0008)
	struct FString                                     MethodName;                                               // 0x0160(0x0010) (NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)
	TArray<struct FASValue>                            Arguments;                                                // 0x0170(0x0010) (NotForConsole, RepRetry, PrivateWrite, ProtectedWrite, ArchetypeProperty, EditHide, EditTextBox, CrossLevelPassive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		return ptr;
	}


	void IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0048 (0x01A0 - 0x0158)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0158(0x0008) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UClass*                                      MoviePlayerClass;                                         // 0x0160(0x0008) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // 0x0168(0x0008)
	unsigned long                                      bTakeFocus : 1;                                           // 0x0170(0x0004) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0170(0x0004) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bStartPaused : 1;                                         // 0x0170(0x0004) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0170(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0170(0x0004) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0174(0x0001) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0178(0x0008) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0180(0x0010) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x0190(0x0010) (EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		return ptr;
	}


	void IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0170 - 0x0158)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0158(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0160(0x0010) (Interp, EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0170 - 0x0158)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0158(0x0008)
	struct FString                                     Variable;                                                 // 0x0160(0x0010) (NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		return ptr;
	}


	void IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0020 (0x0188 - 0x0168)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0168(0x0008) (Interp, NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	struct FString                                     FSCommand;                                                // 0x0170(0x0010) (Interp, NonTransactional, EditorOnly, RepRetry, ArchetypeProperty, EditHide, CrossLevelPassive, CrossLevelActive)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                                  // 0x0180(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0058 - 0x0058)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		return ptr;
	}


	void FSCommand();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
