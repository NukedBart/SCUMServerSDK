
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

class UJagexAnalyticsBlueprintLibrary;
class UJagexAnalyticsSettings;
class UJagexAnalyticsSubsystem;

/// Enum /Script/JagexAnalyticsProvider.EAnalyticsSendResult
/// Size: 0x01 (1 bytes)
enum class EAnalyticsSendResult : uint8_t
{
	EAnalyticsSendResult__Success                                                    = 0,
	EAnalyticsSendResult__FailedDoNotRetry                                           = 1,
	EAnalyticsSendResult__FailedOkToRetry                                            = 2
};

#pragma pack(pop)


static_assert(sizeof(UJagexAnalyticsBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UJagexAnalyticsSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UJagexAnalyticsSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRecordErrorDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSessionStartHardwareInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSessionStartDetails) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSharedFields) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FHeaderInfo) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(offsetof(UJagexAnalyticsSettings, BrokerAddress) == 0x0028);
static_assert(offsetof(UJagexAnalyticsSettings, Client) == 0x0038);
static_assert(offsetof(FRecordErrorDetails, error_location) == 0x0000);
static_assert(offsetof(FRecordErrorDetails, error_code) == 0x0010);
static_assert(offsetof(FRecordErrorDetails, error_message) == 0x0020);
static_assert(offsetof(FSessionStartHardwareInfo, cpu) == 0x0000);
static_assert(offsetof(FSessionStartHardwareInfo, os) == 0x0010);
static_assert(offsetof(FSessionStartHardwareInfo, gpu) == 0x0020);
static_assert(offsetof(FSessionStartHardwareInfo, resolution) == 0x0030);
static_assert(offsetof(FSessionStartDetails, hardware_specs) == 0x0000);
static_assert(offsetof(FSharedFields, Timestamp) == 0x0000);
static_assert(offsetof(FSharedFields, character_id) == 0x0010);
static_assert(offsetof(FSharedFields, account_id) == 0x0020);
static_assert(offsetof(FSharedFields, game_client) == 0x0030);
static_assert(offsetof(FSharedFields, game_version) == 0x0040);
static_assert(offsetof(FHeaderInfo, event_type) == 0x0010);
static_assert(offsetof(FHeaderInfo, event_id) == 0x0020);
static_assert(offsetof(FHeaderInfo, event_data) == 0x0030);
