
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UDLSSOverrideSettings;
class UDLSSSettings;

/// Enum /Script/DLSS.EDLSSPreset
/// Size: 0x01 (1 bytes)
enum class EDLSSPreset : uint8_t
{
	EDLSSPreset__Default                                                             = 0,
	EDLSSPreset__A                                                                   = 1,
	EDLSSPreset__B                                                                   = 2,
	EDLSSPreset__C                                                                   = 3,
	EDLSSPreset__D                                                                   = 4,
	EDLSSPreset__E                                                                   = 5,
	EDLSSPreset__F                                                                   = 6,
	EDLSSPreset__G                                                                   = 7
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x01 (1 bytes)
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled                                                    = 0,
	EDLSSSettingOverride__Disabled                                                   = 1,
	EDLSSSettingOverride__UseProjectSettings                                         = 2
};

#pragma pack(pop)


static_assert(sizeof(UDLSSOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDLSSSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UDLSSOverrideSettings, EnableScreenpercentageManipulationInDLSSEditorViewportsOverride) == 0x0029);
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x002A);
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x002C);
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x0030);
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x0048);
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 0x005A);
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 0x005C);
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 0x005D);
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 0x005E);
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 0x005F);
