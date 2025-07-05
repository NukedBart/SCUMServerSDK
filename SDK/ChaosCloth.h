
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "ClothingSystemRuntimeCommon.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UChaosClothConfig;
class UChaosClothSharedSimConfig;
class UChaosClothingInteractor;
class UChaosClothingSimulationFactory;
class UChaosClothingSimulationInteractor;

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x01 (1 bytes)
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x01 (1 bytes)
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveStiffness                                        = 4,
	EChaosWeightMapTarget__AnimDriveDamping                                          = 5,
	EChaosWeightMapTarget__TetherStiffness                                           = 6
};

#pragma pack(pop)


static_assert(sizeof(FChaosClothWeightedValue) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UChaosClothConfig) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UChaosClothSharedSimConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UChaosClothingSimulationFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosClothingInteractor) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UChaosClothingSimulationInteractor) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(offsetof(UChaosClothConfig, MassMode) == 0x0028);
static_assert(offsetof(UChaosClothConfig, TetherStiffness) == 0x0050);
static_assert(offsetof(UChaosClothConfig, Gravity) == 0x0090);
static_assert(offsetof(UChaosClothConfig, AnimDriveStiffness) == 0x009C);
static_assert(offsetof(UChaosClothConfig, AnimDriveDamping) == 0x00A4);
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 0x00AC);
