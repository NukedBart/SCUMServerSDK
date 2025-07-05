
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UFieldSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FFieldObjectCommands) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFieldSystemComponent) == 0x0530); // 1328 bytes (0x000458 - 0x000530)
static_assert(sizeof(UFieldSystemMetaData) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldSystemMetaDataFilter) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldNodeBase) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeInt) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeFloat) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeVector) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UUniformInteger) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(URadialIntMask) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UUniformScalar) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UWaveScalar) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(URadialFalloff) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UPlaneFalloff) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UBoxFalloff) == 0x0100); // 256 bytes (0x0000B0 - 0x000100)
static_assert(sizeof(UNoiseField) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UUniformVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URadialVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URandomVector) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UOperatorField) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UToIntegerField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UToFloatField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UCullingField) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x0220);
static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0x0000);
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 0x0010);
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 0x0020);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x0458);
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 0x0478);
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 0x04A8);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00B0);
static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 0x00B0);
static_assert(offsetof(URadialIntMask, position) == 0x00B4);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00C8);
static_assert(offsetof(UWaveScalar, position) == 0x00B4);
static_assert(offsetof(UWaveScalar, Function) == 0x00C8);
static_assert(offsetof(UWaveScalar, Falloff) == 0x00C9);
static_assert(offsetof(URadialFalloff, position) == 0x00C4);
static_assert(offsetof(URadialFalloff, Falloff) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, position) == 0x00C4);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x00DC);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00C0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x00F0);
static_assert(offsetof(UNoiseField, Transform) == 0x00C0);
static_assert(offsetof(UUniformVector, Direction) == 0x00B4);
static_assert(offsetof(URadialVector, position) == 0x00B4);
static_assert(offsetof(UOperatorField, RightField) == 0x00B8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00C0);
static_assert(offsetof(UOperatorField, Operation) == 0x00C8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00B0);
static_assert(offsetof(UToFloatField, IntField) == 0x00B0);
static_assert(offsetof(UCullingField, Culling) == 0x00B0);
static_assert(offsetof(UCullingField, Field) == 0x00B8);
static_assert(offsetof(UCullingField, Operation) == 0x00C0);
