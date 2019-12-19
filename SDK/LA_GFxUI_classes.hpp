#pragma once

// Lost Ark (1.2.0.3) SDK

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
	unsigned char                                      UnknownData00[0x14];                                      // 0x0058(0x0014) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0xC];                                       // 0x00A8(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void CloseAllMoviePlayers();
	void STATIC_NotifySplitscreenLayoutChanged();
	void STATIC_NotifyPlayerRemoved();
	void STATIC_NotifyPlayerAdded();
	void NotifyGameSessionEnded();
	void GetFocusMovie();
};


// Class GFxUI.GFxMoviePlayer
// 0x0194 (0x01EC - 0x0058)
class UGFxMoviePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x194];                                     // 0x0058(0x0194) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	void STATIC_UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect();
	void ApplyPriorityBlurEffect();
	void ApplyPriorityEffect();
	void STATIC_PlaySoundFromTheme();
	void OnFocusLost();
	void OnFocusGained();
	void ConsoleCommand();
	void GetPC();
	void GetLP();
	void Init();
	void STATIC_SetWidgetPathBinding();
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
	void STATIC_SetVariableStringArray();
	void STATIC_SetVariableFloatArray();
	void STATIC_SetVariableIntArray();
	void STATIC_SetVariableArray();
	void GetVariableStringArray();
	void GetVariableFloatArray();
	void GetVariableIntArray();
	void GetVariableArray();
	void STATIC_SetVariableObject();
	void STATIC_SetVariableString();
	void STATIC_SetVariableInt();
	void STATIC_SetVariableNumber();
	void STATIC_SetVariableBool();
	void STATIC_SetVariable();
	void GetVariableObject();
	void GetVariableString();
	void GetVariableInt();
	void GetVariableNumber();
	void GetVariableBool();
	void GetVariable();
	void GetAVMVersion();
	void FilterButtonInput();
	void STATIC_FlushPlayerInput();
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey();
	void ClearCaptureKeys();
	void AddCaptureKey();
	void STATIC_SetMovieCanReceiveInput();
	void STATIC_SetMovieCanReceiveFocus();
	void STATIC_SetPerspective3D();
	void STATIC_SetView3D();
	void GetVisibleFrameRect();
	void STATIC_SetAlignment();
	void STATIC_SetViewScaleMode();
	void STATIC_SetViewport();
	void GetGameViewportClient();
	void STATIC_SetPriority();
	void STATIC_SetExternalTextureEx();
	void STATIC_SetExternalTexture();
	void STATIC_SetExternalInterface();
	void STATIC_SetTimingMode();
	void STATIC_SetMovieInfo();
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void Close();
	void STATIC_SetPause();
	void OnPostAdvance();
	void STATIC_PostAdvance();
	void Advance();
	void Start();
};


// Class GFxUI.GFxObject
// 0x0054 (0x00AC - 0x0058)
class UGFxObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0058(0x0054) MISSED OFFSET

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
	void STATIC_SetElementMemberString();
	void STATIC_SetElementMemberInt();
	void STATIC_SetElementMemberFloat();
	void STATIC_SetElementMemberBool();
	void STATIC_SetElementMemberObject();
	void STATIC_SetElementMember();
	void GetElementMemberString();
	void GetElementMemberInt();
	void GetElementMemberFloat();
	void GetElementMemberBool();
	void GetElementMemberObject();
	void GetElementMemberObjectEx();
	void GetElementMember();
	void STATIC_SetElementColorTransform();
	void STATIC_SetElementPosition();
	void STATIC_SetElementVisible();
	void STATIC_SetElementDisplayMatrix();
	void STATIC_SetElementDisplayInfo();
	void GetElementDisplayMatrix();
	void GetElementDisplayInfo();
	void STATIC_SetElementString();
	void STATIC_SetElementInt();
	void STATIC_SetElementFloat();
	void STATIC_SetElementBool();
	void STATIC_SetElementObject();
	void STATIC_SetElement();
	void GetElementString();
	void GetElementInt();
	void GetElementFloat();
	void GetElementBool();
	void GetElementObject();
	void GetElementObjectEx();
	void GetElement();
	void STATIC_SetText();
	void GetText();
	void STATIC_SetVisible();
	void STATIC_SetDisplayMatrix3D();
	void STATIC_SetDisplayMatrix();
	void STATIC_SetColorTransform();
	void STATIC_SetPosition();
	void STATIC_SetDisplayInfo();
	void GetDisplayMatrix3D();
	void GetDisplayMatrix();
	void GetColorTransform();
	void STATIC_GetPosition();
	void GetDisplayInfo();
	void STATIC_TranslateString();
	void STATIC_SetFunction();
	void STATIC_SetObject();
	void STATIC_SetString();
	void STATIC_SetInt();
	void STATIC_SetFloat();
	void STATIC_SetBool();
	void STATIC_Set();
	void IsObject();
	void IsString();
	void IsInt();
	void IsFloat();
	void IsBool();
	void STATIC_GetObject();
	void STATIC_GetString();
	void STATIC_GetInt();
	void STATIC_GetFloat();
	void GetBool();
	void Get();
};


// Class GFxUI.GFxClikWidget
// 0x0010 (0x00BC - 0x00AC)
class UGFxClikWidget : public UGFxObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00AC(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners();
	void AS3AddEventListener();
	void ASAddEventListener();
	void STATIC_SetListener();
	void GetEventStringFromTypename();
	void STATIC_RemoveAllEventListeners();
	void AddEventListener();
	void EventListener();
};


// Class GFxUI.GFxRawData
// 0x0040 (0x0098 - 0x0058)
class UGFxRawData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0098(0x004C) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0xC];                                       // 0x0158(0x000C) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x28];                                      // 0x0158(0x0028) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x48];                                      // 0x0158(0x0048) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

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
	unsigned char                                      UnknownData00[0x20];                                      // 0x0168(0x0020) MISSED OFFSET

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
