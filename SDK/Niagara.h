
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

#pragma pack(push, 0x1)

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x01 (1 bytes)
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x01 (1 bytes)
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x01 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x01 (1 bytes)
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x04 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x01 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x01 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x01 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x01 (1 bytes)
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x01 (1 bytes)
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x04 (4 bytes)
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariableBase) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraVariable) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(ANiagaraActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FNiagaraBakerTextureSource) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraBakerTextureSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraBakerSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FNiagaraParameterStore) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x00C8); // 200 bytes (0x000078 - 0x0000C8)
static_assert(sizeof(FNiagaraMaterialOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNiagaraComponent) == 0x0600); // 1536 bytes (0x000458 - 0x000600)
static_assert(sizeof(FNCPoolElement) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNCPool) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraComponentPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraPlatformSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraRendererProperties) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraTypeDefinition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x01B0); // 432 bytes (0x000078 - 0x0001B0)
static_assert(sizeof(UNiagaraComponentSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceCubeTexture) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraDataInterfaceDebugDraw) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraParticleCallbackHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x00F8); // 248 bytes (0x0000D8 - 0x0000F8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x01C0); // 448 bytes (0x0000F8 - 0x0001C0)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x0168); // 360 bytes (0x0000F8 - 0x000168)
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x0180); // 384 bytes (0x000100 - 0x000180)
static_assert(sizeof(UNiagaraDataInterfaceIntRenderTarget2D) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceMeshRendererInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x01A8); // 424 bytes (0x0000D8 - 0x0001A8)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetCube) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x0170); // 368 bytes (0x000070 - 0x000170)
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x01F0); // 496 bytes (0x000070 - 0x0001F0)
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FNiagaraDebugHUDVariable) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebugHudTextOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraDebugHUDSettingsData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(UNiagaraDebugHUDSettings) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(UNiagaraEditorDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEditorParametersAdapterBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPerfBaselineStats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraEffectType) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNiagaraDataSetID) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNiagaraEmitter) == 0x02A0); // 672 bytes (0x000028 - 0x0002A0)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x0330); // 816 bytes (0x000078 - 0x000330)
static_assert(sizeof(FNiagaraMeshRendererMeshProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x0898); // 2200 bytes (0x000078 - 0x000898)
static_assert(sizeof(UNiagaraMessageDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UNiagaraParameterCollection) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNiagaraParameterDefinitionsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraBaselineController) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UNiagaraBaselineController_Basic) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(ANiagaraPerfBaselineActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ANiagaraPreviewBase) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UNiagaraPreviewAxis) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(ANiagaraPreviewGrid) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FNiagaraRibbonShapeCustomVertex) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x0860); // 2144 bytes (0x000078 - 0x000860)
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FNiagaraBoundParameter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraCompilerTag) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVMFunctionSpecifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraDataSetProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraStatScope) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraVMExecutableData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraScript) == 0x02E0); // 736 bytes (0x000028 - 0x0002E0)
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNiagaraSettings) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x0AB0); // 2736 bytes (0x000078 - 0x000AB0)
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterHandle) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x0218); // 536 bytes (0x000000 - 0x000218)
static_assert(sizeof(UNiagaraSystem) == 0x0498); // 1176 bytes (0x000030 - 0x000498)
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x02C0); // 704 bytes (0x000040 - 0x0002C0)
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x02C8); // 712 bytes (0x000040 - 0x0002C8)
static_assert(sizeof(FNiagaraScalabilityState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraCompileDependency) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraRandInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraVariableInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraFunctionSignature) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraEmitterNameSettingsRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBasicParticleData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMeshTriCoordinate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraSimpleClientInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraOutlinerCaptureSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraRequestSimpleClientInfoMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraOutlinerEmitterInstanceData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraOutlinerTimingData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraOutlinerSystemInstanceData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraOutlinerSystemData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraOutlinerWorldData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraOutlinerData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraDebuggerOutlinerUpdate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraDebuggerExecuteConsoleCommand) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebuggerConnectionClosed) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerAcceptConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerRequestConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FParameterDefinitionsSubscription) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraScalabilityManager) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FVersionedNiagaraScriptData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraModuleDependency) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraScriptHighlight) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraVariableMetaData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraSpawnInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraAssetVersion) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FNiagaraMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraParameterMap) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraNumeric) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraHalfVector4) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraHalfVector3) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FNiagaraHalfVector2) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalf) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FNiagaraBool) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraInt32) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraWildcard) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraVariant) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x0090);
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x0008);
static_assert(offsetof(FNiagaraVariable, VarData) == 0x0010);
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x00A0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 0x00E8);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 0x00EC);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 0x00F0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 0x00F4);
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x0220);
static_assert(offsetof(FNiagaraBakerTextureSource, SourceName) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSettings, OutputName) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSettings, SourceBinding) == 0x0008);
static_assert(offsetof(FNiagaraBakerTextureSettings, FrameSize) == 0x0014);
static_assert(offsetof(FNiagaraBakerTextureSettings, TextureSize) == 0x001C);
static_assert(offsetof(FNiagaraBakerTextureSettings, GeneratedTexture) == 0x0028);
static_assert(offsetof(UNiagaraBakerSettings, FramesPerDimension) == 0x0038);
static_assert(offsetof(UNiagaraBakerSettings, OutputTextures) == 0x0040);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportMode) == 0x0050);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportLocation) == 0x0054);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportRotation) == 0x00A8);
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x0020);
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x0030);
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x0040);
static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 0x0078);
static_assert(offsetof(FNiagaraMaterialOverride, Material) == 0x0000);
static_assert(offsetof(FNiagaraMaterialOverride, EmitterRendererProperty) == 0x0010);
static_assert(offsetof(UNiagaraComponent, Asset) == 0x0458);
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 0x0460);
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x0468);
static_assert(offsetof(UNiagaraComponent, EmitterMaterials) == 0x0568);
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 0x0590);
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x0598);
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 0x05A0);
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 0x05A1);
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 0x05A2);
static_assert(offsetof(FNCPoolElement, Component) == 0x0000);
static_assert(offsetof(FNCPool, FreeElements) == 0x0000);
static_assert(offsetof(UNiagaraComponentPool, WorldParticleSystemPools) == 0x0028);
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x0018);
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x0028);
static_assert(offsetof(UNiagaraRendererProperties, MotionVectorSetting) == 0x005C);
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x0000);
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x0010);
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x0030);
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 0x0050);
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x0058);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x0060);
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x0070);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertySetterParameterDefaults) == 0x0078);
static_assert(offsetof(FNiagaraComponentPropertyBinding, WritableValue) == 0x00C8);
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x0078);
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x0088);
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding) == 0x00E0);
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x0140);
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x0148);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, QuatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x005C);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x0070);
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 0x0118);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat) == 0x0128);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, ManagedRenderTargets) == 0x0100);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceMode) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, PhysicalMaterials) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 0x00E1);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets) == 0x0158);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat) == 0x00DC);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, ManagedRenderTargets) == 0x0100);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, Source) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x0090);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x00B0);
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSpline, SplineUserParameter) == 0x0040);
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, Source) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x0038);
static_assert(offsetof(FNiagaraDebugHUDVariable, Name) == 0x0008);
static_assert(offsetof(FNiagaraDebugHudTextOptions, Font) == 0x0000);
static_assert(offsetof(FNiagaraDebugHudTextOptions, HorizontalAlignment) == 0x0004);
static_assert(offsetof(FNiagaraDebugHudTextOptions, VerticalAlignment) == 0x0005);
static_assert(offsetof(FNiagaraDebugHudTextOptions, ScreenOffset) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewFont) == 0x0004);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewLocation) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ActorFilter) == 0x0010);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ComponentFilter) == 0x0028);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemFilter) == 0x0040);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, EmitterFilter) == 0x0058);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity) == 0x006C);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity) == 0x0070);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemVariables) == 0x0078);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemTextOptions) == 0x0088);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticlesVariables) == 0x00A0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleTextOptions) == 0x00B0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackMode) == 0x00C8);
static_assert(offsetof(UNiagaraDebugHUDSettings, Data) == 0x0048);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 0x0028);
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 0x002C);
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x0030);
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x0038);
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x0048);
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x0058);
static_assert(offsetof(UNiagaraEffectType, PerformanceBaselineController) == 0x0070);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineStats) == 0x0078);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineVersion) == 0x0088);
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x0000);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x0000);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x0020);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x0030);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x0040);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x0050);
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x0010);
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x0000);
static_assert(offsetof(FNiagaraDataSetID, Type) == 0x0008);
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x0010);
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x0020);
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 0x003C);
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x0004);
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x0010);
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x0008);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x0018);
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 0x0028);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x0034);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x0044);
static_assert(offsetof(UNiagaraEmitter, AllocationMode) == 0x0030);
static_assert(offsetof(UNiagaraEmitter, UpdateScriptProps) == 0x0038);
static_assert(offsetof(UNiagaraEmitter, SpawnScriptProps) == 0x0060);
static_assert(offsetof(UNiagaraEmitter, SimTarget) == 0x0088);
static_assert(offsetof(UNiagaraEmitter, FixedBounds) == 0x008C);
static_assert(offsetof(UNiagaraEmitter, GlobalSpawnCountScaleOverrides) == 0x00B0);
static_assert(offsetof(UNiagaraEmitter, Platforms) == 0x00C8);
static_assert(offsetof(UNiagaraEmitter, ScalabilityOverrides) == 0x00F8);
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x0170);
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x0180);
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x0190);
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x01A0);
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x01B0);
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x01B8);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x0084);
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0098);
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x00F0);
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x0148);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x01A0);
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x01F8);
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x0250);
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibilityTagBinding) == 0x02A8);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Mesh) == 0x0000);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Scale) == 0x0008);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffset) == 0x0014);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace) == 0x0020);
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x0000);
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x0014);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x0020);
static_assert(offsetof(UNiagaraMeshRendererProperties, Meshes) == 0x0078);
static_assert(offsetof(UNiagaraMeshRendererProperties, SourceMode) == 0x0088);
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 0x0089);
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0090);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x00A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 0x00A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x00B0);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 0x00BC);
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x00D0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x0128);
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0180);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x01D8);
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x0230);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x0288);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x02E0);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x0338);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x0390);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x03E8);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x0440);
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x0498);
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x04F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x0548);
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x05A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshIndexBinding) == 0x05F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParameterBindings) == 0x0650);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevPositionBinding) == 0x0660);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevScaleBinding) == 0x06B8);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding) == 0x0710);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding) == 0x0768);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevVelocityBinding) == 0x07C0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x0880);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x0888);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffsetSpace) == 0x0894);
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x0048);
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x0050);
static_assert(offsetof(UNiagaraBaselineController, EffectType) == 0x0030);
static_assert(offsetof(UNiagaraBaselineController, Owner) == 0x0038);
static_assert(offsetof(UNiagaraBaselineController, System) == 0x0040);
static_assert(offsetof(UNiagaraBaselineController_Basic, SpawnedComponents) == 0x0070);
static_assert(offsetof(ANiagaraPerfBaselineActor, Controller) == 0x0220);
static_assert(offsetof(ANiagaraPerfBaselineActor, Label) == 0x0228);
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x0028);
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x0028);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Max) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Max) == 0x0044);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Min) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Max) == 0x0050);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Max) == 0x0048);
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x0220);
static_assert(offsetof(ANiagaraPreviewGrid, ResetMode) == 0x0228);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x0230);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x0238);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x0240);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x0258);
static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0x0000);
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 0x0004);
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 0x0008);
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x0010);
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x0018);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, position) == 0x0000);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Normal) == 0x0008);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x0078);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x0080);
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 0x00A0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x00A4);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x00C8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 0x00EC);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Shape) == 0x00ED);
static_assert(offsetof(UNiagaraRibbonRendererProperties, CustomVertices) == 0x0100);
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 0x0114);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x0128);
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0180);
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x01D8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x0230);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x0288);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x02E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x0338);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x0390);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x03E8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x0440);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x0498);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x04F0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x0548);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x05A0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonUVDistance) == 0x05F8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x0650);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x06A8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x0700);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x0758);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParameterBindings) == 0x07B0);
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x0080);
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageType) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x0014);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptVersionID) == 0x0048);
static_assert(offsetof(FNiagaraCompilerTag, Variable) == 0x0000);
static_assert(offsetof(FNiagaraCompilerTag, StringValue) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x0010);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x0028);
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x0000);
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x0000);
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x0010);
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x0028);
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x0000);
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x0010);
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x0000);
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x0008);
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableData, CompileTags) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x0048);
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x0058);
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x0060);
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x0070);
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x0090);
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x00A0);
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x00B0);
static_assert(offsetof(FNiagaraVMExecutableData, DIParamInfo) == 0x00C0);
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 0x00D0);
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x00D8);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x0008);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x0018);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x0028);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x0030);
static_assert(offsetof(UNiagaraScript, Usage) == 0x0028);
static_assert(offsetof(UNiagaraScript, UsageId) == 0x002C);
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x0040);
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x00B8);
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x0150);
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x0160);
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x01C8);
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x02B8);
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x02C8);
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x0038);
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x0050);
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 0x0060);
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 0x00B0);
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 0x00B1);
static_assert(offsetof(UNiagaraSettings, DefaultRendererMotionVectorSetting) == 0x00B4);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences) == 0x00B8);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat) == 0x00B9);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat) == 0x00BA);
static_assert(offsetof(UNiagaraSettings, DefaultEffectTypePtr) == 0x00C0);
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x0028);
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x0030);
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x0000);
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 0x0040);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0050);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x0078);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 0x0080);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x0088);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 0x00A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 0x00A9);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x00AC);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 0x00B4);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x00B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x00E0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x0138);
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0190);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x01E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x0240);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x0298);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x02F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x0348);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x03A0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x03F8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x0450);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x04A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x0500);
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x0558);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotOffsetBinding) == 0x05B0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x0608);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x0660);
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x06B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x0710);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameterBindings) == 0x0768);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPositionBinding) == 0x0778);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevVelocityBinding) == 0x07D0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding) == 0x0828);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding) == 0x0880);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding) == 0x08D8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding) == 0x0930);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding) == 0x0988);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding) == 0x09E0);
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x001C);
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x0028);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x0000);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x0000);
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x0078);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x00B8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x00F8);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x0138);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x0158);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x0178);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x0198);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x01A8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x01C8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x01E8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x0208);
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x0038);
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x0048);
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x0058);
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x0068);
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x0078);
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x0088);
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x0090);
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x00A8);
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x02C0);
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0388);
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x03B8);
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x00E0);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x0180);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x0220);
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 0x0010);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 0x0014);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior) == 0x0018);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior) == 0x001C);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode) == 0x0024);
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x0040);
static_assert(offsetof(FNiagaraCompileDependency, LinkerErrorMessage) == 0x0000);
static_assert(offsetof(FNiagaraCompileDependency, NodeGuid) == 0x0010);
static_assert(offsetof(FNiagaraCompileDependency, PinGuid) == 0x0020);
static_assert(offsetof(FNiagaraCompileDependency, StackGuids) == 0x0030);
static_assert(offsetof(FNiagaraCompileDependency, DependentVariable) == 0x0040);
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x0020);
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x0038);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x0000);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x0010);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x0020);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x0030);
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x0000);
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x0008);
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x0018);
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x0028);
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 0x0040);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, SystemName) == 0x0000);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, EmitterName) == 0x0008);
static_assert(offsetof(FBasicParticleData, position) == 0x0000);
static_assert(offsetof(FBasicParticleData, Velocity) == 0x0010);
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x0004);
static_assert(offsetof(FNiagaraSimpleClientInfo, Systems) == 0x0000);
static_assert(offsetof(FNiagaraSimpleClientInfo, Actors) == 0x0010);
static_assert(offsetof(FNiagaraSimpleClientInfo, Components) == 0x0020);
static_assert(offsetof(FNiagaraSimpleClientInfo, Emitters) == 0x0030);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, EmitterName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, SimTarget) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, ExecState) == 0x0014);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ComponentName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, Emitters) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ActualExecutionState) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState) == 0x0024);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ScalabilityState) == 0x0028);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, PoolMethod) == 0x0034);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, AverageTime) == 0x0038);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, MaxTime) == 0x0040);
static_assert(offsetof(FNiagaraOutlinerSystemData, SystemInstances) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerFrameTime) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerFrameTime) == 0x0018);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerInstanceTime) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerInstanceTime) == 0x0028);
static_assert(offsetof(FNiagaraOutlinerWorldData, Systems) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerWorldData, AveragePerFrameTime) == 0x0054);
static_assert(offsetof(FNiagaraOutlinerWorldData, MaxPerFrameTime) == 0x005C);
static_assert(offsetof(FNiagaraOutlinerData, WorldData) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerOutlinerUpdate, OutlinerData) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, Command) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x000C);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x0018);
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x0008);
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x0000);
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x0000);
static_assert(offsetof(FNiagaraModuleDependency, Type) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 0x0009);
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x0010);
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x0000);
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x0008);
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x0000);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x0030);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x0050);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x0070);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x0090);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x00B0);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x00D0);
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x00F0);
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x0000);
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x0008);
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x0000);
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x0018);
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x0040);
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x0058);
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 0x0070);
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x00C0);
static_assert(offsetof(FNiagaraVariableMetaData, VariableGuid) == 0x00C8);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x0000);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x0010);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x0020);
static_assert(offsetof(FNiagaraAssetVersion, VersionGuid) == 0x0008);
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x0000);
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x0010);
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x0030);
static_assert(offsetof(FNiagaraVariant, Object) == 0x0000);
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x0008);
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x0010);
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 0x0020);
