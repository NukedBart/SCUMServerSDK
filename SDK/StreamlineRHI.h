
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x01 (1 bytes)
enum class EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled                                              = 0,
	EStreamlineSettingOverride__Disabled                                             = 1,
	EStreamlineSettingOverride__UseProjectSettings                                   = 2
};

#pragma pack(pop)


static_assert(sizeof(UStreamlineOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStreamlineSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UStreamlineOverrideSettings, LoadDebugOverlayOverride) == 0x0029);
