
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UFSR2Settings;

/// Enum /Script/FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
/// Size: 0x04 (4 bytes)
enum class EFSR2LandscapeHISMMode : uint32_t
{
	EFSR2LandscapeHISMMode__Off                                                      = 0,
	EFSR2LandscapeHISMMode__AllStatic                                                = 1,
	EFSR2LandscapeHISMMode__StaticWPO                                                = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2DeDitherMode
/// Size: 0x04 (4 bytes)
enum class EFSR2DeDitherMode : uint32_t
{
	EFSR2DeDitherMode__Off                                                           = 0,
	EFSR2DeDitherMode__Full                                                          = 1,
	EFSR2DeDitherMode__HairOnly                                                      = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2HistoryFormat
/// Size: 0x04 (4 bytes)
enum class EFSR2HistoryFormat : uint32_t
{
	EFSR2HistoryFormat__FloatRGBA                                                    = 0,
	EFSR2HistoryFormat__FloatR11G11B10                                               = 1
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2QualityMode
/// Size: 0x04 (4 bytes)
enum class EFSR2QualityMode : uint32_t
{
	EFSR2QualityMode__Unused                                                         = 0,
	EFSR2QualityMode__Quality                                                        = 1,
	EFSR2QualityMode__Balanced                                                       = 2,
	EFSR2QualityMode__Performance                                                    = 3,
	EFSR2QualityMode__UltraPerformance                                               = 4
};

#pragma pack(pop)


static_assert(sizeof(UFSR2Settings) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(offsetof(UFSR2Settings, QualityMode) == 0x0040);
static_assert(offsetof(UFSR2Settings, HistoryFormat) == 0x0044);
static_assert(offsetof(UFSR2Settings, DeDither) == 0x0048);
static_assert(offsetof(UFSR2Settings, ForceLandscapeHISMMobility) == 0x0054);
static_assert(offsetof(UFSR2Settings, ReactiveShadingModelID) == 0x0081);
