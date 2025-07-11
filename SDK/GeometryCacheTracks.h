
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GeometryCache
/// dependency: MovieScene

#pragma pack(push, 0x1)

#pragma pack(pop)


static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x0068); // 104 bytes (0x000020 - 0x000068)
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x0000);
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x0028);
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x0098);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x0044);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x0020);
