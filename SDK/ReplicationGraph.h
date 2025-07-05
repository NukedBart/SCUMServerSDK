
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

#pragma pack(pop)


static_assert(sizeof(UReplicationGraph) == 0x04A8); // 1192 bytes (0x000028 - 0x0004A8)
static_assert(sizeof(FConnectionAlwaysRelevantNodePair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBasicReplicationGraph) == 0x04E0); // 1248 bytes (0x0004A8 - 0x0004E0)
static_assert(sizeof(UReplicationGraphNode) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x0108); // 264 bytes (0x000050 - 0x000108)
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(UReplicationGraphNode_ConnectionDormancyNode) == 0x0150); // 336 bytes (0x0000D0 - 0x000150)
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x00E0); // 224 bytes (0x0000D0 - 0x0000E0)
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x0120); // 288 bytes (0x0000D0 - 0x000120)
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x0230); // 560 bytes (0x000050 - 0x000230)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(FAlwaysRelevantActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FTearOffActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(FLastLocationGatherInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNetReplicationGraphConnection) == 0x0238); // 568 bytes (0x000028 - 0x000238)
static_assert(sizeof(AReplicationGraphDebugActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FClassReplicationInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x0028);
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x0030);
static_assert(offsetof(UReplicationGraph, Connections) == 0x0038);
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x0048);
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x0098);
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x00A8);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0x0000);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 0x0008);
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x04A8);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x04B0);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x04B8);
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x04C8);
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x0028);
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x0110);
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x0118);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x0050);
static_assert(offsetof(FAlwaysRelevantActorInfo, Connection) == 0x0000);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewer) == 0x0008);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewTarget) == 0x0010);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 0x00E0);
static_assert(offsetof(FTearOffActorInfo, Actor) == 0x0008);
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x0050);
static_assert(offsetof(FLastLocationGatherInfo, Connection) == 0x0000);
static_assert(offsetof(FLastLocationGatherInfo, LastLocation) == 0x0008);
static_assert(offsetof(FLastLocationGatherInfo, LastOutOfRangeLocationCheck) == 0x0014);
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x0028);
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x0170);
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 0x0188);
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x01A0);
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x01B0);
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x0220);
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x0228);
