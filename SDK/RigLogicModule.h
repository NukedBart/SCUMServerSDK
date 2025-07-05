
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ControlRig.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "RigVM.h"

#pragma pack(push, 0x1)

class UDNAAsset;

/// Enum /Script/RigLogicModule.EDNADataLayer
/// Size: 0x01 (1 bytes)
enum class EDNADataLayer : uint8_t
{
	EDNADataLayer__Descriptor                                                        = 0,
	EDNADataLayer__Definition                                                        = 1,
	EDNADataLayer__Behavior                                                          = 2,
	EDNADataLayer__Geometry                                                          = 3,
	EDNADataLayer__GeometryWithoutBlendShapes                                        = 4,
	EDNADataLayer__AllWithoutBlendShapes                                             = 5,
	EDNADataLayer__All                                                               = 6
};

/// Enum /Script/RigLogicModule.EDirection
/// Size: 0x01 (1 bytes)
enum class EDirection : uint8_t
{
	EDirection__Left                                                                 = 0,
	EDirection__Right                                                                = 1,
	EDirection__Up                                                                   = 2,
	EDirection__Down                                                                 = 3,
	EDirection__Front                                                                = 4,
	EDirection__Back                                                                 = 5
};

/// Enum /Script/RigLogicModule.ERotationUnit
/// Size: 0x01 (1 bytes)
enum class ERotationUnit : uint8_t
{
	ERotationUnit__Degrees                                                           = 0,
	ERotationUnit__Radians                                                           = 1
};

/// Enum /Script/RigLogicModule.ETranslationUnit
/// Size: 0x01 (1 bytes)
enum class ETranslationUnit : uint8_t
{
	ETranslationUnit__CM                                                             = 0,
	ETranslationUnit__M                                                              = 1
};

/// Enum /Script/RigLogicModule.EGender
/// Size: 0x01 (1 bytes)
enum class EGender : uint8_t
{
	EGender__Male                                                                    = 0,
	EGender__Female                                                                  = 1,
	EGender__Other                                                                   = 2
};

/// Enum /Script/RigLogicModule.EArchetype
/// Size: 0x01 (1 bytes)
enum class EArchetype : uint8_t
{
	EArchetype__Asian                                                                = 0,
	EArchetype__Black                                                                = 1,
	EArchetype__Caucasian                                                            = 2,
	EArchetype__Hispanic                                                             = 3,
	EArchetype__Alien                                                                = 4,
	EArchetype__Other                                                                = 5
};

/// Enum /Script/RigLogicModule.ERigLogicCalculationType
/// Size: 0x01 (1 bytes)
enum class ERigLogicCalculationType : uint8_t
{
	ERigLogicCalculationType__Scalar                                                 = 0,
	ERigLogicCalculationType__SSE                                                    = 1,
	ERigLogicCalculationType__AVX                                                    = 2
};

#pragma pack(pop)


static_assert(sizeof(UDNAAsset) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FVertexLayout) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTextureCoordinate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshBlendShapeChannelMapping) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCoordinateSystem) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FRigUnit_RigLogic_IntArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_RigLogic_Data) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigUnit_RigLogic) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(offsetof(UDNAAsset, DNAFileName) == 0x0028);
static_assert(offsetof(FCoordinateSystem, XAxis) == 0x0000);
static_assert(offsetof(FCoordinateSystem, YAxis) == 0x0001);
static_assert(offsetof(FCoordinateSystem, ZAxis) == 0x0002);
static_assert(offsetof(FRigUnit_RigLogic_IntArray, Values) == 0x0000);
static_assert(offsetof(FRigUnit_RigLogic_Data, SkelMeshComponent) == 0x0000);
static_assert(offsetof(FRigUnit_RigLogic_Data, InputCurveIndices) == 0x0018);
static_assert(offsetof(FRigUnit_RigLogic_Data, HierarchyBoneIndices) == 0x0028);
static_assert(offsetof(FRigUnit_RigLogic_Data, MorphTargetCurveIndices) == 0x0038);
static_assert(offsetof(FRigUnit_RigLogic_Data, BlendShapeIndices) == 0x0048);
static_assert(offsetof(FRigUnit_RigLogic_Data, CurveContainerIndicesForAnimMaps) == 0x0058);
static_assert(offsetof(FRigUnit_RigLogic_Data, RigLogicIndicesForAnimMaps) == 0x0068);
static_assert(offsetof(FRigUnit_RigLogic, Data) == 0x0068);
