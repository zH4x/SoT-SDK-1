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

// Function bsp_bottle_hanging_light_b.bsp_bottle_hanging_light_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_bottle_hanging_light_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bottle_hanging_light_b.bsp_bottle_hanging_light_b_C.UserConstructionScript");

	Absp_bottle_hanging_light_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
