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

// Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_lantern_stand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript");

	Absp_lantern_stand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
