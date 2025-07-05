
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

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2
};

#pragma pack(pop)


static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FProcMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FProcMeshVertex) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FProcMeshSection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UProceduralMeshComponent) == 0x04F0); // 1264 bytes (0x000480 - 0x0004F0)
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FProcMeshVertex, position) == 0x0000);
static_assert(offsetof(FProcMeshVertex, Normal) == 0x000C);
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x0018);
static_assert(offsetof(FProcMeshVertex, Color) == 0x0028);
static_assert(offsetof(FProcMeshVertex, UV0) == 0x002C);
static_assert(offsetof(FProcMeshVertex, UV1) == 0x0034);
static_assert(offsetof(FProcMeshVertex, UV2) == 0x003C);
static_assert(offsetof(FProcMeshVertex, UV3) == 0x0044);
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x0000);
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x0010);
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x0020);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0490);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0498);
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x04A8);
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x04B8);
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x04D8);
