
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

#pragma pack(pop)


static_assert(sizeof(FVDCollisionSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVDParticleAttachment) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FVDCollision) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVDCachedParticleStartLocation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBaseVDComponent) == 0x0698); // 1688 bytes (0x000480 - 0x000698)
static_assert(sizeof(UVDBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVDColliderComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(FRopePiece) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVDRopeComponent) == 0x0718); // 1816 bytes (0x000698 - 0x000718)
static_assert(sizeof(UVDDynamicRopeComponent) == 0x0720); // 1824 bytes (0x000718 - 0x000720)
static_assert(sizeof(UVDMeshClothComponent) == 0x0780); // 1920 bytes (0x000698 - 0x000780)
static_assert(sizeof(UVDMeshVolumeConstraint) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVDParticleSpringConstraint) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVDProceduralClothComponent) == 0x0710); // 1808 bytes (0x000698 - 0x000710)
static_assert(sizeof(UVDSimulatedObject) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UVDSimulatedParticle) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UVDSimulation) == 0x0178); // 376 bytes (0x000028 - 0x000178)
static_assert(sizeof(FVDSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(AVDSimulationSettingsActor) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(UVDSkinnedRopeComponent) == 0x0750); // 1872 bytes (0x000718 - 0x000750)
static_assert(sizeof(UVDSplineRopeComponent) == 0x0750); // 1872 bytes (0x000718 - 0x000750)
static_assert(sizeof(AVDWindDirectionalSourceActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UVDWindDirectionalSourceComponent) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(UVICODynamicsSettings) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FVDParticleInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FVDSimulationTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(FVDCollisionSettings, ObjectType) == 0x0000);
static_assert(offsetof(FVDCollisionSettings, CollisionEnabled) == 0x0001);
static_assert(offsetof(FVDCollisionSettings, CollisionResponse) == 0x0008);
static_assert(offsetof(FVDCollisionSettings, CollisionProfileName) == 0x0038);
static_assert(offsetof(FVDParticleAttachment, Location) == 0x0008);
static_assert(offsetof(FVDParticleAttachment, ComponentRef) == 0x0018);
static_assert(offsetof(FVDParticleAttachment, Socket) == 0x0040);
static_assert(offsetof(FVDCachedParticleStartLocation, Location) == 0x0000);
static_assert(offsetof(UBaseVDComponent, SimulationInstance) == 0x0488);
static_assert(offsetof(UBaseVDComponent, VDSimObject) == 0x0490);
static_assert(offsetof(UBaseVDComponent, Particles) == 0x0498);
static_assert(offsetof(UBaseVDComponent, CollisionSettings) == 0x04B0);
static_assert(offsetof(UBaseVDComponent, ParticleAttachments) == 0x0508);
static_assert(offsetof(UBaseVDComponent, AffectedByWindSources) == 0x0528);
static_assert(offsetof(UBaseVDComponent, WindOccluderTraceSettings) == 0x0540);
static_assert(offsetof(UBaseVDComponent, PendingCollisionNotifications) == 0x05D8);
static_assert(offsetof(UBaseVDComponent, ConstraintsToOtherParticles) == 0x0648);
static_assert(offsetof(UBaseVDComponent, CachedStartLocations) == 0x0688);
static_assert(offsetof(UVDColliderComponent, SimulationInstance) == 0x00B0);
static_assert(offsetof(UVDColliderComponent, AssociatedVDComponents) == 0x00B8);
static_assert(offsetof(UVDColliderComponent, SpecificColliders) == 0x00D0);
static_assert(offsetof(UVDRopeComponent, StretchConstraints) == 0x06E0);
static_assert(offsetof(UVDRopeComponent, BendConstraints) == 0x06F0);
static_assert(offsetof(UVDRopeComponent, Pieces) == 0x0700);
static_assert(offsetof(UVDMeshClothComponent, HullMesh) == 0x0698);
static_assert(offsetof(UVDMeshClothComponent, StretchConstraints) == 0x06F0);
static_assert(offsetof(UVDMeshClothComponent, BendConstraints) == 0x0700);
static_assert(offsetof(UVDMeshClothComponent, VolumeConstraint) == 0x0710);
static_assert(offsetof(UVDProceduralClothComponent, StretchConstraints) == 0x06E0);
static_assert(offsetof(UVDProceduralClothComponent, BendConstraints) == 0x06F0);
static_assert(offsetof(UVDSimulatedParticle, Attachment) == 0x0030);
static_assert(offsetof(UVDSimulation, WindSources) == 0x0168);
static_assert(offsetof(FVDSettings, PlaneOrigin) == 0x003C);
static_assert(offsetof(FVDSettings, PlaneNormal) == 0x0048);
static_assert(offsetof(AVDSimulationSettingsActor, Settings) == 0x0220);
static_assert(offsetof(UVDSkinnedRopeComponent, PoseableMeshRef) == 0x0718);
static_assert(offsetof(UVDSplineRopeComponent, SplineRef) == 0x0718);
static_assert(offsetof(AVDWindDirectionalSourceActor, Component) == 0x0220);
static_assert(offsetof(UVICODynamicsSettings, PlaneOrigin) == 0x0060);
static_assert(offsetof(UVICODynamicsSettings, PlaneNormal) == 0x006C);
static_assert(offsetof(FVDParticleInfo, Location) == 0x0008);
