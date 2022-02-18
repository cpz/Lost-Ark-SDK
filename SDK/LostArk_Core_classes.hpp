#pragma once

// LostArk (0.0.01) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.Object
// 0x0050
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0008) (Const, Native, EditConst, NoExport)
	struct FQWord                                      ObjectFlags;                                              // 0x0008(0x0008) (Const, Native, EditConst)
	struct FPointer                                    StateFrame;                                               // 0x0010(0x0008) (Const, Native, EditConst)
	class UObject*                                     Linker;                                                   // 0x0018(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    LinkerIndex;                                              // 0x0020(0x0008) (Const, Native, EditConst, NoExport)
	int                                                ObjectInternalInteger;                                    // 0x0028(0x0004) (Const, Native, EditConst, NoExport)
	int                                                NetIndex;                                                 // 0x002C(0x0004) (Const, Native, EditConst, NoExport)
	class UObject*                                     Outer;                                                    // 0x0030(0x0008) (Const, Native, EditConst)
	struct FName                                       Name;                                                     // 0x0038(0x0008) (Edit, Const, Native, EditConst)
	class UClass*                                      Class;                                                    // 0x0040(0x0008) (Const, Native, EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0048(0x0008) (Edit, Const, Native, EditConst)

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


	void STATIC_ProfNodeEvent(const struct FString& EventName);
	void STATIC_ProfNodeSetDepthThreshold(int Depth);
	void STATIC_ProfNodeSetTimeThresholdSeconds(float Threshold);
	void STATIC_ProfNodeStop(int AssumedTimerIndex);
	int STATIC_ProfNodeStart(const struct FString& TimerName);
	struct FString STATIC_GetStringFromGuid(struct FGuid* InGuid);
	struct FGuid STATIC_GetGuidFromString(struct FString* InGuidString);
	struct FGuid STATIC_CreateGuid();
	bool STATIC_IsGuidValid(struct FGuid* InGuid);
	void STATIC_InvalidateGuid(struct FGuid* InGuid);
	struct FString STATIC_GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, bool bSigned);
	unsigned char FloatToByte(float inputFloat, bool bSigned);
	float STATIC_UnwindHeading(float A);
	float STATIC_FindDeltaAngle(float A1, float A2);
	float STATIC_GetHeadingAngle(const struct FVector& Dir);
	void STATIC_GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void STATIC_GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist);
	bool STATIC_GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist);
	bool STATIC_GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist);
	struct FVector STATIC_PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	bool STATIC_GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames);
	void STATIC_ImportJSON(const struct FString& PropertyName, struct FString* JSON);
	void STATIC_StaticSaveConfig();
	void SaveConfig();
	class UObject* STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	int STATIC_EnumFromString(class UObject* E, const struct FName& ValueName);
	struct FName STATIC_GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	bool STATIC_IsUTracing();
	void STATIC_SetUTracing(bool bShouldUTrace);
	struct FName STATIC_GetFuncName();
	void STATIC_DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType);
	struct FString STATIC_GetScriptTrace();
	void STATIC_ScriptTrace();
	struct FString STATIC_ParseLocalizedPropertyPath(const struct FString& PathName);
	struct FString STATIC_Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName);
	void STATIC_WarnInternal(const struct FString& S);
	void STATIC_LogInternal(const struct FString& S, const struct FName& Tag);
	struct FLinearColor STATIC_Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor STATIC_Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	struct FLinearColor STATIC_ColorToLinearColor(const struct FColor& OldColor);
	struct FLinearColor STATIC_MakeLinearColor(float R, float G, float B, float A);
	struct FColor STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	struct FColor STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor STATIC_Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor STATIC_Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor STATIC_Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor STATIC_Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D STATIC_EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D* Vector2DCurve);
	struct FVector STATIC_EvalInterpCurveVector(float InVal, struct FInterpCurveVector* VectorCurve);
	float STATIC_EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat* FloatCurve);
	struct FVector2D STATIC_vect2d(float InX, float InY);
	float STATIC_GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	float STATIC_GetRangePctByValue(const struct FVector2D& Range, float Value);
	float STATIC_GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	struct FVector2D STATIC_SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D STATIC_AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D STATIC_DivideEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D STATIC_MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FQuat STATIC_Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_QuatToRotator(const struct FQuat& A);
	struct FQuat STATIC_QuatFromRotator(const struct FRotator& A);
	struct FQuat STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat STATIC_QuatInvert(const struct FQuat& A);
	float STATIC_QuatDot(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B);
	struct FVector STATIC_MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis);
	struct FVector STATIC_MatrixGetOrigin(const struct FMatrix& TM);
	struct FRotator STATIC_MatrixGetRotator(const struct FMatrix& TM);
	struct FMatrix STATIC_MakeRotationMatrix(const struct FRotator& Rotation);
	struct FMatrix STATIC_MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	struct FVector STATIC_InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_TransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FMatrix STATIC_Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool IsA(const struct FName& ClassName);
	bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool STATIC_NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool STATIC_EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString STATIC_PathName(class UObject* CheckObject);
	TArray<struct FString> STATIC_SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	void STATIC_ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces);
	void STATIC_JoinArray(TArray<struct FString> StringArray, const struct FString& delim, bool bIgnoreBlanks, struct FString* out_Result);
	struct FString STATIC_GetRightMost(const struct FString& Text);
	struct FString STATIC_Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	struct FString STATIC_Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	int STATIC_Asc(const struct FString& S);
	struct FString STATIC_Chr(int I);
	struct FString STATIC_Locs(const struct FString& S);
	struct FString STATIC_Caps(const struct FString& S);
	struct FString STATIC_Right(const struct FString& S, int I);
	struct FString STATIC_Left(const struct FString& S, int I);
	struct FString STATIC_Mid(const struct FString& S, int I, int J);
	int STATIC_InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	int STATIC_Len(const struct FString& S);
	struct FString STATIC_SubtractEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString STATIC_AtEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString STATIC_ConcatEqual_StrStr(const struct FString& B, struct FString* A);
	bool STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Greater_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_At_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FRotator STATIC_MakeRotator(int Pitch, int Yaw, int Roll);
	bool STATIC_SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis);
	int STATIC_ClampRotAxisFromRange(int Current, int Min, int Max);
	int STATIC_ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void STATIC_ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis);
	float STATIC_RSize(const struct FRotator& R);
	float STATIC_RDiff(const struct FRotator& A, const struct FRotator& B);
	int STATIC_NormalizeRotAxis(int Angle);
	struct FRotator STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	struct FRotator STATIC_RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	struct FRotator STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_Normalize(const struct FRotator& Rot);
	struct FRotator STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_RotRand(bool bRoll);
	struct FVector STATIC_GetRotatorAxis(const struct FRotator& A, int Axis);
	void STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool STATIC_ClockwiseFrom_IntInt(int A, int B);
	struct FRotator STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator STATIC_Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator STATIC_Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator STATIC_Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	float STATIC_NoZDot(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_ClampLength(const struct FVector& V, float MaxLength);
	struct FVector STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	bool STATIC_IsZero(const struct FVector& A);
	struct FVector STATIC_ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	struct FVector STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	struct FVector STATIC_VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector STATIC_VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	struct FVector STATIC_VRand();
	struct FVector STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector STATIC_Normal2D(const struct FVector& A);
	struct FVector STATIC_Normal(const struct FVector& A);
	float STATIC_VSizeSq2D(const struct FVector& A);
	float STATIC_VSizeSq(const struct FVector& A);
	float STATIC_VSize2D(const struct FVector& A);
	float STATIC_VSize(const struct FVector& A);
	struct FVector STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_DivideEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector STATIC_Subtract_PreVector(const struct FVector& A);
	float STATIC_FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FPctByRange(float Value, float InMin, float InMax);
	float STATIC_RandRange(float InMin, float InMax);
	float STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float STATIC_FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float STATIC_FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float STATIC_FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int STATIC_FCeil(float A);
	int STATIC_FFloor(float A);
	int STATIC_Round(float A);
	float STATIC_Lerp(float A, float B, float Alpha);
	float STATIC_FClamp(float V, float A, float B);
	float STATIC_FMax(float A, float B);
	float STATIC_FMin(float A, float B);
	float STATIC_FRand();
	float STATIC_Square(float A);
	float STATIC_Sqrt(float A);
	float STATIC_Loge(float A);
	float STATIC_Exp(float A);
	float STATIC_Atan2(float A, float B);
	float STATIC_Atan(float A);
	float STATIC_Tan(float A);
	float STATIC_Acos(float A);
	float STATIC_Cos(float A);
	float STATIC_Asin(float A);
	float STATIC_Sin(float A);
	float STATIC_Abs(float A);
	float STATIC_SubtractEqual_FloatFloat(float B, float* A);
	float STATIC_AddEqual_FloatFloat(float B, float* A);
	float STATIC_DivideEqual_FloatFloat(float B, float* A);
	float STATIC_MultiplyEqual_FloatFloat(float B, float* A);
	bool STATIC_NotEqual_FloatFloat(float A, float B);
	bool STATIC_ComplementEqual_FloatFloat(float A, float B);
	bool STATIC_EqualEqual_FloatFloat(float A, float B);
	bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	bool STATIC_LessEqual_FloatFloat(float A, float B);
	bool STATIC_Greater_FloatFloat(float A, float B);
	bool STATIC_Less_FloatFloat(float A, float B);
	float STATIC_Subtract_FloatFloat(float A, float B);
	float STATIC_Add_FloatFloat(float A, float B);
	float STATIC_Percent_FloatFloat(float A, float B);
	float STATIC_Divide_FloatFloat(float A, float B);
	float STATIC_Multiply_FloatFloat(float A, float B);
	float STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp);
	float STATIC_Subtract_PreFloat(float A);
	struct FString STATIC_ToHex(int A);
	int STATIC_Clamp(int V, int A, int B);
	int STATIC_Max(int A, int B);
	int STATIC_Min(int A, int B);
	int STATIC_Rand(int Max);
	int STATIC_SubtractSubtract_Int(int* A);
	int STATIC_AddAdd_Int(int* A);
	int STATIC_SubtractSubtract_PreInt(int* A);
	int STATIC_AddAdd_PreInt(int* A);
	int STATIC_SubtractEqual_IntInt(int B, int* A);
	int STATIC_AddEqual_IntInt(int B, int* A);
	int STATIC_DivideEqual_IntFloat(float B, int* A);
	int STATIC_MultiplyEqual_IntFloat(float B, int* A);
	int STATIC_Or_IntInt(int A, int B);
	int STATIC_Xor_IntInt(int A, int B);
	int STATIC_And_IntInt(int A, int B);
	bool STATIC_NotEqual_IntInt(int A, int B);
	bool STATIC_EqualEqual_IntInt(int A, int B);
	bool STATIC_GreaterEqual_IntInt(int A, int B);
	bool STATIC_LessEqual_IntInt(int A, int B);
	bool STATIC_Greater_IntInt(int A, int B);
	bool STATIC_Less_IntInt(int A, int B);
	int STATIC_GreaterGreaterGreater_IntInt(int A, int B);
	int STATIC_GreaterGreater_IntInt(int A, int B);
	int STATIC_LessLess_IntInt(int A, int B);
	int STATIC_Subtract_IntInt(int A, int B);
	int STATIC_Add_IntInt(int A, int B);
	int STATIC_Percent_IntInt(int A, int B);
	int STATIC_Divide_IntInt(int A, int B);
	int STATIC_Multiply_IntInt(int A, int B);
	int STATIC_Subtract_PreInt(int A);
	int STATIC_Complement_PreInt(int A);
	unsigned char STATIC_SubtractSubtract_Byte(unsigned char* A);
	unsigned char STATIC_AddAdd_Byte(unsigned char* A);
	unsigned char STATIC_SubtractSubtract_PreByte(unsigned char* A);
	unsigned char STATIC_AddAdd_PreByte(unsigned char* A);
	unsigned char STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_MultiplyEqual_ByteFloat(float B, unsigned char* A);
	unsigned char STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	bool STATIC_OrOr_BoolBool(bool A, bool B);
	bool STATIC_XorXor_BoolBool(bool A, bool B);
	bool STATIC_AndAnd_BoolBool(bool A, bool B);
	bool STATIC_NotEqual_BoolBool(bool A, bool B);
	bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	bool STATIC_Not_PreBool(bool A);
};


// Class Core.TextBuffer
// 0x0030 (0x0080 - 0x0050)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x0008 (0x0058 - 0x0050)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                            // 0x0050(0x0008) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.System
// 0x00F4 (0x014C - 0x0058)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                           // 0x0058(0x0004) (Config)
	int                                                MaxStaleCacheSize;                                        // 0x005C(0x0004) (Config)
	int                                                MaxOverallCacheSize;                                      // 0x0060(0x0004) (Config)
	int                                                PackageSizeSoftLimit;                                     // 0x0064(0x0004) (Config)
	float                                              AsyncIOBandwidthLimit;                                    // 0x0068(0x0004) (Config)
	struct FString                                     SavePath;                                                 // 0x006C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CachePath;                                                // 0x007C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CacheExt;                                                 // 0x008C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Paths;                                                    // 0x009C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ReleaseCookedPaths;                                       // 0x00AC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             SeekFreePCPaths;                                          // 0x00BC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                              // 0x00CC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                            // 0x00DC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                             // 0x00EC(0x0010) (Config, NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                 // 0x00FC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Extensions;                                               // 0x010C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             SeekFreePCExtensions;                                     // 0x011C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             LocalizationPaths;                                        // 0x012C(0x0010) (Config, NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                                // 0x013C(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x00A0 (0x00F0 - 0x0050)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0050(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x0010 (0x0060 - 0x0050)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0008 (0x0058 - 0x0050)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.LocAssetRedirector
// 0x0010 (0x0068 - 0x0058)
class ULocAssetRedirector : public UObjectRedirector
{
public:
	TArray<struct FDestinationLocObject>               DestinationLocObjectInfoList;                             // 0x0058(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LocAssetRedirector");
		return ptr;
	}

};


// Class Core.MetaData
// 0x0048 (0x0098 - 0x0050)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.Linker
// 0x0168 (0x01B8 - 0x0050)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0050(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x00C0 (0x0278 - 0x01B8)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x01B8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x0610 (0x07C8 - 0x01B8)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x610];                                     // 0x01B8(0x0610) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000 (0x0050 - 0x0050)
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
// 0x0008 (0x0058 - 0x0050)
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
// 0x0050 (0x00A8 - 0x0058)
class UStruct : public UField
{
public:
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               UnknownData01[0x3c];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.ScriptStruct
// 0x0024 (0x00CC - 0x00A8)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00A8(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Function
// 0x0020 (0x00C8 - 0x00A8)
class UFunction : public UStruct
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               UnknownData01[4];                                         // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint32_t                                           ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	char                                               UnknownData00[8];                                         // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.Property
// 0x0030 (0x0088 - 0x0058)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0008 (0x0090 - 0x0088)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x0088 - 0x0088)
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
// 0x0008 (0x0090 - 0x0088)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000 (0x0090 - 0x0090)
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
// 0x0008 (0x0098 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x0088 - 0x0088)
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
// 0x0010 (0x0098 - 0x0088)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0008 (0x0090 - 0x0088)
class UIntProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0008 (0x0090 - 0x0088)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x0088 - 0x0088)
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
// 0x0010 (0x0098 - 0x0088)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0008 (0x0090 - 0x0088)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x008C - 0x0088)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0008 (0x0090 - 0x0088)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x0010 (0x0068 - 0x0058)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x0010 (0x0068 - 0x0058)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.Factory
// 0x0048 (0x0098 - 0x0050)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                           // 0x0050(0x0008)
	class UClass*                                      ContextClass;                                             // 0x0058(0x0008)
	struct FString                                     Description;                                              // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Formats;                                                  // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                           // 0x0080(0x0004)
	unsigned long                                      bEditAfterNew : 1;                                        // 0x0080(0x0004)
	unsigned long                                      bEditorImport : 1;                                        // 0x0080(0x0004)
	unsigned long                                      bText : 1;                                                // 0x0080(0x0004)
	int                                                AutoPriority;                                             // 0x0084(0x0004)
	TArray<struct FString>                             ValidGameNames;                                           // 0x0088(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000 (0x0098 - 0x0098)
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
// 0x0034 (0x0084 - 0x0050)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                          // 0x0058(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FormatDescription;                                        // 0x0068(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0078(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.Component
// 0x0010 (0x0060 - 0x0050)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                       // 0x0050(0x0008) (Const, Native)
	struct FName                                       TemplateName;                                             // 0x0058(0x0008) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.DistributionVector
// 0x000C (0x006C - 0x0060)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0060(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0068(0x0004) (Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	struct FVector GetVectorValue(float F, int LastExtreme);
};


// Class Core.DistributionFloat
// 0x000C (0x006C - 0x0060)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0060(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0068(0x0004) (Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	float GetFloatValue(float F);
};


// Class Core.Commandlet
// 0x0054 (0x00A4 - 0x0050)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                          // 0x0050(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpUsage;                                                // 0x0060(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpWebLink;                                              // 0x0070(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                           // 0x0080(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                                    // 0x0090(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      IsServer : 1;                                             // 0x00A0(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x00A0(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x00A0(0x0004)
	unsigned long                                      LogToConsole : 1;                                         // 0x00A0(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};


// Class Core.HelpCommandlet
// 0x0000 (0x00A4 - 0x00A4)
class UHelpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	int Main(struct FString* Params);
};


// Class Core.Package
// 0x00B0 (0x0100 - 0x0050)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0050(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.State
// 0x0054 (0x00FC - 0x00A8)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00A8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Class
// 0x00E0 (0x01DC - 0x00FC)
class UClass : public UState
{
public:
	char                                               UnknownData00[0x14C];                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);

		//UClass::GetDefaultObject can be found with the sig
		//74 ?? F7 86 ?? 00 00 00 00 00 00 10 75 ?? F6 05 ?? ?? ?? ?? 02 0F 84
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
