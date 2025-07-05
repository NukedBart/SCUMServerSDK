
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework

#pragma pack(push, 0x1)

/// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
/// Size: 0x04 (4 bytes)
enum class EBaseCreateFromSelectedTargetType : uint32_t
{
	EBaseCreateFromSelectedTargetType__NewAsset                                      = 0,
	EBaseCreateFromSelectedTargetType__FirstInputAsset                               = 1,
	EBaseCreateFromSelectedTargetType__LastInputAsset                                = 2
};

/// Enum /Script/ModelingComponents.EDynamicMeshTangentCalcType
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents                                          = 0,
	EDynamicMeshTangentCalcType__AutoCalculated                                      = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated                                = 2
};

/// Enum /Script/ModelingComponents.EMultiTransformerMode
/// Size: 0x01 (1 bytes)
enum class EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo                                              = 1,
	EMultiTransformerMode__QuickAxisTranslation                                      = 2
};

/// Enum /Script/ModelingComponents.EHandleSourcesMethod
/// Size: 0x01 (1 bytes)
enum class EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources                                              = 0,
	EHandleSourcesMethod__HideSources                                                = 1,
	EHandleSourcesMethod__KeepSources                                                = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointFalloffType : uint32_t
{
	ESpaceCurveControlPointFalloffType__Linear                                       = 0,
	ESpaceCurveControlPointFalloffType__Smooth                                       = 1
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointOriginMode : uint32_t
{
	ESpaceCurveControlPointOriginMode__Shared                                        = 0,
	ESpaceCurveControlPointOriginMode__First                                         = 1,
	ESpaceCurveControlPointOriginMode__Last                                          = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointTransformMode : uint32_t
{
	ESpaceCurveControlPointTransformMode__Shared                                     = 0,
	ESpaceCurveControlPointTransformMode__PerVertex                                  = 1
};

/// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
/// Size: 0x04 (4 bytes)
enum class EUVLayoutPreviewSide : uint32_t
{
	EUVLayoutPreviewSide__Left                                                       = 0,
	EUVLayoutPreviewSide__Right                                                      = 1
};

#pragma pack(pop)


static_assert(sizeof(UBaseCreateFromSelectedToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOnAcceptHandleSourcesProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBaseCreateFromSelectedHandleSourceProperties) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UTransformInputsToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBaseCreateFromSelectedTool) == 0x00F0); // 240 bytes (0x000090 - 0x0000F0)
static_assert(sizeof(UBaseDynamicMeshComponent) == 0x04C8); // 1224 bytes (0x000480 - 0x0004C8)
static_assert(sizeof(UBaseMeshProcessingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBaseMeshProcessingTool) == 0x0400); // 1024 bytes (0x000088 - 0x000400)
static_assert(sizeof(UBaseVoxelTool) == 0x0108); // 264 bytes (0x0000F0 - 0x000108)
static_assert(sizeof(UCollectSurfacePathMechanic) == 0x0550); // 1360 bytes (0x000030 - 0x000550)
static_assert(sizeof(UConstructionPlaneMechanic) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UCurveControlPointsMechanic) == 0x0650); // 1616 bytes (0x000030 - 0x000650)
static_assert(sizeof(UDynamicMeshReplacementChangeTarget) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(ULineSetComponent) == 0x04E0); // 1248 bytes (0x000480 - 0x0004E0)
static_assert(sizeof(UMeshCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshOpPreviewWithBackgroundCompute) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UMeshReplacementCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshVertexCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMultiTransformer) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UOctreeDynamicMeshComponent) == 0x05E0); // 1504 bytes (0x0004C8 - 0x0005E0)
static_assert(sizeof(UPlaneDistanceFromHitMechanic) == 0x04B0); // 1200 bytes (0x000030 - 0x0004B0)
static_assert(sizeof(UPointSetComponent) == 0x04E0); // 1248 bytes (0x000480 - 0x0004E0)
static_assert(sizeof(UPreviewMesh) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UPolyEditPreviewMesh) == 0x04D0); // 1232 bytes (0x0000E0 - 0x0004D0)
static_assert(sizeof(UPolygonSelectionMechanicProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPolygonSelectionMechanic) == 0x0830); // 2096 bytes (0x000030 - 0x000830)
static_assert(sizeof(APreviewGeometryActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UPreviewGeometry) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(APreviewMeshActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(USimpleDynamicMeshComponent) == 0x0620); // 1568 bytes (0x0004C8 - 0x000620)
static_assert(sizeof(USpaceCurveDeformationMechanicPropertySet) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(USpaceCurveDeformationMechanic) == 0x02B0); // 688 bytes (0x000030 - 0x0002B0)
static_assert(sizeof(USpatialCurveDistanceMechanic) == 0x03F0); // 1008 bytes (0x000030 - 0x0003F0)
static_assert(sizeof(UTriangleSetComponent) == 0x0560); // 1376 bytes (0x000480 - 0x000560)
static_assert(sizeof(UUVLayoutPreviewProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UUVLayoutPreview) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UVoxelProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UWeightMapSetProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(FRenderableTriangleVertex) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRenderableTriangle) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(offsetof(UOnAcceptHandleSourcesProperties, OnToolAccept) == 0x0060);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, WriteOutputTo) == 0x0068);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputName) == 0x0070);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputAsset) == 0x0080);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProperties) == 0x0098);
static_assert(offsetof(UBaseCreateFromSelectedTool, HandleSourcesProperties) == 0x00A0);
static_assert(offsetof(UBaseCreateFromSelectedTool, Preview) == 0x00A8);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProxies) == 0x00B0);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformGizmos) == 0x00C0);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformInitialScales) == 0x00D0);
static_assert(offsetof(UBaseMeshProcessingTool, Preview) == 0x00B0);
static_assert(offsetof(UBaseVoxelTool, VoxProperties) == 0x00F0);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformGizmo) == 0x00C8);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformProxy) == 0x00D0);
static_assert(offsetof(UConstructionPlaneMechanic, ClickToSetPlaneBehavior) == 0x00E8);
static_assert(offsetof(UCurveControlPointsMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(UCurveControlPointsMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewGeometryActor) == 0x04E8);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlPoints) == 0x04F0);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlSegments) == 0x04F8);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewPoint) == 0x0500);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewSegment) == 0x0508);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformProxy) == 0x0588);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformGizmo) == 0x0590);
static_assert(offsetof(ULineSetComponent, LineMaterial) == 0x0480);
static_assert(offsetof(ULineSetComponent, Bounds) == 0x0488);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewMesh) == 0x0058);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, StandardMaterials) == 0x0060);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, OverrideMaterial) == 0x0070);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, WorkingMaterial) == 0x0078);
static_assert(offsetof(UMultiTransformer, GizmoManager) == 0x0070);
static_assert(offsetof(UMultiTransformer, TransformGizmo) == 0x00E0);
static_assert(offsetof(UMultiTransformer, TransformProxy) == 0x00E8);
static_assert(offsetof(UPointSetComponent, PointMaterial) == 0x0480);
static_assert(offsetof(UPointSetComponent, Bounds) == 0x0488);
static_assert(offsetof(UPreviewMesh, DynamicMeshComponent) == 0x0050);
static_assert(offsetof(UPolygonSelectionMechanic, Properties) == 0x0050);
static_assert(offsetof(UPolygonSelectionMechanic, PreviewGeometryActor) == 0x0520);
static_assert(offsetof(UPolygonSelectionMechanic, DrawnTriangleSetComponent) == 0x0528);
static_assert(offsetof(UPolygonSelectionMechanic, HighlightedFaceMaterial) == 0x0580);
static_assert(offsetof(UPreviewGeometry, ParentActor) == 0x0028);
static_assert(offsetof(UPreviewGeometry, LineSets) == 0x0030);
static_assert(offsetof(USimpleDynamicMeshComponent, TangentsType) == 0x04C8);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformMode) == 0x0060);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformOrigin) == 0x0064);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, SoftFalloff) == 0x006C);
static_assert(offsetof(USpaceCurveDeformationMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(USpaceCurveDeformationMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(USpaceCurveDeformationMechanic, TransformProperties) == 0x0068);
static_assert(offsetof(USpaceCurveDeformationMechanic, PreviewGeometryActor) == 0x0168);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderPoints) == 0x0170);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderSegments) == 0x0178);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformProxy) == 0x01B8);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformGizmo) == 0x01C0);
static_assert(offsetof(UTriangleSetComponent, Bounds) == 0x0480);
static_assert(offsetof(UUVLayoutPreviewProperties, WhichSide) == 0x0068);
static_assert(offsetof(UUVLayoutPreviewProperties, Shift) == 0x0070);
static_assert(offsetof(UUVLayoutPreview, Settings) == 0x0028);
static_assert(offsetof(UUVLayoutPreview, PreviewMesh) == 0x0030);
static_assert(offsetof(UUVLayoutPreview, TriangleComponent) == 0x0038);
static_assert(offsetof(UUVLayoutPreview, BackingRectangleMaterial) == 0x0048);
static_assert(offsetof(UWeightMapSetProperties, WeightMap) == 0x0060);
static_assert(offsetof(UWeightMapSetProperties, WeightMapsList) == 0x0068);
static_assert(offsetof(FRenderableTriangleVertex, position) == 0x0000);
static_assert(offsetof(FRenderableTriangleVertex, UV) == 0x000C);
static_assert(offsetof(FRenderableTriangleVertex, Normal) == 0x0014);
static_assert(offsetof(FRenderableTriangleVertex, Color) == 0x0020);
static_assert(offsetof(FRenderableTriangle, Material) == 0x0000);
static_assert(offsetof(FRenderableTriangle, Vertex0) == 0x0008);
static_assert(offsetof(FRenderableTriangle, Vertex1) == 0x002C);
static_assert(offsetof(FRenderableTriangle, Vertex2) == 0x0050);
