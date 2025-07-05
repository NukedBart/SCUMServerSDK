
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

class UGridlyBPFunctionLibrary;
class UGridlyDataTable;
class UGridlyGameSettings;
class UGridlyTask_DownloadLocalizedTexts;
class UGridlyTask_ImportDataTableFromGridly;

/// Enum /Script/Gridly.EGridlyColumnDataType
/// Size: 0x01 (1 bytes)
enum class EGridlyColumnDataType : uint8_t
{
	EGridlyColumnDataType__String                                                    = 0,
	EGridlyColumnDataType__Number                                                    = 1
};

#pragma pack(pop)


static_assert(sizeof(UGridlyBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGridlyDataTable) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(FGridlyColumnInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGridlyGameSettings) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(UGridlyTask_DownloadLocalizedTexts) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UGridlyTask_ImportDataTableFromGridly) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(FGridlyResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGridlyTableCell) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGridlyTableRow) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UGridlyDataTable, ViewId) == 0x00B0);
static_assert(offsetof(FGridlyColumnInfo, Name) == 0x0000);
static_assert(offsetof(FGridlyColumnInfo, DataType) == 0x0010);
static_assert(offsetof(UGridlyGameSettings, ImportApiKey) == 0x0028);
static_assert(offsetof(UGridlyGameSettings, ImportFromViewIds) == 0x0038);
static_assert(offsetof(UGridlyGameSettings, ExportApiKey) == 0x0050);
static_assert(offsetof(UGridlyGameSettings, ExportViewId) == 0x0060);
static_assert(offsetof(UGridlyGameSettings, NamespaceColumnId) == 0x0078);
static_assert(offsetof(UGridlyGameSettings, SourceLanguageColumnIdPrefix) == 0x0088);
static_assert(offsetof(UGridlyGameSettings, TargetLanguageColumnIdPrefix) == 0x0098);
static_assert(offsetof(UGridlyGameSettings, CustomCultureMapping) == 0x00B0);
static_assert(offsetof(UGridlyGameSettings, ContextColumnId) == 0x0108);
static_assert(offsetof(UGridlyGameSettings, MetadataMapping) == 0x0120);
static_assert(offsetof(UGridlyTask_ImportDataTableFromGridly, GridlyDataTable) == 0x00D8);
static_assert(offsetof(FGridlyResult, Message) == 0x0000);
static_assert(offsetof(FGridlyTableCell, ColumnId) == 0x0000);
static_assert(offsetof(FGridlyTableCell, DependencyStatus) == 0x0010);
static_assert(offsetof(FGridlyTableCell, Value) == 0x0020);
static_assert(offsetof(FGridlyTableRow, ID) == 0x0000);
static_assert(offsetof(FGridlyTableRow, Path) == 0x0010);
static_assert(offsetof(FGridlyTableRow, Cells) == 0x0020);
