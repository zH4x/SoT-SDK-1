// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonFront_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.UserConstructionScript");

	ABP_ProtoDoorMechanism_GalleonFront_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonFront_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.ReceiveBeginPlay");

	ABP_ProtoDoorMechanism_GalleonFront_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.Blueprint_OnStarted
// (Event, Protected, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonFront_C::Blueprint_OnStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.Blueprint_OnStarted");

	ABP_ProtoDoorMechanism_GalleonFront_C_Blueprint_OnStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.Blueprint_OnStopped
// (Event, Protected, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonFront_C::Blueprint_OnStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.Blueprint_OnStopped");

	ABP_ProtoDoorMechanism_GalleonFront_C_Blueprint_OnStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_ProtoDoorMechanism_GalleonFront_C::BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ProtoDoorMechanism_GalleonFront_C_BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_ProtoDoorMechanism_GalleonFront_C::BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ProtoDoorMechanism_GalleonFront_C_BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProtoDoorMechanism_GalleonFront_C::ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront");

	ABP_ProtoDoorMechanism_GalleonFront_C_ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
