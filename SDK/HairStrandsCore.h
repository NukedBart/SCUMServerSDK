
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Enum /Script/HairStrandsCore.EHairCardsSourceType
/// Size: 0x01 (1 bytes)
enum class EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural                                                 = 0,
	EHairCardsSourceType__Imported                                                   = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsGenerationType
/// Size: 0x01 (1 bytes)
enum class EHairCardsGenerationType : uint8_t
{
	EHairCardsGenerationType__CardsCount                                             = 0,
	EHairCardsGenerationType__UseGuides                                              = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsClusterType
/// Size: 0x01 (1 bytes)
enum class EHairCardsClusterType : uint8_t
{
	EHairCardsClusterType__Low                                                       = 0,
	EHairCardsClusterType__High                                                      = 1
};

/// Enum /Script/HairStrandsCore.EGroomGeometryType
/// Size: 0x01 (1 bytes)
enum class EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands                                                      = 0,
	EGroomGeometryType__Cards                                                        = 1,
	EGroomGeometryType__Meshes                                                       = 2
};

/// Enum /Script/HairStrandsCore.EHairLODSelectionType
/// Size: 0x01 (1 bytes)
enum class EHairLODSelectionType : uint8_t
{
	EHairLODSelectionType__Cpu                                                       = 0,
	EHairLODSelectionType__Gpu                                                       = 1
};

/// Enum /Script/HairStrandsCore.EHairInterpolationWeight
/// Size: 0x01 (1 bytes)
enum class EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric                                             = 0,
	EHairInterpolationWeight__Root                                                   = 1,
	EHairInterpolationWeight__Index                                                  = 2,
	EHairInterpolationWeight__Unknown                                                = 3
};

/// Enum /Script/HairStrandsCore.EHairInterpolationQuality
/// Size: 0x01 (1 bytes)
enum class EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low                                                   = 0,
	EHairInterpolationQuality__Medium                                                = 1,
	EHairInterpolationQuality__High                                                  = 2,
	EHairInterpolationQuality__Unknown                                               = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationType
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None                                                    = 0,
	EGroomInterpolationType__RigidTransform                                          = 2,
	EGroomInterpolationType__OffsetTransform                                         = 4,
	EGroomInterpolationType__SmoothTransform                                         = 8
};

/// Enum /Script/HairStrandsCore.EGroomStrandsSize
/// Size: 0x01 (1 bytes)
enum class EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None                                                          = 0,
	EGroomStrandsSize__Size2                                                         = 2,
	EGroomStrandsSize__Size4                                                         = 4,
	EGroomStrandsSize__Size8                                                         = 8,
	EGroomStrandsSize__Size16                                                        = 16,
	EGroomStrandsSize__Size32                                                        = 32
};

/// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers
/// Size: 0x01 (1 bytes)
enum class EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None                                                       = 0,
	EGroomNiagaraSolvers__CosseratRods                                               = 2,
	EGroomNiagaraSolvers__AngularSprings                                             = 4,
	EGroomNiagaraSolvers__CustomSolver                                               = 8
};

/// Enum /Script/HairStrandsCore.EGroomBindingMeshType
/// Size: 0x01 (1 bytes)
enum class EGroomBindingMeshType : uint8_t
{
	EGroomBindingMeshType__SkeletalMesh                                              = 0,
	EGroomBindingMeshType__GeometryCache                                             = 1
};

/// Enum /Script/HairStrandsCore.EGroomCacheType
/// Size: 0x01 (1 bytes)
enum class EGroomCacheType : uint8_t
{
	EGroomCacheType__None                                                            = 0,
	EGroomCacheType__Strands                                                         = 1,
	EGroomCacheType__Guides                                                          = 2
};

/// Enum /Script/HairStrandsCore.EGroomCacheAttributes
/// Size: 0x01 (1 bytes)
enum class EGroomCacheAttributes : uint8_t
{
	EGroomCacheAttributes__None                                                      = 0,
	EGroomCacheAttributes__Position                                                  = 1,
	EGroomCacheAttributes__Width                                                     = 2,
	EGroomCacheAttributes__Color                                                     = 4
};

/// Enum /Script/HairStrandsCore.EFollicleMaskChannel
/// Size: 0x01 (1 bytes)
enum class EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R                                                          = 0,
	EFollicleMaskChannel__G                                                          = 1,
	EFollicleMaskChannel__B                                                          = 2,
	EFollicleMaskChannel__A                                                          = 3
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType
/// Size: 0x01 (1 bytes)
enum class EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static                                                 = 0,
	EStrandsTexturesMeshType__Skeletal                                               = 1
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType
/// Size: 0x01 (1 bytes)
enum class EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside                                           = 0,
	EStrandsTexturesTraceType__TraceOuside                                           = 1,
	EStrandsTexturesTraceType__TraceBidirectional                                    = 2
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationWeight
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric                                            = 0,
	EGroomInterpolationWeight__Root                                                  = 1,
	EGroomInterpolationWeight__Index                                                 = 2,
	EGroomInterpolationWeight__Unknown                                               = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationQuality
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low                                                  = 0,
	EGroomInterpolationQuality__Medium                                               = 1,
	EGroomInterpolationQuality__High                                                 = 2,
	EGroomInterpolationQuality__Unknown                                              = 3
};

#pragma pack(pop)


static_assert(sizeof(AGroomActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FHairGroupInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairGroupInfoWithVisibility) == 0x001C); // 28 bytes (0x000018 - 0x00001C)
static_assert(sizeof(FHairGeometrySettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairShadowSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairAdvancedRenderingSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FHairGroupsRendering) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairSolverSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairExternalForces) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairBendConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairStretchConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairCollisionConstraint) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FHairMaterialConstraints) == 0x01D8); // 472 bytes (0x000000 - 0x0001D8)
static_assert(sizeof(FHairStrandsParameters) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairGroupsPhysics) == 0x02C8); // 712 bytes (0x000000 - 0x0002C8)
static_assert(sizeof(FHairDecimationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairInterpolationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairGroupsInterpolation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FHairLODSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairGroupsLOD) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairCardsClusterSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairCardsGeometrySettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairCardsTextureSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairGroupsProceduralCards) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairGroupCardsTextures) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairGroupCardsInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairGroupsCardsSourceDescription) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FHairGroupsMeshesSourceDescription) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FHairGroupsMaterial) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomAsset) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UGroomAssetImportData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FGoomBindingGroupInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomBindingAsset) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UGroomBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGroomAnimationInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGroomCacheInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGroomCache) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGroomCacheImportSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGroomCacheImportOptions) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGroomCacheImportData) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FHairGroupDesc) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(UGroomComponent) == 0x05B0); // 1456 bytes (0x000480 - 0x0005B0)
static_assert(sizeof(UGroomCreateBindingOptions) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FFollicleMaskOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomCreateFollicleMaskOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGroomCreateStrandsTexturesOptions) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGroomConversionSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGroomImportOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGroomHairGroupPreview) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGroomHairGroupsPreview) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGroomPluginSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMovieSceneGroomCacheParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMovieSceneGroomCacheSection) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(UMovieSceneGroomCacheTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UNiagaraDataInterfaceHairStrands) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfacePhysicsAsset) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceVelocityGrid) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePressureGrid) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(FGroomBuildSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneGroomCacheSectionTemplateParameters) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneGroomCacheSectionTemplate) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(offsetof(AGroomActor, GroomComponent) == 0x0220);
static_assert(offsetof(FHairGroupsRendering, MaterialSlotName) == 0x0000);
static_assert(offsetof(FHairGroupsRendering, Material) == 0x0008);
static_assert(offsetof(FHairGroupsRendering, GeometrySettings) == 0x0010);
static_assert(offsetof(FHairGroupsRendering, ShadowSettings) == 0x0020);
static_assert(offsetof(FHairGroupsRendering, AdvancedSettings) == 0x002C);
static_assert(offsetof(FHairSolverSettings, NiagaraSolver) == 0x0001);
static_assert(offsetof(FHairSolverSettings, CustomSystem) == 0x0008);
static_assert(offsetof(FHairExternalForces, GravityVector) == 0x0000);
static_assert(offsetof(FHairExternalForces, AirVelocity) == 0x0010);
static_assert(offsetof(FHairBendConstraint, BendScale) == 0x0010);
static_assert(offsetof(FHairStretchConstraint, StretchScale) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, GridDimension) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, RadiusScale) == 0x0020);
static_assert(offsetof(FHairMaterialConstraints, BendConstraint) == 0x0000);
static_assert(offsetof(FHairMaterialConstraints, StretchConstraint) == 0x0098);
static_assert(offsetof(FHairMaterialConstraints, CollisionConstraint) == 0x0130);
static_assert(offsetof(FHairStrandsParameters, StrandsSize) == 0x0000);
static_assert(offsetof(FHairStrandsParameters, ThicknessScale) == 0x0010);
static_assert(offsetof(FHairGroupsPhysics, SolverSettings) == 0x0000);
static_assert(offsetof(FHairGroupsPhysics, ExternalForces) == 0x0038);
static_assert(offsetof(FHairGroupsPhysics, MaterialConstraints) == 0x0058);
static_assert(offsetof(FHairGroupsPhysics, StrandsParameters) == 0x0230);
static_assert(offsetof(FHairInterpolationSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FHairInterpolationSettings, InterpolationDistance) == 0x0009);
static_assert(offsetof(FHairGroupsInterpolation, DecimationSettings) == 0x0000);
static_assert(offsetof(FHairGroupsInterpolation, InterpolationSettings) == 0x0008);
static_assert(offsetof(FHairLODSettings, GeometryType) == 0x0015);
static_assert(offsetof(FHairGroupsLOD, LODs) == 0x0000);
static_assert(offsetof(FHairCardsClusterSettings, Type) == 0x0004);
static_assert(offsetof(FHairCardsGeometrySettings, GenerationType) == 0x0000);
static_assert(offsetof(FHairCardsGeometrySettings, ClusterType) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, ClusterSettings) == 0x0000);
static_assert(offsetof(FHairGroupsProceduralCards, GeometrySettings) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, TextureSettings) == 0x0024);
static_assert(offsetof(FHairGroupCardsTextures, DepthTexture) == 0x0000);
static_assert(offsetof(FHairGroupCardsTextures, CoverageTexture) == 0x0008);
static_assert(offsetof(FHairGroupCardsTextures, TangentTexture) == 0x0010);
static_assert(offsetof(FHairGroupCardsTextures, AttributeTexture) == 0x0018);
static_assert(offsetof(FHairGroupCardsTextures, AuxilaryDataTexture) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsCardsSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsCardsSourceDescription, SourceType) == 0x0010);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMesh) == 0x0018);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMeshKey) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMesh) == 0x0030);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralSettings) == 0x0038);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Textures) == 0x0070);
static_assert(offsetof(FHairGroupsCardsSourceDescription, CardsInfo) == 0x00A8);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMeshKey) == 0x00B0);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMesh) == 0x0010);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Textures) == 0x0018);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMeshKey) == 0x0050);
static_assert(offsetof(FHairGroupsMaterial, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMaterial, SlotName) == 0x0008);
static_assert(offsetof(UGroomAsset, HairGroupsInfo) == 0x0030);
static_assert(offsetof(UGroomAsset, HairGroupsRendering) == 0x0040);
static_assert(offsetof(UGroomAsset, HairGroupsPhysics) == 0x0050);
static_assert(offsetof(UGroomAsset, HairGroupsInterpolation) == 0x0060);
static_assert(offsetof(UGroomAsset, HairGroupsLOD) == 0x0070);
static_assert(offsetof(UGroomAsset, HairGroupsCards) == 0x0080);
static_assert(offsetof(UGroomAsset, HairGroupsMeshes) == 0x0090);
static_assert(offsetof(UGroomAsset, HairGroupsMaterials) == 0x00A0);
static_assert(offsetof(UGroomAsset, HairInterpolationType) == 0x00C1);
static_assert(offsetof(UGroomAsset, LODSelectionType) == 0x00C2);
static_assert(offsetof(UGroomAsset, MinLOD) == 0x00C4);
static_assert(offsetof(UGroomAsset, DisableBelowMinLodStripping) == 0x00C8);
static_assert(offsetof(UGroomAsset, EffectiveLODBias) == 0x00D0);
static_assert(offsetof(UGroomAsset, AssetUserData) == 0x00E0);
static_assert(offsetof(UGroomAssetImportData, ImportOptions) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, GroomBindingType) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, Groom) == 0x0030);
static_assert(offsetof(UGroomBindingAsset, SourceSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomBindingAsset, TargetSkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomBindingAsset, SourceGeometryCache) == 0x0048);
static_assert(offsetof(UGroomBindingAsset, TargetGeometryCache) == 0x0050);
static_assert(offsetof(UGroomBindingAsset, GroupInfos) == 0x0060);
static_assert(offsetof(FGroomAnimationInfo, Attributes) == 0x001C);
static_assert(offsetof(FGroomCacheInfo, Type) == 0x0004);
static_assert(offsetof(FGroomCacheInfo, AnimationInfo) == 0x0008);
static_assert(offsetof(UGroomCache, GroomCacheInfo) == 0x0030);
static_assert(offsetof(FGroomCacheImportSettings, GroomAsset) == 0x0008);
static_assert(offsetof(UGroomCacheImportOptions, ImportSettings) == 0x0028);
static_assert(offsetof(UGroomCacheImportData, Settings) == 0x0028);
static_assert(offsetof(UGroomComponent, GroomAsset) == 0x0488);
static_assert(offsetof(UGroomComponent, GroomCache) == 0x0490);
static_assert(offsetof(UGroomComponent, NiagaraComponents) == 0x0498);
static_assert(offsetof(UGroomComponent, SourceSkeletalMesh) == 0x04A8);
static_assert(offsetof(UGroomComponent, BindingAsset) == 0x04B0);
static_assert(offsetof(UGroomComponent, PhysicsAsset) == 0x04B8);
static_assert(offsetof(UGroomComponent, Strands_DebugMaterial) == 0x04C0);
static_assert(offsetof(UGroomComponent, Strands_DefaultMaterial) == 0x04C8);
static_assert(offsetof(UGroomComponent, Cards_DefaultMaterial) == 0x04D0);
static_assert(offsetof(UGroomComponent, Meshes_DefaultMaterial) == 0x04D8);
static_assert(offsetof(UGroomComponent, AngularSpringsSystem) == 0x04E0);
static_assert(offsetof(UGroomComponent, CosseratRodsSystem) == 0x04E8);
static_assert(offsetof(UGroomComponent, AttachmentName) == 0x04F0);
static_assert(offsetof(UGroomComponent, GroomGroupsDesc) == 0x0550);
static_assert(offsetof(UGroomCreateBindingOptions, GroomBindingType) == 0x0028);
static_assert(offsetof(UGroomCreateBindingOptions, SourceSkeletalMesh) == 0x0030);
static_assert(offsetof(UGroomCreateBindingOptions, TargetSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomCreateBindingOptions, SourceGeometryCache) == 0x0040);
static_assert(offsetof(UGroomCreateBindingOptions, TargetGeometryCache) == 0x0048);
static_assert(offsetof(FFollicleMaskOptions, Groom) == 0x0000);
static_assert(offsetof(FFollicleMaskOptions, Channel) == 0x0008);
static_assert(offsetof(UGroomCreateFollicleMaskOptions, Grooms) == 0x0030);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, TraceType) == 0x002C);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, MeshType) == 0x0034);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, StaticMesh) == 0x0038);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GroupIndex) == 0x0058);
static_assert(offsetof(FGroomConversionSettings, Rotation) == 0x0000);
static_assert(offsetof(FGroomConversionSettings, Scale) == 0x000C);
static_assert(offsetof(UGroomImportOptions, ConversionSettings) == 0x0028);
static_assert(offsetof(UGroomImportOptions, InterpolationSettings) == 0x0040);
static_assert(offsetof(FGroomHairGroupPreview, InterpolationSettings) == 0x000C);
static_assert(offsetof(UGroomHairGroupsPreview, Groups) == 0x0028);
static_assert(offsetof(FMovieSceneGroomCacheParams, GroomCache) == 0x0000);
static_assert(offsetof(FMovieSceneGroomCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGroomCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGroomCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(UMovieSceneGroomCacheSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGroomCacheTrack, AnimationSections) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceVelocityGrid, GridSize) == 0x00D8);
static_assert(offsetof(FGroomBuildSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FGroomBuildSettings, InterpolationDistance) == 0x0009);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionStartTime) == 0x0020);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionEndTime) == 0x0024);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplate, Params) == 0x0020);
