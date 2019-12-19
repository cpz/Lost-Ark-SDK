#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
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
	unsigned char                                      UnknownData00[0x8];                                       // 0x0094(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0020 (0x029C - 0x027C)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x027C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
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
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x003C (0x00C0 - 0x0084)
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0084(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00C8 - 0x00B8)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00E0 - 0x00D0)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x005C - 0x0058)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
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
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
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
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0180 - 0x0170)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x000C (0x017C - 0x0170)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0170(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0168 - 0x0158)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0188 - 0x0170)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0170(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetState : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
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
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
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
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
