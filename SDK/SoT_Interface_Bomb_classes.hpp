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

// BlueprintGeneratedClass Interface_Bomb.Interface_Bomb_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Bomb_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Bomb.Interface_Bomb_C");
		return ptr;
	}


	void Interface_Trigger();
	void Set_Bomb_Parameters(float Radius, int Seed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
