
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

/// Enum /Script/RuntimeAudioImporter.ETranscodingStatus
/// Size: 0x01 (1 bytes)
enum class ETranscodingStatus : uint8_t
{
	ETranscodingStatus__SuccessfulImport                                             = 0,
	ETranscodingStatus__FailedToReadAudioDataArray                                   = 1,
	ETranscodingStatus__SoundWaveDeclarationError                                    = 2,
	ETranscodingStatus__InvalidAudioFormat                                           = 3,
	ETranscodingStatus__AudioDoesNotExist                                            = 4,
	ETranscodingStatus__LoadFileToArrayError                                         = 5
};

/// Enum /Script/RuntimeAudioImporter.ERAWAudioFormat
/// Size: 0x01 (1 bytes)
enum class ERAWAudioFormat : uint8_t
{
	ERAWAudioFormat__Int16                                                           = 0,
	ERAWAudioFormat__Int32                                                           = 1,
	ERAWAudioFormat__UInt8                                                           = 2,
	ERAWAudioFormat__Float32                                                         = 3
};

/// Enum /Script/RuntimeAudioImporter.EAudioFormat
/// Size: 0x01 (1 bytes)
enum class EAudioFormat : uint8_t
{
	EAudioFormat__Auto                                                               = 0,
	EAudioFormat__Mp3                                                                = 1,
	EAudioFormat__Wav                                                                = 2,
	EAudioFormat__Flac                                                               = 3,
	EAudioFormat__OggVorbis                                                          = 4,
	EAudioFormat__Invalid                                                            = 5
};

/// Enum /Script/RuntimeAudioImporter.EWAVEncodingFormat
/// Size: 0x01 (1 bytes)
enum class EWAVEncodingFormat : uint8_t
{
	EWAVEncodingFormat__FORMAT_PCM                                                   = 0,
	EWAVEncodingFormat__FORMAT_ADPCM                                                 = 1,
	EWAVEncodingFormat__FORMAT_IEEE_FLOAT                                            = 2,
	EWAVEncodingFormat__FORMAT_ALAW                                                  = 3,
	EWAVEncodingFormat__FORMAT_MULAW                                                 = 4,
	EWAVEncodingFormat__FORMAT_DVI_ADPCM                                             = 5,
	EWAVEncodingFormat__FORMAT_EXTENSIBLE                                            = 6
};

#pragma pack(pop)


static_assert(sizeof(UImportedSoundWave) == 0x0440); // 1088 bytes (0x0003C0 - 0x000440)
static_assert(sizeof(UPreImportedSoundAsset) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URuntimeAudioCompressor) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(URuntimeAudioImporterLibrary) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FCompressedSoundWaveInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPCMStruct) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UPreImportedSoundAsset, AudioDataArray) == 0x0028);
static_assert(offsetof(UPreImportedSoundAsset, AudioFormat) == 0x0038);
static_assert(offsetof(FCompressedSoundWaveInfo, SoundGroup) == 0x0000);
