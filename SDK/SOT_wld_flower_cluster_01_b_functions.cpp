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

// Function wld_flower_cluster_01_b.wld_flower_cluster_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_flower_cluster_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_flower_cluster_01_b.wld_flower_cluster_01_b_C.UserConstructionScript");

	Awld_flower_cluster_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif