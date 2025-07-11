
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};

#pragma pack(pop)


static_assert(sizeof(FClothConstraintSetupNv) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UClothConfigNv) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x0120); // 288 bytes (0x0000E0 - 0x000120)
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x0028);
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x002C);
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x003C);
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x004C);
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x005C);
static_assert(offsetof(UClothConfigNv, Damping) == 0x0078);
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0094);
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x00A0);
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x00AC);
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x00B8);
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x00C4);
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x00DC);
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x0100);
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x0104);
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x0114);
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x0124);
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x0134);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x00E0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x00F0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x0100);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x0110);
