
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x0108); // 264 bytes (0x000060 - 0x000108)
static_assert(sizeof(UCameraAnimationSequence) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0670); // 1648 bytes (0x000028 - 0x000670)
static_assert(sizeof(USequenceCameraShakePattern) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x0428); // 1064 bytes (0x000028 - 0x000428)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(UTemplateSequencePlayer) == 0x04F0); // 1264 bytes (0x0004E8 - 0x0004F0)
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(UTemplateSequenceSection) == 0x0180); // 384 bytes (0x000168 - 0x000180)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UTemplateSequenceTrack) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0090);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00B8);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, PostProcessSettings) == 0x0040);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, Filmback) == 0x05A4);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, LensSettings) == 0x05B0);
static_assert(offsetof(USequenceCameraShakeCameraStandIn, FocusSettings) == 0x05C8);
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x0028);
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x0048);
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x0050);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x02D0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x02D8);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x02E0);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0230);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0248);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0250);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0268);
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x0000);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x0010);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x0024);
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x0028);
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x0170);
