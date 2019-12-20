#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Core_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.Object
// 0x0058
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0008)
	struct FPointer                                    HashNext;                                                 // 0x0008(0x0008)
	struct FQWord                                      ObjectFlags;                                              // 0x0010(0x0008)
	struct FPointer                                    StateFrame;                                               // 0x0018(0x0008)
	class UObject*                                     Linker;                                                   // 0x0020(0x0008)
	struct FPointer                                    LinkerIndex;                                              // 0x0028(0x0008)
	int                                                ObjectInternalInteger;                                    // 0x0030(0x0004)
	int                                                NetIndex;                                                 // 0x0034(0x0004)
	class UObject*                                     Outer;                                                    // 0x0038(0x0008)
	struct FName                                       Name;                                                     // 0x0040(0x0008)
	class UClass*                                      Class;                                                    // 0x0048(0x0008)
	class UObject*                                     ObjectArchetype;                                          // 0x0050(0x0008)

	static inline TArray<UObject*>& GetGlobalObjects()
	{
		return *GObjects;
	}

	inline std::string UObject::GetName() const
	{
		std::string name = Name.GetName();
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}
		return name;
	}

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(__thiscall *)(UObject*, class UFunction*, void*)>(this, 67)(this, function, parms);
	}


	void ProfNodeEvent();
	void ProfNodeSetDepthThreshold();
	void ProfNodeSetTimeThresholdSeconds();
	void ProfNodeStop();
	void ProfNodeStart();
	void GetStringFromGuid();
	void GetGuidFromString();
	void CreateGuid();
	void IsGuidValid();
	void InvalidateGuid();
	void GetLanguage();
	void GetRandomOptionSumFrequency();
	void GetBuildChangelistNumber();
	void GetEngineVersion();
	void GetSystemTime();
	void TimeStamp();
	void TransformVectorByRotation();
	void GetPackageName();
	void IsPendingKill();
	void ByteToFloat();
	void FloatToByte();
	void UnwindHeading();
	void FindDeltaAngle();
	void GetHeadingAngle();
	void GetAngularDegreesFromRadians();
	void GetAngularFromDotDist();
	void GetAngularDistance();
	void GetDotDistance();
	void PointProjectToPlane();
	void PointDistToPlane();
	void PointDistToSegment();
	void PointDistToLine();
	void GetPerObjectConfigSections();
	void ImportJSON();
	void StaticSaveConfig();
	void STATIC_SaveConfig();
	void FindObject();
	void DynamicLoadObject();
	void EnumFromString();
	void GetEnum();
	void Disable();
	void Enable();
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState();
	void BeginState();
	void DumpStateStack();
	void PopState();
	void PushState();
	void GetStateName();
	void IsChildState();
	void IsInState();
	void GotoState();
	void IsUTracing();
	void SetUTracing();
	void GetFuncName();
	void DebugBreak();
	void GetScriptTrace();
	void ScriptTrace();
	void ParseLocalizedPropertyPath();
	void Localize();
	void WarnInternal();
	void LogInternal();
	void Subtract_LinearColorLinearColor();
	void Multiply_LinearColorFloat();
	void ColorToLinearColor();
	void MakeLinearColor();
	void LerpColor();
	void MakeColor();
	void Add_ColorColor();
	void Multiply_ColorFloat();
	void Multiply_FloatColor();
	void Subtract_ColorColor();
	void EvalInterpCurveVector2D();
	void EvalInterpCurveVector();
	void EvalInterpCurveFloat();
	void vect2d();
	void GetMappedRangeValue();
	void GetRangePctByValue();
	void GetRangeValueByPct();
	void SubtractEqual_Vector2DVector2D();
	void AddEqual_Vector2DVector2D();
	void DivideEqual_Vector2DFloat();
	void MultiplyEqual_Vector2DFloat();
	void Divide_Vector2DFloat();
	void Multiply_Vector2DFloat();
	void Subtract_Vector2DVector2D();
	void Add_Vector2DVector2D();
	void Subtract_QuatQuat();
	void Add_QuatQuat();
	void QuatSlerp();
	void QuatToRotator();
	void QuatFromRotator();
	void QuatFromAxisAndAngle();
	void QuatFindBetween();
	void QuatRotateVector();
	void QuatInvert();
	void QuatDot();
	void QuatProduct();
	void MatrixGetAxis();
	void MatrixGetOrigin();
	void MatrixGetRotator();
	void MakeRotationMatrix();
	void MakeRotationTranslationMatrix();
	void InverseTransformNormal();
	void TransformNormal();
	void InverseTransformVector();
	void TransformVector();
	void Multiply_MatrixMatrix();
	void NotEqual_NameName();
	void EqualEqual_NameName();
	void IsA();
	void ClassIsChildOf();
	void NotEqual_InterfaceInterface();
	void EqualEqual_InterfaceInterface();
	void NotEqual_ObjectObject();
	void EqualEqual_ObjectObject();
	void PathName();
	void SplitString();
	void ParseStringIntoArray();
	void JoinArray();
	void GetRightMost();
	void STATIC_Split();
	void Repl();
	void Asc();
	void Chr();
	void Locs();
	void Caps();
	void Right();
	void Left();
	void Mid();
	void InStr();
	void Len();
	void SubtractEqual_StrStr();
	void AtEqual_StrStr();
	void ConcatEqual_StrStr();
	void ComplementEqual_StrStr();
	void NotEqual_StrStr();
	void EqualEqual_StrStr();
	void GreaterEqual_StrStr();
	void LessEqual_StrStr();
	void Greater_StrStr();
	void Less_StrStr();
	void At_StrStr();
	void Concat_StrStr();
	void MakeRotator();
	void SClampRotAxis();
	void ClampRotAxisFromRange();
	void ClampRotAxisFromBase();
	void ClampRotAxis();
	void RSize();
	void RDiff();
	void NormalizeRotAxis();
	void RInterpTo();
	void RTransform();
	void RLerp();
	void Normalize();
	void OrthoRotation();
	void RotRand();
	void GetRotatorAxis();
	void GetUnAxes();
	void GetAxes();
	void ClockwiseFrom_IntInt();
	void SubtractEqual_RotatorRotator();
	void AddEqual_RotatorRotator();
	void Subtract_RotatorRotator();
	void Add_RotatorRotator();
	void DivideEqual_RotatorFloat();
	void MultiplyEqual_RotatorFloat();
	void Divide_RotatorFloat();
	void Multiply_FloatRotator();
	void Multiply_RotatorFloat();
	void NotEqual_RotatorRotator();
	void EqualEqual_RotatorRotator();
	void InCylinder();
	void NoZDot();
	void ClampLength();
	void VInterpTo();
	void IsZero();
	void ProjectOnTo();
	void MirrorVectorByNormal();
	void VRandCone2();
	void VRandCone();
	void VRand();
	void VLerp();
	void Normal2D();
	void Normal();
	void VSizeSq2D();
	void VSizeSq();
	void VSize2D();
	void VSize();
	void SubtractEqual_VectorVector();
	void AddEqual_VectorVector();
	void DivideEqual_VectorFloat();
	void MultiplyEqual_VectorVector();
	void MultiplyEqual_VectorFloat();
	void Cross_VectorVector();
	void Dot_VectorVector();
	void NotEqual_VectorVector();
	void EqualEqual_VectorVector();
	void GreaterGreater_VectorRotator();
	void LessLess_VectorRotator();
	void Subtract_VectorVector();
	void Add_VectorVector();
	void Divide_VectorFloat();
	void Multiply_VectorVector();
	void Multiply_FloatVector();
	void Multiply_VectorFloat();
	void Subtract_PreVector();
	void FInterpConstantTo();
	void FInterpTo();
	void FPctByRange();
	void RandRange();
	void FInterpEaseInOut();
	void FInterpEaseOut();
	void FInterpEaseIn();
	void FCubicInterp();
	void FCeil();
	void FFloor();
	void Round();
	void Lerp();
	void FClamp();
	void FMax();
	void FMin();
	void FRand();
	void Square();
	void Sqrt();
	void Loge();
	void Exp();
	void Atan2();
	void Atan();
	void Tan();
	void Acos();
	void Cos();
	void Asin();
	void Sin();
	void Abs();
	void SubtractEqual_FloatFloat();
	void AddEqual_FloatFloat();
	void DivideEqual_FloatFloat();
	void MultiplyEqual_FloatFloat();
	void NotEqual_FloatFloat();
	void ComplementEqual_FloatFloat();
	void EqualEqual_FloatFloat();
	void GreaterEqual_FloatFloat();
	void LessEqual_FloatFloat();
	void Greater_FloatFloat();
	void Less_FloatFloat();
	void Subtract_FloatFloat();
	void Add_FloatFloat();
	void Percent_FloatFloat();
	void Divide_FloatFloat();
	void Multiply_FloatFloat();
	void MultiplyMultiply_FloatFloat();
	void Subtract_PreFloat();
	void ToHex();
	void Clamp();
	void Max();
	void Min();
	void Rand();
	void SubtractSubtract_Int();
	void AddAdd_Int();
	void SubtractSubtract_PreInt();
	void AddAdd_PreInt();
	void SubtractEqual_IntInt();
	void AddEqual_IntInt();
	void DivideEqual_IntFloat();
	void MultiplyEqual_IntFloat();
	void Or_IntInt();
	void Xor_IntInt();
	void And_IntInt();
	void NotEqual_IntInt();
	void EqualEqual_IntInt();
	void GreaterEqual_IntInt();
	void LessEqual_IntInt();
	void Greater_IntInt();
	void Less_IntInt();
	void GreaterGreaterGreater_IntInt();
	void GreaterGreater_IntInt();
	void LessLess_IntInt();
	void Subtract_IntInt();
	void Add_IntInt();
	void Percent_IntInt();
	void Divide_IntInt();
	void Multiply_IntInt();
	void Subtract_PreInt();
	void Complement_PreInt();
	void SubtractSubtract_Byte();
	void AddAdd_Byte();
	void SubtractSubtract_PreByte();
	void AddAdd_PreByte();
	void SubtractEqual_ByteByte();
	void AddEqual_ByteByte();
	void DivideEqual_ByteByte();
	void MultiplyEqual_ByteFloat();
	void MultiplyEqual_ByteByte();
	void OrOr_BoolBool();
	void XorXor_BoolBool();
	void AndAnd_BoolBool();
	void NotEqual_BoolBool();
	void EqualEqual_BoolBool();
	void Not_PreBool();
};


// Class Core.TextBuffer
// 0x0030 (0x0088 - 0x0058)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x0008 (0x0060 - 0x0058)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                            // 0x0058(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.System
// 0x00F4 (0x0154 - 0x0060)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                           // 0x0060(0x0004)
	int                                                MaxStaleCacheSize;                                        // 0x0064(0x0004)
	int                                                MaxOverallCacheSize;                                      // 0x0068(0x0004)
	int                                                PackageSizeSoftLimit;                                     // 0x006C(0x0004)
	float                                              AsyncIOBandwidthLimit;                                    // 0x0070(0x0004)
	struct FString                                     SavePath;                                                 // 0x0074(0x0010)
	struct FString                                     CachePath;                                                // 0x0084(0x0010)
	struct FString                                     CacheExt;                                                 // 0x0094(0x0010)
	TArray<struct FString>                             Paths;                                                    // 0x00A4(0x0010)
	TArray<struct FString>                             ReleaseCookedPaths;                                       // 0x00B4(0x0010)
	TArray<struct FString>                             SeekFreePCPaths;                                          // 0x00C4(0x0010)
	TArray<struct FString>                             ScriptPaths;                                              // 0x00D4(0x0010)
	TArray<struct FString>                             FRScriptPaths;                                            // 0x00E4(0x0010)
	TArray<struct FString>                             CutdownPaths;                                             // 0x00F4(0x0010)
	TArray<struct FName>                               Suppress;                                                 // 0x0104(0x0010)
	TArray<struct FString>                             Extensions;                                               // 0x0114(0x0010)
	TArray<struct FString>                             SeekFreePCExtensions;                                     // 0x0124(0x0010)
	TArray<struct FString>                             LocalizationPaths;                                        // 0x0134(0x0010)
	struct FString                                     TextureFileCacheExtension;                                // 0x0144(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x00A0 (0x00F8 - 0x0058)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0058(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x0010 (0x0068 - 0x0058)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0008 (0x0060 - 0x0058)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.LocAssetRedirector
// 0x0010 (0x0070 - 0x0060)
class ULocAssetRedirector : public UObjectRedirector
{
public:
	TArray<struct FDestinationLocObject>               DestinationLocObjectInfoList;                             // 0x0060(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LocAssetRedirector");
		return ptr;
	}

};


// Class Core.MetaData
// 0x0048 (0x00A0 - 0x0058)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.Linker
// 0x0168 (0x01C0 - 0x0058)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0058(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x00C4 (0x0284 - 0x01C0)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x01C0(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x0610 (0x07D0 - 0x01C0)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x610];                                     // 0x01C0(0x0610) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000 (0x0058 - 0x0058)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}

};


// Class Core.Field
// 0x0008 (0x0060 - 0x0058)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Struct
// 0x0068 (0x00C8 - 0x0060)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[16];                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[76];                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.ScriptStruct
// 0x0024 (0x00EC - 0x00C8)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00C8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Function
// 0x0028 (0x00F0 - 0x00C8)
class UFunction : public UStruct
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           iNative;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            OperPrecedence;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              FriendlyName;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.Property
// 0x0040 (0x00A0 - 0x0060)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0008 (0x00A8 - 0x00A0)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x00A0 - 0x00A0)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x0008 (0x00A8 - 0x00A0)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000 (0x00A8 - 0x00A8)
class UComponentProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0008 (0x00B0 - 0x00A8)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x00A0 - 0x00A0)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0010 (0x00B0 - 0x00A0)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0008 (0x00A8 - 0x00A0)
class UIntProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0008 (0x00A8 - 0x00A0)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x00A0 - 0x00A0)
class UFloatProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0010 (0x00B0 - 0x00A0)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0008 (0x00A8 - 0x00A0)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x00A4 - 0x00A0)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0008 (0x00A8 - 0x00A0)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x0010 (0x0070 - 0x0060)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x0010 (0x0070 - 0x0060)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.Factory
// 0x0048 (0x00A0 - 0x0058)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                           // 0x0058(0x0008)
	class UClass*                                      ContextClass;                                             // 0x0060(0x0008)
	struct FString                                     Description;                                              // 0x0068(0x0010)
	TArray<struct FString>                             Formats;                                                  // 0x0078(0x0010)
	unsigned long                                      bCreateNew : 1;                                           // 0x0088(0x0004)
	unsigned long                                      bEditAfterNew : 1;                                        // 0x0088(0x0004)
	unsigned long                                      bEditorImport : 1;                                        // 0x0088(0x0004)
	unsigned long                                      bText : 1;                                                // 0x0088(0x0004)
	int                                                AutoPriority;                                             // 0x008C(0x0004)
	TArray<struct FString>                             ValidGameNames;                                           // 0x0090(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000 (0x00A0 - 0x00A0)
class UTextBufferFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Exporter
// 0x0034 (0x008C - 0x0058)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                          // 0x0060(0x0010)
	TArray<struct FString>                             FormatDescription;                                        // 0x0070(0x0010)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0080(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.Component
// 0x0010 (0x0068 - 0x0058)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                       // 0x0058(0x0008)
	struct FName                                       TemplateName;                                             // 0x0060(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.DistributionVector
// 0x000C (0x0074 - 0x0068)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0068(0x0008)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0070(0x0004)
	unsigned long                                      bIsDirty : 1;                                             // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	void GetVectorValue();
};


// Class Core.DistributionFloat
// 0x000C (0x0074 - 0x0068)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0068(0x0008)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0070(0x0004)
	unsigned long                                      bIsDirty : 1;                                             // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	void GetFloatValue();
};


// Class Core.Commandlet
// 0x0054 (0x00AC - 0x0058)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                          // 0x0058(0x0010)
	struct FString                                     HelpUsage;                                                // 0x0068(0x0010)
	struct FString                                     HelpWebLink;                                              // 0x0078(0x0010)
	TArray<struct FString>                             HelpParamNames;                                           // 0x0088(0x0010)
	TArray<struct FString>                             HelpParamDescriptions;                                    // 0x0098(0x0010)
	unsigned long                                      IsServer : 1;                                             // 0x00A8(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x00A8(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x00A8(0x0004)
	unsigned long                                      LogToConsole : 1;                                         // 0x00A8(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	void Main();
};


// Class Core.HelpCommandlet
// 0x0000 (0x00AC - 0x00AC)
class UHelpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	void Main();
};


// Class Core.Package
// 0x00D4 (0x012C - 0x0058)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0058(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.State
// 0x0054 (0x011C - 0x00C8)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00C8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Class
// 0x0164 (0x0280 - 0x011C)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[176];                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[168];                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);
		static Fn fn = nullptr;
		
		return fn(this, 0);

		//or use the default object (WARNING: may be null)
		//return ClassDefaultObject;
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
