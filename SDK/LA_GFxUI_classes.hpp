#pragma once

// Lost Ark (1.148.153.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "LA_GFxUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFxUI.GFxEngine
// 0x0014 (0x0064 - 0x0050)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x0050(0x0010) (Transient, NeedCtorLink)
	int                                                RefCount;                                                 // 0x0060(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxEngine");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0050 - 0x0050)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxInteraction
// 0x000C (0x00AC - 0x00A0)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x00A0(0x0008) (Const, Native, NoExport)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int ControllerId);
};


// Class GFxUI.GFxMoviePlayer
// 0x0194 (0x01E4 - 0x0050)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                                   // 0x0050(0x0008) (Const, Native, Transient)
	struct FPointer                                    pCaptureKeys;                                             // 0x0058(0x0008) (Const, Native, Transient)
	struct FPointer                                    pFocusIgnoreKeys;                                         // 0x0060(0x0008) (Const, Native, Transient)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x48];                                      // 0x00B0(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                            // 0x00F8(0x0004) (Const, Transient)
	class USwfMovie*                                   MovieInfo;                                                // 0x00FC(0x0008)
	unsigned long                                      bMovieIsOpen : 1;                                         // 0x0104(0x0004) (Const)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0104(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0104(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                         // 0x0104(0x0004) (Const, Transient)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;                    // 0x0104(0x0004)
	unsigned long                                      bAllowInput : 1;                                          // 0x0104(0x0004)
	unsigned long                                      bAllowFocus : 1;                                          // 0x0104(0x0004)
	unsigned long                                      bAutoPlay : 1;                                            // 0x0104(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                                // 0x0104(0x0004)
	unsigned long                                      bDisableWorldRendering : 1;                               // 0x0104(0x0004)
	unsigned long                                      bCaptureWorldRendering : 1;                               // 0x0104(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                                  // 0x0104(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                                  // 0x0104(0x0004)
	unsigned long                                      bForceFullViewport : 1;                                   // 0x0104(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                                // 0x0104(0x0004)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0104(0x0004)
	unsigned long                                      bCaptureMouseInput : 1;                                   // 0x0104(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                                    // 0x0104(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                         // 0x0104(0x0004) (Transient)
	unsigned long                                      bShowHardwareMouseCursor : 1;                             // 0x0104(0x0004)
	unsigned long                                      bBlurLesserMovies : 1;                                    // 0x0104(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                                    // 0x0104(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                                   // 0x0104(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                                    // 0x0104(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                              // 0x0104(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                                    // 0x0104(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0108(0x0008) (Edit)
	int                                                LocalPlayerOwnerIndex;                                    // 0x0110(0x0004) (Transient)
	class UObject*                                     ExternalInterface;                                        // 0x0114(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x011C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x012C(0x0010) (NeedCtorLink)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x013C(0x0010) (NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                              // 0x014C(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // 0x015C(0x0001)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x015D(0x0001)
	unsigned char                                      Priority;                                                 // 0x015E(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x015F(0x0001) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x0160(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0170(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                                  // 0x01B8(0x0008) (Transient)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x01C0(0x0004) (Config)
	TArray<class UGFxObject*>                          DebugArray;                                               // 0x01C4(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                                // 0x01D4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void ConsoleCommand(const struct FString& Command);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* LocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void PostWidgetInit();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FString ActionScriptString(const struct FString& Path);
	float ActionScriptFloat(const struct FString& Path);
	int ActionScriptInt(const struct FString& Path);
	void ActionScriptVoid(const struct FString& Path);
	struct FASValue _Invoke(const struct FString& method, TArray<struct FASValue> args);
	void ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member);
	class UGFxObject* CreateArray(class UClass* Type);
	class UGFxObject* CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args);
	bool SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg);
	bool SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg);
	bool SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg);
	bool SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg);
	bool GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg);
	bool GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg);
	bool GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg);
	bool GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg);
	void SetVariableObject(const struct FString& Path, class UGFxObject* Object);
	void SetVariableString(const struct FString& Path, const struct FString& S);
	void SetVariableInt(const struct FString& Path, int I);
	void SetVariableNumber(const struct FString& Path, float F);
	void SetVariableBool(const struct FString& Path, bool B);
	void SetVariable(const struct FString& Path, const struct FASValue& Arg);
	class UGFxObject* GetVariableObject(const struct FString& Path, class UClass* Type);
	struct FString GetVariableString(const struct FString& Path);
	int GetVariableInt(const struct FString& Path);
	float GetVariableNumber(const struct FString& Path);
	bool GetVariableBool(const struct FString& Path);
	struct FASValue GetVariable(const struct FString& Path);
	int GetAVMVersion();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const struct FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const struct FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetPerspective3D(struct FMatrix* matPersp);
	void SetView3D(struct FMatrix* matView);
	void GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1);
	void SetAlignment(TEnumAsByte<EGFxAlign> A);
	void SetViewScaleMode(TEnumAsByte<EGFxScaleMode> SM);
	void SetViewport(int X, int Y, int Width, int Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(unsigned char NewPriority);
	bool SetExternalTextureEx(const struct FString& Resource, class UTexture* Texture, int targetWidth, int targetHeight, bool targetStretch);
	bool SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(TEnumAsByte<EGFxTimingMode> Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void Close(bool Unload);
	void SetPause(bool bPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool Start(bool StartPaused);
};


// Class GFxUI.GFxObject
// 0x0054 (0x00A4 - 0x0050)
class UGFxObject : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x0050(0x0004) (Const, Native)
	struct FString                                     PathInfo;                                                 // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                        // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      bListenExternalInterfaceCall : 1;                         // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxObject");
		return ptr;
	}


	void DestroyGFxObject();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void GotoAndStopI(int frame);
	void GotoAndStop(const struct FString& frame);
	void GotoAndPlayI(int frame);
	void GotoAndPlay(const struct FString& frame);
	struct FString ActionScriptString(const struct FString& method);
	float ActionScriptFloat(const struct FString& method);
	int ActionScriptInt(const struct FString& method);
	void ActionScriptVoid(const struct FString& method);
	struct FASValue _Invoke(const struct FString& Member, TArray<struct FASValue> args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member);
	void ActionScriptSetFunction(const struct FString& Member);
	void SetElementMemberString(int Index, const struct FString& Member, const struct FString& S);
	void SetElementMemberInt(int Index, const struct FString& Member, int I);
	void SetElementMemberFloat(int Index, const struct FString& Member, float F);
	void SetElementMemberBool(int Index, const struct FString& Member, bool B);
	void SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val);
	void SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg);
	struct FString GetElementMemberString(int Index, const struct FString& Member);
	int GetElementMemberInt(int Index, const struct FString& Member);
	float GetElementMemberFloat(int Index, const struct FString& Member);
	bool GetElementMemberBool(int Index, const struct FString& Member);
	class UGFxObject* GetElementMemberObject(int Index, const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type);
	class UGFxObject* GetElementMemberObjectEx(int Index, const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type, const struct FString& ASClass);
	struct FASValue GetElementMember(int Index, const struct FString& Member);
	void SetElementColorTransform(int Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int Index, float X, float Y);
	void SetElementVisible(int Index, bool Visible);
	void SetElementDisplayMatrix(int Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D);
	struct FMatrix GetElementDisplayMatrix(int Index);
	struct FASDisplayInfo GetElementDisplayInfo(int Index);
	void SetElementString(int Index, const struct FString& S);
	void SetElementInt(int Index, int I);
	void SetElementFloat(int Index, float F);
	void SetElementBool(int Index, bool B);
	void SetElementObject(int Index, class UGFxObject* val);
	void SetElement(int Index, const struct FASValue& Arg);
	struct FString GetElementString(int Index);
	int GetElementInt(int Index);
	float GetElementFloat(int Index);
	bool GetElementBool(int Index);
	class UGFxObject* GetElementObject(int Index, const struct FString& SourceFile, int SourceLine, class UClass* Type);
	class UGFxObject* GetElementObjectEx(int Index, const struct FString& SourceFile, int SourceLine, class UClass* Type, const struct FString& ASClass);
	struct FASValue GetElement(int Index);
	void SetText(const struct FString& Text, class UTranslationContext* InContext);
	struct FString GetText();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(const struct FASDisplayInfo& D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float* X, float* Y);
	struct FASDisplayInfo GetDisplayInfo();
	struct FString STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext);
	void SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname);
	void SetObject(const struct FString& Member, class UGFxObject* val);
	void SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext);
	void SetInt(const struct FString& Member, int I);
	void SetFloat(const struct FString& Member, float F);
	void SetBool(const struct FString& Member, bool B);
	void Set(const struct FString& Member, const struct FASValue& Arg);
	bool IsObject(const struct FString& Member);
	bool IsString(const struct FString& Member);
	bool IsInt(const struct FString& Member);
	bool IsFloat(const struct FString& Member);
	bool IsBool(const struct FString& Member);
	class UGFxObject* GetObject(const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type);
	struct FString GetString(const struct FString& Member);
	int GetInt(const struct FString& Member);
	float GetFloat(const struct FString& Member);
	bool GetBool(const struct FString& Member);
	struct FASValue Get(const struct FString& Member);
};


// Class GFxUI.GFxClikWidget
// 0x0010 (0x00B4 - 0x00A4)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x00A4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners(const struct FString& Event);
	void AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference);
	void ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	struct FString GetEventStringFromTypename(const struct FName& Typename);
	void RemoveAllEventListeners(const struct FString& Event);
	void AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference);
	void EventListener(const struct FEventData& Data);
};


// Class GFxUI.GFxRawData
// 0x0040 (0x0090 - 0x0050)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                                  // 0x0050(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             ReferencedSwfs;                                           // 0x0060(0x0010) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             References;                                               // 0x0070(0x0010) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                           // 0x0080(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x004C (0x00DC - 0x0090)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                         // 0x0090(0x0004) (Edit)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                           // 0x0090(0x0004) (Edit, EditConst)
	unsigned long                                      bPackTextures : 1;                                        // 0x0090(0x0004) (Edit)
	unsigned long                                      bForceSquarePacking : 1;                                  // 0x0090(0x0004) (Edit)
	struct FString                                     SourceFile;                                               // 0x0094(0x0010) (Edit, NeedCtorLink)
	int                                                PackTextureSize;                                          // 0x00A4(0x0004) (Edit)
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x00A8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x00AC(0x0010) (Edit, EditConst, NeedCtorLink)
	struct FString                                     SourceFileTimestamp;                                      // 0x00BC(0x0010) (Edit, EditConst, NeedCtorLink)
	int                                                RTTextures;                                               // 0x00CC(0x0004)
	int                                                RTVideoTextures;                                          // 0x00D0(0x0004)
	struct FQWord                                      ImportTimeStamp;                                          // 0x00D4(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.SwfMovie");
		return ptr;
	}

};


// Class GFxUI.FlashMovie
// 0x0000 (0x00DC - 0x00DC)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x015C - 0x0150)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0150(0x0008)
	unsigned long                                      bUnload : 1;                                              // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0168 - 0x0150)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0150(0x0008)
	struct FString                                     Variable;                                                 // 0x0158(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0178 - 0x0150)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0150(0x0008)
	struct FString                                     MethodName;                                               // 0x0158(0x0010) (Edit, NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                                // 0x0168(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0048 (0x0198 - 0x0150)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0150(0x0008) (Edit)
	class UClass*                                      MoviePlayerClass;                                         // 0x0158(0x0008) (Edit)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // 0x0160(0x0008)
	unsigned long                                      bTakeFocus : 1;                                           // 0x0168(0x0004) (Edit)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0168(0x0004) (Edit)
	unsigned long                                      bStartPaused : 1;                                         // 0x0168(0x0004) (Edit)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0168(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0168(0x0004) (Edit)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x016C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0170(0x0008) (Edit)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0178(0x0010) (Edit, NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x0188(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0168 - 0x0150)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0150(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0158(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0168 - 0x0150)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0150(0x0008)
	struct FString                                     Variable;                                                 // 0x0158(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0020 (0x0180 - 0x0160)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0160(0x0008) (Edit)
	struct FString                                     FSCommand;                                                // 0x0168(0x0010) (Edit, NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                                  // 0x0178(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0050 - 0x0050)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
