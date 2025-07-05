
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x01 (1 bytes)
enum class UDLSSMode : uint8_t
{
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__DLAA                                                                  = 2,
	UDLSSMode__UltraQuality                                                          = 3,
	UDLSSMode__Quality                                                               = 4,
	UDLSSMode__Balanced                                                              = 5,
	UDLSSMode__Performance                                                           = 6,
	UDLSSMode__UltraPerformance                                                      = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive                       = 6
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
