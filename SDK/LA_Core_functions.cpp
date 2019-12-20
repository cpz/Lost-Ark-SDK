// Lost Ark (1.12.11.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Core_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function Core.Object.ProfNodeEvent
// (Final, Native, Static, Public)

void UObject::STATIC_ProfNodeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeEvent");

	UObject_ProfNodeEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetDepthThreshold
// (Final, Native, Static, Public)

void UObject::STATIC_ProfNodeSetDepthThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetDepthThreshold");

	UObject_ProfNodeSetDepthThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// (Final, Native, Static, Public)

void UObject::STATIC_ProfNodeSetTimeThresholdSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetTimeThresholdSeconds");

	UObject_ProfNodeSetTimeThresholdSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStop
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_ProfNodeStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStop");

	UObject_ProfNodeStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStart
// (Final, Native, Static, Public)

void UObject::STATIC_ProfNodeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStart");

	UObject_ProfNodeStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStringFromGuid
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetStringFromGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStringFromGuid");

	UObject_GetStringFromGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetGuidFromString
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetGuidFromString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetGuidFromString");

	UObject_GetGuidFromString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.CreateGuid
// (Final, Native, Static, Public)

void UObject::STATIC_CreateGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CreateGuid");

	UObject_CreateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsGuidValid
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_IsGuidValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsGuidValid");

	UObject_IsGuidValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.InvalidateGuid
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_InvalidateGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InvalidateGuid");

	UObject_InvalidateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetLanguage
// (Final, Native, Static, Public)

void UObject::STATIC_GetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetLanguage");

	UObject_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetRandomOptionSumFrequency
// (Final, Defined, Public, HasOutParms)

void UObject::GetRandomOptionSumFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRandomOptionSumFrequency");

	UObject_GetRandomOptionSumFrequency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetBuildChangelistNumber
// (Final, Native, Public)

void UObject::GetBuildChangelistNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetEngineVersion
// (Final, Native, Public)

void UObject::GetEngineVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEngineVersion");

	UObject_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetSystemTime
// (Final, Native, Public, HasOutParms)

void UObject::GetSystemTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.TimeStamp
// (Final, Native, Public)

void UObject::TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.TransformVectorByRotation
// (Final, Native, HasOptionalParms, Public)

void UObject::TransformVectorByRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetPackageName
// (Final, Defined, Public)

void UObject::GetPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsPendingKill
// (Final, Native, Public)

void UObject::IsPendingKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ByteToFloat
// (Final, Defined, Simulated, HasOptionalParms, Public)

void UObject::ByteToFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FloatToByte
// (Final, Defined, Simulated, HasOptionalParms, Public)

void UObject::FloatToByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.UnwindHeading
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_UnwindHeading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindDeltaAngle
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_FindDeltaAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetHeadingAngle
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_GetHeadingAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetAngularDegreesFromRadians
// (Final, Defined, Simulated, Static, Public, HasOutParms)

void UObject::STATIC_GetAngularDegreesFromRadians()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetAngularFromDotDist
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetAngularFromDotDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetAngularDistance
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetAngularDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetDotDistance
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetDotDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PointProjectToPlane
// (Final, Native, Static, Public)

void UObject::STATIC_PointProjectToPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PointDistToPlane
// (Final, Defined, Simulated, HasOptionalParms, Public, HasOutParms, HasDefaults)

void UObject::PointDistToPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PointDistToSegment
// (Final, Native, HasOptionalParms, Public, HasOutParms)

void UObject::PointDistToSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PointDistToLine
// (Final, Native, HasOptionalParms, Public, HasOutParms)

void UObject::PointDistToLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetPerObjectConfigSections
// (Final, Native, Static, HasOptionalParms, Public, HasOutParms)

void UObject::STATIC_GetPerObjectConfigSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ImportJSON
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_ImportJSON()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ImportJSON");

	UObject_ImportJSON_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.StaticSaveConfig
// (Final, Native, Static, Public)

void UObject::STATIC_StaticSaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SaveConfig
// (Final, Native, Public)

void UObject::SaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindObject
// (Final, Native, Static, Public)

void UObject::STATIC_FindObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DynamicLoadObject
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_DynamicLoadObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EnumFromString
// (Final, Native, Static, Public)

void UObject::STATIC_EnumFromString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EnumFromString");

	UObject_EnumFromString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetEnum
// (Final, Native, Static, Public)

void UObject::STATIC_GetEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Disable
// (Final, Native, Public)

void UObject::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Enable
// (Final, Native, Public)

void UObject::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ContinuedState
// (Event, Public)

void UObject::ContinuedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PausedState
// (Event, Public)

void UObject::PausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PoppedState
// (Event, Public)

void UObject::PoppedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushedState
// (Event, Public)

void UObject::PushedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EndState
// (Event, Public)

void UObject::EndState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BeginState
// (Event, Public)

void UObject::BeginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DumpStateStack
// (Final, Native, Public)

void UObject::DumpStateStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PopState
// (Final, Native, HasOptionalParms, Public)

void UObject::PopState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushState
// (Final, Native, HasOptionalParms, Public)

void UObject::PushState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStateName
// (Final, Native, Public)

void UObject::GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsChildState
// (Final, Native, Public)

void UObject::IsChildState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsInState
// (Final, Native, HasOptionalParms, Public)

void UObject::IsInState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GotoState
// (Final, Native, HasOptionalParms, Public)

void UObject::GotoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsUTracing
// (Final, Native, Static, Public)

void UObject::STATIC_IsUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SetUTracing
// (Final, Native, Static, Public)

void UObject::STATIC_SetUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetFuncName
// (Final, Native, Static, Public)

void UObject::STATIC_GetFuncName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DebugBreak
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_DebugBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetScriptTrace
// (Final, Native, Static, Public)

void UObject::STATIC_GetScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetScriptTrace");

	UObject_GetScriptTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ScriptTrace
// (Final, Native, Static, Public)

void UObject::STATIC_ScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseLocalizedPropertyPath
// (Final, Defined, Static, Public)

void UObject::STATIC_ParseLocalizedPropertyPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Localize
// (Native, Static, Public)

void UObject::STATIC_Localize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.WarnInternal
// (Final, Native, Static, Private)

void UObject::STATIC_WarnInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LogInternal
// (Final, Native, Static, HasOptionalParms, Private)

void UObject::STATIC_LogInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_LinearColorLinearColor
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Subtract_LinearColorLinearColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_LinearColorFloat
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Multiply_LinearColorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ColorToLinearColor
// (Final, Defined, Static, Public)

void UObject::STATIC_ColorToLinearColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MakeLinearColor
// (Final, Defined, Static, Public, HasDefaults)

void UObject::STATIC_MakeLinearColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LerpColor
// (Final, Defined, Static, Public, HasDefaults)

void UObject::STATIC_LerpColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MakeColor
// (Final, Defined, Static, HasOptionalParms, Public, HasDefaults)

void UObject::STATIC_MakeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_ColorColor
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Add_ColorColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_ColorFloat
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Multiply_ColorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_FloatColor
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Multiply_FloatColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_ColorColor
// (Final, Defined, Operator, Static, Public)

void UObject::STATIC_Subtract_ColorColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EvalInterpCurveVector2D
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_EvalInterpCurveVector2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EvalInterpCurveVector
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_EvalInterpCurveVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EvalInterpCurveFloat
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_EvalInterpCurveFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.vect2d
// (Final, Defined, Static, Public, HasDefaults)

void UObject::STATIC_vect2d()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetMappedRangeValue
// (Final, Simulated, Native, Static, Public)

void UObject::STATIC_GetMappedRangeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetRangePctByValue
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_GetRangePctByValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetRangeValueByPct
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_GetRangeValueByPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_Vector2DVector2D
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_Vector2DVector2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_Vector2DVector2D");

	UObject_SubtractEqual_Vector2DVector2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_Vector2DVector2D
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_Vector2DVector2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_Vector2DVector2D");

	UObject_AddEqual_Vector2DVector2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_Vector2DFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_Vector2DFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_Vector2DFloat");

	UObject_DivideEqual_Vector2DFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_Vector2DFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_Vector2DFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_Vector2DFloat");

	UObject_MultiplyEqual_Vector2DFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Divide_Vector2DFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Divide_Vector2DFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_Vector2DFloat");

	UObject_Divide_Vector2DFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_Vector2DFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_Vector2DFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_Vector2DFloat");

	UObject_Multiply_Vector2DFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_Vector2DVector2D
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_Vector2DVector2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_Vector2DVector2D
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_Vector2DVector2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_QuatQuat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_QuatQuat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_QuatQuat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_QuatQuat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatSlerp
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_QuatSlerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatToRotator
// (Final, Native, Static, Public)

void UObject::STATIC_QuatToRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatFromRotator
// (Final, Native, Static, Public)

void UObject::STATIC_QuatFromRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatFromAxisAndAngle
// (Final, Native, Static, Public)

void UObject::STATIC_QuatFromAxisAndAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatFindBetween
// (Final, Native, Static, Public)

void UObject::STATIC_QuatFindBetween()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatRotateVector
// (Final, Native, Static, Public)

void UObject::STATIC_QuatRotateVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatInvert
// (Final, Native, Static, Public)

void UObject::STATIC_QuatInvert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatDot
// (Final, Native, Static, Public)

void UObject::STATIC_QuatDot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QuatProduct
// (Final, Native, Static, Public)

void UObject::STATIC_QuatProduct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MatrixGetAxis
// (Final, Native, Static, Public)

void UObject::STATIC_MatrixGetAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MatrixGetOrigin
// (Final, Native, Static, Public)

void UObject::STATIC_MatrixGetOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MatrixGetRotator
// (Final, Native, Static, Public)

void UObject::STATIC_MatrixGetRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MakeRotationMatrix
// (Final, Native, Static, Public)

void UObject::STATIC_MakeRotationMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MakeRotationTranslationMatrix
// (Final, Native, Static, Public)

void UObject::STATIC_MakeRotationTranslationMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.InverseTransformNormal
// (Final, Native, Static, Public)

void UObject::STATIC_InverseTransformNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.TransformNormal
// (Final, Native, Static, Public)

void UObject::STATIC_TransformNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.InverseTransformVector
// (Final, Native, Static, Public)

void UObject::STATIC_InverseTransformVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.TransformVector
// (Final, Native, Static, Public)

void UObject::STATIC_TransformVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_MatrixMatrix
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_MatrixMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_NameName
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_NameName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_NameName
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_NameName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsA
// (Final, Native, Public)

void UObject::IsA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClassIsChildOf
// (Final, Native, Static, Public)

void UObject::STATIC_ClassIsChildOf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_InterfaceInterface
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_InterfaceInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_InterfaceInterface
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_InterfaceInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_ObjectObject
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_ObjectObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_ObjectObject
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_ObjectObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PathName
// (Final, Native, Static, Public)

void UObject::STATIC_PathName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SplitString
// (Final, Defined, Static, HasOptionalParms, Public)

void UObject::STATIC_SplitString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseStringIntoArray
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_ParseStringIntoArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.JoinArray
// (Final, Defined, Static, HasOptionalParms, Public, HasOutParms)

void UObject::STATIC_JoinArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetRightMost
// (Final, Defined, Static, Public)

void UObject::STATIC_GetRightMost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Split
// (Final, Defined, Static, HasOptionalParms, Public)

void UObject::STATIC_Split()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Repl
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_Repl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Asc
// (Final, Native, Static, Public)

void UObject::STATIC_Asc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Chr
// (Final, Native, Static, Public)

void UObject::STATIC_Chr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Locs
// (Final, Native, Static, Public)

void UObject::STATIC_Locs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Caps
// (Final, Native, Static, Public)

void UObject::STATIC_Caps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Right
// (Final, Native, Static, Public)

void UObject::STATIC_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Left
// (Final, Native, Static, Public)

void UObject::STATIC_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Mid
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_Mid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.InStr
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_InStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Len
// (Final, Native, Static, Public)

void UObject::STATIC_Len()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AtEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AtEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ConcatEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_ConcatEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ComplementEqual_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_ComplementEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterEqual_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LessEqual_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_LessEqual_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Greater_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Greater_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Less_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Less_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.At_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_At_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Concat_StrStr
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Concat_StrStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MakeRotator
// (Final, Defined, Static, Public, HasDefaults)

void UObject::STATIC_MakeRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SClampRotAxis
// (Final, Defined, Simulated, Static, Public, HasOutParms)

void UObject::STATIC_SClampRotAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClampRotAxisFromRange
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_ClampRotAxisFromRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClampRotAxisFromBase
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_ClampRotAxisFromBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClampRotAxis
// (Final, Defined, Simulated, Static, Public, HasOutParms)

void UObject::STATIC_ClampRotAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RSize
// (Final, Native, Static, Public)

void UObject::STATIC_RSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RDiff
// (Final, Native, Static, Public)

void UObject::STATIC_RDiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NormalizeRotAxis
// (Final, Native, Static, Public)

void UObject::STATIC_NormalizeRotAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RInterpTo
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_RInterpTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RTransform
// (Final, Native, Static, Public)

void UObject::STATIC_RTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RLerp
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_RLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Normalize
// (Final, Native, Static, Public)

void UObject::STATIC_Normalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.OrthoRotation
// (Final, Native, Static, Public)

void UObject::STATIC_OrthoRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RotRand
// (Final, Native, Static, HasOptionalParms, Public)

void UObject::STATIC_RotRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetRotatorAxis
// (Final, Native, Static, Public)

void UObject::STATIC_GetRotatorAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRotatorAxis");

	UObject_GetRotatorAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetUnAxes
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetUnAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetAxes
// (Final, Native, Static, Public, HasOutParms)

void UObject::STATIC_GetAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClockwiseFrom_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_ClockwiseFrom_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_RotatorRotator
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_RotatorRotator
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_RotatorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_RotatorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_RotatorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_RotatorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_RotatorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_RotatorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Divide_RotatorFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Divide_RotatorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_FloatRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_FloatRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_RotatorFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_RotatorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_RotatorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_RotatorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_RotatorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.InCylinder
// (Final, Defined, Simulated, HasOptionalParms, Public, HasDefaults)

void UObject::InCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NoZDot
// (Final, Native, Static, Public)

void UObject::STATIC_NoZDot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ClampLength
// (Final, Native, Static, Public)

void UObject::STATIC_ClampLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VInterpTo
// (Final, Native, Static, Public)

void UObject::STATIC_VInterpTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsZero
// (Final, Native, Static, Public)

void UObject::STATIC_IsZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProjectOnTo
// (Final, Native, Static, Public)

void UObject::STATIC_ProjectOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MirrorVectorByNormal
// (Final, Native, Static, Public)

void UObject::STATIC_MirrorVectorByNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VRandCone2
// (Final, Native, Static, Public)

void UObject::STATIC_VRandCone2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VRandCone
// (Final, Native, Static, Public)

void UObject::STATIC_VRandCone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VRand
// (Final, Native, Static, Public)

void UObject::STATIC_VRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VLerp
// (Final, Native, Static, Public)

void UObject::STATIC_VLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Normal2D
// (Final, Native, Static, Public)

void UObject::STATIC_Normal2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal2D");

	UObject_Normal2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Normal
// (Final, Native, Static, Public)

void UObject::STATIC_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VSizeSq2D
// (Final, Native, Static, Public)

void UObject::STATIC_VSizeSq2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VSizeSq
// (Final, Native, Static, Public)

void UObject::STATIC_VSizeSq()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VSize2D
// (Final, Native, Static, Public)

void UObject::STATIC_VSize2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.VSize
// (Final, Native, Static, Public)

void UObject::STATIC_VSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_VectorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_VectorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_VectorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_VectorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Cross_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Cross_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Dot_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Dot_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterGreater_VectorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterGreater_VectorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LessLess_VectorRotator
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_LessLess_VectorRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Divide_VectorFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Divide_VectorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_VectorVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_VectorVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_FloatVector
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_FloatVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_VectorFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_VectorFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_PreVector
// (Final, PreOperator, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_PreVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FInterpConstantTo
// (Final, Native, Static, Public)

void UObject::STATIC_FInterpConstantTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FInterpTo
// (Final, Native, Static, Public)

void UObject::STATIC_FInterpTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FPctByRange
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_FPctByRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RandRange
// (Final, Defined, Simulated, Static, Public)

void UObject::STATIC_RandRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FInterpEaseInOut
// (Final, Native, Static, Public)

void UObject::STATIC_FInterpEaseInOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FInterpEaseOut
// (Final, Defined, Static, Public)

void UObject::STATIC_FInterpEaseOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FInterpEaseIn
// (Final, Defined, Static, Public)

void UObject::STATIC_FInterpEaseIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FCubicInterp
// (Final, Native, Static, Public)

void UObject::STATIC_FCubicInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FCeil
// (Final, Native, Static, Public)

void UObject::STATIC_FCeil()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FFloor
// (Final, Native, Static, Public)

void UObject::STATIC_FFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Round
// (Final, Native, Static, Public)

void UObject::STATIC_Round()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Lerp
// (Final, Native, Static, Public)

void UObject::STATIC_Lerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FClamp
// (Final, Native, Static, Public)

void UObject::STATIC_FClamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FMax
// (Final, Native, Static, Public)

void UObject::STATIC_FMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FMin
// (Final, Native, Static, Public)

void UObject::STATIC_FMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FRand
// (Final, Native, Static, Public)

void UObject::STATIC_FRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Square
// (Final, Native, Static, Public)

void UObject::STATIC_Square()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Sqrt
// (Final, Native, Static, Public)

void UObject::STATIC_Sqrt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Loge
// (Final, Native, Static, Public)

void UObject::STATIC_Loge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Exp
// (Final, Native, Static, Public)

void UObject::STATIC_Exp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Atan2
// (Final, Native, Static, Public)

void UObject::STATIC_Atan2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Atan
// (Final, Native, Static, Public)

void UObject::STATIC_Atan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Tan
// (Final, Native, Static, Public)

void UObject::STATIC_Tan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Acos
// (Final, Native, Static, Public)

void UObject::STATIC_Acos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Cos
// (Final, Native, Static, Public)

void UObject::STATIC_Cos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Asin
// (Final, Native, Static, Public)

void UObject::STATIC_Asin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Sin
// (Final, Native, Static, Public)

void UObject::STATIC_Sin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Abs
// (Final, Native, Static, Public)

void UObject::STATIC_Abs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ComplementEqual_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_ComplementEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterEqual_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LessEqual_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_LessEqual_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Greater_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Greater_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Less_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Less_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Percent_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Percent_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Divide_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Divide_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyMultiply_FloatFloat
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_MultiplyMultiply_FloatFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_PreFloat
// (Final, PreOperator, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_PreFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ToHex
// (Final, Native, Static, Public)

void UObject::STATIC_ToHex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Clamp
// (Final, Native, Static, Public)

void UObject::STATIC_Clamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Max
// (Final, Native, Static, Public)

void UObject::STATIC_Max()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Min
// (Final, Native, Static, Public)

void UObject::STATIC_Min()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Rand
// (Final, Native, Static, Public)

void UObject::STATIC_Rand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractSubtract_Int
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractSubtract_Int()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddAdd_Int
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddAdd_Int()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractSubtract_PreInt
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractSubtract_PreInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddAdd_PreInt
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddAdd_PreInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_IntInt
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_IntInt
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_IntFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_IntFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_IntFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_IntFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Or_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Or_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Xor_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Xor_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.And_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_And_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterEqual_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LessEqual_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_LessEqual_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Greater_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Greater_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Less_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Less_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterGreaterGreater_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterGreaterGreater_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GreaterGreater_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_GreaterGreater_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LessLess_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_LessLess_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Add_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Add_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Percent_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Percent_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Divide_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Divide_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Multiply_IntInt
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_Multiply_IntInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_PreInt
// (Final, PreOperator, Native, Operator, Static, Public)

void UObject::STATIC_Subtract_PreInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Complement_PreInt
// (Final, PreOperator, Native, Operator, Static, Public)

void UObject::STATIC_Complement_PreInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractSubtract_Byte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractSubtract_Byte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddAdd_Byte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddAdd_Byte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractSubtract_PreByte
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractSubtract_PreByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddAdd_PreByte
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddAdd_PreByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_SubtractEqual_ByteByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AddEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_AddEqual_ByteByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DivideEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_DivideEqual_ByteByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_ByteFloat
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_ByteFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.MultiplyEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)

void UObject::STATIC_MultiplyEqual_ByteByte()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.OrOr_BoolBool
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_OrOr_BoolBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.XorXor_BoolBool
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_XorXor_BoolBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.AndAnd_BoolBool
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_AndAnd_BoolBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_BoolBool
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_NotEqual_BoolBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EqualEqual_BoolBool
// (Final, Native, Operator, Static, Public)

void UObject::STATIC_EqualEqual_BoolBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Not_PreBool
// (Final, PreOperator, Native, Operator, Static, Public)

void UObject::STATIC_Not_PreBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DistributionVector.GetVectorValue
// (Native, HasOptionalParms, Public)

void UDistributionVector::GetVectorValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DistributionFloat.GetFloatValue
// (Native, HasOptionalParms, Public)

void UDistributionFloat::GetFloatValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Commandlet.Main
// (Event, Public)

void UCommandlet::Main()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.HelpCommandlet.Main
// (Event, Public)

void UHelpCommandlet::Main()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
