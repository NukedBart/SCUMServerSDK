
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

class UBinkFunctionLibrary;
class UBinkMediaPlayer;
class UBinkMediaTexture;
class UBinkMoviePlayerSettings;

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
	BMASM_Bink_DS_RenderToTexture                                                    = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio                                   = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize                                           = 2,
	BMASM_Bink_DS_OverlayFillScreen                                                  = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle                                = 4
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
	BMASM_Bink_Sound_None                                                            = 0,
	BMASM_Bink_Sound_Simple                                                          = 1,
	BMASM_Bink_Sound_LanguageOverride                                                = 2,
	BMASM_Bink_Sound                                                                 = 3,
	BMASM_Bink_Sound_51LanguageOverride                                              = 4,
	BMASM_Bink_Sound6                                                                = 5,
	BMASM_Bink_Sound_71LanguageOverride                                              = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
	BMASM_Bink_Stream                                                                = 0,
	BMASM_Bink_PreloadAll                                                            = 1,
	BMASM_Bink_StreamUntilResident                                                   = 2
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
/// Size: 0x01 (1 bytes)
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
	MP_Bink_Sound_None                                                               = 0,
	MP_Bink_Sound_Simple                                                             = 1,
	MP_Bink_Sound_LanguageOverride                                                   = 2,
	MP_Bink_Sound                                                                    = 3,
	MP_Bink_Sound_51LanguageOverride                                                 = 4,
	MP_Bink_Sound6                                                                   = 5,
	MP_Bink_Sound_71LanguageOverride                                                 = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
/// Size: 0x01 (1 bytes)
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
	MP_Bink_Stream                                                                   = 0,
	MP_Bink_PreloadAll                                                               = 1,
	MP_Bink_StreamUntilResident                                                      = 2
};

#pragma pack(pop)


static_assert(sizeof(UBinkFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBinkMediaPlayer) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UBinkMediaTexture) == 0x01B0); // 432 bytes (0x000178 - 0x0001B0)
static_assert(sizeof(UBinkMoviePlayerSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationUpperLeft) == 0x0074);
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationLowerRight) == 0x007C);
static_assert(offsetof(UBinkMediaPlayer, URL) == 0x0088);
static_assert(offsetof(UBinkMediaPlayer, BinkBufferMode) == 0x0098);
static_assert(offsetof(UBinkMediaPlayer, BinkSoundTrack) == 0x0099);
static_assert(offsetof(UBinkMediaPlayer, BinkDrawStyle) == 0x00A0);
static_assert(offsetof(UBinkMediaTexture, AddressX) == 0x0178);
static_assert(offsetof(UBinkMediaTexture, AddressY) == 0x0179);
static_assert(offsetof(UBinkMediaTexture, MediaPlayer) == 0x0180);
static_assert(offsetof(UBinkMediaTexture, PixelFormat) == 0x0188);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkBufferMode) == 0x0028);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkSoundTrack) == 0x0029);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationUpperLeft) == 0x0030);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationLowerRight) == 0x0038);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkPixelFormat) == 0x0040);
