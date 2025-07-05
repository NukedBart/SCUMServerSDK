
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x01 (1 bytes)
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5
};

#pragma pack(pop)


static_assert(sizeof(ULocationServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocationServicesImpl) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLocationServicesData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
