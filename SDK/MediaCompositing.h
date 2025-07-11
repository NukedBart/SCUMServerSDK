
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

#pragma pack(pop)


static_assert(sizeof(UMovieSceneMediaPlayerPropertySection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneMediaPlayerPropertyTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneMediaSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneMediaTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FMovieSceneMediaPlayerPropertySectionTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FMovieSceneMediaSectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneMediaSectionTemplate) == 0x0050); // 80 bytes (0x000020 - 0x000050)
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, StartFrameOffset) == 0x00F4);
static_assert(offsetof(UMovieSceneMediaSection, MediaTexture) == 0x00F8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSoundComponent) == 0x0100);
static_assert(offsetof(UMovieSceneMediaSection, ExternalMediaPlayer) == 0x0110);
static_assert(offsetof(UMovieSceneMediaTrack, MediaSections) == 0x0098);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource) == 0x0038);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame) == 0x0040);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSoundComponent) == 0x0000);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSource) == 0x0008);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaTexture) == 0x0010);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaPlayer) == 0x0018);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionStartFrame) == 0x0020);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionEndFrame) == 0x0024);
static_assert(offsetof(FMovieSceneMediaSectionParams, StartFrameOffset) == 0x002C);
static_assert(offsetof(FMovieSceneMediaSectionTemplate, Params) == 0x0020);
