#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrewOwnershipTracking.OwnerListEntry
// 0x0010
struct FOwnerListEntry
{
	TArray<struct FGuid>                               OwnerList;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipSet
// 0x0018
struct FCrewTrackedItemOwnershipSet
{
	class AActor*                                      Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipChanged
// 0x0030
struct FCrewTrackedItemOwnershipChanged
{
	class AActor*                                      Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PreviousCrewId;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTimeOwnedByThisCrew;                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct CrewOwnershipTracking.TrackItemOwnershipEvent
// 0x0020
struct FTrackItemOwnershipEvent
{
	class AActor*                                      TrackedItem;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ItemRepresentation;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
