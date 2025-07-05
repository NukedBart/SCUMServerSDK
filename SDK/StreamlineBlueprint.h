
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UStreamlineLibrary;
class UStreamlineLibraryDLSSG;
class UStreamlineLibraryReflex;

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeatureRequirementsFlags : uint8_t
{
	UStreamlineFeatureRequirementsFlags__None                                        = 0,
	UStreamlineFeatureRequirementsFlags__D3D11Supported                              = 1,
	UStreamlineFeatureRequirementsFlags__D3D12Supported                              = 2,
	UStreamlineFeatureRequirementsFlags__VulkanSupported                             = 4,
	UStreamlineFeatureRequirementsFlags__VSyncOffRequired                            = 8,
	UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired                  = 16
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeatureSupport : uint8_t
{
	UStreamlineFeatureSupport__Supported                                             = 0,
	UStreamlineFeatureSupport__NotSupported                                          = 1,
	UStreamlineFeatureSupport__NotSupportedIncompatibleHardware                      = 2,
	UStreamlineFeatureSupport__NotSupportedDriverOutOfDate                           = 3,
	UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate                  = 4,
	UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled               = 5,
	UStreamlineFeatureSupport__NotSupportedByRHI                                     = 6,
	UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime                     = 7,
	UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive          = 8
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeature
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeature : uint8_t
{
	UStreamlineFeature__DLSSG                                                        = 0,
	UStreamlineFeature__Reflex                                                       = 1,
	UStreamlineFeature__Count                                                        = 2
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off                                                        = 0,
	UStreamlineDLSSGMode__On                                                         = 1,
	UStreamlineDLSSGMode__Auto                                                       = 2
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled                                                  = 0,
	UStreamlineReflexMode__Enabled                                                   = 1,
	UStreamlineReflexMode__EnabledPlusBoost                                          = 3
};

#pragma pack(pop)


static_assert(sizeof(UStreamlineLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryDLSSG) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryReflex) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FStreamlineVersion) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FStreamlineFeatureRequirements) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(offsetof(FStreamlineFeatureRequirements, support) == 0x0000);
static_assert(offsetof(FStreamlineFeatureRequirements, Requirements) == 0x0001);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion) == 0x0004);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion) == 0x0010);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredDriverVersion) == 0x001C);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedDriverVersion) == 0x0028);
