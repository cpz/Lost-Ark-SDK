#pragma once

// Lost Ark (1.61.63.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "LA_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x009C - 0x0094)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                             // 0x0094(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0020 (0x029C - 0x027C)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                            // 0x027C(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x027C(0x0004) (Transient)
	unsigned long                                      bRealPlay : 1;                                            // 0x027C(0x0004) (Transient)
	unsigned long                                      bDeactiveWhenRealPlayIsStop : 1;                          // 0x027C(0x0004) (Edit)
	unsigned long                                      bShowAkAmbientSoundRadius : 1;                            // 0x027C(0x0004) (Edit, Transient)
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                             // 0x027C(0x0004) (Edit)
	unsigned long                                      bIsPlaying : 1;                                           // 0x027C(0x0004) (Transient)
	class UAkEvent*                                    PlayEvent;                                                // 0x0280(0x0008) (Edit)
	float                                              fSquaredRadius;                                           // 0x0288(0x0004) (Edit)
	class UDrawSphereComponent*                        PreviewSoundRadius;                                       // 0x028C(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	class UDrawSphereComponent*                        PreviewAkAmbientSoundRadius;                              // 0x0294(0x0008) (Const, ExportObject, Transient, Component, EditInline)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAudioDevice
// 0x0060 (0x00C0 - 0x0060)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x003C (0x00C0 - 0x0084)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                                 // 0x0084(0x0008) (Edit)
	class UAkEvent*                                    AutoPlayEvent;                                            // 0x008C(0x0008)
	struct FVector                                     RelativeLoc;                                              // 0x0094(0x000C)
	struct FVector                                     WorldLoc;                                                 // 0x00A0(0x000C)
	struct FVector                                     WorldDir;                                                 // 0x00AC(0x000C)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                              // 0x00B8(0x0004)
	float                                              fLastCallTime;                                            // 0x00BC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00C8 - 0x00B8)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                 // 0x00B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00E0 - 0x00D0)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x00D0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0180 - 0x0170)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                                // 0x0170(0x0004) (Edit)
	unsigned long                                      bWaitingCallback : 1;                                     // 0x0170(0x0004) (Transient)
	class UAkBank*                                     Bank;                                                     // 0x0174(0x0008) (Edit)
	int                                                Signal;                                                   // 0x017C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x000C (0x017C - 0x0170)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                                   // 0x0170(0x0004) (Transient)
	class UAkEvent*                                    Event;                                                    // 0x0174(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0168 - 0x0158)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                                  // 0x0158(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0188 - 0x0170)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                                    // 0x0170(0x0010) (Edit, NeedCtorLink)
	float                                              Value;                                                    // 0x0180(0x0004) (Edit)
	unsigned long                                      Running : 1;                                              // 0x0184(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                               // 0x0158(0x0010) (Edit, NeedCtorLink)
	struct FString                                     State;                                                    // 0x0168(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                              // 0x0158(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Switch;                                                   // 0x0168(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
        if (!ptr) 
           ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
