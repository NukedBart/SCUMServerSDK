
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "TemplateSequence.h"

#pragma pack(push, 0x1)

class UCompositeCameraShakePattern;
class UConstantCameraShakePattern;
class UDefaultCameraShakeBase;
class UMatineeCameraShake;
class UMatineeCameraShakeFunctionLibrary;
class UMatineeCameraShakePattern;
class UMovieSceneMatineeCameraShakeEvaluator;
class UPerlinNoiseCameraShakePattern;
class USimpleCameraShakePattern;
class UTestCameraShake;
class UWaveOscillatorCameraShakePattern;

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x01 (1 bytes)
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x01 (1 bytes)
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x01 (1 bytes)
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

#pragma pack(pop)


static_assert(sizeof(UTestCameraShake) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USimpleCameraShakePattern) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UConstantCameraShakePattern) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UCompositeCameraShakePattern) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UDefaultCameraShakeBase) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FFOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FROscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FVOscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMatineeCameraShake) == 0x01B0); // 432 bytes (0x0000A8 - 0x0001B0)
static_assert(sizeof(UMatineeCameraShakePattern) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneMatineeCameraShakeEvaluator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMatineeCameraShakeFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPerlinNoiseShaker) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(FWaveOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x0038);
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x0044);
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x0028);
static_assert(offsetof(FFOscillator, InitialOffset) == 0x0008);
static_assert(offsetof(FFOscillator, Waveform) == 0x0009);
static_assert(offsetof(FROscillator, Pitch) == 0x0000);
static_assert(offsetof(FROscillator, Yaw) == 0x000C);
static_assert(offsetof(FROscillator, Roll) == 0x0018);
static_assert(offsetof(FVOscillator, X) == 0x0000);
static_assert(offsetof(FVOscillator, Y) == 0x000C);
static_assert(offsetof(FVOscillator, Z) == 0x0018);
static_assert(offsetof(UMatineeCameraShake, RotOscillation) == 0x00B4);
static_assert(offsetof(UMatineeCameraShake, LocOscillation) == 0x00D8);
static_assert(offsetof(UMatineeCameraShake, FOVOscillation) == 0x00FC);
static_assert(offsetof(UMatineeCameraShake, Anim) == 0x0120);
static_assert(offsetof(UMatineeCameraShake, AnimSequence) == 0x0128);
static_assert(offsetof(UMatineeCameraShake, AnimInst) == 0x0138);
static_assert(offsetof(UMatineeCameraShake, SequenceShakePattern) == 0x0180);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x0040);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x0048);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x0050);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x0060);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x0068);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x0070);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x0078);
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x0008);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x0040);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x004C);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x0058);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x006C);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x0078);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x0084);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x0090);
