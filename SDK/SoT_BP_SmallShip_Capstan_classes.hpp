#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_Capstan.BP_SmallShip_Capstan_C
// 0x0010 (0x0800 - 0x07F0)
class ABP_SmallShip_Capstan_C : public ABP_Base_Capstan_C
{
public:
	class UChildActorComponent*                        Arm1;                                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Arm2;                                                     // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_Capstan.BP_SmallShip_Capstan_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif