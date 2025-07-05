
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/DcxVehicle.EDcxVehicleClutchAccuracyMode
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleClutchAccuracyMode : uint8_t
{
	EDcxVehicleClutchAccuracyMode__Estimate                                          = 0,
	EDcxVehicleClutchAccuracyMode__BestPossible                                      = 1
};

/// Enum /Script/DcxVehicle.EDcxVehicleDifferential4W
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleDifferential4W : uint8_t
{
	EDcxVehicleDifferential4W__LS_4WD                                                = 0,
	EDcxVehicleDifferential4W__LS_FrontWD                                            = 1,
	EDcxVehicleDifferential4W__LS_RearWD                                             = 2,
	EDcxVehicleDifferential4W__Open_4WD                                              = 3,
	EDcxVehicleDifferential4W__Open_FrontWD                                          = 4,
	EDcxVehicleDifferential4W__Open_RearWD                                           = 5
};

/// Enum /Script/DcxVehicle.EDcxVehicleWheelOrder4W
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleWheelOrder4W : uint8_t
{
	EDcxVehicleWheelOrder4W__FrontLeft                                               = 0,
	EDcxVehicleWheelOrder4W__FrontRight                                              = 1,
	EDcxVehicleWheelOrder4W__RearLeft                                                = 2,
	EDcxVehicleWheelOrder4W__RearRight                                               = 3
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControl4W
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleDriveControl4W : uint8_t
{
	EDcxVehicleDriveControl4W__Throttle                                              = 0,
	EDcxVehicleDriveControl4W__Brake                                                 = 1,
	EDcxVehicleDriveControl4W__Handbrake                                             = 2,
	EDcxVehicleDriveControl4W__Steer                                                 = 3,
	EDcxVehicleDriveControl4W__Clutch                                                = 4,
	EDcxVehicleDriveControl4W__NumControls                                           = 5
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlNW
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleDriveControlNW : uint8_t
{
	EDcxVehicleDriveControlNW__Throttle                                              = 0,
	EDcxVehicleDriveControlNW__Brake                                                 = 1,
	EDcxVehicleDriveControlNW__Handbrake                                             = 2,
	EDcxVehicleDriveControlNW__Steer                                                 = 3,
	EDcxVehicleDriveControlNW__Clutch                                                = 4,
	EDcxVehicleDriveControlNW__NumControls                                           = 5
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlModelTank
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleDriveControlModelTank : uint8_t
{
	EDcxVehicleDriveControlModelTank__Standard                                       = 0,
	EDcxVehicleDriveControlModelTank__Special                                        = 1
};

/// Enum /Script/DcxVehicle.EDcxVehicleDriveControlTank
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleDriveControlTank : uint8_t
{
	EDcxVehicleDriveControlTank__Throttle                                            = 0,
	EDcxVehicleDriveControlTank__BrakeLeft                                           = 1,
	EDcxVehicleDriveControlTank__BrakeRight                                          = 2,
	EDcxVehicleDriveControlTank__ThrustLeft                                          = 3,
	EDcxVehicleDriveControlTank__ThrustRight                                         = 4,
	EDcxVehicleDriveControlTank__Clutch                                              = 5,
	EDcxVehicleDriveControlTank__NumControls                                         = 6
};

/// Enum /Script/DcxVehicle.EDcxVehicleGearbox
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleGearbox : uint8_t
{
	EDcxVehicleGearbox__Automatic                                                    = 0,
	EDcxVehicleGearbox__SemiAutomatic                                                = 1,
	EDcxVehicleGearbox__Manual                                                       = 2
};

/// Enum /Script/DcxVehicle.EDcxVehicleNoDriveControl
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleNoDriveControl : uint8_t
{
	EDcxVehicleNoDriveControl__Throttle                                              = 0,
	EDcxVehicleNoDriveControl__Brake                                                 = 1,
	EDcxVehicleNoDriveControl__Steer                                                 = 2,
	EDcxVehicleNoDriveControl__NumControls                                           = 3
};

/// Enum /Script/DcxVehicle.EDcxVehicleWheelSweep
/// Size: 0x01 (1 bytes)
enum class EDcxVehicleWheelSweep : uint8_t
{
	EDcxVehicleWheelSweep__Both                                                      = 0,
	EDcxVehicleWheelSweep__Simple                                                    = 1,
	EDcxVehicleWheelSweep__Complex                                                   = 2
};

#pragma pack(pop)


static_assert(sizeof(ADcxVehicle) == 0x0290); // 656 bytes (0x000280 - 0x000290)
static_assert(sizeof(ADcxVehicle4W) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UDcxVehicleAnimInstance) == 0x0A48); // 2632 bytes (0x0002B8 - 0x000A48)
static_assert(sizeof(FDcxVehicleWheelData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDcxVehicleSuspensionData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDcxVehicleWheelConfiguration) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FDcxVehicleTireLoadFilterData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDcxVehicleDriveInputRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDcxAnalogControlArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDcxGear) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDcxVehicleDriveState) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UDcxVehicleWheelsComponent) == 0x0278); // 632 bytes (0x000138 - 0x000278)
static_assert(sizeof(FDcxVehicleEngineData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FDcxVehicleGearData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FDcxVehicleGearboxData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FDcxVehicleClutchData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDcxVehicleDriveComponent) == 0x0430); // 1072 bytes (0x000278 - 0x000430)
static_assert(sizeof(FDcxVehicleDifferentialData4W) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UDcxVehicleDriveComponent4W) == 0x0450); // 1104 bytes (0x000430 - 0x000450)
static_assert(sizeof(UDcxVehicleDriveComponentNW) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UDcxVehicleDriveComponentTank) == 0x0438); // 1080 bytes (0x000430 - 0x000438)
static_assert(sizeof(UDcxVehicleWheelsRawInput) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UDcxVehicleDriveRawInput) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UDcxVehicleDriveRawInput4W) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UDcxVehicleDriveRawInputNW) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UDcxVehicleDriveRawInputTank) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(ADcxVehicleNoDrive) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UDcxVehicleNoDriveComponent) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(UDcxVehicleNoDriveRawInput) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(ADcxVehicleNW) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(ADcxVehicleTank) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(FDcxDrivableSurfaceToTireFrictionPair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDcxVehicleTire) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(FDcxAnimNodeWheelSimulator) == 0x00E0); // 224 bytes (0x0000C8 - 0x0000E0)
static_assert(sizeof(FDcxMath) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDcxVehicleAnimInstanceProxy) == 0x0780); // 1920 bytes (0x000770 - 0x000780)
static_assert(sizeof(FDcxVehicleWheelState) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(offsetof(ADcxVehicle, Mesh) == 0x0280);
static_assert(offsetof(ADcxVehicle, VehicleWheels) == 0x0288);
static_assert(offsetof(UDcxVehicleAnimInstance, VehicleWheels) == 0x0A40);
static_assert(offsetof(FDcxVehicleWheelConfiguration, BoneName) == 0x0000);
static_assert(offsetof(FDcxVehicleWheelConfiguration, Offset) == 0x0008);
static_assert(offsetof(FDcxVehicleWheelConfiguration, CollisionMesh) == 0x0018);
static_assert(offsetof(FDcxVehicleWheelConfiguration, WheelData) == 0x0024);
static_assert(offsetof(FDcxVehicleWheelConfiguration, SuspensionData) == 0x0044);
static_assert(offsetof(FDcxVehicleWheelConfiguration, Tire) == 0x0068);
static_assert(offsetof(FDcxVehicleWheelConfiguration, SweepType) == 0x0071);
static_assert(offsetof(FDcxAnalogControlArray, Items) == 0x0000);
static_assert(offsetof(FDcxVehicleDriveState, AnalogControls) == 0x0000);
static_assert(offsetof(FDcxVehicleDriveState, CurrentGear) == 0x0010);
static_assert(offsetof(FDcxVehicleDriveState, TargetGear) == 0x0014);
static_assert(offsetof(UDcxVehicleWheelsComponent, InertiaTensorScale) == 0x0174);
static_assert(offsetof(UDcxVehicleWheelsComponent, WheelConfigurations) == 0x0180);
static_assert(offsetof(UDcxVehicleWheelsComponent, SuspensionTraceCollisionChannel) == 0x0190);
static_assert(offsetof(UDcxVehicleWheelsComponent, TireLoadFilter) == 0x0194);
static_assert(offsetof(UDcxVehicleWheelsComponent, AvoidanceGroup) == 0x01B0);
static_assert(offsetof(UDcxVehicleWheelsComponent, GroupsToAvoid) == 0x01B4);
static_assert(offsetof(UDcxVehicleWheelsComponent, GroupsToIgnore) == 0x01B8);
static_assert(offsetof(UDcxVehicleWheelsComponent, ThrottleRate) == 0x01D0);
static_assert(offsetof(UDcxVehicleWheelsComponent, BrakeRate) == 0x01D8);
static_assert(offsetof(UDcxVehicleWheelsComponent, HandbrakeRate) == 0x01E0);
static_assert(offsetof(UDcxVehicleWheelsComponent, SteerRate) == 0x01E8);
static_assert(offsetof(UDcxVehicleWheelsComponent, RawInput) == 0x0210);
static_assert(offsetof(UDcxVehicleWheelsComponent, SmoothAnalogControls) == 0x0218);
static_assert(offsetof(UDcxVehicleWheelsComponent, ReplicatedState) == 0x0228);
static_assert(offsetof(UDcxVehicleWheelsComponent, AvoidanceVelocity) == 0x0244);
static_assert(offsetof(UDcxVehicleWheelsComponent, AvoidanceLockVelocity) == 0x0250);
static_assert(offsetof(FDcxVehicleEngineData, TorqueCurve) == 0x0000);
static_assert(offsetof(FDcxVehicleGearboxData, Type) == 0x0000);
static_assert(offsetof(FDcxVehicleGearboxData, ForwardGears) == 0x0010);
static_assert(offsetof(FDcxVehicleClutchData, AccuracyMode) == 0x0008);
static_assert(offsetof(UDcxVehicleDriveComponent, EngineData) == 0x0278);
static_assert(offsetof(UDcxVehicleDriveComponent, GearboxData) == 0x0318);
static_assert(offsetof(UDcxVehicleDriveComponent, GearboxDataReduced) == 0x0350);
static_assert(offsetof(UDcxVehicleDriveComponent, ClutchData) == 0x0380);
static_assert(offsetof(UDcxVehicleDriveComponent, SteerCurve) == 0x03A0);
static_assert(offsetof(FDcxVehicleDifferentialData4W, DifferentialType) == 0x0000);
static_assert(offsetof(UDcxVehicleDriveComponent4W, DifferentialData) == 0x0430);
static_assert(offsetof(UDcxVehicleDriveComponentTank, DriveModel) == 0x0430);
static_assert(offsetof(UDcxVehicleWheelsRawInput, RawAnalogControls) == 0x0030);
static_assert(offsetof(FDcxDrivableSurfaceToTireFrictionPair, SurfaceMaterial) == 0x0000);
static_assert(offsetof(UDcxVehicleTire, FrictionVsSlipGraph) == 0x0048);
static_assert(offsetof(UDcxVehicleTire, DrivableSurfaceToTireFrictionPairs) == 0x00D0);
static_assert(offsetof(FDcxVehicleWheelState, SuspensionLineStart) == 0x0000);
static_assert(offsetof(FDcxVehicleWheelState, SuspensionLineDirection) == 0x000C);
static_assert(offsetof(FDcxVehicleWheelState, TireContactActor) == 0x0020);
static_assert(offsetof(FDcxVehicleWheelState, TireSurfaceMaterial) == 0x0028);
static_assert(offsetof(FDcxVehicleWheelState, TireContactPoint) == 0x0030);
static_assert(offsetof(FDcxVehicleWheelState, TireContactNormal) == 0x003C);
static_assert(offsetof(FDcxVehicleWheelState, TireLongitudinalDirection) == 0x0054);
static_assert(offsetof(FDcxVehicleWheelState, TireLateralDirection) == 0x0060);
