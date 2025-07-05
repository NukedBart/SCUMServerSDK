
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x01 (1 bytes)
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4
};

#pragma pack(pop)


static_assert(sizeof(UUdpMessagingSettings) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0038);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0048);
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x0058);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0060);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0078);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x0088);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0098);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);
