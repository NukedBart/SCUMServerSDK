
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

#pragma pack(pop)


static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(UMRMeshComponent) == 0x0510); // 1296 bytes (0x000458 - 0x000510)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x020B);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0210);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0220);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0230);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0248);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0468);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0470);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0480);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0488);
