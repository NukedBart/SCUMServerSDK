
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

/// Enum /Script/MIDIDevice.EMIDIEventType
/// Size: 0x01 (1 bytes)
enum class EMIDIEventType : uint8_t
{
	EMIDIEventType__Unknown                                                          = 0,
	EMIDIEventType__NoteOff                                                          = 8,
	EMIDIEventType__NoteOn                                                           = 9,
	EMIDIEventType__NoteAfterTouch                                                   = 10,
	EMIDIEventType__ControlChange                                                    = 11,
	EMIDIEventType__ProgramChange                                                    = 12,
	EMIDIEventType__ChannelAfterTouch                                                = 13,
	EMIDIEventType__PitchBend                                                        = 14
};

#pragma pack(pop)


static_assert(sizeof(UMIDIDeviceControllerBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMIDIDeviceController) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UMIDIDeviceInputController) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UMIDIDeviceManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMIDIDeviceOutputController) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FMIDIDeviceInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFoundMIDIDevice) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UMIDIDeviceController, DeviceName) == 0x0040);
static_assert(offsetof(UMIDIDeviceInputController, DeviceName) == 0x00B8);
static_assert(offsetof(UMIDIDeviceOutputController, DeviceName) == 0x0030);
static_assert(offsetof(FMIDIDeviceInfo, DeviceName) == 0x0008);
static_assert(offsetof(FFoundMIDIDevice, DeviceName) == 0x0008);
