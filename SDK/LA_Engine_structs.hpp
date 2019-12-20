#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_Basic.hpp"
#include "LA_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_RBSTATE_LINVELSCALE                                10.0
#define CONST_MAX_INSTANCES_PER_CLASS                            5
#define CONST_ACTORMAXSTEPHEIGHT                                 35.0
#define CONST_GAMEEVENT_MATCH_STARTED                            0
#define CONST_PRIM_RENDER_MASK_PARTICLE_SCENECAPTURE             63
#define CONST_SAVE_SYSTEM_VERSION_KEY                            "CloudSaveSystemVersion"
#define CONST_MINFLOORZ                                          0.7
#define CONST_GAMEEVENT_RENDERTHREAD_POLL                        40
#define CONST_RBSTATE_ANGVELSCALE                                1000.0
#define CONST_GAMEEVENT_MATCH_ENDED                              1
#define CONST_COVERLINK_EdgeExposureDot                          0.85f
#define CONST_RB_None                                            0x00
#define CONST_GAMEEVENT_GAME_OPTION_URL                          7
#define CONST_TRACEFLAG_Blocking                                 8
#define CONST_RB_NeedsUpdate                                     0x01
#define CONST_GAMEEVENT_NETWORKUSAGEOUT_POLL                     38
#define CONST_RB_Sleeping                                        0x02
#define CONST_PRIM_RENDER_MASK_SCENECAPTURE_END                  32
#define CONST_FSM_DEFAULTRECYCLETIME                             0.2
#define CONST_PRIM_RENDER_MASK_SCENECAPTURE_START                1
#define CONST_PRIM_RENDER_MASK_NONE                              0
#define CONST_REP_RBLOCATION_ERROR_TOLERANCE_SQ                  16.0f
#define CONST_TRACEFLAG_ForceController                          16
#define CONST_TRACEFLAG_SkipMovers                               4
#define CONST_DEFAULT_SIZE_X                                     1024
#define CONST_GAMEEVENT_PLAYER_LOCATION_POLL                     105
#define CONST_DATA_STORE_ID_KEY                                  "DataStoreID"
#define CONST_TRACEFLAG_PhysicsVolumes                           2
#define CONST_GAMEEVENT_WEAPON_FIRED                             152
#define CONST_TRACEFLAG_Bullet                                   1
#define CONST_GAMEEVENT_GAMETHREAD_POLL                          41
#define CONST_GAMEEVENT_MEMORYUSAGE_POLL                         35
#define CONST_SDPG_NumBits                                       3
#define CONST_GAMEEVENT_WEAPON_DAMAGE                            150
#define CONST_GAMEEVENT_FRAMETIME_POLL                           43
#define CONST_LATENT_MOVETOWARD                                  503
#define CONST_MAX_ACTIVE_CAMERA_ANIMS                            8
#define CONST_GET_SAVE_SLOT_ERROR                                -2
#define CONST_MAXNEARZEROVELOCITYSQUARED                         9.0
#define CONST_MAXCLIENTUPDATEINTERVAL                            0.25
#define CONST_BLOCKEDPATHCOST                                    10000000
#define CONST_GAMEEVENT_WEAPON_DAMAGE_MELEE                      151
#define CONST_CLIENTADJUSTUPDATECOST                             180.0
#define CONST_GAMEEVENT_GAME_CLASS                               6
#define CONST_GAMEEVENT_PLAYER_ROUND_STALEMATE                   110
#define CONST_MAXVEHICLEPOSITIONERRORSQUARED                     900.0
#define CONST_MaxHistory                                         16
#define CONST_MAXPOSITIONERRORSQUARED                            3.0
#define CONST_GAMEEVENT_TEAM_ROUND_WON                           5
#define CONST_INFINITE_PATH_COST                                 10000000
#define CONST_GET_SAVE_SLOT_INVALID                              -1
#define CONST_GAMEEVENT_PLAYER_ROUND_WON                         109
#define CONST_COMMON_DATA_SAVE_SLOT_INDEX                        -1
#define CONST_SAVE_DATA_BLOB_NAME_KEY                            "DataBlobName"
#define CONST_HeaderFlags_NoEventStrings                         1
#define CONST_NUM_SAVE_SLOTS_KEY                                 "NumSaveSlots"
#define CONST_GAMEEVENT_PLAYER_MATCH_WON                         103
#define CONST_COVERLINK_DangerDist                               1536.f
#define CONST_DEFAULT_SIZE_Y                                     768
#define CONST_MAX_SUPPORTED_GAMEPADS                             4
#define CONST_COVERLINK_EdgeCheckDot                             0.25f
#define CONST_GAMEEVENT_FRAMERATE_POLL                           36
#define CONST_COVERLINK_ExposureDot                              0.4f
#define CONST_NULLCHARACTER                                      127
#define CONST_MAX_BOOKMARK_NUMBER                                10
#define CONST_GAMEEVENT_GPUFRAMETIME_POLL                        42
#define CONST_GAMEEVENT_NETWORKUSAGEIN_POLL                      37
#define CONST_GAMEEVENT_ROUND_STARTED                            2
#define CONST_GAMEEVENT_ROUND_ENDED                              3
#define CONST_GAMEEVENT_GAME_MAPNAME                             8
#define CONST_GAMEEVENT_PING_POLL                                39
#define CONST_GAMEEVENT_TEAM_CREATED                             50
#define CONST_GAMEEVENT_PLAYER_KILL_STREAK                       107
#define CONST_GAMEEVENT_TEAM_GAME_SCORE                          51
#define CONST_GAMEEVENT_TEAM_MATCH_WON                           4
#define CONST_GAMEEVENT_TEAM_ROUND_STALEMATE                     52
#define CONST_GAMEEVENT_PLAYER_LOGIN                             100
#define CONST_GAMEEVENT_PLAYER_LOGOUT                            101
#define CONST_GAMEEVENT_PLAYER_SPAWN                             102
#define CONST_GAMEEVENT_PLAYER_KILL                              104
#define CONST_GAMEEVENT_PLAYER_TEAMCHANGE                        106
#define CONST_GAMEEVENT_MAX_EVENTID                              0x0000FFFF
#define CONST_GAMEEVENT_PLAYER_DEATH                             108
#define CONST_GAMEEVENT_PLAYER_KILL_NORMAL                       200
#define CONST_GAMEEVENT_GENERIC_PARAM_LIST_START                 300
#define CONST_GAMEEVENT_GENERIC_PARAM_LIST_END                   400
#define CONST_GAMEEVENT_GAME_SPECIFIC                            1000
#define CONST_SCENEFILTER_None                                   0x00000000
#define CONST_SCENEFILTER_IncludeTransient                       0x00000001
#define CONST_SCENEFILTER_InputProcessorOnly                     0x00000002
#define CONST_SCENEFILTER_PausersOnly                            0x00000004
#define CONST_SCENEFILTER_PrimitiveUsersOnly                     0x00000008
#define CONST_SCENEFILTER_UsesPostProcessing                     0x00000010
#define CONST_SCENEFILTER_ReceivesFocus                          0x00000020
#define CONST_SCENEFILTER_Any                                    0xFFFFFFFF
#define CONST_MAX_AIGROUP_NUMBER                                 10
#define CONST_LINECHECK_GRANULARITY                              768.f
#define CONST_NUM_PATHFINDING_PARAMS                             9
#define CONST_NumBreadCrumbs                                     10
#define CONST_PROCBUILDING_VERSION                               1
#define CONST_ROOF_MINZ                                          0.7

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.Actor.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};


// Enum Engine.Actor.EMoveDir
enum class EMoveDir : uint8_t
{
	MD_Stationary                  = 0,
	MD_Forward                     = 1,
	MD_Backward                    = 2,
	MD_Left                        = 3,
	MD_Right                       = 4,
	MD_Up                          = 5,
	MD_Down                        = 6,
	MD_MAX                         = 7
};


// Enum Engine.Actor.EPhysics
enum class EPhysics : uint8_t
{
	PHYS_None                      = 0,
	PHYS_Walking                   = 1,
	PHYS_Falling                   = 2,
	PHYS_Swimming                  = 3,
	PHYS_Flying                    = 4,
	PHYS_Rotating                  = 5,
	PHYS_Projectile                = 6,
	PHYS_Interpolating             = 7,
	PHYS_Spider                    = 8,
	PHYS_Ladder                    = 9,
	PHYS_RigidBody                 = 10,
	PHYS_SoftBody                  = 11,
	PHYS_NavMeshWalking            = 12,
	PHYS_Unused                    = 13,
	PHYS_Custom                    = 14,
	PHYS_Skill                     = 15,
	PHYS_BeHit                     = 16,
	PHYS_FLIGHT                    = 17,
	PHYS_MAX                       = 18
};


// Enum Engine.Actor.ECollisionType
enum class ECollisionType : uint8_t
{
	COLLIDE_CustomDefault          = 0,
	COLLIDE_NoCollision            = 1,
	COLLIDE_BlockAll               = 2,
	COLLIDE_BlockWeapons           = 3,
	COLLIDE_TouchAll               = 4,
	COLLIDE_TouchWeapons           = 5,
	COLLIDE_BlockAllButWeapons     = 6,
	COLLIDE_TouchAllButWeapons     = 7,
	COLLIDE_BlockWeaponsKickable   = 8,
	COLLIDE_MAX                    = 9
};


// Enum Engine.Actor.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.Actor.EDoubleClickDir
enum class EDoubleClickDir : uint8_t
{
	DCLICK_None                    = 0,
	DCLICK_Left                    = 1,
	DCLICK_Right                   = 2,
	DCLICK_Forward                 = 3,
	DCLICK_Back                    = 4,
	DCLICK_Active                  = 5,
	DCLICK_Done                    = 6,
	DCLICK_MAX                     = 7
};


// Enum Engine.Actor.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.Actor.TerrainCollisionType
enum class ETerrainCollisionType : uint8_t
{
	TERRAIN_COLLISION_TYPE_CUSTOM  = 0,
	TERRAIN_COLLISION_TYPE_NO_COLLISION = 1,
	TERRAIN_COLLISION_TYPE_GROUND  = 2,
	TERRAIN_COLLISION_TYPE_GROUND_OBSTACLE = 3,
	TERRAIN_COLLISION_TYPE_WALL    = 4,
	TERRAIN_COLLISION_TYPE_NO_BLOCK_ACTOR_REACT_PHYSICAL_MATERIAL = 5,
	TERRAIN_COLLISION_TYPE_NO_BLOCK_ACTOR_REACT_DECAL = 6,
	TERRAIN_COLLISION_TYPE_MAX     = 7
};


// Enum Engine.Settings.EOnlineDataAdvertisementType
enum class EOnlineDataAdvertisementType : uint8_t
{
	ODAT_DontAdvertise             = 0,
	ODAT_OnlineService             = 1,
	ODAT_QoS                       = 2,
	ODAT_OnlineServiceAndQoS       = 3,
	ODAT_MAX                       = 4
};


// Enum Engine.Settings.ESettingsDataType
enum class ESettingsDataType : uint8_t
{
	SDT_Empty                      = 0,
	SDT_Int32                      = 1,
	SDT_Int64                      = 2,
	SDT_Double                     = 3,
	SDT_String                     = 4,
	SDT_Float                      = 5,
	SDT_Blob                       = 6,
	SDT_DateTime                   = 7,
	SDT_MAX                        = 8
};


// Enum Engine.Settings.EPropertyValueMappingType
enum class EPropertyValueMappingType : uint8_t
{
	PVMT_RawValue                  = 0,
	PVMT_PredefinedValues          = 1,
	PVMT_Ranged                    = 2,
	PVMT_IdMapped                  = 3,
	PVMT_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.EOnlineNewsType
enum class EOnlineNewsType : uint8_t
{
	ONT_Unknown                    = 0,
	ONT_GameNews                   = 1,
	ONT_ContentAnnouncements       = 2,
	ONT_Misc                       = 3,
	ONT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.ENATType
enum class ENATType : uint8_t
{
	NAT_Unknown                    = 0,
	NAT_Open                       = 1,
	NAT_Moderate                   = 2,
	NAT_Strict                     = 3,
	NAT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EOnlineServerConnectionStatus
enum class EOnlineServerConnectionStatus : uint8_t
{
	OSCS_NotConnected              = 0,
	OSCS_Connected                 = 1,
	OSCS_ConnectionDropped         = 2,
	OSCS_NoNetworkConnection       = 3,
	OSCS_ServiceUnavailable        = 4,
	OSCS_UpdateRequired            = 5,
	OSCS_ServersTooBusy            = 6,
	OSCS_DuplicateLoginDetected    = 7,
	OSCS_InvalidUser               = 8,
	OSCS_MAX                       = 9
};


// Enum Engine.OnlineSubsystem.EOnlineEnumerationReadState
enum class EOnlineEnumerationReadState : uint8_t
{
	OERS_NotStarted                = 0,
	OERS_InProgress                = 1,
	OERS_Done                      = 2,
	OERS_Failed                    = 3,
	OERS_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.EOnlineGameState
enum class EOnlineGameState : uint8_t
{
	OGS_NoSession                  = 0,
	OGS_Pending                    = 1,
	OGS_Starting                   = 2,
	OGS_InProgress                 = 3,
	OGS_Ending                     = 4,
	OGS_Ended                      = 5,
	OGS_MAX                        = 6
};


// Enum Engine.OnlineSubsystem.EOnlineAccountCreateStatus
enum class EOnlineAccountCreateStatus : uint8_t
{
	OACS_CreateSuccessful          = 0,
	OACS_UnknownError              = 1,
	OACS_InvalidUserName           = 2,
	OACS_InvalidPassword           = 3,
	OACS_InvalidUniqueUserName     = 4,
	OACS_UniqueUserNameInUse       = 5,
	OACS_ServiceUnavailable        = 6,
	OACS_MAX                       = 7
};


// Enum Engine.OnlineSubsystem.ELanBeaconState
enum class ELanBeaconState : uint8_t
{
	LANB_NotUsingLanBeacon         = 0,
	LANB_Hosting                   = 1,
	LANB_Searching                 = 2,
	LANB_MAX                       = 3
};


// Enum Engine.OnlineSubsystem.EOnlineContentType
enum class EOnlineContentType : uint8_t
{
	OCT_Downloaded                 = 0,
	OCT_SaveGame                   = 1,
	OCT_MAX                        = 2
};


// Enum Engine.OnlineSubsystem.EOnlineFriendState
enum class EOnlineFriendState : uint8_t
{
	OFS_Offline                    = 0,
	OFS_Online                     = 1,
	OFS_Away                       = 2,
	OFS_Busy                       = 3,
	OFS_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.ENetworkNotificationPosition
enum class ENetworkNotificationPosition : uint8_t
{
	NNP_TopLeft                    = 0,
	NNP_TopCenter                  = 1,
	NNP_TopRight                   = 2,
	NNP_CenterLeft                 = 3,
	NNP_Center                     = 4,
	NNP_CenterRight                = 5,
	NNP_BottomLeft                 = 6,
	NNP_BottomCenter               = 7,
	NNP_BottomRight                = 8,
	NNP_MAX                        = 9
};


// Enum Engine.OnlineSubsystem.EFeaturePrivilegeLevel
enum class EFeaturePrivilegeLevel : uint8_t
{
	FPL_Disabled                   = 0,
	FPL_EnabledFriendsOnly         = 1,
	FPL_Enabled                    = 2,
	FPL_MAX                        = 3
};


// Enum Engine.OnlineSubsystem.ELoginStatus
enum class ELoginStatus : uint8_t
{
	LS_NotLoggedIn                 = 0,
	LS_UsingLocalProfile           = 1,
	LS_LoggedIn                    = 2,
	LS_MAX                         = 3
};


// Enum Engine.OnlineAuthInterface.EAuthStatus
enum class EAuthStatus : uint8_t
{
	AUS_NotStarted                 = 0,
	AUS_Pending                    = 1,
	AUS_Authenticated              = 2,
	AUS_Failed                     = 3,
	AUS_MAX                        = 4
};


// Enum Engine.PrimitiveComponent.GJKResult
enum class EGJKResult : uint8_t
{
	GJK_Intersect                  = 0,
	GJK_NoIntersection             = 1,
	GJK_Fail                       = 2,
	GJK_MAX                        = 3
};


// Enum Engine.Scene.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.Scene.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_UnrealEdBackground        = 0,
	SDPG_World                     = 1,
	SDPG_Foreground                = 2,
	SDPG_UnrealEdForeground        = 3,
	SDPG_PostProcess               = 4,
	SDPG_MAX                       = 5
};


// Enum Engine.PrimitiveComponent.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.PrimitiveComponent.EPrimitiveGameType
enum class EPrimitiveGameType : uint8_t
{
	EPrimitiveGame_None            = 0,
	EPrimitiveGame_Others          = 1,
	EPrimitiveGame_Boss            = 2,
	EPrimitiveGame_Player          = 3,
	EPrimitiveGame_LocalPlayer     = 4,
	EPrimitiveGame_Capture         = 5,
	EPrimitiveGame_MAX             = 6
};


// Enum Engine.PrimitiveComponent.ERBCollisionChannel
enum class ERBCollisionChannel : uint8_t
{
	RBCC_Default                   = 0,
	RBCC_Nothing                   = 1,
	RBCC_Pawn                      = 2,
	RBCC_Vehicle                   = 3,
	RBCC_Water                     = 4,
	RBCC_GameplayPhysics           = 5,
	RBCC_EffectPhysics             = 6,
	RBCC_Untitled1                 = 7,
	RBCC_Untitled2                 = 8,
	RBCC_Untitled3                 = 9,
	RBCC_Untitled4                 = 10,
	RBCC_Cloth                     = 11,
	RBCC_FluidDrain                = 12,
	RBCC_SoftBody                  = 13,
	RBCC_FracturedMeshPart         = 14,
	RBCC_BlockingVolume            = 15,
	RBCC_DeadPawn                  = 16,
	RBCC_Clothing                  = 17,
	RBCC_ClothingCollision         = 18,
	RBCC_MAX                       = 19
};


// Enum Engine.PrimitiveComponent.EPrimitveLookType
enum class EPrimitveLookType : uint8_t
{
	EPrimitiveLook_None            = 0,
	EPrimitiveLook_Human           = 1,
	EPrimitiveLook_NPC             = 2,
	EPrimitiveLook_Item            = 3,
	EPrimitiveLook_Part            = 4,
	EPrimitiveLook_Town            = 5,
	EPrimitiveLook_Others          = 6,
	EPrimitiveLook_MAX             = 7
};


// Enum Engine.Camera.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.DOFEffect.EFocusType
enum class EFocusType : uint8_t
{
	FOCUS_Distance                 = 0,
	FOCUS_Position                 = 1,
	FOCUS_MAX                      = 2
};


// Enum Engine.Camera.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CAPS_CameraLocal               = 0,
	CAPS_World                     = 1,
	CAPS_UserDefined               = 2,
	CAPS_MAX                       = 3
};


// Enum Engine.SequenceOp.ESequenceCompletionType
enum class ESequenceCompletionType : uint8_t
{
	SequenceCompletion_None        = 0,
	SequenceCompletion_Skip        = 1,
	SequenceCompletion_ForceCompletion = 2,
	SequenceCompletion_MAX         = 3
};


// Enum Engine.SequenceOp.SequenceOpState
enum class ESequenceOpState : uint8_t
{
	SEQ_Initialized                = 0,
	SEQ_Activated                  = 1,
	SEQ_Deactivated                = 2,
	SEQ_MAX                        = 3
};


// Enum Engine.SeqAct_ControlMovieTexture.EMovieControlType
enum class EMovieControlType : uint8_t
{
	MCT_Play                       = 0,
	MCT_Stop                       = 1,
	MCT_Pause                      = 2,
	MCT_MAX                        = 3
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchComparisonType
enum class EOnlineGameSearchComparisonType : uint8_t
{
	OGSCT_Equals                   = 0,
	OGSCT_NotEquals                = 1,
	OGSCT_GreaterThan              = 2,
	OGSCT_GreaterThanEquals        = 3,
	OGSCT_LessThan                 = 4,
	OGSCT_LessThanEquals           = 5,
	OGSCT_MAX                      = 6
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchEntryType
enum class EOnlineGameSearchEntryType : uint8_t
{
	OGSET_Property                 = 0,
	OGSET_LocalizedSetting         = 1,
	OGSET_ObjectProperty           = 2,
	OGSET_MAX                      = 3
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchSortType
enum class EOnlineGameSearchSortType : uint8_t
{
	OGSSO_Ascending                = 0,
	OGSSO_Descending               = 1,
	OGSSO_MAX                      = 2
};


// Enum Engine.PlayerController.EProgressMessageType
enum class EProgressMessageType : uint8_t
{
	PMT_Clear                      = 0,
	PMT_Information                = 1,
	PMT_AdminMessage               = 2,
	PMT_DownloadProgress           = 3,
	PMT_ConnectionFailure          = 4,
	PMT_PeerConnectionFailure      = 5,
	PMT_PeerHostMigrationFailure   = 6,
	PMT_SocketFailure              = 7,
	PMT_MAX                        = 8
};


// Enum Engine.SkeletalMeshComponent.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3
};


// Enum Engine.SkeletalMeshComponent.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.SkeletalMeshComponent.EFaceFXRegOp
enum class EFaceFXRegOp : uint8_t
{
	FXRO_Add                       = 0,
	FXRO_Multiply                  = 1,
	FXRO_Replace                   = 2,
	FXRO_MAX                       = 3
};


// Enum Engine.SkeletalMeshComponent.EFaceFXBlendMode
enum class EFaceFXBlendMode : uint8_t
{
	FXBM_Overwrite                 = 0,
	FXBM_Additive                  = 1,
	FXBM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.EInstanceWeightUsage
enum class EInstanceWeightUsage : uint8_t
{
	IWU_PartialSwap                = 0,
	IWU_FullSwap                   = 1,
	IWU_MAX                        = 2
};


// Enum Engine.SkeletalMeshComponent.EAnimRotationOnly
enum class EAnimRotationOnly : uint8_t
{
	EARO_AnimSet                   = 0,
	EARO_ForceEnabled              = 1,
	EARO_ForceDisabled             = 2,
	EARO_MAX                       = 3
};


// Enum Engine.SkeletalMeshComponent.ERootMotionRotationMode
enum class ERootMotionRotationMode : uint8_t
{
	RMRM_Ignore                    = 0,
	RMRM_RotateActor               = 1,
	RMRM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	RMM_Translate                  = 0,
	RMM_Velocity                   = 1,
	RMM_Ignore                     = 2,
	RMM_Accel                      = 3,
	RMM_Relative                   = 4,
	RMM_MAX                        = 5
};


// Enum Engine.SkeletalMeshComponent.EMaxDistanceScaleMode
enum class EMaxDistanceScaleMode : uint8_t
{
	MDSM_Multiply                  = 0,
	MDSM_Substract                 = 1,
	MDSM_MAX                       = 2
};


// Enum Engine.PlayerController.EInputMatchAction
enum class EInputMatchAction : uint8_t
{
	IMA_GreaterThan                = 0,
	IMA_LessThan                   = 1,
	IMA_MAX                        = 2
};


// Enum Engine.PlayerController.EInputTypes
enum class EInputTypes : uint8_t
{
	IT_XAxis                       = 0,
	IT_YAxis                       = 1,
	IT_MAX                         = 2
};


// Enum Engine.Pylon.ENavMeshEdgeType
enum class ENavMeshEdgeType : uint8_t
{
	NAVEDGE_Normal                 = 0,
	NAVEDGE_Mantle                 = 1,
	NAVEDGE_Coverslip              = 2,
	NAVEDGE_SwatTurn               = 3,
	NAVEDGE_DropDown               = 4,
	NAVEDGE_PathObject             = 5,
	NAVEDGE_BackRefDummy           = 6,
	NAVEDGE_Jump                   = 7,
	NAVEDGE_MAX                    = 8
};


// Enum Engine.AkEvent.EAkEventPrepareStep
enum class EAkEventPrepareStep : uint8_t
{
	EAKPS_None                     = 0,
	EAKPS_Prepared                 = 1,
	EAKPS_WaitingBankCallback      = 2,
	EAKPS_WaitingEventCallback     = 3,
	EAKPS_Failed                   = 4,
	EAKPS_MAX                      = 5
};


// Enum Engine.AmbientOcclusionEffect.EAmbientOcclusionQuality
enum class EAmbientOcclusionQuality : uint8_t
{
	AO_High                        = 0,
	AO_Medium                      = 1,
	AO_Low                         = 2,
	AO_MAX                         = 3
};


// Enum Engine.Brush.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_MAX                        = 5
};


// Enum Engine.ReverbVolume.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EngineTypes.EPathFindingError
enum class EPathFindingError : uint8_t
{
	PATHERROR_STARTPOLYNOTFOUND    = 0,
	PATHERROR_GOALPOLYNOTFOUND     = 1,
	PATHERROR_ANCHORPYLONNOTFOUND  = 2,
	PATHERROR_NOPATHFOUND          = 3,
	PATHERROR_COMPUTEVALIDFINALDEST_FAIL = 4,
	PATHERROR_GETNEXTMOVELOCATION_FAIL = 5,
	PATHERROR_MOVETIMEOUT          = 6,
	PATHERROR_MAX                  = 7
};


// Enum Engine.AudioDevice.EDebugState
enum class EDebugState : uint8_t
{
	DEBUGSTATE_None                = 0,
	DEBUGSTATE_IsolateDryAudio     = 1,
	DEBUGSTATE_IsolateReverb       = 2,
	DEBUGSTATE_TestLPF             = 3,
	DEBUGSTATE_TestStereoBleed     = 4,
	DEBUGSTATE_TestLFEBleed        = 5,
	DEBUGSTATE_DisableLPF          = 6,
	DEBUGSTATE_DisableRadio        = 7,
	DEBUGSTATE_MAX                 = 8
};


// Enum Engine.AudioDevice.ESoundClassName
enum class ESoundClassName : uint8_t
{
	ESoundClassName_MAX            = 0
};


// Enum Engine.AudioDevice.ETTSSpeaker
enum class ETTSSpeaker : uint8_t
{
	TTSSPEAKER_Paul                = 0,
	TTSSPEAKER_Harry               = 1,
	TTSSPEAKER_Frank               = 2,
	TTSSPEAKER_Dennis              = 3,
	TTSSPEAKER_Kit                 = 4,
	TTSSPEAKER_Betty               = 5,
	TTSSPEAKER_Ursula              = 6,
	TTSSPEAKER_Rita                = 7,
	TTSSPEAKER_Wendy               = 8,
	TTSSPEAKER_MAX                 = 9
};


// Enum Engine.SoundNodeAttenuation.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.SoundNodeAttenuation.SoundDistanceModel
enum class ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_MAX                = 5
};


// Enum Engine.PlatformInterfaceBase.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.AnimSequence.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.AnimSequence.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.AnimNode.ESliderType
enum class ESliderType : uint8_t
{
	ST_1D                          = 0,
	ST_2D                          = 1,
	ST_MAX                         = 2
};


// Enum Engine.AnimNode_MultiBlendPerBone.EWeightCheck
enum class EWeightCheck : uint8_t
{
	EWC_AnimNodeSlotNotPlaying     = 0,
	EWC_MAX                        = 1
};


// Enum Engine.AnimNode_MultiBlendPerBone.EBlendType
enum class EBlendType : uint8_t
{
	EBT_ParentBoneSpace            = 0,
	EBT_MeshSpace                  = 1,
	EBT_MAX                        = 2
};


// Enum Engine.AnimNodeAimOffset.EAnimAimDir
enum class EAnimAimDir : uint8_t
{
	ANIMAIM_LEFTUP                 = 0,
	ANIMAIM_CENTERUP               = 1,
	ANIMAIM_RIGHTUP                = 2,
	ANIMAIM_LEFTCENTER             = 3,
	ANIMAIM_CENTERCENTER           = 4,
	ANIMAIM_RIGHTCENTER            = 5,
	ANIMAIM_LEFTDOWN               = 6,
	ANIMAIM_CENTERDOWN             = 7,
	ANIMAIM_RIGHTDOWN              = 8,
	ANIMAIM_MAX                    = 9
};


// Enum Engine.AnimNodeAimOffset.EAimID
enum class EAimID : uint8_t
{
	EAID_LeftUp                    = 0,
	EAID_LeftDown                  = 1,
	EAID_RightUp                   = 2,
	EAID_RightDown                 = 3,
	EAID_ZeroUp                    = 4,
	EAID_ZeroDown                  = 5,
	EAID_ZeroLeft                  = 6,
	EAID_ZeroRight                 = 7,
	EAID_CellLU                    = 8,
	EAID_CellCU                    = 9,
	EAID_CellRU                    = 10,
	EAID_CellLC                    = 11,
	EAID_CellCC                    = 12,
	EAID_CellRC                    = 13,
	EAID_CellLD                    = 14,
	EAID_CellCD                    = 15,
	EAID_CellRD                    = 16,
	EAID_MAX                       = 17
};


// Enum Engine.AnimNodeBlendByBase.EBaseBlendType
enum class EBaseBlendType : uint8_t
{
	BBT_ByActorTag                 = 0,
	BBT_ByActorClass               = 1,
	BBT_MAX                        = 2
};


// Enum Engine.AnimNodeSequence.ERootRotationOption
enum class ERootRotationOption : uint8_t
{
	RRO_Default                    = 0,
	RRO_Discard                    = 1,
	RRO_Extract                    = 2,
	RRO_MAX                        = 3
};


// Enum Engine.AnimNodeSequence.ERootBoneAxis
enum class ERootBoneAxis : uint8_t
{
	RBA_Default                    = 0,
	RBA_Discard                    = 1,
	RBA_Translate                  = 2,
	RBA_MAX                        = 3
};


// Enum Engine.EngineTypes.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_ModulateAndAdd           = 5,
	BLEND_SoftMasked               = 6,
	BLEND_AlphaComposite           = 7,
	BLEND_DitheredTranslucent      = 8,
	BLEND_MAX                      = 9
};


// Enum Engine.EngineTypes.EMaterialLightingModel
enum class EMaterialLightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_SHPRT                      = 3,
	MLM_Custom                     = 4,
	MLM_Anisotropic                = 5,
	MLM_MAX                        = 6
};


// Enum Engine.EngineTypes.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EngineTypes.EMobileValueSource
enum class EMobileValueSource : uint8_t
{
	MVS_Constant                   = 0,
	MVS_VertexColorRed             = 1,
	MVS_VertexColorGreen           = 2,
	MVS_VertexColorBlue            = 3,
	MVS_VertexColorAlpha           = 4,
	MVS_BaseTextureRed             = 5,
	MVS_BaseTextureGreen           = 6,
	MVS_BaseTextureBlue            = 7,
	MVS_BaseTextureAlpha           = 8,
	MVS_MaskTextureRed             = 9,
	MVS_MaskTextureGreen           = 10,
	MVS_MaskTextureBlue            = 11,
	MVS_MaskTextureAlpha           = 12,
	MVS_NormalTextureAlpha         = 13,
	MVS_EmissiveTextureRed         = 14,
	MVS_EmissiveTextureGreen       = 15,
	MVS_EmissiveTextureBlue        = 16,
	MVS_EmissiveTextureAlpha       = 17,
	MVS_MAX                        = 18
};


// Enum Engine.EngineTypes.EMobileTextureBlendFactorSource
enum class EMobileTextureBlendFactorSource : uint8_t
{
	MTBFS_VertexColor              = 0,
	MTBFS_MaskTexture              = 1,
	MTBFS_MAX                      = 2
};


// Enum Engine.EngineTypes.EMobileTexCoordsSource
enum class EMobileTexCoordsSource : uint8_t
{
	MTCS_TexCoords0                = 0,
	MTCS_TexCoords1                = 1,
	MTCS_TexCoords2                = 2,
	MTCS_TexCoords3                = 3,
	MTCS_MAX                       = 4
};


// Enum Engine.EngineTypes.EMobileAlphaValueSource
enum class EMobileAlphaValueSource : uint8_t
{
	MAVS_DiffuseTextureAlpha       = 0,
	MAVS_MaskTextureRed            = 1,
	MAVS_MaskTextureGreen          = 2,
	MAVS_MaskTextureBlue           = 3,
	MAVS_MAX                       = 4
};


// Enum Engine.EngineTypes.EMobileColorMultiplySource
enum class EMobileColorMultiplySource : uint8_t
{
	MCMS_None                      = 0,
	MCMS_BaseTextureRed            = 1,
	MCMS_BaseTextureGreen          = 2,
	MCMS_BaseTextureBlue           = 3,
	MCMS_BaseTextureAlpha          = 4,
	MCMS_MaskTextureRed            = 5,
	MCMS_MaskTextureGreen          = 6,
	MCMS_MaskTextureBlue           = 7,
	MCMS_MaskTextureAlpha          = 8,
	MCMS_MAX                       = 9
};


// Enum Engine.EngineTypes.EMobileEmissiveColorSource
enum class EMobileEmissiveColorSource : uint8_t
{
	MECS_EmissiveTexture           = 0,
	MECS_BaseTexture               = 1,
	MECS_Constant                  = 2,
	MECS_MAX                       = 3
};


// Enum Engine.EngineTypes.EMobileEnvironmentBlendMode
enum class EMobileEnvironmentBlendMode : uint8_t
{
	MEBM_Add                       = 0,
	MEBM_Lerp                      = 1,
	MEBM_MAX                       = 2
};


// Enum Engine.EngineTypes.EMobileSpecularMask
enum class EMobileSpecularMask : uint8_t
{
	MSM_Constant                   = 0,
	MSM_Luminance                  = 1,
	MSM_DiffuseRed                 = 2,
	MSM_DiffuseGreen               = 3,
	MSM_DiffuseBlue                = 4,
	MSM_DiffuseAlpha               = 5,
	MSM_MaskTextureRGB             = 6,
	MSM_MaskTextureRed             = 7,
	MSM_MaskTextureGreen           = 8,
	MSM_MaskTextureBlue            = 9,
	MSM_MaskTextureAlpha           = 10,
	MSM_MAX                        = 11
};


// Enum Engine.EngineTypes.EMobileAmbientOcclusionSource
enum class EMobileAmbientOcclusionSource : uint8_t
{
	MAOS_Disabled                  = 0,
	MAOS_VertexColorRed            = 1,
	MAOS_VertexColorGreen          = 2,
	MAOS_VertexColorBlue           = 3,
	MAOS_VertexColorAlpha          = 4,
	MAOS_MAX                       = 5
};


// Enum Engine.EngineTypes.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_NoGlobalIllumination   = 4,
	Quality_MAX                    = 5
};


// Enum Engine.Pawn.EPathSearchType
enum class EPathSearchType : uint8_t
{
	PST_Default                    = 0,
	PST_Breadth                    = 1,
	PST_NewBestPathTo              = 2,
	PST_Constraint                 = 3,
	PST_MAX                        = 4
};


// Enum Engine.DynamicLightEnvironmentComponent.EDynamicLightEnvironmentBoundsMethod
enum class EDynamicLightEnvironmentBoundsMethod : uint8_t
{
	DLEB_OwnerComponents           = 0,
	DLEB_ManualOverride            = 1,
	DLEB_ActiveComponents          = 2,
	DLEB_MAX                       = 3
};


// Enum Engine.ApexDestructibleAsset.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};


// Enum Engine.ApexDestructibleDamageParameters.EDamageParameterOverrideMode
enum class EDamageParameterOverrideMode : uint8_t
{
	DPOM_Absolute                  = 0,
	DPOM_Multiplier                = 1,
	DPOM_MAX                       = 2
};


// Enum Engine.CameraShake.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.Canvas.ECanvasBlendMode
enum class ECanvasBlendMode : uint8_t
{
	BLEND_CANVAS_Opaque            = 0,
	BLEND_CANVAS_Masked            = 1,
	BLEND_CANVAS_Translucent       = 2,
	BLEND_CANVAS_Additive          = 3,
	BLEND_CANVAS_Modulate          = 4,
	BLEND_CANVAS_ModulateAndAdd    = 5,
	BLEND_CANVAS_SoftMasked        = 6,
	BLEND_CANVAS_AlphaComposite    = 7,
	BLEND_CANVAS_DitheredTranslucent = 8,
	BLEND_CANVAS_AlphaOnly         = 9,
	BLEND_CANVAS_MAX               = 10
};


// Enum Engine.Texture.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_OneBitAlpha                 = 6,
	TC_NormalmapUncompressed       = 7,
	TC_NormalmapBC5                = 8,
	TC_OneBitMonochrome            = 9,
	TC_SimpleLightmapModification  = 10,
	TC_VectorDisplacementmap       = 11,
	TC_MAX                         = 12
};


// Enum Engine.Texture.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_A8R8G8B8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_FilteredShadowDepth         = 13,
	PF_R32F                        = 14,
	PF_G16R16                      = 15,
	PF_G16R16F                     = 16,
	PF_G16R16F_FILTER              = 17,
	PF_G32R32F                     = 18,
	PF_A2B10G10R10                 = 19,
	PF_A16B16G16R16                = 20,
	PF_D24                         = 21,
	PF_R16F                        = 22,
	PF_R16F_FILTER                 = 23,
	PF_BC5                         = 24,
	PF_V8U8                        = 25,
	PF_A1                          = 26,
	PF_FloatR11G11B10              = 27,
	PF_A4R4G4B4                    = 28,
	PF_R5G6B5                      = 29,
	PF_MAX                         = 30
};


// Enum Engine.Texture.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Linear                      = 1,
	TF_MAX                         = 2
};


// Enum Engine.Texture.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.Texture.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh             = 27,
	TEXTUREGROUP_WorldExtend       = 28,
	TEXTUREGROUP_WorldExtendNormalMap = 29,
	TEXTUREGROUP_WorldExtendSpecular = 30,
	TEXTUREGROUP_EffectsNormalMap  = 31,
	TEXTUREGROUP_MAX               = 32
};


// Enum Engine.Texture.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.Texture.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.CloudSaveSystem.SaveDataVersionSupport
enum class ESaveDataVersionSupport : uint8_t
{
	SaveDataVersionSupportLessThenEqual = 0,
	SaveDataVersionSupportEqual    = 1,
	SaveDataVersionSupportAny      = 2,
	SaveDataVersionSupport_MAX     = 3
};


// Enum Engine.CloudSaveSystem.SaveSlotOperationEnum
enum class ESaveSlotOperationEnum : uint8_t
{
	SSO_SET                        = 0,
	SSO_GET                        = 1,
	SSO_DELETE                     = 2,
	SSO_MAX                        = 3
};


// Enum Engine.CloudStorageBase.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.CodecMovie.CodecEventType
enum class ECodecEventType : uint8_t
{
	CodecEventType_None            = 0,
	CodecEventType_MovieEnd        = 1,
	CodecEventType_InitFail        = 2,
	CodecEventType_MAX             = 3
};


// Enum Engine.UIRoot.EInputPlatformType
enum class EInputPlatformType : uint8_t
{
	IPT_PC                         = 0,
	IPT                            = 1,
	IPT_PS3                        = 2,
	IPT_MAX                        = 3
};


// Enum Engine.Interaction.ETouchType
enum class ETouchType : uint8_t
{
	Touch_Began                    = 0,
	Touch_Moved                    = 1,
	Touch_Stationary               = 2,
	Touch_Ended                    = 3,
	Touch_Cancelled                = 4,
	Touch_MAX                      = 5
};


// Enum Engine.CoverGroup.ECoverGroupFillAction
enum class ECoverGroupFillAction : uint8_t
{
	CGFA_Overwrite                 = 0,
	CGFA_Add                       = 1,
	CGFA_Remove                    = 2,
	CGFA_Clear                     = 3,
	CGFA_Cylinder                  = 4,
	CGFA_MAX                       = 5
};


// Enum Engine.CoverLink.ECoverLocationDescription
enum class ECoverLocationDescription : uint8_t
{
	CoverDesc_None                 = 0,
	CoverDesc_InWindow             = 1,
	CoverDesc_InDoorway            = 2,
	CoverDesc_BehindCar            = 3,
	CoverDesc_BehindTruck          = 4,
	CoverDesc_OnTruck              = 5,
	CoverDesc_BehindBarrier        = 6,
	CoverDesc_BehindColumn         = 7,
	CoverDesc_BehindCrate          = 8,
	CoverDesc_BehindWall           = 9,
	CoverDesc_BehindStatue         = 10,
	CoverDesc_BehindSandbags       = 11,
	CoverDesc_MAX                  = 12
};


// Enum Engine.CoverLink.ECoverType
enum class ECoverType : uint8_t
{
	CT_None                        = 0,
	CT_Standing                    = 1,
	CT_MidLevel                    = 2,
	CT_MAX                         = 3
};


// Enum Engine.CoverLink.ECoverAction
enum class ECoverAction : uint8_t
{
	CA_Default                     = 0,
	CA_BlindLeft                   = 1,
	CA_BlindRight                  = 2,
	CA_LeanLeft                    = 3,
	CA_LeanRight                   = 4,
	CA_PopUp                       = 5,
	CA_BlindUp                     = 6,
	CA_PeekLeft                    = 7,
	CA_PeekRight                   = 8,
	CA_PeekUp                      = 9,
	CA_MAX                         = 10
};


// Enum Engine.CoverLink.ECoverDirection
enum class ECoverDirection : uint8_t
{
	CD_Default                     = 0,
	CD_Left                        = 1,
	CD_Right                       = 2,
	CD_Up                          = 3,
	CD_MAX                         = 4
};


// Enum Engine.CoverLink.EFireLinkID
enum class EFireLinkID : uint8_t
{
	FLI_FireLink                   = 0,
	FLI_RejectedFireLink           = 1,
	FLI_MAX                        = 2
};


// Enum Engine.StaticMeshComponent.ELightmapModificationFunction
enum class ELightmapModificationFunction : uint8_t
{
	MLMF_Modulate                  = 0,
	MLMF_ModulateAlpha             = 1,
	MLMF_MAX                       = 2
};


// Enum Engine.DecalComponent.EFilterMode
enum class EFilterMode : uint8_t
{
	FM_None                        = 0,
	FM_Ignore                      = 1,
	FM_Affect                      = 2,
	FM_MAX                         = 3
};


// Enum Engine.DecalComponent.EDecalTransform
enum class EDecalTransform : uint8_t
{
	DecalTransform_OwnerAbsolute   = 0,
	DecalTransform_OwnerRelative   = 1,
	DecalTransform_SpawnRelative   = 2,
	DecalTransform_MAX             = 3
};


// Enum Engine.MaterialInterface.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_FracturedMeshes       = 1,
	MATUSAGE_ParticleSprites       = 2,
	MATUSAGE_BeamTrails            = 3,
	MATUSAGE_ParticleSubUV         = 4,
	MATUSAGE_SpeedTree             = 5,
	MATUSAGE_StaticLighting        = 6,
	MATUSAGE_GammaCorrection       = 7,
	MATUSAGE_LensFlare             = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_FluidSurface          = 10,
	MATUSAGE_Decals                = 11,
	MATUSAGE_MaterialEffect        = 12,
	MATUSAGE_MorphTargets          = 13,
	MATUSAGE_FogVolumes            = 14,
	MATUSAGE_RadialBlur            = 15,
	MATUSAGE_InstancedMeshes       = 16,
	MATUSAGE_SplineMesh            = 17,
	MATUSAGE_ScreenDoorFade        = 18,
	MATUSAGE_APEXMesh              = 19,
	MATUSAGE_Terrain               = 20,
	MATUSAGE_Landscape             = 21,
	MATUSAGE_MobileLandscape       = 22,
	MATUSAGE_MAX                   = 23
};


// Enum Engine.LightComponent.EShadowFilterQuality
enum class EShadowFilterQuality : uint8_t
{
	SFQ_Low                        = 0,
	SFQ_Medium                     = 1,
	SFQ_High                       = 2,
	SFQ_MAX                        = 3
};


// Enum Engine.LightComponent.EShadowProjectionTechnique
enum class EShadowProjectionTechnique : uint8_t
{
	ShadowProjTech_Default         = 0,
	ShadowProjTech_PCF             = 1,
	ShadowProjTech_VSM             = 2,
	ShadowProjTech_BPCF_Low        = 3,
	ShadowProjTech_BPCF_Medium     = 4,
	ShadowProjTech_BPCF_High       = 5,
	ShadowProjTech_MAX             = 6
};


// Enum Engine.LightComponent.ELightShadowMode
enum class ELightShadowMode : uint8_t
{
	LightShadow_Normal             = 0,
	LightShadow_Modulate           = 1,
	LightShadow_ModulateBetter     = 2,
	LightShadow_MAX                = 3
};


// Enum Engine.LightComponent.ELightAffectsClassification
enum class ELightAffectsClassification : uint8_t
{
	LAC_USER_SELECTED              = 0,
	LAC_DYNAMIC_AFFECTING          = 1,
	LAC_STATIC_AFFECTING           = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX                        = 4
};


// Enum Engine.DistributionFloatParameterBase.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.DOFAndBloomEffect.EDOFQuality
enum class EDOFQuality : uint8_t
{
	DOFQuality_Low                 = 0,
	DOFQuality_Medium              = 1,
	DOFQuality_High                = 2,
	DOFQuality_MAX                 = 3
};


// Enum Engine.DOFAndBloomEffect.EDOFType
enum class EDOFType : uint8_t
{
	DOFType_SimpleDOF              = 0,
	DOFType_ReferenceDOF           = 1,
	DOFType_BokehDOF               = 2,
	DOFType_MAX                    = 3
};


// Enum Engine.DoorMarker.EDoorType
enum class EDoorType : uint8_t
{
	DOOR_Shoot                     = 0,
	DOOR_Touch                     = 1,
	DOOR_MAX                       = 2
};


// Enum Engine.ParticleSystemComponent.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_Component                 = 8,
	PSPT_ActorSocket               = 9,
	PSPT_MAX                       = 10
};


// Enum Engine.ParticleSystemComponent.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.ParticleSystemComponent.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_WorldAttractorCollision   = 4,
	EPET_Kismet                    = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleSystem.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_MAX                         = 6
};


// Enum Engine.FacebookIntegration.EFacebookIntegrationDelegate
enum class EFacebookIntegrationDelegate : uint8_t
{
	FID_AuthorizationComplete      = 0,
	FID_FacebookRequestComplete    = 1,
	FID_DialogComplete             = 2,
	FID_FriendsListComplete        = 3,
	FID_MAX                        = 4
};


// Enum Engine.FileWriter.FWFileType
enum class EFWFileType : uint8_t
{
	FWFT_Log                       = 0,
	FWFT_Stats                     = 1,
	FWFT_HTML                      = 2,
	FWFT_User                      = 3,
	FWFT_Debug                     = 4,
	FWFT_MAX                       = 5
};


// Enum Engine.FluidInfluenceComponent.EInfluenceType
enum class EInfluenceType : uint8_t
{
	Fluid_Flow                     = 0,
	Fluid_Raindrops                = 1,
	Fluid_Wave                     = 2,
	Fluid_Sphere                   = 3,
	Fluid_MAX                      = 4
};


// Enum Engine.FontImportOptions.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.ForceFeedbackWaveform.EWaveformFunction
enum class EWaveformFunction : uint8_t
{
	WF_Constant                    = 0,
	WF_LinearIncreasing            = 1,
	WF_LinearDecreasing            = 2,
	WF_Sin0to90                    = 3,
	WF_Sin90to180                  = 4,
	WF_Sin0to180                   = 5,
	WF_Noise                       = 6,
	WF_MAX                         = 7
};


// Enum Engine.WorldInfo.EHostMigrationProgress
enum class EHostMigrationProgress : uint8_t
{
	HostMigration_None             = 0,
	HostMigration_FindingNewHost   = 1,
	HostMigration_MigratingAsHost  = 2,
	HostMigration_MigratingAsClient = 3,
	HostMigration_ClientTravel     = 4,
	HostMigration_HostReadyToTravel = 5,
	HostMigration_Failed           = 6,
	HostMigration_MAX              = 7
};


// Enum Engine.WorldInfo.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Xbox360                = 1,
	CONSOLE_PS3                    = 2,
	CONSOLE_Mobile                 = 3,
	CONSOLE_IPhone                 = 4,
	CONSOLE_Android                = 5,
	CONSOLE_Kindle                 = 6,
	CONSOLE_WiiU                   = 7,
	CONSOLE_Flash                  = 8,
	CONSOLE_MAX                    = 9
};


// Enum Engine.WorldInfo.EPreferredLightmapType
enum class EPreferredLightmapType : uint8_t
{
	EPLT_Default                   = 0,
	EPLT_Directional               = 1,
	EPLT_Simple                    = 2,
	EPLT_MAX                       = 3
};


// Enum Engine.WorldInfo.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.WorldInfo.ENetMode
enum class ENetMode : uint8_t
{
	NM_Standalone                  = 0,
	NM_DedicatedServer             = 1,
	NM_ListenServer                = 2,
	NM_Client                      = 3,
	NM_MAX                         = 4
};


// Enum Engine.GameEngine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.GameInfo.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.GameplayEvents.EGameStatGroups
enum class EGameStatGroups : uint8_t
{
	GSG_EngineStats                = 0,
	GSG_Game                       = 1,
	GSG_Team                       = 2,
	GSG_Player                     = 3,
	GSG_Weapon                     = 4,
	GSG_Damage                     = 5,
	GSG_Projectile                 = 6,
	GSG_Pawn                       = 7,
	GSG_GameSpecific               = 8,
	GSG_Aggregate                  = 9,
	GSG_MAX                        = 10
};


// Enum Engine.GameViewportClient.ESplitScreenType
enum class ESplitScreenType : uint8_t
{
	eSST_NONE                      = 0,
	eSST_2P_HORIZONTAL             = 1,
	eSST_2P_VERTICAL               = 2,
	eSST_3P_FAVOR_TOP              = 3,
	eSST_3P_FAVOR_BOTTOM           = 4,
	eSST_4P                        = 5,
	eSST_MAX                       = 6
};


// Enum Engine.GameViewportClient.ESafeZoneType
enum class ESafeZoneType : uint8_t
{
	eSZ_TOP                        = 0,
	eSZ_BOTTOM                     = 1,
	eSZ_LEFT                       = 2,
	eSZ_RIGHT                      = 3,
	eSZ_MAX                        = 4
};


// Enum Engine.GameViewportClient.ESetMode
enum class ESetMode : uint8_t
{
	SetMode_Toggle                 = 0,
	SetMode_Enable                 = 1,
	SetMode_Disable                = 2,
	SetMode_MAX                    = 3
};


// Enum Engine.GoogleIntegration.EGoogleIntegrationDelegate
enum class EGoogleIntegrationDelegate : uint8_t
{
	GDEL_AuthorizationComplete     = 0,
	GDEL_FriendsListComplete       = 1,
	GDEL_YouTubeSubscriptionListComplete = 2,
	GDEL_YouTubeSubscriptionAddComplete = 3,
	GDEL_MAX                       = 4
};


// Enum Engine.InAppMessageBase.EInAppMessageInterfaceDelegate
enum class EInAppMessageInterfaceDelegate : uint8_t
{
	IAMD_InAppSMSUIComplete        = 0,
	IAMD_InAppEmailComplete        = 1,
	IAMD_MAX                       = 2
};


// Enum Engine.InGameAdManager.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.InstancedFoliageSettings.FoliageCullOption
enum class EFoliageCullOption : uint8_t
{
	FOLIAGECULL_Cull               = 0,
	FOLIAGECULL_ScaleZ             = 1,
	FOLIAGECULL_ScaleXYZ           = 2,
	FOLIAGECULL_TranslateZ         = 3,
	FOLIAGECULL_MAX                = 4
};


// Enum Engine.Interface_NavMeshPathObstacle.EEdgeHandlingStatus
enum class EEdgeHandlingStatus : uint8_t
{
	EHS_AddedBothDirs              = 0,
	EHS_Added0to1                  = 1,
	EHS_Added1to0                  = 2,
	EHS_AddedNone                  = 3,
	EHS_MAX                        = 4
};


// Enum Engine.InterpGroup.MATPLAYER_TYPE
enum class EMATPLAYER_TYPE : uint8_t
{
	MATPLAYER_ORIGINAL             = 0,
	MATPLAYER_MYPLAYER             = 1,
	MATPLAYER_SOMEONE              = 2,
	MATPLAYER_PARTYMAIN            = 3,
	MATPLAYER_PARTYMEMBER          = 4,
	MATPLAYER_NPC                  = 5,
	MATPLAYER_DRIVENVEHICLE        = 6,
	MATPLAYER_VEHICLE              = 7,
	MATPLAYER_MAX                  = 8
};


// Enum Engine.InterpTrack.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.InterpTrackHeadTracking.EHeadTrackingAction
enum class EHeadTrackingAction : uint8_t
{
	EHTA_DisableHeadTracking       = 0,
	EHTA_EnableHeadTracking        = 1,
	EHTA_MAX                       = 2
};


// Enum Engine.InterpTrackToggle.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.InterpTrackVisibility.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.InterpTrackVisibility.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveFrame
enum class EInterpTrackMoveFrame : uint8_t
{
	IMF_World                      = 0,
	IMF_RelativeToInitial          = 1,
	IMF_MAX                        = 2
};


// Enum Engine.InterpTrackMoveAxis.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Engine.LandscapeGizmoActiveActor.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Engine.MaterialExpressionTextureSample.TextureAddressForce
enum class ETextureAddressForce : uint8_t
{
	TAF_Original                   = 0,
	TAF_Wrap                       = 1,
	TAF_Clamp                      = 2,
	TAF_Mirror                     = 3,
	TAF_Border                     = 4,
	TAF_MAX                        = 5
};


// Enum Engine.LevelGridVolume.LevelGridCellShape
enum class ELevelGridCellShape : uint8_t
{
	LGCS_Box                       = 0,
	LGCS_Hex                       = 1,
	LGCS_MAX                       = 2
};


// Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.MaterialExpressionAntialiasedTextureMask.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.MaterialExpressionCustom.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.MaterialExpressionDepthOfFieldFunction.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_MAX                       = 3
};


// Enum Engine.MaterialExpressionFunctionInput.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MAX              = 7
};


// Enum Engine.MaterialExpressionLandscapeLayerBlend.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_AlphaBlend                  = 0,
	LB_HeightBlend                 = 1,
	LB_MAX                         = 2
};


// Enum Engine.MaterialExpressionSceneTexture.ESceneTextureType
enum class ESceneTextureType : uint8_t
{
	SceneTex_Lighting              = 0,
	SceneTex_MAX                   = 1
};


// Enum Engine.MaterialExpressionTerrainLayerCoords.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};


// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_World                = 0,
	TRANSFORM_View                 = 1,
	TRANSFORM_Local                = 2,
	TRANSFORM_Tangent              = 3,
	TRANSFORM_MAX                  = 4
};


// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_World          = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_Tangent        = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_MAX            = 4
};


// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransform
enum class EMaterialPositionTransform : uint8_t
{
	TRANSFORMPOS_World             = 0,
	TRANSFORMPOS_MAX               = 1
};


// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX         = 2
};


// Enum Engine.MicroTransactionBase.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.MicroTransactionBase.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.NxForceFieldGeneric.FFG_ForceFieldCoordinates
enum class EFFG_ForceFieldCoordinates : uint8_t
{
	FFG_CARTESIAN                  = 0,
	FFG_SPHERICAL                  = 1,
	FFG_CYLINDRICAL                = 2,
	FFG_TOROIDAL                   = 3,
	FFG_MAX                        = 4
};


// Enum Engine.NxGenericForceFieldBrush.FFB_ForceFieldCoordinates
enum class EFFB_ForceFieldCoordinates : uint8_t
{
	FFB_CARTESIAN                  = 0,
	FFB_SPHERICAL                  = 1,
	FFB_CYLINDRICAL                = 2,
	FFB_TOROIDAL                   = 3,
	FFB_MAX                        = 4
};


// Enum Engine.OnlinePlayerStorage.EOnlineProfilePropertyOwner
enum class EOnlineProfilePropertyOwner : uint8_t
{
	OPPO_None                      = 0,
	OPPO_OnlineService             = 1,
	OPPO_Game                      = 2,
	OPPO_MAX                       = 3
};


// Enum Engine.OnlinePlayerStorage.EOnlinePlayerStorageAsyncState
enum class EOnlinePlayerStorageAsyncState : uint8_t
{
	OPAS_NotStarted                = 0,
	OPAS_Read                      = 1,
	OPAS_Write                     = 2,
	OPAS_Finished                  = 3,
	OPAS_MAX                       = 4
};


// Enum Engine.OnlineProfileSettings.EProfileSettingID
enum class EProfileSettingID : uint8_t
{
	PSI_Unknown                    = 0,
	PSI_ControllerVibration        = 1,
	PSI_YInversion                 = 2,
	PSI_GamerCred                  = 3,
	PSI_GamerRep                   = 4,
	PSI_VoiceMuted                 = 5,
	PSI_VoiceThruSpeakers          = 6,
	PSI_VoiceVolume                = 7,
	PSI_GamerPictureKey            = 8,
	PSI_GamerMotto                 = 9,
	PSI_GamerTitlesPlayed          = 10,
	PSI_GamerAchievementsEarned    = 11,
	PSI_GameDifficulty             = 12,
	PSI_ControllerSensitivity      = 13,
	PSI_PreferredColor1            = 14,
	PSI_PreferredColor2            = 15,
	PSI_AutoAim                    = 16,
	PSI_AutoCenter                 = 17,
	PSI_MovementControl            = 18,
	PSI_RaceTransmission           = 19,
	PSI_RaceCameraLocation         = 20,
	PSI_RaceBrakeControl           = 21,
	PSI_RaceAcceleratorControl     = 22,
	PSI_GameCredEarned             = 23,
	PSI_GameAchievementsEarned     = 24,
	PSI_EndLiveIds                 = 25,
	PSI_ProfileVersionNum          = 26,
	PSI_ProfileSaveCount           = 27,
	PSI_MAX                        = 28
};


// Enum Engine.OnlineProfileSettings.EProfileDifficultyOptions
enum class EProfileDifficultyOptions : uint8_t
{
	PDO_Normal                     = 0,
	PDO_Easy                       = 1,
	PDO_Hard                       = 2,
	PDO_MAX                        = 3
};


// Enum Engine.OnlineProfileSettings.EProfileControllerSensitivityOptions
enum class EProfileControllerSensitivityOptions : uint8_t
{
	PCSO_Medium                    = 0,
	PCSO_Low                       = 1,
	PCSO_High                      = 2,
	PCSO_MAX                       = 3
};


// Enum Engine.OnlineProfileSettings.EProfilePreferredColorOptions
enum class EProfilePreferredColorOptions : uint8_t
{
	PPCO_None                      = 0,
	PPCO_Black                     = 1,
	PPCO_White                     = 2,
	PPCO_Yellow                    = 3,
	PPCO_Orange                    = 4,
	PPCO_Pink                      = 5,
	PPCO_Red                       = 6,
	PPCO_Purple                    = 7,
	PPCO_Blue                      = 8,
	PPCO_Green                     = 9,
	PPCO_Brown                     = 10,
	PPCO_Silver                    = 11,
	PPCO_MAX                       = 12
};


// Enum Engine.OnlineProfileSettings.EProfileAutoAimOptions
enum class EProfileAutoAimOptions : uint8_t
{
	PAAO_Off                       = 0,
	PAAO_On                        = 1,
	PAAO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileAutoCenterOptions
enum class EProfileAutoCenterOptions : uint8_t
{
	PACO_Off                       = 0,
	PACO_On                        = 1,
	PACO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileMovementControlOptions
enum class EProfileMovementControlOptions : uint8_t
{
	PMCO_L_Thumbstick              = 0,
	PMCO_R_Thumbstick              = 1,
	PMCO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceTransmissionOptions
enum class EProfileRaceTransmissionOptions : uint8_t
{
	PRTO_Auto                      = 0,
	PRTO_Manual                    = 1,
	PRTO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceCameraLocationOptions
enum class EProfileRaceCameraLocationOptions : uint8_t
{
	PRCLO_Behind                   = 0,
	PRCLO_Front                    = 1,
	PRCLO_Inside                   = 2,
	PRCLO_MAX                      = 3
};


// Enum Engine.OnlineProfileSettings.EProfileRaceBrakeControlOptions
enum class EProfileRaceBrakeControlOptions : uint8_t
{
	PRBCO_Trigger                  = 0,
	PRBCO_Button                   = 1,
	PRBCO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceAcceleratorControlOptions
enum class EProfileRaceAcceleratorControlOptions : uint8_t
{
	PRACO_Trigger                  = 0,
	PRACO_Button                   = 1,
	PRACO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileYInversionOptions
enum class EProfileYInversionOptions : uint8_t
{
	PYIO_Off                       = 0,
	PYIO_On                        = 1,
	PYIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileXInversionOptions
enum class EProfileXInversionOptions : uint8_t
{
	PXIO_Off                       = 0,
	PXIO_On                        = 1,
	PXIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileOmniDirEvadeOptions
enum class EProfileOmniDirEvadeOptions : uint8_t
{
	PODI_Off                       = 0,
	PODI_On                        = 1,
	PODI_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileControllerVibrationToggleOptions
enum class EProfileControllerVibrationToggleOptions : uint8_t
{
	PCVTO_Off                      = 0,
	PCVTO_IgnoreThis               = 1,
	PCVTO_IgnoreThis2              = 2,
	PCVTO_On                       = 3,
	PCVTO_MAX                      = 4
};


// Enum Engine.OnlineProfileSettings.EProfileVoiceThruSpeakersOptions
enum class EProfileVoiceThruSpeakersOptions : uint8_t
{
	PVTSO_Off                      = 0,
	PVTSO_On                       = 1,
	PVTSO_Both                     = 2,
	PVTSO_MAX                      = 3
};


// Enum Engine.ParticleEmitter.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_None                       = 3,
	ERM_MAX                        = 4
};


// Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.ParticleEmitter.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.ParticleModule.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_AkEvent                   = 7,
	EPMT_MAX                       = 8
};


// Enum Engine.ParticleModule.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.ParticleModuleAttractorBoneSocket.EBoneSocketAttractorFalloffType
enum class EBoneSocketAttractorFalloffType : uint8_t
{
	BSFOFF_Constant                = 0,
	BSFOFF_Linear                  = 1,
	BSFOFF_Exponent                = 2,
	BSFOFF_MAX                     = 3
};


// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestSelectionMethod
enum class ELocationBoneSocketDestSelectionMethod : uint8_t
{
	BONESOCKETDESTSEL_Sequential   = 0,
	BONESOCKETDESTSEL_Random       = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll     = 3,
	BONESOCKETDESTSEL_MAX          = 4
};


// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestination
enum class ELocationBoneSocketDestination : uint8_t
{
	BONESOCKETDEST_Bones           = 0,
	BONESOCKETDEST_Sockets         = 1,
	BONESOCKETDEST_MAX             = 2
};


// Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.ParticleModuleAttractorSkelVertSurface.EVertSurfaceAttractorFalloffType
enum class EVertSurfaceAttractorFalloffType : uint8_t
{
	VSFOFF_Constant                = 0,
	VSFOFF_Linear                  = 1,
	VSFOFF_Exponent                = 2,
	VSFOFF_MAX                     = 3
};


// Enum Engine.ParticleModuleAttractorSkelVertSurface.EAttractorSkelVertSurfaceDestination
enum class EAttractorSkelVertSurfaceDestination : uint8_t
{
	VERTSURFACEDEST_Vert           = 0,
	VERTSURFACEDEST_Surface        = 1,
	VERTSURFACEDEST_MAX            = 2
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.ParticleModuleBeamModifier.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.ParticleModuleCameraOffset.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.ParticleModuleCollision.ParticleAttractorActionType
enum class EParticleAttractorActionType : uint8_t
{
	PAAT_None                      = 0,
	PAAT_Destroy                   = 1,
	PAAT_Freeze                    = 2,
	PAAT_Event                     = 3,
	PAAT_MAX                       = 4
};


// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX              = 3
};


// Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ParticleModuleLocationSkelVertSurface.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.ParticleModuleLocationStaticVertSurface.ELocationStaticVertSurfaceSource
enum class ELocationStaticVertSurfaceSource : uint8_t
{
	VERTSTATICSURFACESOURCE_Vert   = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX    = 2
};


// Enum Engine.ParticleModuleOrbit.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.ParticleModuleParameterDynamic.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5
};


// Enum Engine.ParticleModulePhysicsVolumes.EParticleLevelInfluenceType
enum class EParticleLevelInfluenceType : uint8_t
{
	LIT_Never                      = 0,
	LIT_OutsidePhysicsVolumes      = 1,
	LIT_Always                     = 2,
	LIT_MAX                        = 3
};


// Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_Square                     = 0,
	PSA_Rectangle                  = 1,
	PSA_Velocity                   = 2,
	PSA_TypeSpecific               = 3,
	PSA_MAX                        = 4
};


// Enum Engine.ParticleModuleRequired.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ParticleModuleRequired.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_MAX                        = 1
};


// Enum Engine.ParticleModuleRequired.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.ParticleModuleRequired.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.ParticleModuleTrailSpawn.ETrail2SpawnMethod
enum class ETrail2SpawnMethod : uint8_t
{
	PET2SM_Emitter                 = 0,
	PET2SM_Velocity                = 1,
	PET2SM_Distance                = 2,
	PET2SM_MAX                     = 3
};


// Enum Engine.ParticleModuleTrailTaper.ETrailTaperMethod
enum class ETrailTaperMethod : uint8_t
{
	PETTM_None                     = 0,
	PETTM_Full                     = 1,
	PETTM_Partial                  = 2,
	PETTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamMethod
enum class EBeamMethod : uint8_t
{
	PEBM_Distance                  = 0,
	PEBM_EndPoints                 = 1,
	PEBM_EndPoints_Interpolated    = 2,
	PEBM_UserSet_EndPoints         = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX                       = 5
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamEndPointMethod
enum class EBeamEndPointMethod : uint8_t
{
	PEBEPM_Calculated              = 0,
	PEBEPM_Distribution            = 1,
	PEBEPM_Distribution_Constant   = 2,
	PEBEPM_MAX                     = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ParticleModuleTypeDataMeshPhysX.EPhysXMeshRotationMethod
enum class EPhysXMeshRotationMethod : uint8_t
{
	PMRM_Disabled                  = 0,
	PMRM_Spherical                 = 1,
	PMRM_Box                       = 2,
	PMRM_LongBox                   = 3,
	PMRM_FlatBox                   = 4,
	PMRM_Velocity                  = 5,
	PMRM_MAX                       = 6
};


// Enum Engine.ParticleModuleTypeDataRibbon.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ParticleSystem.EParticleSystemLimitGroup
enum class EParticleSystemLimitGroup : uint8_t
{
	EPARTICLESYSTEMLIMITGROUP_None = 0,
	EPARTICLESYSTEMLIMITGROUP_PostBlur = 1,
	EPARTICLESYSTEMLIMITGROUP_PostEtc = 2,
	EPARTICLESYSTEMLIMITGROUP_Distortion = 3,
	EPARTICLESYSTEMLIMITGROUP_Light = 4,
	EPARTICLESYSTEMLIMITGROUP_Dust = 5,
	EPARTICLESYSTEMLIMITGROUP_Debris = 6,
	EPARTICLESYSTEMLIMITGROUP_Lensflare = 7,
	EPARTICLESYSTEMLIMITGROUP_CrackDecal = 8,
	EPARTICLESYSTEMLIMITGROUP_EtcDecal = 9,
	EPARTICLESYSTEMLIMITGROUP_MAX  = 10
};


// Enum Engine.ParticleSystem.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystem.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.ProcBuildingRuleset.EProcBuildingAxis
enum class EProcBuildingAxis : uint8_t
{
	EPBAxis_X                      = 0,
	EPBAxis_Z                      = 1,
	EPBAxis_MAX                    = 2
};


// Enum Engine.ProcBuilding.EScopeEdge
enum class EScopeEdge : uint8_t
{
	EPSA_Top                       = 0,
	EPSA_Bottom                    = 1,
	EPSA_Left                      = 2,
	EPSA_Right                     = 3,
	EPSA_None                      = 4,
	EPSA_MAX                       = 5
};


// Enum Engine.ProcBuilding.EBuildingStatsBrowserColumns
enum class EBuildingStatsBrowserColumns : uint8_t
{
	BSBC_Name                      = 0,
	BSBC_Ruleset                   = 1,
	BSBC_NumStaticMeshComps        = 2,
	BSBC_NumInstancedStaticMeshComps = 3,
	BSBC_NumInstancedTris          = 4,
	BSBC_LightmapMemBytes          = 5,
	BSBC_ShadowmapMemBytes         = 6,
	BSBC_LODDiffuseMemBytes        = 7,
	BSBC_LODLightingMemBytes       = 8,
	BSBC_MAX                       = 9
};


// Enum Engine.ProcBuilding.EPBCornerType
enum class EPBCornerType : uint8_t
{
	EPBC_Default                   = 0,
	EPBC_Chamfer                   = 1,
	EPBC_Round                     = 2,
	EPBC_MAX                       = 3
};


// Enum Engine.PBRuleNodeEdgeAngle.EProcBuildingEdge
enum class EProcBuildingEdge : uint8_t
{
	EPBE_Top                       = 0,
	EPBE_Bottom                    = 1,
	EPBE_Left                      = 2,
	EPBE_Right                     = 3,
	EPBE_MAX                       = 4
};


// Enum Engine.PhysicalMaterial.EPhysEffectType
enum class EPhysEffectType : uint8_t
{
	EPMET_Impact                   = 0,
	EPMET_Slide                    = 1,
	EPMET_MAX                      = 2
};


// Enum Engine.PhysXParticleSystem.ESimulationMethod
enum class ESimulationMethod : uint8_t
{
	ESM_SPH                        = 0,
	ESM_NO_PARTICLE_INTERACTION    = 1,
	ESM_MIXED_MODE                 = 2,
	ESM_MAX                        = 3
};


// Enum Engine.PhysXParticleSystem.EPacketSizeMultiplier
enum class EPacketSizeMultiplier : uint8_t
{
	EPSM                           = 0,
	EPSM01                         = 1,
	EPSM02                         = 2,
	EPSM03                         = 3,
	EPSM04                         = 4,
	EPSM05                         = 5,
	EPSM_MAX                       = 6
};


// Enum Engine.SceneCaptureComponent.ESceneCaptureViewMode
enum class ESceneCaptureViewMode : uint8_t
{
	SceneCapView_Lit               = 0,
	SceneCapView_Unlit             = 1,
	SceneCapView_LitNoShadows      = 2,
	SceneCapView_Wire              = 3,
	SceneCapView_MAX               = 4
};


// Enum Engine.RB_BodySetup.ESleepFamily
enum class ESleepFamily : uint8_t
{
	SF_Normal                      = 0,
	SF_Sensitive                   = 1,
	SF_MAX                         = 2
};


// Enum Engine.RB_RadialForceActor.ERadialForceType
enum class ERadialForceType : uint8_t
{
	RFT_Force                      = 0,
	RFT_Impulse                    = 1,
	RFT_MAX                        = 2
};


// Enum Engine.Route.ERouteDirection
enum class ERouteDirection : uint8_t
{
	ERD_Forward                    = 0,
	ERD_Reverse                    = 1,
	ERD_MAX                        = 2
};


// Enum Engine.Route.ERouteFillAction
enum class ERouteFillAction : uint8_t
{
	RFA_Overwrite                  = 0,
	RFA_Add                        = 1,
	RFA_Remove                     = 2,
	RFA_Clear                      = 3,
	RFA_MAX                        = 4
};


// Enum Engine.Route.ERouteType
enum class ERouteType : uint8_t
{
	ERT_Linear                     = 0,
	ERT_Loop                       = 1,
	ERT_Circle                     = 2,
	ERT_MAX                        = 3
};


// Enum Engine.SeqAct_ActorFactory.EPointSelection
enum class EPointSelection : uint8_t
{
	PS_Normal                      = 0,
	PS_Random                      = 1,
	PS_Reverse                     = 2,
	PS_MAX                         = 3
};


// Enum Engine.SeqAct_SetMesh.EMeshType
enum class EMeshType : uint8_t
{
	MeshType_StaticMesh            = 0,
	MeshType_SkeletalMesh          = 1,
	MeshType_MAX                   = 2
};


// Enum Engine.WorldAttractor.EWorldAttractorFalloffType
enum class EWorldAttractorFalloffType : uint8_t
{
	FOFF_Constant                  = 0,
	FOFF_Linear                    = 1,
	FOFF_Exponent                  = 2,
	FOFF_MAX                       = 3
};


// Enum Engine.SeqEvent_ParticleEvent.EParticleEventOutputType
enum class EParticleEventOutputType : uint8_t
{
	ePARTICLEOUT_Spawn             = 0,
	ePARTICLEOUT_Death             = 1,
	ePARTICLEOUT_Collision         = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet            = 4,
	ePARTICLEOUT_MAX               = 5
};


// Enum Engine.SkelControlBase.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ActorSpace                 = 1,
	BCS_ComponentSpace             = 2,
	BCS_ParentBoneSpace            = 3,
	BCS_BoneSpace                  = 4,
	BCS_OtherBoneSpace             = 5,
	BCS_BaseMeshSpace              = 6,
	BCS_MAX                        = 7
};


// Enum Engine.SkelControlSpline.ESplineControlRotMode
enum class ESplineControlRotMode : uint8_t
{
	SCR_NoChange                   = 0,
	SCR_AlongSpline                = 1,
	SCR_Interpolate                = 2,
	SCR_MAX                        = 3
};


// Enum Engine.SkeletalMesh.SoftBodyBoneType
enum class ESoftBodyBoneType : uint8_t
{
	SOFTBODYBONE_Fixed             = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment  = 2,
	SOFTBODYBONE_MAX               = 3
};


// Enum Engine.SkeletalMesh.EFloorConformType
enum class EFloorConformType : uint8_t
{
	EFCT_NotYetDetermined          = 0,
	EFCT_None                      = 1,
	EFCT_Tall                      = 2,
	EFCT_Flat                      = 3,
	EFCT_Squeezed                  = 4,
	EFCT_MAX                       = 5
};


// Enum Engine.SkeletalMesh.ClothBoneType
enum class EClothBoneType : uint8_t
{
	CLOTHBONE_Fixed                = 0,
	CLOTHBONE_BreakableAttachment  = 1,
	CLOTHBONE_TearLine             = 2,
	CLOTHBONE_MAX                  = 3
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationNormalMode
enum class ESkeletalMeshOptimizationNormalMode : uint8_t
{
	SMONM_Recalculate              = 0,
	SMONM_RecalculateSoft          = 1,
	SMONM_RecalculateHard          = 2,
	SMONM_MAX                      = 3
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2
};


// Enum Engine.SkeletalMesh.TriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};


// Enum Engine.SkeletalMesh.BoneBreakOption
enum class EBoneBreakOption : uint8_t
{
	BONEBREAK_SoftPreferred        = 0,
	BONEBREAK_AutoDetect           = 1,
	BONEBREAK_RigidPreferred       = 2,
	BONEBREAK_MAX                  = 3
};


// Enum Engine.SkeletalMesh.TriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};


// Enum Engine.SkeletalMesh.ClothMovementScaleGen
enum class EClothMovementScaleGen : uint8_t
{
	ECMDM_DistToFixedVert          = 0,
	ECMDM_VertexBoneWeight         = 1,
	ECMDM_Empty                    = 2,
	ECMDM_MAX                      = 3
};


// Enum Engine.SoundNodeWave.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_MAX                      = 7
};


// Enum Engine.SpeedTreeComponent.ESpeedTreeMeshType
enum class ESpeedTreeMeshType : uint8_t
{
	STMT_MinMinusOne               = 0,
	STMT_Branches1                 = 1,
	STMT_Branches2                 = 2,
	STMT_Fronds                    = 3,
	STMT_LeafCards                 = 4,
	STMT_LeafMeshes                = 5,
	STMT_Billboards                = 6,
	STMT_Max                       = 7
};


// Enum Engine.SVehicleWheel.EWheelSide
enum class EWheelSide : uint8_t
{
	SIDE_None                      = 0,
	SIDE_Left                      = 1,
	SIDE_Right                     = 2,
	SIDE_MAX                       = 3
};


// Enum Engine.TerrainMaterial.ETerrainMappingType
enum class ETerrainMappingType : uint8_t
{
	TMT_Auto                       = 0,
	TMT_XY                         = 1,
	TMT_XZ                         = 2,
	TMT_YZ                         = 3,
	TMT_MAX                        = 4
};


// Enum Engine.TextureFlipBook.TextureFlipBookMethod
enum class ETextureFlipBookMethod : uint8_t
{
	TFBM_UL_ROW                    = 0,
	TFBM_UL_COL                    = 1,
	TFBM_UR_ROW                    = 2,
	TFBM_UR_COL                    = 3,
	TFBM_LL_ROW                    = 4,
	TFBM_LL_COL                    = 5,
	TFBM_LR_ROW                    = 6,
	TFBM_LR_COL                    = 7,
	TFBM_RANDOM                    = 8,
	TFBM_MAX                       = 9
};


// Enum Engine.TextureMovie.EMovieStreamSource
enum class EMovieStreamSource : uint8_t
{
	MovieStream_File               = 0,
	MovieStream_Memory             = 1,
	MovieStream_MAX                = 2
};


// Enum Engine.TwitterIntegrationBase.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.TwitterIntegrationBase.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.UberPostProcessEffect.EPostProcessAAType
enum class EPostProcessAAType : uint8_t
{
	PostProcessAA_Off              = 0,
	PostProcessAA_FXAA0            = 1,
	PostProcessAA_FXAA1            = 2,
	PostProcessAA_FXAA2            = 3,
	PostProcessAA_FXAA3            = 4,
	PostProcessAA_FXAA4            = 5,
	PostProcessAA_FXAA5            = 6,
	PostProcessAA_MLAA             = 7,
	PostProcessAA_SMAA1            = 8,
	PostProcessAA_SMAA2            = 9,
	PostProcessAA_SMAA3            = 10,
	PostProcessAA_MAX              = 11
};


// Enum Engine.UberPostProcessEffect.ETonemapperType
enum class ETonemapperType : uint8_t
{
	Tonemapper_Off                 = 0,
	Tonemapper_Filmic              = 1,
	Tonemapper_Customizable        = 2,
	Tonemapper_MAX                 = 3
};


// Enum Engine.UIDataProvider_MenuItem.EMenuOptionType
enum class EMenuOptionType : uint8_t
{
	MENUOT_ComboReadOnly           = 0,
	MENUOT_ComboNumeric            = 1,
	MENUOT_CheckBox                = 2,
	MENUOT_Slider                  = 3,
	MENUOT_Spinner                 = 4,
	MENUOT_EditBox                 = 5,
	MENUOT_CollectionCheckBox      = 6,
	MENUOT_CollapsingList          = 7,
	MENUOT_MAX                     = 8
};


// Enum Engine.UIDataStore_OnlineStats.EStatsFetchType
enum class EStatsFetchType : uint8_t
{
	SFT_Player                     = 0,
	SFT_CenteredOnPlayer           = 1,
	SFT_Friends                    = 2,
	SFT_TopRankings                = 3,
	SFT_MAX                        = 4
};


// Enum Engine.Weapon.EWeaponFireType
enum class EWeaponFireType : uint8_t
{
	EWFT_InstantHit                = 0,
	EWFT_Projectile                = 1,
	EWFT_Custom                    = 2,
	EWFT_None                      = 3,
	EWFT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0044
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C)
	float                                              ContactPenetration;                                       // 0x0018(0x0004)
	struct FVector                                     ContactVelocity[0x2];                                     // 0x001C(0x000C)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0034(0x0008)
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010)
	struct FVector                                     TotalNormalForceVector;                                   // 0x0010(0x000C)
	struct FVector                                     TotalFrictionForceVector;                                 // 0x001C(0x000C)
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0008)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0008(0x0008)
	int                                                Item;                                                     // 0x0010(0x0004)
	int                                                LevelIndex;                                               // 0x0014(0x0004)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0020(0x0008)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0060
struct FImpactInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0014(0x000C)
	struct FVector                                     RayDir;                                                   // 0x0020(0x000C)
	struct FVector                                     StartTrace;                                               // 0x002C(0x000C)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0038(0x0028)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008)
	struct FVector                                     Position;                                                 // 0x0008(0x000C)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C)
};

// ScriptStruct Engine.Actor.EFColOption
// 0x0004
struct FEFColOption
{
	TEnumAsByte<EFColMovePickingOption>                MovePickingOption;                                        // 0x0000(0x0001)
	TEnumAsByte<EFColMoveColOption>                    MoveColOption;                                            // 0x0001(0x0001)
	TEnumAsByte<EFColProjectileOption>                 ProjectileOption;                                         // 0x0002(0x0001)
	TEnumAsByte<EFColNavMeshOption>                    NavMeshOption;                                            // 0x0003(0x0001)
};

// ScriptStruct Engine.Actor.TimerData
// 0x0020
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                                // 0x0000(0x0004)
	unsigned long                                      bPaused : 1;                                              // 0x0000(0x0004)
	struct FName                                       FuncName;                                                 // 0x0004(0x0008)
	float                                              Rate;                                                     // 0x000C(0x0004)
	float                                              Count;                                                    // 0x0010(0x0004)
	float                                              TimerTimeDilation;                                        // 0x0014(0x0004)
	class UObject*                                     TimerObj;                                                 // 0x0018(0x0008)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                             // 0x0000(0x0004)
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;                  // 0x0004(0x0004)
	unsigned long                                      bLimitExplosionChunkSize : 1;                             // 0x0004(0x0004)
	float                                              MaxExplosionChunkSize;                                    // 0x0008(0x0004)
	unsigned long                                      bLimitDamageChunkSize : 1;                                // 0x000C(0x0004)
	float                                              MaxDamageChunkSize;                                       // 0x0010(0x0004)
	int                                                MaxNumFacturedChunksToSpawnInAFrame;                      // 0x0014(0x0004)
	float                                              FractureExplosionVelScale;                                // 0x0018(0x0004)
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x002C
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                              // 0x0000(0x0008)
	unsigned long                                      bAutoPlay : 1;                                            // 0x0008(0x0004)
	unsigned long                                      bPersistentAcrossLevels : 1;                              // 0x0008(0x0004)
	float                                              FadeInTime;                                               // 0x000C(0x0004)
	float                                              FadeInVolumeLevel;                                        // 0x0010(0x0004)
	float                                              FadeOutTime;                                              // 0x0014(0x0004)
	float                                              FadeOutVolumeLevel;                                       // 0x0018(0x0004)
	struct FString                                     MP3Filename;                                              // 0x001C(0x0010)
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	TArray<class UTexture*>                            LUTTextures;                                              // 0x0000(0x0010)
	TArray<float>                                      LUTWeights;                                               // 0x0010(0x0010)
	unsigned long                                      bHasChanged : 1;                                          // 0x0020(0x0004)
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x003C
struct FMobileColorGradingParams
{
	float                                              TransitionTime;                                           // 0x0000(0x0004)
	float                                              Blend;                                                    // 0x0004(0x0004)
	float                                              Desaturation;                                             // 0x0008(0x0004)
	struct FLinearColor                                HighLights;                                               // 0x000C(0x0010)
	struct FLinearColor                                MidTones;                                                 // 0x001C(0x0010)
	struct FLinearColor                                Shadows;                                                  // 0x002C(0x0010)
};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x0034
struct FMobilePostProcessSettings
{
	unsigned long                                      bOverride_Mobile_BlurAmount : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_TransitionTime : 1;                      // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Scale : 1;                         // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Threshold : 1;                     // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_Bloom_Tint : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_Distance : 1;                        // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_MinRange : 1;                        // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_MaxRange : 1;                        // 0x0000(0x0004)
	unsigned long                                      bOverride_Mobile_DOF_FarBlurFactor : 1;                   // 0x0000(0x0004)
	float                                              Mobile_BlurAmount;                                        // 0x0004(0x0004)
	float                                              Mobile_TransitionTime;                                    // 0x0008(0x0004)
	float                                              Mobile_Bloom_Scale;                                       // 0x000C(0x0004)
	float                                              Mobile_Bloom_Threshold;                                   // 0x0010(0x0004)
	struct FLinearColor                                Mobile_Bloom_Tint;                                        // 0x0014(0x0010)
	float                                              Mobile_DOF_Distance;                                      // 0x0024(0x0004)
	float                                              Mobile_DOF_MinRange;                                      // 0x0028(0x0004)
	float                                              Mobile_DOF_MaxRange;                                      // 0x002C(0x0004)
	float                                              Mobile_DOF_FarBlurFactor;                                 // 0x0030(0x0004)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0174
struct FPostProcessSettings
{
	unsigned long                                      bOverride_EnableBloom : 1;                                // 0x0000(0x0004)
	unsigned long                                      bOverride_EnableDOF : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bOverride_EnableMotionBlur : 1;                           // 0x0000(0x0004)
	unsigned long                                      bOverride_EnableSceneEffect : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_AllowAmbientOcclusion : 1;                      // 0x0000(0x0004)
	unsigned long                                      bOverride_OverrideRimShaderColor : 1;                     // 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Scale : 1;                                // 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Threshold : 1;                            // 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_Tint : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_ScreenBlendThreshold : 1;                 // 0x0000(0x0004)
	unsigned long                                      bOverride_Bloom_InterpolationDuration : 1;                // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FalloffExponent : 1;                        // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BlurKernelSize : 1;                         // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BlurBloomKernelSize : 1;                    // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MaxNearBlurAmount : 1;                      // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MinBlurAmount : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_MaxFarBlurAmount : 1;                       // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusType : 1;                              // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusInnerRadius : 1;                       // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusDistance : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_FocusPosition : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_InterpolationDuration : 1;                  // 0x0000(0x0004)
	unsigned long                                      bOverride_DOF_BokehTexture : 1;                           // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_MaxVelocity : 1;                     // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_Amount : 1;                          // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_FullMotionBlur : 1;                  // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_CameraRotationThreshold : 1;         // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_CameraTranslationThreshold : 1;      // 0x0000(0x0004)
	unsigned long                                      bOverride_MotionBlur_InterpolationDuration : 1;           // 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_Desaturation : 1;                         // 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_Colorize : 1;                             // 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_TonemapperScale : 1;                      // 0x0000(0x0004)
	unsigned long                                      bOverride_Scene_TonemapperRange : 1;                      // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_TonemapperToeFactor : 1;                  // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_ImageGrainScale : 1;                      // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_HighLights : 1;                           // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_MidTones : 1;                             // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_Shadows : 1;                              // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_InterpolationDuration : 1;                // 0x0004(0x0004)
	unsigned long                                      bOverride_Scene_ColorGradingLUT : 1;                      // 0x0004(0x0004)
	unsigned long                                      bOverride_RimShader_Color : 1;                            // 0x0004(0x0004)
	unsigned long                                      bOverride_RimShader_InterpolationDuration : 1;            // 0x0004(0x0004)
	unsigned long                                      bOverride_AmbientOcclusion_OcclusionScale : 1;            // 0x0004(0x0004)
	unsigned long                                      bOverride_AmbientOcclusion_OcclusionPower : 1;            // 0x0004(0x0004)
	unsigned long                                      bOverride_AmbientOcclusion_InterpolationDuration : 1;     // 0x0004(0x0004)
	unsigned long                                      bOverride_MobileColorGrading : 1;                         // 0x0004(0x0004)
	unsigned long                                      bEnableBloom : 1;                                         // 0x0004(0x0004)
	unsigned long                                      bEnableDOF : 1;                                           // 0x0004(0x0004)
	unsigned long                                      bEnableMotionBlur : 1;                                    // 0x0004(0x0004)
	unsigned long                                      bEnableSceneEffect : 1;                                   // 0x0004(0x0004)
	unsigned long                                      bAllowAmbientOcclusion : 1;                               // 0x0004(0x0004)
	unsigned long                                      bOverrideRimShaderColor : 1;                              // 0x0004(0x0004)
	float                                              Bloom_Scale;                                              // 0x0008(0x0004)
	float                                              Bloom_Threshold;                                          // 0x000C(0x0004)
	struct FColor                                      Bloom_Tint;                                               // 0x0010(0x0004)
	float                                              Bloom_ScreenBlendThreshold;                               // 0x0014(0x0004)
	float                                              Bloom_InterpolationDuration;                              // 0x0018(0x0004)
	float                                              DOF_BlurBloomKernelSize;                                  // 0x001C(0x0004)
	float                                              DOF_FalloffExponent;                                      // 0x0020(0x0004)
	float                                              DOF_BlurKernelSize;                                       // 0x0024(0x0004)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x0028(0x0004)
	float                                              DOF_MinBlurAmount;                                        // 0x002C(0x0004)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x0030(0x0004)
	TEnumAsByte<EFocusType>                            DOF_FocusType;                                            // 0x0034(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              DOF_FocusInnerRadius;                                     // 0x0038(0x0004)
	float                                              DOF_FocusDistance;                                        // 0x003C(0x0004)
	struct FVector                                     DOF_FocusPosition;                                        // 0x0040(0x000C)
	float                                              DOF_InterpolationDuration;                                // 0x004C(0x0004)
	class UTexture2D*                                  DOF_BokehTexture;                                         // 0x0050(0x0008)
	float                                              MotionBlur_MaxVelocity;                                   // 0x0058(0x0004)
	float                                              MotionBlur_Amount;                                        // 0x005C(0x0004)
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                            // 0x0060(0x0004)
	float                                              MotionBlur_CameraRotationThreshold;                       // 0x0064(0x0004)
	float                                              MotionBlur_CameraTranslationThreshold;                    // 0x0068(0x0004)
	float                                              MotionBlur_InterpolationDuration;                         // 0x006C(0x0004)
	float                                              Scene_Desaturation;                                       // 0x0070(0x0004)
	struct FVector                                     Scene_Colorize;                                           // 0x0074(0x000C)
	float                                              Scene_TonemapperScale;                                    // 0x0080(0x0004)
	float                                              Scene_TonemapperRange;                                    // 0x0084(0x0004)
	float                                              Scene_TonemapperToeFactor;                                // 0x0088(0x0004)
	float                                              Scene_ImageGrainScale;                                    // 0x008C(0x0004)
	struct FVector                                     Scene_HighLights;                                         // 0x0090(0x000C)
	struct FVector                                     Scene_MidTones;                                           // 0x009C(0x000C)
	struct FVector                                     Scene_Shadows;                                            // 0x00A8(0x000C)
	float                                              Scene_InterpolationDuration;                              // 0x00B4(0x0004)
	struct FLinearColor                                RimShader_Color;                                          // 0x00B8(0x0010)
	float                                              RimShader_InterpolationDuration;                          // 0x00C8(0x0004)
	float                                              AmbientOcclusion_OcclusionScale;                          // 0x00CC(0x0004)
	float                                              AmbientOcclusion_OcclusionPower;                          // 0x00D0(0x0004)
	float                                              AmbientOcclusion_InterpolationDuration;                   // 0x00D4(0x0004)
	class UTexture*                                    ColorGrading_LookupTable;                                 // 0x00D8(0x0008)
	struct FLUTBlender                                 ColorGradingLUT;                                          // 0x00E0(0x0024)
	struct FMobileColorGradingParams                   MobileColorGrading;                                       // 0x0104(0x003C)
	struct FMobilePostProcessSettings                  MobilePostProcess;                                        // 0x0140(0x0034)
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0010
struct FReverbSettings
{
	unsigned long                                      bApplyReverb : 1;                                         // 0x0000(0x0004)
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Volume;                                                   // 0x0008(0x0004)
	float                                              FadeTime;                                                 // 0x000C(0x0004)
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                         // 0x0000(0x0004)
	float                                              ExteriorVolume;                                           // 0x0004(0x0004)
	float                                              ExteriorTime;                                             // 0x0008(0x0004)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004)
	float                                              InteriorVolume;                                           // 0x0014(0x0004)
	float                                              InteriorTime;                                             // 0x0018(0x0004)
	float                                              InteriorLPF;                                              // 0x001C(0x0004)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004)
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                                 // 0x0000(0x0008)
	class AActor*                                      Viewer;                                                   // 0x0008(0x0008)
	struct FVector                                     ViewLocation;                                             // 0x0010(0x000C)
	struct FVector                                     ViewDir;                                                  // 0x001C(0x000C)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bFixedTimeStep : 1;                                       // 0x0000(0x0004)
	float                                              TimeStep;                                                 // 0x0004(0x0004)
	int                                                MaxSubSteps;                                              // 0x0008(0x0004)
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                             // 0x0000(0x000C)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                                     // 0x000C(0x000C)
	struct FPhysXSimulationProperties                  CompartmentFluid;                                         // 0x0018(0x000C)
	struct FPhysXSimulationProperties                  CompartmentCloth;                                         // 0x0024(0x000C)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                                      // 0x0030(0x000C)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Fluid : 1;                                                // 0x0000(0x0004)
	unsigned long                                      Cloth : 1;                                                // 0x0000(0x0004)
	unsigned long                                      SoftBody : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int                                                MaxChunkIslandCount;                                      // 0x0000(0x0004)
	int                                                MaxShapeCount;                                            // 0x0004(0x0004)
	int                                                MaxRrbActorCount;                                         // 0x0008(0x0004)
	float                                              MaxChunkSeparationLOD;                                    // 0x000C(0x0004)
	unsigned long                                      bOverrideMaxChunkSeparationLOD : 1;                       // 0x0010(0x0004)
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                          // 0x0000(0x0004)
	int                                                ParticlesLodMin;                                          // 0x0004(0x0004)
	int                                                ParticlesLodMax;                                          // 0x0008(0x0004)
	int                                                PacketsPerPhysXParticleSystemMax;                         // 0x000C(0x0004)
	unsigned long                                      bApplyCylindricalPacketCulling : 1;                       // 0x0010(0x0004)
	float                                              SpawnLodVsFifoBias;                                       // 0x0014(0x0004)
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                                 // 0x0000(0x0018)
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	struct FQWord                                      Key;                                                      // 0x0000(0x0008)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004)
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004)
	struct FColor                                      EnvironmentColor;                                         // 0x0008(0x0004)
	float                                              EnvironmentIntensity;                                     // 0x000C(0x0004)
	unsigned long                                      bEnableAdvancedEnvironmentColor : 1;                      // 0x0010(0x0004)
	struct FColor                                      EnvironmentSunColor;                                      // 0x0014(0x0004)
	float                                              EnvironmentSunIntensity;                                  // 0x0018(0x0004)
	float                                              EnvironmentLightTerminatorAngle;                          // 0x001C(0x0004)
	struct FVector                                     EnvironmentLightDirection;                                // 0x0020(0x000C)
	float                                              EmissiveBoost;                                            // 0x002C(0x0004)
	float                                              DiffuseBoost;                                             // 0x0030(0x0004)
	float                                              SpecularBoost;                                            // 0x0034(0x0004)
	float                                              IndirectNormalInfluenceBoost;                             // 0x0038(0x0004)
	unsigned long                                      bUseAmbientOcclusion : 1;                                 // 0x003C(0x0004)
	unsigned long                                      bEnableImageReflectionShadowing : 1;                      // 0x003C(0x0004)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0040(0x0004)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x0044(0x0004)
	float                                              OcclusionExponent;                                        // 0x0048(0x0004)
	float                                              FullyOccludedSamplesFraction;                             // 0x004C(0x0004)
	float                                              MaxOcclusionDistance;                                     // 0x0050(0x0004)
	unsigned long                                      bVisualizeMaterialDiffuse : 1;                            // 0x0054(0x0004)
	unsigned long                                      bVisualizeAmbientOcclusion : 1;                           // 0x0054(0x0004)
	unsigned long                                      bCompressShadowmap : 1;                                   // 0x0054(0x0004)
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x0020
struct FHostMigrationState
{
	TEnumAsByte<EHostMigrationProgress>                HostMigrationProgress;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HostMigrationElapsedTime;                                 // 0x0004(0x0004)
	float                                              HostMigrationTravelCountdown;                             // 0x0008(0x0004)
	struct FString                                     HostMigrationTravelURL;                                   // 0x000C(0x0010)
	unsigned long                                      bHostMigrationEnabled : 1;                                // 0x001C(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0060
struct FOnlineContent
{
	TEnumAsByte<EOnlineContentType>                    ContentType;                                              // 0x0000(0x0001)
	unsigned char                                      UserIndex;                                                // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	unsigned long                                      bIsCorrupt : 1;                                           // 0x0004(0x0004)
	int                                                DeviceID;                                                 // 0x0008(0x0004)
	int                                                LicenseMask;                                              // 0x000C(0x0004)
	struct FString                                     FriendlyName;                                             // 0x0010(0x0010)
	struct FString                                     Filename;                                                 // 0x0020(0x0010)
	struct FString                                     ContentPath;                                              // 0x0030(0x0010)
	TArray<struct FString>                             ContentPackages;                                          // 0x0040(0x0010)
	TArray<struct FString>                             ContentFiles;                                             // 0x0050(0x0010)
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004)
	struct FColor                                      Out;                                                      // 0x0004(0x0004)
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010)
	unsigned long                                      DisableBlend : 1;                                         // 0x0020(0x0004)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FString                                     Comment;                                                  // 0x0018(0x0010)
};

// ScriptStruct Engine.GameEngine.URL
// 0x0058
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010)
	struct FString                                     Host;                                                     // 0x0010(0x0010)
	int                                                Port;                                                     // 0x0020(0x0004)
	struct FString                                     Map;                                                      // 0x0024(0x0010)
	TArray<struct FString>                             Op;                                                       // 0x0034(0x0010)
	struct FString                                     Portal;                                                   // 0x0044(0x0010)
	int                                                Valid;                                                    // 0x0054(0x0004)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008)
	unsigned long                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0004)
	unsigned long                                      bShouldBeVisible : 1;                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0034
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0004(0x0010)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0014(0x0010)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0024(0x0010)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                            // 0x0000(0x0008)
	struct FPointer                                    NetDriver;                                                // 0x0008(0x0008)
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	struct FString                                     Tag;                                                      // 0x0000(0x0010)
	TArray<struct FString>                             Contains;                                                 // 0x0010(0x0010)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	int                                                SelectionIndex;                                           // 0x0008(0x0004)
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	unsigned long                                      bCollideActors : 1;                                       // 0x0018(0x0004)
	unsigned long                                      bBlockActors : 1;                                         // 0x0018(0x0004)
	unsigned long                                      bNeedsReplication : 1;                                    // 0x0018(0x0004)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004)
	float                                              CullDistance;                                             // 0x0004(0x0004)
};

// ScriptStruct Engine.KMeshProps.KColElemBase
// 0x0005
struct FKColElemBase
{
	TEnumAsByte<EFColMovePickingOption>                MovePickingOption;                                        // 0x0000(0x0001)
	TEnumAsByte<EFColMoveColOption>                    MoveColOption;                                            // 0x0001(0x0001)
	TEnumAsByte<EFColProjectileOption>                 ProjectileOption;                                         // 0x0002(0x0001)
	TEnumAsByte<EFColNavMeshOption>                    NavMeshOption;                                            // 0x0003(0x0001)
	unsigned char                                      NpcPartTypeValue;                                         // 0x0004(0x0001)
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x007F (0x0084 - 0x0005)
struct FKConvexElem : public FKColElemBase
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FVector>                             VertexData;                                               // 0x0008(0x0010)
	TArray<struct FPlane>                              PermutedVertexData;                                       // 0x0018(0x0010)
	TArray<int>                                        FaceTriData;                                              // 0x0028(0x0010)
	TArray<struct FVector>                             EdgeDirections;                                           // 0x0038(0x0010)
	TArray<struct FVector>                             FaceNormalDirections;                                     // 0x0048(0x0010)
	TArray<struct FPlane>                              FacePlaneData;                                            // 0x0058(0x0010)
	struct FBox                                        ElemBox;                                                  // 0x0068(0x001C)
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                            // 0x0000(0x0004)
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	unsigned long                                      bPainCausing : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	TEnumAsByte<ECollisionType>                        CollisionType;                                            // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bHidden : 1;                                              // 0x001C(0x0004)
	unsigned long                                      bIsShutdown : 1;                                          // 0x001C(0x0004)
	unsigned long                                      bNeedsPositionReplication : 1;                            // 0x001C(0x0004)
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	unsigned long                                      bIsActive : 1;                                            // 0x0000(0x0004)
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008)
	class AActor*                                      Base;                                                     // 0x0008(0x0008)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C)
	unsigned long                                      bInheritBaseScale : 1;                                    // 0x0028(0x0004)
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned long                                      bEnableGlow : 1;                                          // 0x0000(0x0004)
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008)
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned long                                      bClipText : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bEnableShadow : 1;                                        // 0x0000(0x0004)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024)
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0050
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                                  // 0x0000(0x0008)
	struct FString                                     StringMessage;                                            // 0x0008(0x0010)
	int                                                Switch;                                                   // 0x0018(0x0004)
	float                                              EndOfLife;                                                // 0x001C(0x0004)
	float                                              Lifetime;                                                 // 0x0020(0x0004)
	float                                              PosY;                                                     // 0x0024(0x0004)
	struct FColor                                      DrawColor;                                                // 0x0028(0x0004)
	int                                                FontSize;                                                 // 0x002C(0x0004)
	class UFont*                                       StringFont;                                               // 0x0030(0x0008)
	float                                              DX;                                                       // 0x0038(0x0004)
	float                                              DY;                                                       // 0x003C(0x0004)
	unsigned long                                      Drawn : 1;                                                // 0x0040(0x0004)
	int                                                Count;                                                    // 0x0044(0x0004)
	class UObject*                                     OptionalObject;                                           // 0x0048(0x0008)
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	struct FString                                     Text;                                                     // 0x0000(0x0010)
	struct FColor                                      TextColor;                                                // 0x0010(0x0004)
	float                                              MessageLife;                                              // 0x0014(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0018(0x0008)
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	struct FString                                     MessageText;                                              // 0x0000(0x0010)
	struct FString                                     AppendedText;                                             // 0x0010(0x0010)
	class UFont*                                       MessageFont;                                              // 0x0020(0x0008)
	struct FVector2D                                   MessageFontScale;                                         // 0x0028(0x0008)
	struct FVector2D                                   MessageOffset;                                            // 0x0030(0x0008)
	struct FColor                                      MessageColor;                                             // 0x0038(0x0004)
	float                                              MessageEndTime;                                           // 0x003C(0x0004)
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008)
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                                      // 0x0000(0x0008)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0044
struct FGameTypePrefix
{
	struct FString                                     Prefix;                                                   // 0x0000(0x0010)
	unsigned long                                      bUsesCommonPackage : 1;                                   // 0x0010(0x0004)
	struct FString                                     GameType;                                                 // 0x0014(0x0010)
	TArray<struct FString>                             AdditionalGameTypes;                                      // 0x0024(0x0010)
	TArray<struct FString>                             ForcedObjects;                                            // 0x0034(0x0010)
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	struct FString                                     ShortName;                                                // 0x0000(0x0010)
	struct FString                                     GameClassName;                                            // 0x0010(0x0010)
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bBlocked : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0039
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                              // 0x0000(0x001C)
	struct FVector                                     BoxCenter;                                                // 0x001C(0x000C)
	struct FPointer                                    OctreeNode;                                               // 0x0028(0x0008)
	class UObject*                                     Owner;                                                    // 0x0030(0x0008)
	unsigned char                                      OwnerType;                                                // 0x0038(0x0001)
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0014
struct FDebugNavCost
{
	struct FString                                     Desc;                                                     // 0x0000(0x0010)
	int                                                Cost;                                                     // 0x0010(0x0004)
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x000C
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0008)
	int                                                SlotIdx;                                                  // 0x0008(0x0004)
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0018
struct FFireLink
{
	TArray<unsigned char>                              Interactions;                                             // 0x0000(0x0010)
	int                                                PackedProperties_CoverPairRefAndDynamicInfo;              // 0x0010(0x0004)
	unsigned long                                      bFallbackLink : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bDynamicIndexInited : 1;                                  // 0x0014(0x0004)
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0024
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                              // 0x0000(0x0018)
	int                                                PolyId;                                                   // 0x0018(0x0004)
	struct FPointer                                    CachedPoly;                                               // 0x001C(0x0008)
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0060
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                                     // 0x0000(0x0024)
	struct FBasedPosition                              Dest;                                                     // 0x0024(0x0038)
	int                                                Direction;                                                // 0x005C(0x0004)
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0090
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                                // 0x0000(0x0008)
	float                                              SlotValidAfterTime;                                       // 0x0008(0x0004)
	TEnumAsByte<ECoverType>                            ForceCoverType;                                           // 0x000C(0x0001)
	TEnumAsByte<ECoverType>                            CoverType;                                                // 0x000D(0x0001)
	TEnumAsByte<ECoverLocationDescription>             LocationDescription;                                      // 0x000E(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0010(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x001C(0x000C)
	TArray<TEnumAsByte<ECoverAction>>                  Actions;                                                  // 0x0028(0x0010)
	TArray<struct FFireLink>                           FireLinks;                                                // 0x0038(0x0010)
	TArray<struct FFireLink>                           RejectedFireLinks;                                        // 0x0048(0x0010)
	TArray<int>                                        ExposedCoverPackedProperties;                             // 0x0058(0x0010)
	int                                                TurnTargetPackedProperties;                               // 0x0068(0x0004)
	TArray<struct FSlotMoveRef>                        SlipRefs;                                                 // 0x006C(0x0010)
	TArray<struct FCoverInfo>                          OverlapClaimsList;                                        // 0x007C(0x0010)
	unsigned long                                      bLeanLeft : 1;                                            // 0x008C(0x0004)
	unsigned long                                      bLeanRight : 1;                                           // 0x008C(0x0004)
	unsigned long                                      bForceCanPopUp : 1;                                       // 0x008C(0x0004)
	unsigned long                                      bCanPopUp : 1;                                            // 0x008C(0x0004)
	unsigned long                                      bCanMantle : 1;                                           // 0x008C(0x0004)
	unsigned long                                      bCanClimbUp : 1;                                          // 0x008C(0x0004)
	unsigned long                                      bForceCanCoverSlip_Left : 1;                              // 0x008C(0x0004)
	unsigned long                                      bForceCanCoverSlip_Right : 1;                             // 0x008C(0x0004)
	unsigned long                                      bCanCoverSlip_Left : 1;                                   // 0x008C(0x0004)
	unsigned long                                      bCanCoverSlip_Right : 1;                                  // 0x008C(0x0004)
	unsigned long                                      bCanSwatTurn_Left : 1;                                    // 0x008C(0x0004)
	unsigned long                                      bCanSwatTurn_Right : 1;                                   // 0x008C(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x008C(0x0004)
	unsigned long                                      bAllowPopup : 1;                                          // 0x008C(0x0004)
	unsigned long                                      bAllowMantle : 1;                                         // 0x008C(0x0004)
	unsigned long                                      bAllowCoverSlip : 1;                                      // 0x008C(0x0004)
	unsigned long                                      bAllowClimbUp : 1;                                        // 0x008C(0x0004)
	unsigned long                                      bAllowSwatTurn : 1;                                       // 0x008C(0x0004)
	unsigned long                                      bForceNoGroundAdjust : 1;                                 // 0x008C(0x0004)
	unsigned long                                      bPlayerOnly : 1;                                          // 0x008C(0x0004)
	unsigned long                                      bPreferLeanOverPopup : 1;                                 // 0x008C(0x0004)
	unsigned long                                      bDestructible : 1;                                        // 0x008C(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x008C(0x0004)
	unsigned long                                      bFailedToFindSurface : 1;                                 // 0x008C(0x0004)
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                                       // 0x0000(0x000C)
	struct FVector                                     LastSrcLocation;                                          // 0x000C(0x000C)
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0053 (0x0058 - 0x0005)
struct FKSphereElem : public FKColElemBase
{
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x0010(0x0040)
	float                                              Radius;                                                   // 0x0050(0x0004)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x0054(0x0004)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x0054(0x0004)
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x005B (0x0060 - 0x0005)
struct FKBoxElem : public FKColElemBase
{
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x0010(0x0040)
	float                                              X;                                                        // 0x0050(0x0004)
	float                                              Y;                                                        // 0x0054(0x0004)
	float                                              Z;                                                        // 0x0058(0x0004)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x005C(0x0004)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x005C(0x0004)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x0057 (0x005C - 0x0005)
struct FKSphylElem : public FKColElemBase
{
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FMatrix                                     TM;                                                       // 0x0010(0x0040)
	float                                              Radius;                                                   // 0x0050(0x0004)
	float                                              Length;                                                   // 0x0054(0x0004)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x0058(0x0004)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x0058(0x0004)
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x004C
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010)
	struct FPointer                                    RenderInfo;                                               // 0x0040(0x0008)
	unsigned long                                      bSkipCloseAndParallelChecks : 1;                          // 0x0048(0x0004)
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x000C
struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004)
	class UMaterialInterface*                          TheMaterial;                                              // 0x0004(0x0008)
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                                       // 0x0000(0x0004)
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	struct FString                                     Text;                                                     // 0x0000(0x0010)
	float                                              Time;                                                     // 0x0010(0x0004)
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0014
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008)
	float                                              FloatParam;                                               // 0x0008(0x0004)
	class USoundNodeWave*                              WaveParam;                                                // 0x000C(0x0008)
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              InVal;                                                    // 0x000C(0x0004)
	float                                              Length;                                                   // 0x0010(0x0004)
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x0034
struct FMultiCueSplineSoundSlot
{
	class USoundCue*                                   SoundCue;                                                 // 0x0000(0x0008)
	float                                              PitchScale;                                               // 0x0008(0x0004)
	float                                              VolumeScale;                                              // 0x000C(0x0004)
	int                                                StartPoint;                                               // 0x0010(0x0004)
	int                                                EndPoint;                                                 // 0x0014(0x0004)
	struct FDouble                                     LastUpdateTime;                                           // 0x0018(0x0008)
	float                                              SourceInteriorVolume;                                     // 0x0020(0x0004)
	float                                              SourceInteriorLPF;                                        // 0x0024(0x0004)
	float                                              CurrentInteriorVolume;                                    // 0x0028(0x0004)
	float                                              CurrentInteriorLPF;                                       // 0x002C(0x0004)
	unsigned long                                      bPlaying : 1;                                             // 0x0030(0x0004)
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x0034
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                                     // 0x0000(0x0008)
	float                                              PitchScale;                                               // 0x0008(0x0004)
	float                                              VolumeScale;                                              // 0x000C(0x0004)
	int                                                StartPoint;                                               // 0x0010(0x0004)
	int                                                EndPoint;                                                 // 0x0014(0x0004)
	float                                              Weight;                                                   // 0x0018(0x0004)
	struct FDouble                                     LastUpdateTime;                                           // 0x001C(0x0008)
	float                                              SourceInteriorVolume;                                     // 0x0024(0x0004)
	float                                              SourceInteriorLPF;                                        // 0x0028(0x0004)
	float                                              CurrentInteriorVolume;                                    // 0x002C(0x0004)
	float                                              CurrentInteriorLPF;                                       // 0x0030(0x0004)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004)
	unsigned long                                      BSP : 1;                                                  // 0x0000(0x0004)
	unsigned long                                      Static : 1;                                               // 0x0000(0x0004)
	unsigned long                                      Dynamic : 1;                                              // 0x0000(0x0004)
	unsigned long                                      CompositeDynamic : 1;                                     // 0x0000(0x0004)
	unsigned long                                      Skybox : 1;                                               // 0x0000(0x0004)
	unsigned long                                      Unnamed_2 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Unnamed_3 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Unnamed_4 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Unnamed_5 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Unnamed_6 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Unnamed_7 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Cinematic_2 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_3 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_4 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_5 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_6 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_7 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_8 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_9 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      Cinematic_10 : 1;                                         // 0x0000(0x0004)
	unsigned long                                      Cinematic_11 : 1;                                         // 0x0000(0x0004)
	unsigned long                                      Gameplay_2 : 1;                                           // 0x0000(0x0004)
	unsigned long                                      Gameplay_3 : 1;                                           // 0x0000(0x0004)
	unsigned long                                      Gameplay_4 : 1;                                           // 0x0000(0x0004)
	unsigned long                                      Gameplay_5 : 1;                                           // 0x0000(0x0004)
	unsigned long                                      Crowd : 1;                                                // 0x0000(0x0004)
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                              // 0x0000(0x0004)
	unsigned long                                      Nothing : 1;                                              // 0x0000(0x0004)
	unsigned long                                      Pawn : 1;                                                 // 0x0000(0x0004)
	unsigned long                                      Vehicle : 1;                                              // 0x0000(0x0004)
	unsigned long                                      Water : 1;                                                // 0x0000(0x0004)
	unsigned long                                      GameplayPhysics : 1;                                      // 0x0000(0x0004)
	unsigned long                                      EffectPhysics : 1;                                        // 0x0000(0x0004)
	unsigned long                                      Untitled1 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Untitled2 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Untitled3 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Untitled4 : 1;                                            // 0x0000(0x0004)
	unsigned long                                      Cloth : 1;                                                // 0x0000(0x0004)
	unsigned long                                      FluidDrain : 1;                                           // 0x0000(0x0004)
	unsigned long                                      SoftBody : 1;                                             // 0x0000(0x0004)
	unsigned long                                      FracturedMeshPart : 1;                                    // 0x0000(0x0004)
	unsigned long                                      BlockingVolume : 1;                                       // 0x0000(0x0004)
	unsigned long                                      DeadPawn : 1;                                             // 0x0000(0x0004)
	unsigned long                                      Clothing : 1;                                             // 0x0000(0x0004)
	unsigned long                                      ClothingCollision : 1;                                    // 0x0000(0x0004)
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x0010
struct FKCachedConvexData_Mirror
{
	TArray<int>                                        CachedConvexElements;                                     // 0x0000(0x0010)
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008)
	float                                              U;                                                        // 0x0008(0x0004)
	float                                              V;                                                        // 0x000C(0x0004)
	float                                              UL;                                                       // 0x0010(0x0004)
	float                                              VL;                                                       // 0x0014(0x0004)
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008)
	struct FVector2D                                   V1_Pos;                                                   // 0x0010(0x0008)
	struct FVector2D                                   V1_UV;                                                    // 0x0018(0x0008)
	struct FVector2D                                   V2_Pos;                                                   // 0x0020(0x0008)
	struct FVector2D                                   V2_UV;                                                    // 0x0028(0x0008)
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                                   // 0x0000(0x0008)
	class AActor*                                      Destination;                                              // 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0000(0x0008)
	struct FPointer                                    PlatformData;                                             // 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0010
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0008)
	int                                                TeamID;                                                   // 0x0008(0x0004)
	int                                                Score;                                                    // 0x000C(0x0004)
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004)
	unsigned long                                      bLockOutgoing : 1;                                        // 0x000C(0x0004)
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0010
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0008)
	TEnumAsByte<ENATType>                              NatType;                                                  // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      bLostConnectionToHost : 1;                                // 0x000C(0x0004)
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     NewLoc;                                                   // 0x0008(0x000C)
	struct FVector                                     NewVel;                                                   // 0x0014(0x000C)
	class AActor*                                      NewBase;                                                  // 0x0020(0x0008)
	struct FVector                                     NewFloor;                                                 // 0x0028(0x000C)
	unsigned char                                      bAckGoodMove;                                             // 0x0034(0x0001)
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	TEnumAsByte<EInputTypes>                           Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004)
	float                                              TimeDelta;                                                // 0x0008(0x0004)
	TEnumAsByte<EInputMatchAction>                     Action;                                                   // 0x000C(0x0001)
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0048
struct FInputMatchRequest
{
	TArray<struct FInputEntry>                         Inputs;                                                   // 0x0000(0x0010)
	class AActor*                                      MatchActor;                                               // 0x0010(0x0008)
	struct FName                                       MatchFuncName;                                            // 0x0018(0x0008)
	struct FScriptDelegate                             MatchDelegate;                                            // 0x0020(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       FailedFuncName;                                           // 0x0030(0x0008)
	struct FName                                       RequestName;                                              // 0x0038(0x0008)
	int                                                MatchIdx;                                                 // 0x0040(0x0004)
	float                                              LastMatchTime;                                            // 0x0044(0x0004)
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C)
	struct FString                                     DebugText;                                                // 0x0020(0x0010)
	float                                              TimeRemaining;                                            // 0x0030(0x0004)
	float                                              Duration;                                                 // 0x0034(0x0004)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004)
	unsigned long                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0004)
	unsigned long                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0004)
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C)
	class UFont*                                       Font;                                                     // 0x004C(0x0008)
	struct FVector                                     ScreenOffset;                                             // 0x0054(0x000C)
};

// ScriptStruct Engine.PlayerController.HudDebugTextInfo
// 0x0014
struct FHudDebugTextInfo
{
	struct FString                                     DebugText;                                                // 0x0000(0x0010)
	struct FColor                                      TextColor;                                                // 0x0010(0x0004)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x003C
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004)
	float                                              FloatValue;                                               // 0x0010(0x0004)
	struct FString                                     StringValue;                                              // 0x0014(0x0010)
	struct FString                                     StringValue2;                                             // 0x0024(0x0010)
	class UObject*                                     ObjectValue;                                              // 0x0034(0x0008)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0040
struct FPlatformInterfaceDelegateResult
{
	unsigned long                                      bSuccessful : 1;                                          // 0x0000(0x0004)
	struct FPlatformInterfaceData                      Data;                                                     // 0x0004(0x003C)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0020
struct FNotificationMessageInfo
{
	struct FString                                     Key;                                                      // 0x0000(0x0010)
	struct FString                                     Value;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0028
struct FNotificationInfo
{
	unsigned long                                      bIsLocal : 1;                                             // 0x0000(0x0004)
	struct FString                                     MessageBody;                                              // 0x0004(0x0010)
	int                                                BadgeNumber;                                              // 0x0014(0x0004)
	TArray<struct FNotificationMessageInfo>            MessageInfo;                                              // 0x0018(0x0010)
};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// 0x0005
struct FSaveSlotOperation
{
	int                                                SlotIndex;                                                // 0x0000(0x0004)
	TEnumAsByte<ESaveSlotOperationEnum>                SlotOperation;                                            // 0x0004(0x0001)
};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// 0x0014
struct FSetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                                // 0x0000(0x0004)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// 0x0014
struct FGetSaveDataCallbackStruct
{
	int                                                SlotIndex;                                                // 0x0000(0x0004)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                                    // 0x0000(0x0004)
	float                                              KeyOut;                                                   // 0x0004(0x0004)
	unsigned long                                      TangentsValid : 1;                                        // 0x0008(0x0004)
	float                                              TangentIn;                                                // 0x000C(0x0004)
	float                                              TangentOut;                                               // 0x0010(0x0004)
	TEnumAsByte<EInterpCurveMode>                      IntepMode;                                                // 0x0014(0x0001)
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004)
	int                                                StartV;                                                   // 0x0004(0x0004)
	int                                                USize;                                                    // 0x0008(0x0004)
	int                                                VSize;                                                    // 0x000C(0x0004)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004)
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00A8
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010)
	float                                              Height;                                                   // 0x0010(0x0004)
	unsigned long                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0004)
	unsigned long                                      bEnableBold : 1;                                          // 0x0014(0x0004)
	unsigned long                                      bEnableItalic : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bEnableUnderline : 1;                                     // 0x0014(0x0004)
	unsigned long                                      bAlphaOnly : 1;                                           // 0x0014(0x0004)
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x001C(0x0010)
	struct FString                                     UnicodeRange;                                             // 0x002C(0x0010)
	struct FString                                     CharsFilePath;                                            // 0x003C(0x0010)
	struct FString                                     CharsFileWildcard;                                        // 0x004C(0x0010)
	unsigned long                                      bCreatePrintableOnly : 1;                                 // 0x005C(0x0004)
	unsigned long                                      bIncludeASCIIRange : 1;                                   // 0x005C(0x0004)
	struct FLinearColor                                ForegroundColor;                                          // 0x0060(0x0010)
	unsigned long                                      bEnableDropShadow : 1;                                    // 0x0070(0x0004)
	int                                                TexturePageWidth;                                         // 0x0074(0x0004)
	int                                                TexturePageMaxHeight;                                     // 0x0078(0x0004)
	int                                                XPadding;                                                 // 0x007C(0x0004)
	int                                                YPadding;                                                 // 0x0080(0x0004)
	int                                                ExtendBoxTop;                                             // 0x0084(0x0004)
	int                                                ExtendBoxBottom;                                          // 0x0088(0x0004)
	int                                                ExtendBoxRight;                                           // 0x008C(0x0004)
	int                                                ExtendBoxLeft;                                            // 0x0090(0x0004)
	unsigned long                                      bEnableLegacyMode : 1;                                    // 0x0094(0x0004)
	int                                                Kerning;                                                  // 0x0098(0x0004)
	unsigned long                                      bUseDistanceFieldAlpha : 1;                               // 0x009C(0x0004)
	int                                                DistanceFieldScaleFactor;                                 // 0x00A0(0x0004)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A4(0x0004)
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                            // 0x0000(0x0001)
	unsigned char                                      RightAmplitude;                                           // 0x0001(0x0001)
	TEnumAsByte<EWaveformFunction>                     LeftFunction;                                             // 0x0002(0x0001)
	TEnumAsByte<EWaveformFunction>                     RightFunction;                                            // 0x0003(0x0001)
	float                                              Duration;                                                 // 0x0004(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x0030
struct FGameplayEventsHeader
{
	int                                                EngineVersion;                                            // 0x0000(0x0004)
	int                                                StatsWriterVersion;                                       // 0x0004(0x0004)
	int                                                StreamOffset;                                             // 0x0008(0x0004)
	int                                                AggregateOffset;                                          // 0x000C(0x0004)
	int                                                FooterOffset;                                             // 0x0010(0x0004)
	int                                                TotalStreamSize;                                          // 0x0014(0x0004)
	int                                                FileSize;                                                 // 0x0018(0x0004)
	struct FString                                     FilterClass;                                              // 0x001C(0x0010)
	int                                                Flags;                                                    // 0x002C(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x0088
struct FGameSessionInformation
{
	int                                                AppTitleID;                                               // 0x0000(0x0004)
	int                                                PlatformType;                                             // 0x0004(0x0004)
	struct FString                                     Language;                                                 // 0x0008(0x0010)
	struct FString                                     GameplaySessionTimestamp;                                 // 0x0018(0x0010)
	float                                              GameplaySessionStartTime;                                 // 0x0028(0x0004)
	float                                              GameplaySessionEndTime;                                   // 0x002C(0x0004)
	unsigned long                                      bGameplaySessionInProgress : 1;                           // 0x0030(0x0004)
	struct FString                                     GameplaySessionID;                                        // 0x0034(0x0010)
	struct FString                                     GameClassName;                                            // 0x0044(0x0010)
	struct FString                                     MapName;                                                  // 0x0054(0x0010)
	struct FString                                     MapURL;                                                   // 0x0064(0x0010)
	int                                                SessionInstance;                                          // 0x0074(0x0004)
	int                                                GameTypeId;                                               // 0x0078(0x0004)
	struct FUniqueNetId                                OwningNetId;                                              // 0x007C(0x0008)
	int                                                PlaylistId;                                               // 0x0084(0x0004)
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0024
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                           // 0x0000(0x0008)
	struct FString                                     PlayerName;                                               // 0x0008(0x0010)
	struct FUniqueNetId                                UniqueId;                                                 // 0x0018(0x0008)
	unsigned long                                      bIsBot : 1;                                               // 0x0020(0x0004)
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x001C
struct FTeamInformation
{
	int                                                TeamIndex;                                                // 0x0000(0x0004)
	struct FString                                     TeamName;                                                 // 0x0004(0x0010)
	struct FColor                                      TeamColor;                                                // 0x0014(0x0004)
	int                                                MaxSize;                                                  // 0x0018(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	TEnumAsByte<EGameStatGroups>                       Group;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004)
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int                                                EventID;                                                  // 0x0000(0x0004)
	struct FName                                       EventName;                                                // 0x0004(0x0008)
	struct FGameStatGroup                              StatGroup;                                                // 0x000C(0x0008)
	int                                                EventDataType;                                            // 0x0014(0x0004)
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                                          // 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                                          // 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                                      // 0x0000(0x0008)
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                            // 0x0000(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0044
struct FEmsFile
{
	struct FString                                     Hash;                                                     // 0x0000(0x0010)
	struct FString                                     DLName;                                                   // 0x0010(0x0010)
	struct FString                                     Filename;                                                 // 0x0020(0x0010)
	int                                                FileSize;                                                 // 0x0030(0x0004)
	struct FString                                     UploadedDateTime;                                         // 0x0034(0x0010)
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0005 (0x0049 - 0x0044)
struct FIniLocFileEntry : public FEmsFile
{
	unsigned long                                      bIsUnicode : 1;                                           // 0x0044(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           ReadState;                                                // 0x0048(0x0001)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0034
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004)
	struct FString                                     CurveName;                                                // 0x000C(0x0010)
	int                                                bHideCurve;                                               // 0x001C(0x0004)
	int                                                bColorCurve;                                              // 0x0020(0x0004)
	int                                                bFloatingPointColorCurve;                                 // 0x0024(0x0004)
	int                                                bClamp;                                                   // 0x0028(0x0004)
	float                                              ClampLow;                                                 // 0x002C(0x0004)
	float                                              ClampHigh;                                                // 0x0030(0x0004)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010)
	float                                              ViewStartInput;                                           // 0x0020(0x0004)
	float                                              ViewEndInput;                                             // 0x0024(0x0004)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004)
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010)
	unsigned long                                      bIsCollapsed : 1;                                         // 0x0020(0x0004)
	unsigned long                                      bIsSelected : 1;                                          // 0x0020(0x0004)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010)
	int                                                GroupIndex;                                               // 0x0018(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	unsigned long                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0004)
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004)
	float                                              SpecularBoost;                                            // 0x0014(0x0004)
	float                                              FullyOccludedSamplesFraction;                             // 0x0018(0x0004)
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0010
struct FBaseAuthSession
{
	int                                                EndPointIP;                                               // 0x0000(0x0004)
	int                                                EndPointPort;                                             // 0x0004(0x0004)
	struct FUniqueNetId                                EndPointUID;                                              // 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x0014 - 0x0010)
struct FLocalAuthSession : public FBaseAuthSession
{
	int                                                SessionUID;                                               // 0x0010(0x0004)
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008 (0x0018 - 0x0010)
struct FAuthSession : public FBaseAuthSession
{
	TEnumAsByte<EAuthStatus>                           AuthStatus;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                AuthTicketUID;                                            // 0x0014(0x0004)
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x000C
struct FMMStats_Timer
{
	unsigned long                                      bInProgress : 1;                                          // 0x0000(0x0004)
	struct FDouble                                     MSecs;                                                    // 0x0004(0x0008)
};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	TEnumAsByte<ESettingsDataType>                     Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value1;                                                   // 0x0004(0x0004)
	struct FPointer                                    Value2;                                                   // 0x0008(0x0008)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0015
struct FSettingsProperty
{
	int                                                PropertyId;                                               // 0x0000(0x0004)
	struct FSettingsData                               Data;                                                     // 0x0004(0x0010)
	TEnumAsByte<EOnlineDataAdvertisementType>          AdvertisementType;                                        // 0x0014(0x0001)
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x001C
struct FOnlineProfileSetting
{
	TEnumAsByte<EOnlineProfilePropertyOwner>           Owner;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FSettingsProperty                           ProfileSetting;                                           // 0x0004(0x0018)
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x004C
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
	struct FString                                     ColumnHeaderText;                                         // 0x000C(0x0010)
	TEnumAsByte<EPropertyValueMappingType>             MappingType;                                              // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FIdToStringMapping>                  ValueMappings;                                            // 0x0020(0x0010)
	TArray<struct FSettingsData>                       PredefinedValues;                                         // 0x0030(0x0010)
	float                                              MinVal;                                                   // 0x0040(0x0004)
	float                                              MaxVal;                                                   // 0x0044(0x0004)
	float                                              RangeIncrement;                                           // 0x0048(0x0004)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
	unsigned long                                      bIsWildcard : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0014
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                                 // 0x0000(0x0004)
	struct FSettingsData                               StatValue;                                                // 0x0004(0x0010)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0038
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0008)
	struct FSettingsData                               Rank;                                                     // 0x0008(0x0010)
	struct FString                                     NickName;                                                 // 0x0018(0x0010)
	TArray<struct FOnlineStatsColumn>                  Columns;                                                  // 0x0028(0x0010)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x001C
struct FColumnMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
	struct FString                                     ColumnName;                                               // 0x000C(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008)
	struct FString                                     InterfaceClassName;                                       // 0x0008(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0008
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0000(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x0014 - 0x0008)
struct FOnlineArbitrationRegistrant : public FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                                // 0x0008(0x0008)
	int                                                Trustworthiness;                                          // 0x0010(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0038
struct FNamedSession
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008)
	struct FPointer                                    SessionInfo;                                              // 0x0008(0x0008)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0010(0x0008)
	TArray<struct FOnlineRegistrant>                   Registrants;                                              // 0x0018(0x0010)
	TArray<struct FOnlineArbitrationRegistrant>        ArbitrationRegistrants;                                   // 0x0028(0x0010)
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010)
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0050
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010)
	struct FString                                     CurrencyType;                                             // 0x0040(0x0010)
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0010
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                                    // 0x0000(0x0008)
	struct FPointer                                    CriticalSection;                                          // 0x0008(0x0008)
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0184
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                             // 0x0000(0x0174)
	class APostProcessVolume*                          LastVolumeUsed;                                           // 0x0174(0x0008)
	float                                              BlendStartTime;                                           // 0x017C(0x0004)
	float                                              LastBlendTime;                                            // 0x0180(0x0004)
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x01A0
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                                 // 0x0000(0x0174)
	unsigned long                                      bBlendingIn : 1;                                          // 0x0174(0x0004)
	unsigned long                                      bBlendingOut : 1;                                         // 0x0174(0x0004)
	float                                              CurrentBlendInTime;                                       // 0x0178(0x0004)
	float                                              CurrentBlendOutTime;                                      // 0x017C(0x0004)
	float                                              BlendInDuration;                                          // 0x0180(0x0004)
	float                                              BlendOutDuration;                                         // 0x0184(0x0004)
	float                                              BlendStartTime;                                           // 0x0188(0x0004)
	struct FInterpCurveFloat                           TimeAlphaCurve;                                           // 0x018C(0x0014)
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	struct FQWord                                      flags0;                                                   // 0x0000(0x0008)
	struct FQWord                                      flags1;                                                   // 0x0008(0x0008)
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000 (0x0010 - 0x0010)
struct FExportShowFlags_Mirror : public FShowFlags_Mirror
{

};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                              // 0x0000(0x0004)
	float                                              MaxPercentY;                                              // 0x0004(0x0004)
	float                                              RecommendedPercentX;                                      // 0x0008(0x0004)
	float                                              RecommendedPercentY;                                      // 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                                    // 0x0000(0x0004)
	float                                              SizeY;                                                    // 0x0004(0x0004)
	float                                              OriginX;                                                  // 0x0008(0x0004)
	float                                              OriginY;                                                  // 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	TArray<struct FPerPlayerSplitscreenData>           PlayerData;                                               // 0x0000(0x0010)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008)
	struct FName                                       PropertyName;                                             // 0x0008(0x0008)
	unsigned long                                      bSpecialProperty : 1;                                     // 0x0010(0x0004)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                                       // 0x0000(0x0004)
	int                                                ValueIndex;                                               // 0x0004(0x0004)
	TEnumAsByte<EOnlineDataAdvertisementType>          AdvertisementType;                                        // 0x0008(0x0001)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x002C
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
	struct FString                                     ColumnHeaderText;                                         // 0x000C(0x0010)
	TArray<struct FStringIdToStringMapping>            ValueMappings;                                            // 0x001C(0x0010)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0034
struct FOverrideSkill
{
	int                                                LeaderboardId;                                            // 0x0000(0x0004)
	TArray<struct FUniqueNetId>                        Players;                                                  // 0x0004(0x0010)
	TArray<struct FDouble>                             Mus;                                                      // 0x0014(0x0010)
	TArray<struct FDouble>                             Sigmas;                                                   // 0x0024(0x0010)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                                       // 0x0000(0x0008)
	struct FString                                     ObjectPropertyValue;                                      // 0x0008(0x0010)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                                  // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                       // 0x0004(0x0008)
	TEnumAsByte<EOnlineGameSearchEntryType>            EntryType;                                                // 0x000C(0x0001)
	TEnumAsByte<EOnlineGameSearchComparisonType>       ComparisonType;                                           // 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	TArray<struct FOnlineGameSearchParameter>          OrParams;                                                 // 0x0000(0x0010)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                                  // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                       // 0x0004(0x0008)
	TEnumAsByte<EOnlineGameSearchEntryType>            EntryType;                                                // 0x000C(0x0001)
	TEnumAsByte<EOnlineGameSearchSortType>             SortType;                                                 // 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	TArray<struct FOnlineGameSearchORClause>           OrClauses;                                                // 0x0000(0x0010)
	TArray<struct FOnlineGameSearchSortClause>         SortClauses;                                              // 0x0010(0x0010)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x0024
struct FRecognisableWord
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     ReferenceWord;                                            // 0x0004(0x0010)
	struct FString                                     PhoneticWord;                                             // 0x0014(0x0010)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0060
struct FRecogVocabulary
{
	TArray<struct FRecognisableWord>                   WhoDictionary;                                            // 0x0000(0x0010)
	TArray<struct FRecognisableWord>                   WhatDictionary;                                           // 0x0010(0x0010)
	TArray<struct FRecognisableWord>                   WhereDictionary;                                          // 0x0020(0x0010)
	struct FString                                     VocabName;                                                // 0x0030(0x0010)
	TArray<unsigned char>                              VocabData;                                                // 0x0040(0x0010)
	TArray<unsigned char>                              WorkingVocabData;                                         // 0x0050(0x0010)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0014
struct FRecogUserData
{
	int                                                ActiveVocabularies;                                       // 0x0000(0x0004)
	TArray<unsigned char>                              UserData;                                                 // 0x0004(0x0010)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0014
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008)
	unsigned long                                      bEnableShadowCasting : 1;                                 // 0x0008(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned long                                      bEnableCollision : 1;                                     // 0x0010(0x0004)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0010
struct FStaticMeshLODInfo
{
	TArray<struct FStaticMeshLODElement>               Elements;                                                 // 0x0000(0x0010)
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	unsigned long                                      bCastShadowAsMasked : 1;                                  // 0x0000(0x0004)
	float                                              EmissiveBoost;                                            // 0x0004(0x0004)
	float                                              DiffuseBoost;                                             // 0x0008(0x0004)
	float                                              SpecularBoost;                                            // 0x000C(0x0004)
	float                                              ExportResolutionScale;                                    // 0x0010(0x0004)
	float                                              DistanceFieldPenumbraScale;                               // 0x0014(0x0004)
	unsigned long                                      bOverrideCastShadowAsMasked : 1;                          // 0x0018(0x0004)
	unsigned long                                      bOverrideEmissiveBoost : 1;                               // 0x0018(0x0004)
	unsigned long                                      bOverrideDiffuseBoost : 1;                                // 0x0018(0x0004)
	unsigned long                                      bOverrideSpecularBoost : 1;                               // 0x0018(0x0004)
	unsigned long                                      bOverrideExportResolutionScale : 1;                       // 0x0018(0x0004)
	unsigned long                                      bOverrideDistanceFieldPenumbraScale : 1;                  // 0x0018(0x0004)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x0010
struct FKCachedConvexDataElement
{
	TArray<unsigned char>                              ConvexElementData;                                        // 0x0000(0x0010)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x0010
struct FKCachedConvexData
{
	TArray<struct FKCachedConvexDataElement>           CachedConvexElements;                                     // 0x0000(0x0010)
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	unsigned long                                      bLit : 1;                                                 // 0x0000(0x0004)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010)
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                                  // 0x0000(0x0008)
	struct FPointer                                    Next;                                                     // 0x0008(0x0008)
	struct FPointer                                    PrevLink;                                                 // 0x0010(0x0008)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                         // 0x0000(0x0008)
	struct FDouble                                     NextRepeatTime;                                           // 0x0008(0x0008)
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0014 - 0x0010)
struct FUIAxisEmulationData : public FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0010(0x0004)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                             // 0x0000(0x0008)
	struct FName                                       AdjacentAxisInputKey;                                     // 0x0008(0x0008)
	unsigned long                                      bEmulateButtonPress : 1;                                  // 0x0010(0x0004)
	struct FName                                       InputKeyToEmulate[0x2];                                   // 0x0014(0x0008)
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FPackedNormal                               Normal;                                                   // 0x000C(0x0004)
	struct FColor                                      Color;                                                    // 0x0010(0x0004)
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0040
struct FStaticMeshComponentLODInfo
{
	TArray<class UShadowMap2D*>                        ShadowMaps;                                               // 0x0000(0x0010)
	TArray<class UObject*>                             ShadowVertexBuffers;                                      // 0x0010(0x0010)
	struct FPointer                                    LightMap;                                                 // 0x0020(0x0008)
	struct FPointer                                    OverrideVertexColors;                                     // 0x0028(0x0008)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0030(0x0010)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                                     // 0x0000(0x0008)
	class UStaticMesh*                                 LeanLeft;                                                 // 0x0008(0x0008)
	class UStaticMesh*                                 LeanRight;                                                // 0x0010(0x0008)
	class UStaticMesh*                                 LeanLeftPref;                                             // 0x0018(0x0008)
	class UStaticMesh*                                 LeanRightPref;                                            // 0x0020(0x0008)
	class UStaticMesh*                                 Climb;                                                    // 0x0028(0x0008)
	class UStaticMesh*                                 Mantle;                                                   // 0x0030(0x0008)
	class UStaticMesh*                                 SlipLeft;                                                 // 0x0038(0x0008)
	class UStaticMesh*                                 SlipRight;                                                // 0x0040(0x0008)
	class UStaticMesh*                                 SwatLeft;                                                 // 0x0048(0x0008)
	class UStaticMesh*                                 SwatRight;                                                // 0x0050(0x0008)
	class UStaticMesh*                                 PopUp;                                                    // 0x0058(0x0008)
	class UStaticMesh*                                 PlayerOnly;                                               // 0x0060(0x0008)
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                                    // 0x0000(0x0008)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0010
struct FPathStore
{
	TArray<struct FEdgePointer>                        EdgeList;                                                 // 0x0000(0x0010)
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0034
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                                // 0x0000(0x0008)
	unsigned long                                      bCanMantle : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bNeedsMantleValidityTest : 1;                             // 0x0008(0x0004)
	unsigned long                                      bAbleToSearch : 1;                                        // 0x0008(0x0004)
	struct FVector                                     SearchExtent;                                             // 0x000C(0x000C)
	float                                              SearchLaneMultiplier;                                     // 0x0018(0x0004)
	struct FVector                                     SearchStart;                                              // 0x001C(0x000C)
	float                                              MaxDropHeight;                                            // 0x0028(0x0004)
	float                                              MinWalkableZ;                                             // 0x002C(0x0004)
	float                                              MaxHoverDistance;                                         // 0x0030(0x0004)
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x000C
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                                     // 0x0000(0x0008)
	int                                                ExtraCost;                                                // 0x0008(0x0004)
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	unsigned long                                      bReplicated : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bSavedPosition : 1;                                       // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C)
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                              // 0x0000(0x0008)
	class AActor*                                      TargetActor;                                              // 0x0008(0x0008)
};

// ScriptStruct Engine.Actor.ActorTickDropRate
// 0x0014
struct FActorTickDropRate
{
	float                                              NextChangeSeconds;                                        // 0x0000(0x0004)
	float                                              AccumSkipDeltaSeconds;                                    // 0x0004(0x0004)
	int                                                DesiredSkipTicks;                                         // 0x0008(0x0004)
	int                                                CurrentSkipTicks;                                         // 0x000C(0x0004)
	unsigned long                                      bUseable : 1;                                             // 0x0010(0x0004)
	unsigned long                                      bForceTickOnce : 1;                                       // 0x0010(0x0004)
	unsigned long                                      bForceVisibleTick : 1;                                    // 0x0010(0x0004)
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x000C
struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004)
	class UMaterialInterface*                          TheMaterial;                                              // 0x0004(0x0008)
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              TargetStrength;                                           // 0x0004(0x0004)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0018
struct FAnimNotifyEvent
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAnimNotify*                                 Notify;                                                   // 0x0004(0x0008)
	struct FName                                       Comment;                                                  // 0x000C(0x0008)
	float                                              Duration;                                                 // 0x0014(0x0004)
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	float                                              ParameterValue;                                           // 0x0008(0x0004)
	float                                              InterpTime;                                               // 0x000C(0x0004)
	float                                              WarmupTime;                                               // 0x0010(0x0004)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                             // 0x0000(0x0004)
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                                          // 0x0004(0x0018)
	struct FTrailSocketSamplePoint                     ControlPointSample;                                       // 0x001C(0x0018)
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                                         // 0x0034(0x0018)
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                             // 0x0000(0x0004)
	struct FVector                                     FirstEdgeSample;                                          // 0x0004(0x000C)
	struct FVector                                     ControlPointSample;                                       // 0x0010(0x000C)
	struct FVector                                     SecondEdgeSample;                                         // 0x001C(0x000C)
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008)
	float                                              Weight;                                                   // 0x0008(0x0004)
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0020
struct FAnimBlendChild
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	class UAnimNode*                                   Anim;                                                     // 0x0008(0x0008)
	float                                              Weight;                                                   // 0x0010(0x0004)
	float                                              BlendWeight;                                              // 0x0014(0x0004)
	unsigned long                                      bMirrorSkeleton : 1;                                      // 0x0018(0x0004)
	unsigned long                                      bIsAdditive : 1;                                          // 0x0018(0x0004)
	int                                                DrawY;                                                    // 0x001C(0x0004)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	float                                              PerBoneWeightIncrease;                                    // 0x0008(0x0004)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0020
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008)
	class UAnimNodeBlendBase*                          CachedNode;                                               // 0x0008(0x0008)
	class UAnimNodeSlot*                               CachedSlotNode;                                           // 0x0010(0x0008)
	TEnumAsByte<EWeightCheck>                          WeightCheck;                                              // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ChildIndex;                                               // 0x001C(0x0004)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                                // 0x0000(0x0020)
	struct FWeightNodeRule                             SecondNode;                                               // 0x0020(0x0020)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0050
struct FPerBoneMaskInfo
{
	TArray<struct FBranchInfo>                         BranchList;                                               // 0x0000(0x0010)
	float                                              DesiredWeight;                                            // 0x0010(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0014(0x0004)
	TArray<struct FWeightRule>                         WeightRuleList;                                           // 0x0018(0x0010)
	unsigned long                                      bWeightBasedOnNodeRules : 1;                              // 0x0028(0x0004)
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;                      // 0x0028(0x0004)
	unsigned long                                      bPendingBlend : 1;                                        // 0x0028(0x0004)
	TArray<float>                                      PerBoneWeights;                                           // 0x002C(0x0010)
	TArray<unsigned char>                              TransformReqBone;                                         // 0x003C(0x0010)
	int                                                TransformReqBoneIndex;                                    // 0x004C(0x0004)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                               // 0x0000(0x0010)
	struct FVector                                     Translation;                                              // 0x0010(0x000C)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                                       // 0x0010(0x0020)
	struct FAimTransform                               LC;                                                       // 0x0030(0x0020)
	struct FAimTransform                               LD;                                                       // 0x0050(0x0020)
	struct FAimTransform                               CU;                                                       // 0x0070(0x0020)
	struct FAimTransform                               CC;                                                       // 0x0090(0x0020)
	struct FAimTransform                               CD;                                                       // 0x00B0(0x0020)
	struct FAimTransform                               RU;                                                       // 0x00D0(0x0020)
	struct FAimTransform                               RC;                                                       // 0x00F0(0x0020)
	struct FAimTransform                               RD;                                                       // 0x0110(0x0020)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0070
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008)
	struct FVector2D                                   HorizontalRange;                                          // 0x0008(0x0008)
	struct FVector2D                                   VerticalRange;                                            // 0x0010(0x0008)
	TArray<struct FAimComponent>                       AimComponents;                                            // 0x0018(0x0010)
	struct FName                                       AnimName_LU;                                              // 0x0028(0x0008)
	struct FName                                       AnimName_LC;                                              // 0x0030(0x0008)
	struct FName                                       AnimName_LD;                                              // 0x0038(0x0008)
	struct FName                                       AnimName_CU;                                              // 0x0040(0x0008)
	struct FName                                       AnimName_CC;                                              // 0x0048(0x0008)
	struct FName                                       AnimName_CD;                                              // 0x0050(0x0008)
	struct FName                                       AnimName_RU;                                              // 0x0058(0x0008)
	struct FName                                       AnimName_RC;                                              // 0x0060(0x0008)
	struct FName                                       AnimName_RD;                                              // 0x0068(0x0008)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004)
	unsigned char                                      LoopCountMin;                                             // 0x0004(0x0001)
	unsigned char                                      LoopCountMax;                                             // 0x0005(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0008(0x0004)
	struct FVector2D                                   PlayRateRange;                                            // 0x000C(0x0008)
	unsigned long                                      bStillFrame : 1;                                          // 0x0014(0x0004)
	unsigned char                                      LoopCount;                                                // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastPosition;                                             // 0x001C(0x0004)
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	TArray<float>                                      TargetPerBoneWeight;                                      // 0x0000(0x0010)
	struct FName                                       InitTargetStartBone;                                      // 0x0010(0x0008)
	float                                              InitPerBoneIncrease;                                      // 0x0018(0x0004)
	struct FName                                       OldStartBone;                                             // 0x001C(0x0008)
	float                                              OldBoneIncrease;                                          // 0x0024(0x0004)
	TArray<unsigned char>                              TargetRequiredBones;                                      // 0x0028(0x0010)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                 // 0x0000(0x0010)
	class UAnimNodeSequence*                           MasterNode;                                               // 0x0010(0x0008)
	struct FName                                       GroupName;                                                // 0x0018(0x0008)
	unsigned long                                      bFireSlaveNotifies : 1;                                   // 0x0020(0x0004)
	float                                              RateScale;                                                // 0x0024(0x0004)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                 // 0x0000(0x0010)
	class UAnimNodeSequence*                           SynchMaster;                                              // 0x0010(0x0008)
	class UAnimNodeSequence*                           NotifyMaster;                                             // 0x0018(0x0008)
	struct FName                                       GroupName;                                                // 0x0020(0x0008)
	float                                              RateScale;                                                // 0x0028(0x0004)
	float                                              SynchPctPosition;                                         // 0x002C(0x0004)
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x001C
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	class USkelControlBase*                            ControlHead;                                              // 0x0008(0x0008)
	class USkelControlBase*                            ControlHeadOriginal;                                      // 0x0010(0x0008)
	int                                                DrawY;                                                    // 0x0018(0x0004)
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0020
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008)
	class USkeletalMesh*                               PreviewSkelMesh;                                          // 0x0008(0x0008)
	TArray<class UMorphTargetSet*>                     PreviewMorphSets;                                         // 0x0010(0x0010)
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0020
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008)
	struct FName                                       SocketName;                                               // 0x0008(0x0008)
	class USkeletalMesh*                               PreviewSkelMesh;                                          // 0x0010(0x0008)
	class UStaticMesh*                                 PreviewStaticMesh;                                        // 0x0018(0x0008)
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                          // 0x0008(0x0010)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                              // 0x0000(0x0008)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008)
	int                                                AnimLinkupIndex;                                          // 0x0010(0x0004)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0020
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	struct FAnimInfo                                   AnimInfo;                                                 // 0x0008(0x0014)
	float                                              Weight;                                                   // 0x001C(0x0004)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	TArray<class UMorphNodeBase*>                      ChildNodes;                                               // 0x0000(0x0010)
	struct FName                                       ConnName;                                                 // 0x0010(0x0008)
	int                                                DrawY;                                                    // 0x0018(0x0004)
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                                    // 0x0000(0x0004)
	float                                              TargetWeight;                                             // 0x0004(0x0004)
};

// ScriptStruct Engine.SkelControlTrail.AngularLimitInfo
// 0x0014
struct FAngularLimitInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	float                                              Swing1LimitAngle;                                         // 0x0008(0x0004)
	float                                              Swing2LimitAngle;                                         // 0x000C(0x0004)
	float                                              TwistLimitAngle;                                          // 0x0010(0x0004)
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                                          // 0x0000(0x0008)
	TArray<struct FTimeModifier>                       Modifiers;                                                // 0x0008(0x0010)
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.AnimSequence.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010)
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0014
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010)
	int                                                BipedRootIndex;                                           // 0x0010(0x0004)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0014
struct FActiveDecalInfo
{
	int                                                DecalIndex;                                               // 0x0000(0x0004)
	class UDecalComponent*                             Decal;                                                    // 0x0004(0x0008)
	float                                              LifetimeRemaining;                                        // 0x000C(0x0004)
	unsigned long                                      bRemoveNoReceivers : 1;                                   // 0x0010(0x0004)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008)
	struct FPointer                                    RenderData;                                               // 0x0008(0x0008)
};

// ScriptStruct Engine.Material.MaterialInput
// 0x0034
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0008)
	int                                                OutputIndex;                                              // 0x0008(0x0004)
	struct FString                                     InputName;                                                // 0x000C(0x0010)
	int                                                Mask;                                                     // 0x001C(0x0004)
	int                                                MaskR;                                                    // 0x0020(0x0004)
	int                                                MaskG;                                                    // 0x0024(0x0004)
	int                                                MaskB;                                                    // 0x0028(0x0004)
	int                                                MaskA;                                                    // 0x002C(0x0004)
	int                                                GCC64_Padding;                                            // 0x0030(0x0004)
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x003C - 0x0034)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x0034(0x0004)
	struct FColor                                      Constant;                                                 // 0x0038(0x0004)
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x003C - 0x0034)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x0034(0x0004)
	float                                              Constant;                                                 // 0x0038(0x0004)
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x0044 - 0x0034)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x0034(0x0004)
	struct FVector                                     Constant;                                                 // 0x0038(0x000C)
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0040 - 0x0034)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x0034(0x0004)
	float                                              ConstantX;                                                // 0x0038(0x0004)
	float                                              ConstantY;                                                // 0x003C(0x0004)
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010)
	class UMaterialFunction*                           Function;                                                 // 0x0010(0x0008)
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x0014
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	unsigned long                                      bIsShutdown : 1;                                          // 0x0000(0x0004)
	TArray<unsigned char>                              FragmentVis;                                              // 0x0004(0x0010)
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;                                               // 0x0000(0x0004)
	struct FVector                                     InitialVel;                                               // 0x0004(0x000C)
	struct FVector                                     InitialAngVel;                                            // 0x0010(0x000C)
	float                                              RelativeScale;                                            // 0x001C(0x0004)
	unsigned long                                      bExplosion : 1;                                           // 0x0020(0x0004)
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                                // 0x0000(0x0004)
	float                                              ReFireDelay;                                              // 0x0004(0x0004)
	class UParticleSystem*                             Effect;                                                   // 0x0008(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0010(0x0008)
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0014
struct FFragmentGroup
{
	TArray<int>                                        FragmentIndices;                                          // 0x0000(0x0010)
	unsigned long                                      bGroupIsRooted : 1;                                       // 0x0010(0x0004)
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040)
	struct FVector2D                                   LightmapUVBias;                                           // 0x0040(0x0008)
	struct FVector2D                                   ShadowmapUVBias;                                          // 0x0048(0x0008)
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                                  // 0x0000(0x0008)
	struct FPointer                                    LightMap;                                                 // 0x0008(0x0008)
	class UTexture2D*                                  LightmapTexture;                                          // 0x0010(0x0008)
	class UShadowMap2D*                                ShadowmapTexture;                                         // 0x0018(0x0008)
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008)
	float                                              StartRoll;                                                // 0x0020(0x0004)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C)
	struct FVector                                     EndTangent;                                               // 0x0038(0x000C)
	struct FVector2D                                   EndScale;                                                 // 0x0044(0x0008)
	float                                              EndRoll;                                                  // 0x004C(0x0004)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	TArray<int>                                        LODMaterialMap;                                           // 0x0000(0x0010)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004)
	float                                              DamageSpread;                                             // 0x0004(0x0004)
	float                                              ImpactDamage;                                             // 0x0008(0x0004)
	float                                              ImpactResistance;                                         // 0x000C(0x0004)
	int                                                DefaultImpactDamageDepth;                                 // 0x0010(0x0004)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        // 0x0000(0x0004)
	float                                              DebrisLifetimeMax;                                        // 0x0004(0x0004)
	float                                              DebrisMaxSeparationMin;                                   // 0x0008(0x0004)
	float                                              DebrisMaxSeparationMax;                                   // 0x000C(0x0004)
	struct FBox                                        ValidBounds;                                              // 0x0010(0x001C)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                // 0x0000(0x0004)
	float                                              ImpactVelocityThreshold;                                  // 0x0004(0x0004)
	float                                              MaxChunkSpeed;                                            // 0x0008(0x0004)
	float                                              MassScaleExponent;                                        // 0x000C(0x0004)
	float                                              MassScale;                                                // 0x0010(0x0004)
	float                                              FractureImpulseScale;                                     // 0x0014(0x0004)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	unsigned long                                      ACCUMULATE_DAMAGE : 1;                                    // 0x0000(0x0004)
	unsigned long                                      ASSET_DEFINED_SUPPORT : 1;                                // 0x0000(0x0004)
	unsigned long                                      WORLD_SUPPORT : 1;                                        // 0x0000(0x0004)
	unsigned long                                      DEBRIS_TIMEOUT : 1;                                       // 0x0000(0x0004)
	unsigned long                                      DEBRIS_MAX_SEPARATION : 1;                                // 0x0000(0x0004)
	unsigned long                                      CRUMBLE_SMALLEST_CHUNKS : 1;                              // 0x0000(0x0004)
	unsigned long                                      ACCURATE_RAYCASTS : 1;                                    // 0x0000(0x0004)
	unsigned long                                      USE_VALID_BOUNDS : 1;                                     // 0x0000(0x0004)
	unsigned long                                      FORM_EXTENDED_STRUCTURES : 1;                             // 0x0000(0x0004)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	unsigned long                                      TAKE_IMPACT_DAMAGE : 1;                                   // 0x0000(0x0004)
	unsigned long                                      IGNORE_POSE_UPDATES : 1;                                  // 0x0000(0x0004)
	unsigned long                                      IGNORE_RAYCAST_CALLBACKS : 1;                             // 0x0000(0x0004)
	unsigned long                                      IGNORE_CONTACT_CALLBACKS : 1;                             // 0x0000(0x0004)
	unsigned long                                      USER_FLAG_1 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      USER_FLAG_2 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      USER_FLAG_3 : 1;                                          // 0x0000(0x0004)
	unsigned long                                      USER_FLAG_4 : 1;                                          // 0x0000(0x0004)
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0004(0x0001)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                                         // 0x0000(0x0014)
	struct FNxDestructibleDebrisParameters             DebrisParameters;                                         // 0x0014(0x002C)
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                                       // 0x0040(0x0018)
	float                                              DamageThreshold;                                          // 0x0058(0x0004)
	float                                              DamageToRadius;                                           // 0x005C(0x0004)
	float                                              DamageCap;                                                // 0x0060(0x0004)
	float                                              ForceToDamage;                                            // 0x0064(0x0004)
	float                                              ImpactVelocityThreshold;                                  // 0x0068(0x0004)
	float                                              MaterialStrength;                                         // 0x006C(0x0004)
	float                                              DamageToPercentDeformation;                               // 0x0070(0x0004)
	float                                              DeformationPercentLimit;                                  // 0x0074(0x0004)
	unsigned long                                      bFormExtendedStructures : 1;                              // 0x0078(0x0004)
	int                                                SupportDepth;                                             // 0x007C(0x0004)
	int                                                MinimumFractureDepth;                                     // 0x0080(0x0004)
	int                                                DebrisDepth;                                              // 0x0084(0x0004)
	int                                                EssentialDepth;                                           // 0x0088(0x0004)
	float                                              DebrisLifetimeMin;                                        // 0x008C(0x0004)
	float                                              DebrisLifetimeMax;                                        // 0x0090(0x0004)
	float                                              DebrisMaxSeparationMin;                                   // 0x0094(0x0004)
	float                                              DebrisMaxSeparationMax;                                   // 0x0098(0x0004)
	struct FBox                                        ValidBounds;                                              // 0x009C(0x001C)
	float                                              MaxChunkSpeed;                                            // 0x00B8(0x0004)
	float                                              MassScaleExponent;                                        // 0x00BC(0x0004)
	struct FNxDestructibleParametersFlag               Flags;                                                    // 0x00C0(0x0004)
	float                                              GrbVolumeLimit;                                           // 0x00C4(0x0004)
	float                                              GrbParticleSpacing;                                       // 0x00C8(0x0004)
	float                                              FractureImpulseScale;                                     // 0x00CC(0x0004)
	TArray<struct FNxDestructibleDepthParameters>      DepthParameters;                                          // 0x00D0(0x0010)
	int                                                DynamicChunksDominanceGroup;                              // 0x00E0(0x0004)
	unsigned long                                      UseDynamicChunksGroupsMask : 1;                           // 0x00E4(0x0004)
	TEnumAsByte<ERBCollisionChannel>                   DynamicChunksChannel;                                     // 0x00E8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;                         // 0x00EC(0x0004)
};

// ScriptStruct Engine.InterpGroup.PlayerLocationInfo
// 0x0008
struct FPlayerLocationInfo
{
	TEnumAsByte<EMATPLAYER_TYPE>                       MatPlayerType;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bApplyStartAnimBlendWeight : 1;                           // 0x0004(0x0004)
	unsigned long                                      bBackToStartLocation : 1;                                 // 0x0004(0x0004)
	unsigned long                                      bFinishIdleAnimation : 1;                                 // 0x0004(0x0004)
	unsigned long                                      bUsedDummyStartLocation : 1;                              // 0x0004(0x0004)
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008)
	TArray<class UAnimSet*>                            PreviewAnimSets;                                          // 0x0008(0x0010)
	struct FName                                       AnimSeqName;                                              // 0x0018(0x0008)
	struct FVector                                     Location;                                                 // 0x0020(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x002C(0x000C)
	class APawn*                                       PawnInst;                                                 // 0x0038(0x0008)
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	unsigned long                                      Value : 1;                                                // 0x0004(0x0004)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              TransitionTime;                                           // 0x0004(0x0004)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008)
	int                                                ShotNumber;                                               // 0x0010(0x0004)
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FName                                       EventName;                                                // 0x0004(0x0008)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0024
struct FFaceFXTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	struct FString                                     FaceFXGroupName;                                          // 0x0004(0x0010)
	struct FString                                     FaceFXSeqName;                                            // 0x0014(0x0010)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0010
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                           // 0x0000(0x0008)
	class UAkEvent*                                    FaceFXAkEvent;                                            // 0x0008(0x0008)
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x0022
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	struct FName                                       AnimSeqName;                                              // 0x0004(0x0008)
	float                                              AnimStartOffset;                                          // 0x000C(0x0004)
	float                                              AnimEndOffset;                                            // 0x0010(0x0004)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004)
	unsigned long                                      bLooping : 1;                                             // 0x0018(0x0004)
	unsigned long                                      bReverse : 1;                                             // 0x0018(0x0004)
	unsigned long                                      bEnableRootMotion : 1;                                    // 0x0018(0x0004)
	TEnumAsByte<ERootBoneAxis>                         RootBoneOption[0x3];                                      // 0x001C(0x0001)
	TEnumAsByte<ERootRotationOption>                   RootRotationOption[0x3];                                  // 0x001F(0x0001)
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008)
	int                                                MaterialIndex;                                            // 0x0008(0x0004)
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                                   // 0x0000(0x0008)
};

// ScriptStruct Engine.EngineTypes.InterpTrackMaterialRef
// 0x0018
struct FInterpTrackMaterialRef
{
	class UInterpTrackMaterialEffect*                  Track;                                                    // 0x0000(0x0008)
	TArray<int>                                        KeyFrameIndices;                                          // 0x0008(0x0010)
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0038
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                           // 0x0000(0x0008)
	TArray<struct FPrimitiveMaterialRef>               AffectedMaterialRefs;                                     // 0x0008(0x0010)
	TArray<struct FPostProcessMaterialRef>             AffectedPPChainMaterialRefs;                              // 0x0018(0x0010)
	TArray<struct FInterpTrackMaterialRef>             AffectedInterpTrackMaterialRefs;                          // 0x0028(0x0010)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008)
	float                                              Time;                                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010)
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TEnumAsByte<EHeadTrackingAction>                   Action;                                                   // 0x0004(0x0001)
};

// ScriptStruct Engine.InterpTrackMaterialEffect.MaterialEffectTrackKey
// 0x001C
struct FMaterialEffectTrackKey
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008)
	struct FName                                       EffectName;                                               // 0x0008(0x0008)
	float                                              Time;                                                     // 0x0010(0x0004)
	class UMaterialInstanceConstant*                   RuntimeMIC;                                               // 0x0014(0x0008)
};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// 0x000C
struct FNotifyTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAnimNotify*                                 Notify;                                                   // 0x0004(0x0008)
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001)
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0014
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Volume;                                                   // 0x0004(0x0004)
	float                                              Pitch;                                                    // 0x0008(0x0004)
	class USoundCue*                                   Sound;                                                    // 0x000C(0x0008)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001)
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	unsigned long                                      bAllowAmbientOcclusion : 1;                               // 0x0000(0x0004)
	unsigned long                                      bAllowDominantWholeSceneDynamicShadows : 1;               // 0x0000(0x0004)
	unsigned long                                      bAllowMotionBlurSkinning : 1;                             // 0x0000(0x0004)
	unsigned long                                      bAllowTemporalAA : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bAllowLightShafts : 1;                                    // 0x0000(0x0004)
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                     // 0x0000(0x0010)
	TArray<float>                                      MICResetFloats;                                           // 0x0010(0x0010)
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                     // 0x0000(0x0010)
	TArray<struct FVector>                             MICResetVectors;                                          // 0x0010(0x0010)
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	struct FString                                     OutputName;                                               // 0x0000(0x0010)
	int                                                Mask;                                                     // 0x0010(0x0004)
	int                                                MaskR;                                                    // 0x0014(0x0004)
	int                                                MaskG;                                                    // 0x0018(0x0004)
	int                                                MaskB;                                                    // 0x001C(0x0004)
	int                                                MaskA;                                                    // 0x0020(0x0004)
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0034
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0008)
	int                                                OutputIndex;                                              // 0x0008(0x0004)
	struct FString                                     InputName;                                                // 0x000C(0x0010)
	int                                                Mask;                                                     // 0x001C(0x0004)
	int                                                MaskR;                                                    // 0x0020(0x0004)
	int                                                MaskG;                                                    // 0x0024(0x0004)
	int                                                MaskB;                                                    // 0x0028(0x0004)
	int                                                MaskA;                                                    // 0x002C(0x0004)
	int                                                GCC64_Padding;                                            // 0x0030(0x0004)
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0044
struct FCustomInput
{
	struct FString                                     InputName;                                                // 0x0000(0x0010)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0034)
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0080
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                               // 0x000C(0x0034)
	struct FExpressionInput                            HeightInput;                                              // 0x0040(0x0034)
	float                                              PreviewWeight;                                            // 0x0074(0x0004)
	struct FPointer                                    InstanceOverride;                                         // 0x0078(0x0008)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x004C
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x0034)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x003C
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0024)
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	class UFont*                                       FontValue;                                                // 0x0008(0x0008)
	int                                                FontPage;                                                 // 0x0010(0x0004)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	float                                              ParameterValue;                                           // 0x0008(0x0004)
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	class UTexture*                                    ParameterValue;                                           // 0x0008(0x0008)
	struct FGuid                                       ExpressionGUID;                                           // 0x0010(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	struct FLinearColor                                ParameterValue;                                           // 0x0008(0x0010)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.TexAddressParameterValue
// 0x001C
struct FTexAddressParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	unsigned char                                      TextureIndex;                                             // 0x0008(0x0001)
	TEnumAsByte<ETextureAddressForce>                  AddressX;                                                 // 0x0009(0x0001)
	TEnumAsByte<ETextureAddressForce>                  AddressY;                                                 // 0x000A(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010)
	float                                              StartTime;                                                // 0x0010(0x0004)
	struct FName                                       ParameterName;                                            // 0x0014(0x0008)
	unsigned long                                      bLoop : 1;                                                // 0x001C(0x0004)
	unsigned long                                      bAutoActivate : 1;                                        // 0x001C(0x0004)
	float                                              CycleTime;                                                // 0x0020(0x0004)
	unsigned long                                      bNormalizeTime : 1;                                       // 0x0024(0x0004)
	float                                              OffsetTime;                                               // 0x0028(0x0004)
	unsigned long                                      bOffsetFromEnd : 1;                                       // 0x002C(0x0004)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x000C (0x003C - 0x0030)
struct FFontParameterValueOverTime : public FParameterValueOverTime
{
	class UFont*                                       FontValue;                                                // 0x0030(0x0008)
	int                                                FontPage;                                                 // 0x0038(0x0004)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0018 (0x0048 - 0x0030)
struct FScalarParameterValueOverTime : public FParameterValueOverTime
{
	float                                              ParameterValue;                                           // 0x0030(0x0004)
	struct FInterpCurveFloat                           ParameterValueCurve;                                      // 0x0034(0x0014)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0008 (0x0038 - 0x0030)
struct FTextureParameterValueOverTime : public FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                           // 0x0030(0x0008)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0024 (0x0054 - 0x0030)
struct FVectorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                           // 0x0030(0x0010)
	struct FInterpCurveVector                          ParameterValueCurve;                                      // 0x0040(0x0014)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0024 (0x0054 - 0x0030)
struct FLinearColorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                           // 0x0030(0x0010)
	struct FInterpCurveLinearColor                     ParameterValueCurve;                                      // 0x0040(0x0014)
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                                 // 0x0000(0x0048)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0054
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004)
	float                                              Scalar_Low;                                               // 0x0010(0x0004)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C)
	struct FColor                                      Color;                                                    // 0x002C(0x0004)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008)
	class UComponent*                                  Component;                                                // 0x0040(0x0008)
	struct FName                                       SocketName;                                               // 0x0048(0x0008)
	unsigned long                                      bUseBone : 1;                                             // 0x0050(0x0004)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bTranslucent : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bDistortion : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bOneLayerDistortionRelevance : 1;                         // 0x0000(0x0004)
	unsigned long                                      bLit : 1;                                                 // 0x0000(0x0004)
	unsigned long                                      bUsesSceneColor : 1;                                      // 0x0000(0x0004)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                                     // 0x0000(0x0004)
	struct FName                                       EventName;                                                // 0x0004(0x0008)
	float                                              EmitterTime;                                              // 0x000C(0x0004)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
	struct FVector                                     Direction;                                                // 0x001C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0028(0x000C)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : public FParticleEventData
{

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0038 - 0x0034)
struct FParticleEventDeathData : public FParticleEventData
{
	float                                              ParticleTime;                                             // 0x0034(0x0004)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0054 - 0x0034)
struct FParticleEventCollideData : public FParticleEventData
{
	float                                              ParticleTime;                                             // 0x0034(0x0004)
	struct FVector                                     Normal;                                                   // 0x0038(0x000C)
	float                                              Time;                                                     // 0x0044(0x0004)
	int                                                Item;                                                     // 0x0048(0x0004)
	struct FName                                       BoneName;                                                 // 0x004C(0x0008)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0044 - 0x0034)
struct FParticleEventKismetData : public FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                                  // 0x0034(0x0004)
	struct FVector                                     Normal;                                                   // 0x0038(0x000C)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000 (0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : public FParticleEventCollideData
{

};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C)
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bScale : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bLock : 1;                                                // 0x0000(0x0004)
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0014
struct FParticleAttractorCollisionAction
{
	TEnumAsByte<EParticleAttractorActionType>          Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0004(0x0010)
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x001C
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	unsigned long                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0004)
	unsigned long                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0004)
	unsigned long                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0004)
	unsigned long                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0004)
	TArray<int>                                        RandomSeeds;                                              // 0x000C(0x0010)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x002C
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004)
	int                                                LowFreq;                                                  // 0x0008(0x0004)
	int                                                ParticleFrequency;                                        // 0x000C(0x0004)
	unsigned long                                      FirstTimeOnly : 1;                                        // 0x0010(0x0004)
	unsigned long                                      LastTimeOnly : 1;                                         // 0x0010(0x0004)
	unsigned long                                      UseReflectedImpactVector : 1;                             // 0x0010(0x0004)
	struct FName                                       CustomName;                                               // 0x0014(0x0008)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x001C(0x0010)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C)
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bUseEmitterTime : 1;                                      // 0x0000(0x0004)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0038
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008)
	unsigned long                                      bUseEmitterTime : 1;                                      // 0x0008(0x0004)
	unsigned long                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0004)
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0004)
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0014(0x0024)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004)
	int                                                CountLow;                                                 // 0x0004(0x0004)
	float                                              Time;                                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                            // 0x0000(0x0004)
	float                                              WeightForSpawnLod;                                        // 0x0004(0x0004)
	float                                              SpawnLodRateVsLifeBias;                                   // 0x0008(0x0004)
	float                                              RelativeFadeoutTime;                                      // 0x000C(0x0004)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                              // 0x0000(0x0004)
	int                                                OriginalEmitterIndex;                                     // 0x0004(0x0004)
	struct FPointer                                    FrameState;                                               // 0x0008(0x0008)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	TArray<struct FParticleEmitterReplayFrame>         Emitters;                                                 // 0x0000(0x0010)
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010)
	struct FVector                                     LinVel;                                                   // 0x0020(0x000C)
	struct FVector                                     AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      bNewData;                                                 // 0x0038(0x0001)
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0020
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	struct FInterpCurveVector                          Curve;                                                    // 0x0008(0x0014)
	float                                              MaxCurveTime;                                             // 0x001C(0x0004)
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                                  // 0x0000(0x0040)
	unsigned char                                      ServerBrake;                                              // 0x0040(0x0001)
	unsigned char                                      ServerGas;                                                // 0x0041(0x0001)
	unsigned char                                      ServerSteering;                                           // 0x0042(0x0001)
	unsigned char                                      ServerRise;                                               // 0x0043(0x0001)
	unsigned long                                      bServerHandbrake : 1;                                     // 0x0044(0x0004)
	int                                                ServerView;                                               // 0x0048(0x0004)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	TEnumAsByte<EDamageParameterOverrideMode>          OverrideMode;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BaseDamage;                                               // 0x0004(0x0004)
	float                                              Radius;                                                   // 0x0008(0x0004)
	float                                              Momentum;                                                 // 0x000C(0x0004)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                                         // 0x0000(0x0008)
	struct FDamageParameters                           Params;                                                   // 0x0008(0x0010)
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LimitSize;                                                // 0x0004(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0038
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                                 // 0x0000(0x0010)
	unsigned long                                      bHasImpulse : 1;                                          // 0x0010(0x0004)
	int                                                QueuedActivations;                                        // 0x0014(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0018(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                         // 0x0018(0x0004)
	class USequenceOp*                                 LinkedOp;                                                 // 0x001C(0x0008)
	int                                                DrawY;                                                    // 0x0024(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0028(0x0004)
	float                                              ActivateDelay;                                            // 0x002C(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x0030(0x0004)
	unsigned long                                      bClampedMax : 1;                                          // 0x0030(0x0004)
	unsigned long                                      bClampedMin : 1;                                          // 0x0030(0x0004)
	int                                                OverrideDelta;                                            // 0x0034(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                                 // 0x0000(0x0008)
	int                                                InputLinkIdx;                                             // 0x0008(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0048
struct FSeqOpOutputLink
{
	TArray<struct FSeqOpOutputInputLink>               Links;                                                    // 0x0000(0x0010)
	struct FString                                     LinkDesc;                                                 // 0x0010(0x0010)
	unsigned long                                      bHasImpulse : 1;                                          // 0x0020(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0020(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                         // 0x0020(0x0004)
	class USequenceOp*                                 LinkedOp;                                                 // 0x0024(0x0008)
	float                                              ActivateDelay;                                            // 0x002C(0x0004)
	int                                                DrawY;                                                    // 0x0030(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0034(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x0034(0x0004)
	unsigned long                                      bClampedMax : 1;                                          // 0x0034(0x0004)
	unsigned long                                      bClampedMin : 1;                                          // 0x0034(0x0004)
	int                                                OverrideDelta;                                            // 0x0038(0x0004)
	float                                              PIEActivationTime;                                        // 0x003C(0x0004)
	unsigned long                                      bIsActivated : 1;                                         // 0x0040(0x0004)
	unsigned long                                      bUseConnectionColor : 1;                                  // 0x0040(0x0004)
	struct FColor                                      ConnectionColor;                                          // 0x0044(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0058
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                             // 0x0000(0x0008)
	TArray<class USequenceVariable*>                   LinkedVariables;                                          // 0x0008(0x0010)
	struct FString                                     LinkDesc;                                                 // 0x0018(0x0010)
	struct FName                                       LinkVar;                                                  // 0x0028(0x0008)
	struct FName                                       PropertyName;                                             // 0x0030(0x0008)
	unsigned long                                      bWriteable : 1;                                           // 0x0038(0x0004)
	unsigned long                                      bSequenceNeverReadsOnlyWritesToThisVar : 1;               // 0x0038(0x0004)
	unsigned long                                      bModifiesLinkedObject : 1;                                // 0x0038(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0038(0x0004)
	int                                                MinVars;                                                  // 0x003C(0x0004)
	int                                                MaxVars;                                                  // 0x0040(0x0004)
	int                                                DrawX;                                                    // 0x0044(0x0004)
	class UProperty*                                   CachedProperty;                                           // 0x0048(0x0008)
	unsigned long                                      bAllowAnyType : 1;                                        // 0x0050(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x0050(0x0004)
	unsigned long                                      bClampedMax : 1;                                          // 0x0050(0x0004)
	unsigned long                                      bClampedMin : 1;                                          // 0x0050(0x0004)
	int                                                OverrideDelta;                                            // 0x0054(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0034
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                             // 0x0000(0x0008)
	TArray<class USequenceEvent*>                      LinkedEvents;                                             // 0x0008(0x0010)
	struct FString                                     LinkDesc;                                                 // 0x0018(0x0010)
	int                                                DrawX;                                                    // 0x0028(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x002C(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x002C(0x0004)
	unsigned long                                      bClampedMax : 1;                                          // 0x002C(0x0004)
	unsigned long                                      bClampedMin : 1;                                          // 0x002C(0x0004)
	int                                                OverrideDelta;                                            // 0x0030(0x0004)
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                              // 0x0000(0x0008)
	class USequenceOp*                                 Op;                                                       // 0x0008(0x0008)
	int                                                InputIdx;                                                 // 0x0010(0x0004)
	float                                              RemainingDelay;                                           // 0x0014(0x0004)
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                           // 0x0000(0x0008)
	class AActor*                                      InOriginator;                                             // 0x0008(0x0008)
	class AActor*                                      InInstigator;                                             // 0x0010(0x0008)
	TArray<int>                                        ActivateIndices;                                          // 0x0018(0x0010)
	unsigned long                                      bPushTop : 1;                                             // 0x0028(0x0004)
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	float                                              TimeStamp;                                                // 0x000C(0x0004)
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                                    // 0x0000(0x0008)
	struct FName                                       LevelName;                                                // 0x0008(0x0008)
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	unsigned long                                      TEXTUREGROUP_World : 1;                                   // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WorldNormalMap : 1;                          // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WorldSpecular : 1;                           // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Character : 1;                               // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_CharacterNormalMap : 1;                      // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_CharacterSpecular : 1;                       // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Weapon : 1;                                  // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WeaponNormalMap : 1;                         // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WeaponSpecular : 1;                          // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Vehicle : 1;                                 // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_VehicleNormalMap : 1;                        // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_VehicleSpecular : 1;                         // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Cinematic : 1;                               // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Effects : 1;                                 // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_EffectsNotFiltered : 1;                      // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Skybox : 1;                                  // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_UI : 1;                                      // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Lightmap : 1;                                // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_RenderTarget : 1;                            // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_MobileFlattened : 1;                         // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_Face : 1;                       // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_ProcBuilding_LightMap : 1;                   // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Shadowmap : 1;                               // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_ColorLookupTable : 1;                        // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Terrain_Heightmap : 1;                       // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Terrain_Weightmap : 1;                       // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_ImageBasedReflection : 1;                    // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_Bokeh : 1;                                   // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WorldExtend : 1;                             // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WorldExtendNormalMap : 1;                    // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_WorldExtendSpecular : 1;                     // 0x0000(0x0004)
	unsigned long                                      TEXTUREGROUP_EffectsNormalMap : 1;                        // 0x0000(0x0004)
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                                      // 0x0000(0x0004)
	int                                                Max;                                                      // 0x0004(0x0004)
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008)
	unsigned char                                      bFallThru;                                                // 0x0008(0x0001)
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                              // 0x0000(0x0008)
	unsigned long                                      bFallThru : 1;                                            // 0x0008(0x0004)
	unsigned long                                      bDefaultValue : 1;                                        // 0x0008(0x0004)
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                              // 0x0000(0x0010)
	unsigned long                                      bReferencedButUnused : 1;                                 // 0x0010(0x0004)
	unsigned long                                      bSkipBakeAndPrune : 1;                                    // 0x0010(0x0004)
	unsigned long                                      bSkipCooking : 1;                                         // 0x0010(0x0004)
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// 0x0004
struct AAmbientSoundSimpleToggleable_FCheckpointRecord
{
	unsigned long                                      bCurrentlyPlaying : 1;                                    // 0x0000(0x0004)
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0014
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                                     // 0x0000(0x0008)
	float                                              PitchScale;                                               // 0x0008(0x0004)
	float                                              VolumeScale;                                              // 0x000C(0x0004)
	float                                              Weight;                                                   // 0x0010(0x0004)
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x005C
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004)
	float                                              Volume;                                                   // 0x0010(0x0004)
	struct FRawDistributionFloat                       FadeInDistance;                                           // 0x0014(0x0024)
	struct FRawDistributionFloat                       FadeOutDistance;                                          // 0x0038(0x0024)
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                              // 0x0000(0x0010)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x0010(0x0010)
	unsigned long                                      bMature : 1;                                              // 0x0020(0x0004)
	unsigned long                                      bManualWordWrap : 1;                                      // 0x0020(0x0004)
	unsigned long                                      bSingleLine : 1;                                          // 0x0020(0x0004)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0030
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                             // 0x0008(0x0008)
	class ALandscapeProxy*                             Owner;                                                    // 0x0010(0x0008)
	int                                                DebugColorChannel;                                        // 0x0018(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x001C(0x0004)
	struct FString                                     SourceFilePath;                                           // 0x0020(0x0010)
};

// ScriptStruct Engine.LandscapeComponent.OverridePhyMatInfo
// 0x0018
struct FOverridePhyMatInfo
{
	struct FString                                     LayerName;                                                // 0x0000(0x0010)
	class UPhysicalMaterial*                           OverridePhysicalMaterial;                                 // 0x0010(0x0008)
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x0038
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008)
	float                                              Hardness;                                                 // 0x0008(0x0004)
	unsigned long                                      bNoWeightBlend : 1;                                       // 0x000C(0x0004)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0010(0x0008)
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                             // 0x0018(0x0008)
	unsigned long                                      bSelected : 1;                                            // 0x0020(0x0004)
	int                                                DebugColorChannel;                                        // 0x0024(0x0004)
	struct FString                                     LayerSourceFile;                                          // 0x0028(0x0010)
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{

};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{

};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0038
struct FTerrainLayer
{
	struct FString                                     Name;                                                     // 0x0000(0x0010)
	class UTerrainLayerSetup*                          Setup;                                                    // 0x0010(0x0008)
	int                                                AlphaMapIndex;                                            // 0x0018(0x0004)
	unsigned long                                      Highlighted : 1;                                          // 0x001C(0x0004)
	unsigned long                                      WireframeHighlighted : 1;                                 // 0x001C(0x0004)
	unsigned long                                      Hidden : 1;                                               // 0x001C(0x0004)
	struct FColor                                      HighlightColor;                                           // 0x0020(0x0004)
	struct FColor                                      WireframeColor;                                           // 0x0024(0x0004)
	int                                                MinX;                                                     // 0x0028(0x0004)
	int                                                MinY;                                                     // 0x002C(0x0004)
	int                                                MaxX;                                                     // 0x0030(0x0004)
	int                                                MaxY;                                                     // 0x0034(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008)
	float                                              X;                                                        // 0x0008(0x0004)
	float                                              Y;                                                        // 0x000C(0x0004)
	float                                              Scale;                                                    // 0x0010(0x0004)
	int                                                Yaw;                                                      // 0x0014(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x002C
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                                  // 0x0000(0x0008)
	float                                              MinScale;                                                 // 0x0008(0x0004)
	float                                              MaxScale;                                                 // 0x000C(0x0004)
	float                                              Density;                                                  // 0x0010(0x0004)
	float                                              SlopeRotationBlend;                                       // 0x0014(0x0004)
	int                                                RandSeed;                                                 // 0x0018(0x0004)
	TArray<struct FTerrainDecorationInstance>          Instances;                                                // 0x001C(0x0010)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                                     // 0x0000(0x0010)
	TArray<struct FTerrainDecoration>                  Decorations;                                              // 0x0010(0x0010)
	int                                                AlphaMapIndex;                                            // 0x0020(0x0004)
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{

};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	TArray<struct FPointer>                            CachedMaterials;                                          // 0x0000(0x0010)
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                        // 0x0000(0x0004)
	int                                                Y;                                                        // 0x0004(0x0004)
	int                                                Weight;                                                   // 0x0008(0x0004)
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0008(0x0001)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0009(0x0001)
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                                // 0x0000(0x0008)
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                                // 0x0000(0x0004)
	float                                              MaxHeight;                                                // 0x0004(0x0004)
	float                                              MaxDisplacement;                                          // 0x0008(0x0004)
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	struct FQWord                                      BitMask;                                                  // 0x0000(0x0008)
	int                                                NumBits;                                                  // 0x0008(0x0004)
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	TArray<int>                                        Nodes;                                                    // 0x0000(0x0010)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                              // 0x0000(0x0004)
	float                                              Base;                                                     // 0x0004(0x0004)
	float                                              NoiseScale;                                               // 0x0008(0x0004)
	float                                              NoiseAmount;                                              // 0x000C(0x0004)
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                             // 0x0000(0x0004)
	float                                              NoiseScale;                                               // 0x0004(0x0004)
	float                                              NoisePercent;                                             // 0x0008(0x0004)
	struct FFilterLimit                                MinHeight;                                                // 0x000C(0x0010)
	struct FFilterLimit                                MaxHeight;                                                // 0x001C(0x0010)
	struct FFilterLimit                                MinSlope;                                                 // 0x002C(0x0010)
	struct FFilterLimit                                MaxSlope;                                                 // 0x003C(0x0010)
	float                                              Alpha;                                                    // 0x004C(0x0004)
	class UTerrainMaterial*                            Material;                                                 // 0x0050(0x0008)
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                              // 0x0000(0x0008)
	TArray<class UUIDataStore*>                        DataStores;                                               // 0x0008(0x0010)
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010)
	struct FString                                     Desc;                                                     // 0x0010(0x0010)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0024
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004)
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0004(0x0010)
	TArray<struct FPointer>                            ChildNodes;                                               // 0x0014(0x0010)
};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	struct FString                                     Command;                                                  // 0x0008(0x0010)
	unsigned long                                      Control : 1;                                              // 0x0018(0x0004)
	unsigned long                                      Shift : 1;                                                // 0x0018(0x0004)
	unsigned long                                      Alt : 1;                                                  // 0x0018(0x0004)
	unsigned long                                      bIgnoreCtrl : 1;                                          // 0x0018(0x0004)
	unsigned long                                      bIgnoreShift : 1;                                         // 0x0018(0x0004)
	unsigned long                                      bIgnoreAlt : 1;                                           // 0x0018(0x0004)
};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int                                                Handle;                                                   // 0x0000(0x0004)
	int                                                TouchpadIndex;                                            // 0x0004(0x0004)
	struct FVector2D                                   Location;                                                 // 0x0008(0x0008)
	TEnumAsByte<EInputEvent>                           EventType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bTrapInput : 1;                                           // 0x0014(0x0004)
};

// ScriptStruct Engine.UISoundTheme.OverrideSoundEvent
// 0x0010
struct FOverrideSoundEvent
{
	struct FName                                       UIInstanceName;                                           // 0x0000(0x0008)
	class UAkEvent*                                    AkEventToPlay;                                            // 0x0008(0x0008)
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0038
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                           // 0x0000(0x0008)
	class USoundCue*                                   SoundToPlay;                                              // 0x0008(0x0008)
	class UAkEvent*                                    AkEventToPlay;                                            // 0x0010(0x0008)
	TArray<class UAkEvent*>                            AdditionalAkEventPlayList;                                // 0x0018(0x0010)
	TArray<struct FOverrideSoundEvent>                 OverrideSoundEventBindings;                               // 0x0028(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x002C
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                          // 0x0000(0x0008)
	struct FString                                     SendingPlayerNick;                                        // 0x0008(0x0010)
	unsigned long                                      bIsFriendInvite : 1;                                      // 0x0018(0x0004)
	unsigned long                                      bIsGameInvite : 1;                                        // 0x0018(0x0004)
	unsigned long                                      bWasAccepted : 1;                                         // 0x0018(0x0004)
	unsigned long                                      bWasDenied : 1;                                           // 0x0018(0x0004)
	struct FString                                     Message;                                                  // 0x001C(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0038
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008)
	struct FQWord                                      SessionId;                                                // 0x0008(0x0008)
	struct FString                                     NickName;                                                 // 0x0010(0x0010)
	struct FString                                     PresenceInfo;                                             // 0x0020(0x0010)
	TEnumAsByte<EOnlineFriendState>                    FriendState;                                              // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned long                                      bIsOnline : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0034(0x0004)
	unsigned long                                      bIsPlayingThisGame : 1;                                   // 0x0034(0x0004)
	unsigned long                                      bIsJoinable : 1;                                          // 0x0034(0x0004)
	unsigned long                                      bHasVoiceSupport : 1;                                     // 0x0034(0x0004)
	unsigned long                                      bHaveInvited : 1;                                         // 0x0034(0x0004)
	unsigned long                                      bHasInvitedYou : 1;                                       // 0x0034(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x003C
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008)
	struct FString                                     NickName;                                                 // 0x0008(0x0010)
	unsigned char                                      LocalUserNum;                                             // 0x0018(0x0001)
	TEnumAsByte<ENATType>                              NatType;                                                  // 0x0019(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                TitleId;                                                  // 0x001C(0x0004)
	unsigned long                                      bIsLocal : 1;                                             // 0x0020(0x0004)
	unsigned long                                      bIsInPartyVoice : 1;                                      // 0x0020(0x0004)
	unsigned long                                      bIsTalking : 1;                                           // 0x0020(0x0004)
	unsigned long                                      bIsInGameSession : 1;                                     // 0x0020(0x0004)
	unsigned long                                      bIsPlayingThisGame : 1;                                   // 0x0020(0x0004)
	struct FQWord                                      SessionId;                                                // 0x0024(0x0008)
	int                                                Data1;                                                    // 0x002C(0x0004)
	int                                                Data2;                                                    // 0x0030(0x0004)
	int                                                Data3;                                                    // 0x0034(0x0004)
	int                                                Data4;                                                    // 0x0038(0x0004)
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x000C
struct FPlayerStorageArrayProvider
{
	int                                                PlayerStorageId;                                          // 0x0000(0x0004)
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                                 // 0x0004(0x0008)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0048
struct FAchievementDetails
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     AchievementName;                                          // 0x0004(0x0010)
	struct FString                                     Description;                                              // 0x0014(0x0010)
	struct FString                                     HowTo;                                                    // 0x0024(0x0010)
	class USurface*                                    Image;                                                    // 0x0034(0x0008)
	unsigned char                                      MonthEarned;                                              // 0x003C(0x0001)
	unsigned char                                      DayEarned;                                                // 0x003D(0x0001)
	unsigned char                                      YearEarned;                                               // 0x003E(0x0001)
	unsigned char                                      DayOfWeekEarned;                                          // 0x003F(0x0001)
	int                                                GamerPoints;                                              // 0x0040(0x0004)
	unsigned long                                      bIsSecret : 1;                                            // 0x0044(0x0004)
	unsigned long                                      bWasAchievedOnline : 1;                                   // 0x0044(0x0004)
	unsigned long                                      bWasAchievedOffline : 1;                                  // 0x0044(0x0004)
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0020
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                              // 0x0000(0x0008)
	struct FString                                     ProviderClassName;                                        // 0x0008(0x0010)
	class UClass*                                      ProviderClass;                                            // 0x0018(0x0008)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x0024
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                              // 0x0000(0x0008)
	struct FString                                     ProviderClassName;                                        // 0x0008(0x0010)
	unsigned long                                      bExpandProviders : 1;                                     // 0x0018(0x0004)
	class UClass*                                      ProviderClass;                                            // 0x001C(0x0008)
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x0020
struct FRegistryKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010)
	struct FString                                     Value;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0030
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                          // 0x0000(0x0008)
	class UClass*                                      DefaultGameSettingsClass;                                 // 0x0008(0x0008)
	class UClass*                                      SearchResultsProviderClass;                               // 0x0010(0x0008)
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                                  // 0x0018(0x0008)
	class UOnlineGameSearch*                           Search;                                                   // 0x0020(0x0008)
	struct FName                                       SearchName;                                               // 0x0028(0x0008)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0018
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                           // 0x0000(0x0008)
	struct FString                                     PlayerNickColumnName;                                     // 0x0008(0x0010)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0018
struct FRankMetaData
{
	struct FName                                       RankName;                                                 // 0x0000(0x0008)
	struct FString                                     RankColumnName;                                           // 0x0008(0x0010)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0020
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                        // 0x0000(0x0008)
	class UUIDataProvider_Settings*                    Provider;                                                 // 0x0008(0x0008)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0010(0x0008)
	struct FName                                       SettingsName;                                             // 0x0018(0x0008)
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                             // 0x0000(0x0008)
	unsigned char                                      ModifierKeyFlags;                                         // 0x0008(0x0001)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x001C
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                             // 0x0000(0x000C)
	struct FString                                     ButtonFontMarkupString;                                   // 0x000C(0x0010)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x005C
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                                // 0x0000(0x0008)
	struct FUIInputKeyData                             PlatformInputKeys[0x3];                                   // 0x0008(0x001C)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x0020
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                                // 0x0000(0x0008)
	struct FName                                       Set;                                                      // 0x0008(0x0008)
	struct FString                                     MappedText;                                               // 0x0010(0x0010)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                             // 0x0000(0x0004)
	float                                              MinValue;                                                 // 0x0004(0x0004)
	float                                              MaxValue;                                                 // 0x0008(0x0004)
	float                                              NudgeValue;                                               // 0x000C(0x0004)
	unsigned long                                      bIntRange : 1;                                            // 0x0010(0x0004)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0038
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010)
	class UShadowMap1D*                                BranchShadowMap;                                          // 0x0010(0x0008)
	class UShadowMap1D*                                FrondShadowMap;                                           // 0x0018(0x0008)
	class UShadowMap1D*                                LeafMeshShadowMap;                                        // 0x0020(0x0008)
	class UShadowMap1D*                                LeafCardShadowMap;                                        // 0x0028(0x0008)
	class UShadowMap1D*                                BillboardShadowMap;                                       // 0x0030(0x0008)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	TArray<class UMaterialInterface*>                  ElementMaterials;                                         // 0x0000(0x0010)
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0198
struct FLensFlareElement
{
	struct FName                                       ElementName;                                              // 0x0000(0x0008)
	float                                              RayDistance;                                              // 0x0008(0x0004)
	unsigned long                                      bIsEnabled : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bUseSourceDistance : 1;                                   // 0x000C(0x0004)
	unsigned long                                      bNormalizeRadialDistance : 1;                             // 0x000C(0x0004)
	unsigned long                                      bModulateColorBySource : 1;                               // 0x000C(0x0004)
	struct FVector                                     Size;                                                     // 0x0010(0x000C)
	TArray<class UMaterialInterface*>                  LFMaterials;                                              // 0x001C(0x0010)
	struct FRawDistributionFloat                       LFMaterialIndex;                                          // 0x002C(0x0024)
	struct FRawDistributionFloat                       Scaling;                                                  // 0x0050(0x0024)
	struct FRawDistributionVector                      AxisScaling;                                              // 0x0074(0x0024)
	struct FRawDistributionFloat                       Rotation;                                                 // 0x0098(0x0024)
	unsigned long                                      bOrientTowardsSource : 1;                                 // 0x00BC(0x0004)
	struct FRawDistributionVector                      Color;                                                    // 0x00C0(0x0024)
	struct FRawDistributionFloat                       Alpha;                                                    // 0x00E4(0x0024)
	struct FRawDistributionVector                      Offset;                                                   // 0x0108(0x0024)
	struct FRawDistributionVector                      DistMap_Scale;                                            // 0x012C(0x0024)
	struct FRawDistributionVector                      DistMap_Color;                                            // 0x0150(0x0024)
	struct FRawDistributionFloat                       DistMap_Alpha;                                            // 0x0174(0x0024)
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0020
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                                  // 0x0000(0x0004)
	int                                                OffsetY;                                                  // 0x0004(0x0004)
	int                                                SizeX;                                                    // 0x0008(0x0004)
	int                                                SizeY;                                                    // 0x000C(0x0004)
	int                                                DestOffsetX;                                              // 0x0010(0x0004)
	int                                                DestOffsetY;                                              // 0x0014(0x0004)
	class UTexture2D*                                  Texture2D;                                                // 0x0018(0x0008)
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0044
struct FListener
{
	class APortalVolume*                               PortalVolume;                                             // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	struct FVector                                     Up;                                                       // 0x0014(0x000C)
	struct FVector                                     Right;                                                    // 0x0020(0x000C)
	struct FVector                                     Front;                                                    // 0x002C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0038(0x000C)
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004)
	float                                              Pitch;                                                    // 0x0004(0x0004)
	float                                              StereoBleed;                                              // 0x0008(0x0004)
	float                                              LFEBleed;                                                 // 0x000C(0x0004)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004)
	float                                              RadioFilterVolume;                                        // 0x0014(0x0004)
	float                                              RadioFilterVolumeThreshold;                               // 0x0018(0x0004)
	unsigned long                                      bApplyEffects : 1;                                        // 0x001C(0x0004)
	unsigned long                                      bAlwaysPlay : 1;                                          // 0x001C(0x0004)
	unsigned long                                      bIsUISound : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bIsMusic : 1;                                             // 0x001C(0x0004)
	unsigned long                                      bReverb : 1;                                              // 0x001C(0x0004)
	unsigned long                                      bCenterChannelOnly : 1;                                   // 0x001C(0x0004)
	unsigned long                                      bApplyAmbientVolumes : 1;                                 // 0x001C(0x0004)
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                                 // 0x0000(0x0008)
	float                                              HFFrequency;                                              // 0x0008(0x0004)
	float                                              HFGain;                                                   // 0x000C(0x0004)
	float                                              MFCutoffFrequency;                                        // 0x0010(0x0004)
	float                                              MFBandwidth;                                              // 0x0014(0x0004)
	float                                              MFGain;                                                   // 0x0018(0x0004)
	float                                              LFFrequency;                                              // 0x001C(0x0004)
	float                                              LFGain;                                                   // 0x0020(0x0004)
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	TEnumAsByte<ESoundClassName>                       SoundClassName;                                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SoundClass;                                               // 0x0004(0x0008)
	float                                              VolumeAdjuster;                                           // 0x000C(0x0004)
	float                                              PitchAdjuster;                                            // 0x0010(0x0004)
	unsigned long                                      bApplyToChildren : 1;                                     // 0x0014(0x0004)
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0018(0x0004)
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                                     // 0x0000(0x0008)
	float                                              Radius;                                                   // 0x0008(0x0004)
	float                                              Height;                                                   // 0x000C(0x0004)
	float                                              CrouchHeight;                                             // 0x0010(0x0004)
	unsigned char                                      PathColor;                                                // 0x0014(0x0001)
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                                    // 0x0000(0x0004)
	float                                              IndirectLightingSaturation;                               // 0x0004(0x0004)
	float                                              ShadowExponent;                                           // 0x0008(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                             // 0x0000(0x0040)
	struct FMatrix                                     LightToWorld;                                             // 0x0040(0x0040)
	struct FBox                                        LightSpaceImportanceBounds;                               // 0x0080(0x001C)
	int                                                ShadowMapSizeX;                                           // 0x009C(0x0004)
	int                                                ShadowMapSizeY;                                           // 0x00A0(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceRadius;                                        // 0x000C(0x0004)
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[0x2];                                               // 0x0000(0x0008)
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                                   // 0x0000(0x0008)
	float                                              Weight;                                                   // 0x0008(0x0004)
};

// ScriptStruct Engine.SkeletalMeshComponent.AttachmentOriginData
// 0x0010
struct FAttachmentOriginData
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FVector                                     Origin;                                                   // 0x0004(0x000C)
};

// ScriptStruct Engine.SkeletalMeshComponent.AttachmentOrigin
// 0x0038
struct FAttachmentOrigin
{
	unsigned long                                      IsUpdated : 1;                                            // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	struct FDouble                                     StartTime;                                                // 0x0008(0x0008)
	float                                              CurrentVelocity;                                          // 0x0010(0x0004)
	struct FVector                                     LastLocation;                                             // 0x0014(0x000C)
	float                                              CheckTime;                                                // 0x0020(0x0004)
	unsigned long                                      IsStop : 1;                                               // 0x0024(0x0004)
	TArray<struct FAttachmentOriginData>               OriginData;                                               // 0x0028(0x0010)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x004C
struct FAttachment
{
	class UActorComponent*                             Component;                                                // 0x0000(0x0008)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C)
	struct FVector                                     RelativeScale;                                            // 0x0028(0x000C)
	unsigned long                                      bIgnoreAttachLocation : 1;                                // 0x0034(0x0004)
	unsigned long                                      bIgnoreAttachRotation : 1;                                // 0x0034(0x0004)
	unsigned long                                      bIgnoreAttachWorldRotation : 1;                           // 0x0034(0x0004)
	float                                              ModifyParentVelocity;                                     // 0x0038(0x0004)
	float                                              ModifyParentAcceleration;                                 // 0x003C(0x0004)
	int                                                SocketIndex;                                              // 0x0040(0x0004)
	float                                              CurentTime;                                               // 0x0044(0x0004)
	float                                              CurrentAcceleration;                                      // 0x0048(0x0004)
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x001C
struct FSkelMeshComponentLODInfo
{
	TArray<unsigned long>                              HiddenMaterials;                                          // 0x0000(0x0010)
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;                           // 0x0010(0x0004)
	unsigned long                                      bAlwaysUseInstanceWeights : 1;                            // 0x0010(0x0004)
	TEnumAsByte<EInstanceWeightUsage>                  InstanceWeightUsage;                                      // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                InstanceWeightIdx;                                        // 0x0018(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	TArray<int>                                        ClothingSectionInfo;                                      // 0x0000(0x0010)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	TArray<struct FApexClothingLodInfo>                ClothingLodInfo;                                          // 0x0000(0x0010)
	struct FName                                       ClothingAssetName;                                        // 0x0010(0x0008)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001)
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<ETriangleSortOption>                   TriangleSorting;                                          // 0x0000(0x0001)
	TEnumAsByte<ETriangleSortAxis>                     CustomLeftRightAxis;                                      // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       CustomLeftRightBoneName;                                  // 0x0004(0x0008)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x004C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                            // 0x0000(0x0004)
	float                                              LODHysteresis;                                            // 0x0004(0x0004)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010)
	TArray<unsigned long>                              bEnableShadowCasting;                                     // 0x0018(0x0010)
	TArray<TEnumAsByte<ETriangleSortOption>>           TriangleSorting;                                          // 0x0028(0x0010)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                     // 0x0038(0x0010)
	unsigned long                                      bDisableCompressions : 1;                                 // 0x0048(0x0004)
	unsigned long                                      bHasBeenSimplified : 1;                                   // 0x0048(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x004C
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                                   // 0x0000(0x0004)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x0004(0x0001)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x0005(0x0001)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x0006(0x0001)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x0007(0x0001)
	TEnumAsByte<ESkeletalMeshOptimizationNormalMode>   NormalMode;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              BoneReductionRatio;                                       // 0x000C(0x0004)
	int                                                MaxBonesPerVertex;                                        // 0x0010(0x0004)
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0018(0x0004)
	float                                              WeldingThreshold;                                         // 0x001C(0x0004)
	unsigned long                                      bRecalcNormals : 1;                                       // 0x0020(0x0004)
	float                                              NormalsThreshold;                                         // 0x0024(0x0004)
	unsigned long                                      bUseVertexLock : 1;                                       // 0x0028(0x0004)
	unsigned long                                      bUseVertexWeight : 1;                                     // 0x0028(0x0004)
	unsigned long                                      bEnableSkeletonSimplification : 1;                        // 0x0028(0x0004)
	unsigned long                                      bLockSocketBones : 1;                                     // 0x0028(0x0004)
	TArray<struct FName>                               RemoveBoneNames;                                          // 0x002C(0x0010)
	TArray<struct FName>                               LockBoneNames;                                            // 0x003C(0x0010)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x001C
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	TEnumAsByte<EClothBoneType>                        BoneType;                                                 // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        AttachedVertexIndices;                                    // 0x000C(0x0010)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                                    // 0x0000(0x0004)
	struct FVector                                     Bary;                                                     // 0x0004(0x000C)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x001C
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	TEnumAsByte<ESoftBodyBoneType>                     BoneType;                                                 // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        AttachedVertexIndices;                                    // 0x000C(0x0010)
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0018
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                                          // 0x0000(0x0008)
	class ASplineActor*                                ConnectTo;                                                // 0x0008(0x0008)
	class UDistributionFloatConstantCurve*             Curve;                                                    // 0x0010(0x0008)
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x000C
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x0000(0x0008)
	int                                                TopLevelScopeIndex;                                       // 0x0008(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x000C
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                             // 0x0000(0x0008)
	int                                                TopLevelScopeIndex;                                       // 0x0008(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                                   // 0x0000(0x0008)
	struct FVector2D                                   Size;                                                     // 0x0008(0x0008)
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                               // 0x0000(0x0040)
	float                                              DimX;                                                     // 0x0040(0x0004)
	float                                              DimZ;                                                     // 0x0044(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x001C
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                           // 0x0000(0x0008)
	class UProcBuildingRuleset*                        Ruleset;                                                  // 0x0008(0x0008)
	struct FName                                       RulesetVariation;                                         // 0x0010(0x0008)
	unsigned long                                      bGenerateLODPoly : 1;                                     // 0x0018(0x0004)
	unsigned long                                      bPartOfNonRect : 1;                                       // 0x0018(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                                  // 0x0000(0x000C)
	struct FVector                                     EdgeStart;                                                // 0x000C(0x000C)
	int                                                ScopeAIndex;                                              // 0x0018(0x0004)
	TEnumAsByte<EScopeEdge>                            ScopeAEdge;                                               // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                ScopeBIndex;                                              // 0x0020(0x0004)
	TEnumAsByte<EScopeEdge>                            ScopeBEdge;                                               // 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              EdgeAngle;                                                // 0x0028(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010)
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0014
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                                 // 0x0000(0x0008)
	struct FName                                       LinkName;                                                 // 0x0008(0x0008)
	int                                                DrawY;                                                    // 0x0010(0x0004)
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                                    // 0x0000(0x0004)
	float                                              CornerSize;                                               // 0x0004(0x0004)
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                                    // 0x0000(0x0004)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x0010
struct FBuildingMatOverrides
{
	TArray<class UMaterialInterface*>                  MaterialOptions;                                          // 0x0000(0x0010)
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x004C
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008)
	float                                              DimX;                                                     // 0x0008(0x0004)
	float                                              DimZ;                                                     // 0x000C(0x0004)
	float                                              Chance;                                                   // 0x0010(0x0004)
	class UDistributionVector*                         Translation;                                              // 0x0014(0x0008)
	class UDistributionVector*                         Rotation;                                                 // 0x001C(0x0008)
	unsigned long                                      bMeshScaleTranslation : 1;                                // 0x0024(0x0004)
	unsigned long                                      bOverrideMeshLightMapRes : 1;                             // 0x0024(0x0004)
	int                                                OverriddenMeshLightMapRes;                                // 0x0028(0x0004)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x002C(0x0010)
	TArray<struct FBuildingMatOverrides>               SectionOverrides;                                         // 0x003C(0x0010)
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x0014
struct FRBSplitInfo
{
	unsigned long                                      bFixSize : 1;                                             // 0x0000(0x0004)
	float                                              FixedSize;                                                // 0x0004(0x0004)
	float                                              ExpandRatio;                                              // 0x0008(0x0004)
	struct FName                                       SplitName;                                                // 0x000C(0x0008)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	struct FName                                       VariationName;                                            // 0x0000(0x0008)
	unsigned long                                      bMeshOnTopOfFacePoly : 1;                                 // 0x0008(0x0004)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0018
struct FPBParamSwatch
{
	struct FName                                       SwatchName;                                               // 0x0000(0x0008)
	TArray<struct FPBMaterialParam>                    Params;                                                   // 0x0008(0x0010)
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                                    // 0x0000(0x0004)
	int                                                NumMapListCyclesDone;                                     // 0x0004(0x0004)
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	class AController*                                 Controller;                                               // 0x0008(0x0008)
	struct FTPOV                                       POV;                                                      // 0x0010(0x001C)
	float                                              AspectRatio;                                              // 0x002C(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0030(0x0008)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	struct FTPOV                                       POV;                                                      // 0x0004(0x001C)
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x0090
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                              // 0x0000(0x0008)
	struct FName                                       SourceShakeName;                                          // 0x0008(0x0008)
	float                                              OscillatorTimeRemaining;                                  // 0x0010(0x0004)
	unsigned long                                      bBlendingIn : 1;                                          // 0x0014(0x0004)
	float                                              CurrentBlendInTime;                                       // 0x0018(0x0004)
	unsigned long                                      bBlendingOut : 1;                                         // 0x001C(0x0004)
	float                                              CurrentBlendOutTime;                                      // 0x0020(0x0004)
	struct FVector                                     LocSinOffset;                                             // 0x0024(0x000C)
	struct FVector                                     RotSinOffset;                                             // 0x0030(0x000C)
	float                                              FOVSinOffset;                                             // 0x003C(0x0004)
	float                                              Scale;                                                    // 0x0040(0x0004)
	class UCameraAnimInst*                             AnimInst;                                                 // 0x0044(0x0008)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x004C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                                      // 0x0050(0x0040)
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004)
	float                                              Frequency;                                                // 0x0004(0x0004)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001)
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C)
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C)
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0020
struct FEventStringParam
{
	struct FString                                     ParamName;                                                // 0x0000(0x0010)
	struct FString                                     ParamValue;                                               // 0x0010(0x0010)
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x002C
struct FLaunchNotificationInfo
{
	unsigned long                                      bWasLaunchedViaNotification : 1;                          // 0x0000(0x0004)
	struct FNotificationInfo                           Notification;                                             // 0x0004(0x0028)
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0020
struct FFacebookFriend
{
	struct FString                                     Name;                                                     // 0x0000(0x0010)
	struct FString                                     Id;                                                       // 0x0010(0x0010)
};

// ScriptStruct Engine.GoogleIntegration.GoogleFriend
// 0x0020
struct FGoogleFriend
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010)
	struct FString                                     Id;                                                       // 0x0010(0x0010)
};

// ScriptStruct Engine.GoogleIntegration.YouTubeChannel
// 0x0030
struct FYouTubeChannel
{
	struct FString                                     ChannelId;                                                // 0x0000(0x0010)
	struct FString                                     ChannelTitle;                                             // 0x0010(0x0010)
	struct FString                                     Description;                                              // 0x0020(0x0010)
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008)
	int                                                NumChannels;                                              // 0x0008(0x0004)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                                      // 0x0000(0x0008)
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010)
	struct FString                                     Value;                                                    // 0x0010(0x0010)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0034
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                                // 0x0000(0x0004)
	int                                                PlayerID;                                                 // 0x0004(0x0004)
	struct FString                                     PlayerName;                                               // 0x0008(0x0010)
	int                                                Ping;                                                     // 0x0018(0x0004)
	int                                                Score;                                                    // 0x001C(0x0004)
	int                                                StatsID;                                                  // 0x0020(0x0004)
	TArray<struct FKeyValuePair>                       PlayerInfo;                                               // 0x0024(0x0010)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0078
struct FServerResponseLine
{
	int                                                ServerID;                                                 // 0x0000(0x0004)
	struct FString                                     IP;                                                       // 0x0004(0x0010)
	int                                                Port;                                                     // 0x0014(0x0004)
	int                                                QueryPort;                                                // 0x0018(0x0004)
	struct FString                                     ServerName;                                               // 0x001C(0x0010)
	struct FString                                     MapName;                                                  // 0x002C(0x0010)
	struct FString                                     GameType;                                                 // 0x003C(0x0010)
	int                                                CurrentPlayers;                                           // 0x004C(0x0004)
	int                                                MaxPlayers;                                               // 0x0050(0x0004)
	int                                                Ping;                                                     // 0x0054(0x0004)
	TArray<struct FKeyValuePair>                       ServerInfo;                                               // 0x0058(0x0010)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                               // 0x0068(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008)
	unsigned long                                      bIsFriend : 1;                                            // 0x0008(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	unsigned long                                      bIsUserGeneratedImage : 1;                                // 0x0000(0x0004)
	unsigned long                                      bIsGameGeneratedImage : 1;                                // 0x0000(0x0004)
	unsigned long                                      bIsAchievementImage : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bIsMediaImage : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0044
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                                    // 0x0000(0x0004)
	struct FString                                     MessageText;                                              // 0x0004(0x0010)
	struct FString                                     TitleText;                                                // 0x0014(0x0010)
	struct FString                                     PictureCaption;                                           // 0x0024(0x0010)
	struct FString                                     PictureDescription;                                       // 0x0034(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0020 (0x0064 - 0x0044)
struct FSocialPostLinkInfo : public FSocialPostImageInfo
{
	struct FString                                     TitleURL;                                                 // 0x0044(0x0010)
	struct FString                                     PictureURL;                                               // 0x0054(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	unsigned long                                      bCanPostImage : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCanPostLink : 1;                                         // 0x0000(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0018
struct FSpeechRecognizedWord
{
	int                                                WordId;                                                   // 0x0000(0x0004)
	struct FString                                     WordText;                                                 // 0x0004(0x0010)
	float                                              Confidence;                                               // 0x0014(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0064 - 0x0060)
struct FOnlineCrossTitleContent : public FOnlineContent
{
	int                                                TitleId;                                                  // 0x0060(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0014
struct FCommunityContentMetadata
{
	int                                                ContentType;                                              // 0x0000(0x0004)
	TArray<struct FSettingsProperty>                   MetadataItems;                                            // 0x0004(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0038
struct FCommunityContentFile
{
	int                                                ContentId;                                                // 0x0000(0x0004)
	int                                                FileId;                                                   // 0x0004(0x0004)
	int                                                ContentType;                                              // 0x0008(0x0004)
	int                                                FileSize;                                                 // 0x000C(0x0004)
	struct FUniqueNetId                                Owner;                                                    // 0x0010(0x0008)
	int                                                DownloadCount;                                            // 0x0018(0x0004)
	float                                              AverageRating;                                            // 0x001C(0x0004)
	int                                                RatingCount;                                              // 0x0020(0x0004)
	int                                                LastRatingGiven;                                          // 0x0024(0x0004)
	struct FString                                     LocalFilePath;                                            // 0x0028(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x0024
struct FTitleFile
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010)
	TEnumAsByte<EOnlineEnumerationReadState>           AsyncState;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TArray<unsigned char>                              Data;                                                     // 0x0014(0x0010)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0010
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                                 // 0x0000(0x0008)
	float                                              LastNotificationTime;                                     // 0x0008(0x0004)
	unsigned long                                      bWasTalking : 1;                                          // 0x000C(0x0004)
	unsigned long                                      bIsTalking : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bIsRegistered : 1;                                        // 0x000C(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bHasNetworkedVoice : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bIsRecognizingSpeech : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bWasTalking : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bIsTalking : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bIsRegistered : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x0018
struct FPendingClientAuth
{
	class UPlayer*                                     ClientConnection;                                         // 0x0000(0x0008)
	struct FUniqueNetId                                ClientUID;                                                // 0x0008(0x0008)
	float                                              AuthTimestamp;                                            // 0x0010(0x0004)
	int                                                AuthRetryCount;                                           // 0x0014(0x0004)
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x000C
struct FServerAuthRetry
{
	struct FUniqueNetId                                ClientUID;                                                // 0x0000(0x0008)
	int                                                AuthRetryCount;                                           // 0x0008(0x0004)
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                                // 0x0000(0x0001)
	TEnumAsByte<ECoverType>                            ManualCoverType;                                          // 0x0001(0x0001)
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0048
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0008)
	TArray<unsigned char>                              SlotsEnabled;                                             // 0x0008(0x0010)
	TArray<unsigned char>                              SlotsDisabled;                                            // 0x0018(0x0010)
	TArray<unsigned char>                              SlotsAdjusted;                                            // 0x0028(0x0010)
	TArray<struct FManualCoverTypeInfo>                SlotsCoverTypeChanged;                                    // 0x0038(0x0010)
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int                                                NumResident;                                              // 0x0000(0x0004)
	int                                                SizeResident;                                             // 0x0004(0x0004)
	int                                                NumRealTime;                                              // 0x0008(0x0004)
	int                                                SizeRealTime;                                             // 0x000C(0x0004)
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                                 // 0x0000(0x0004)
	int                                                NodePosY;                                                 // 0x0004(0x0004)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010)
	float                                              Mins[0x3];                                                // 0x0020(0x0004)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004)
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	unsigned long                                      bDebugMode : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bStatsEnabled : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0004)
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004)
	unsigned long                                      bUseDeterministicLighting : 1;                            // 0x0008(0x0004)
	unsigned long                                      bUseImmediateImport : 1;                                  // 0x0008(0x0004)
	unsigned long                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0004)
	unsigned long                                      bSortMappings : 1;                                        // 0x0008(0x0004)
	unsigned long                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0004)
	unsigned long                                      bDebugMaterials : 1;                                      // 0x0008(0x0004)
	unsigned long                                      bPadMappings : 1;                                         // 0x0008(0x0004)
	unsigned long                                      bDebugPaddings : 1;                                       // 0x0008(0x0004)
	unsigned long                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0004)
	unsigned long                                      bUseRandomColors : 1;                                     // 0x0008(0x0004)
	unsigned long                                      bColorBordersGreen : 1;                                   // 0x0008(0x0004)
	unsigned long                                      bColorByExecutionTime : 1;                                // 0x0008(0x0004)
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x0010(0x0004)
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned long                                      bDistributionEnabled : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bForceContentExport : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004)
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x0048
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                                     // 0x0000(0x0040)
	int                                                SizeX;                                                    // 0x0040(0x0004)
	int                                                SizeY;                                                    // 0x0044(0x0004)
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                                    // 0x0000(0x0004)
	float                                              AlphaRefVal;                                              // 0x0004(0x0004)
	float                                              SmoothWidth;                                              // 0x0008(0x0004)
	unsigned long                                      EnableShadow : 1;                                         // 0x000C(0x0004)
	struct FVector2D                                   ShadowDirection;                                          // 0x0010(0x0008)
	struct FLinearColor                                ShadowColor;                                              // 0x0018(0x0010)
	float                                              ShadowSmoothWidth;                                        // 0x0028(0x0004)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x002C(0x0024)
	int                                                BlendMode;                                                // 0x0050(0x0004)
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x002C
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004)
	float                                              DrawY;                                                    // 0x0004(0x0004)
	float                                              DrawXL;                                                   // 0x0008(0x0004)
	float                                              DrawYL;                                                   // 0x000C(0x0004)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008)
	float                                              ViewportHeight;                                           // 0x0028(0x0004)
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                        // 0x0000(0x0004)
	float                                              V;                                                        // 0x0004(0x0004)
	float                                              UL;                                                       // 0x0008(0x0004)
	float                                              VL;                                                       // 0x000C(0x0004)
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x002C
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                             // 0x0000(0x0008)
	TEnumAsByte<EInputEvent>                           InputKeyState;                                            // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<struct FSeqOpOutputInputLink>               TriggeredOps;                                             // 0x000C(0x0010)
	TArray<class USequenceOp*>                         ActionsToExecute;                                         // 0x001C(0x0010)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004)
	int                                                ControllerId;                                             // 0x0004(0x0004)
	struct FName                                       InputKeyName;                                             // 0x0008(0x0008)
	TEnumAsByte<EInputEvent>                           EventType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InputDelta;                                               // 0x0014(0x0004)
	float                                              DeltaTime;                                                // 0x0018(0x0004)
	unsigned long                                      bAltPressed : 1;                                          // 0x001C(0x0004)
	unsigned long                                      bCtrlPressed : 1;                                         // 0x001C(0x0004)
	unsigned long                                      bShiftPressed : 1;                                        // 0x001C(0x0004)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0028 - 0x0020)
struct FSubscribedInputEventParameters : public FInputEventParameters
{
	struct FName                                       InputAliasName;                                           // 0x0020(0x0008)
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0038
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0008)
	int                                                LtSlotIdx;                                                // 0x0008(0x0004)
	int                                                RtSlotIdx;                                                // 0x000C(0x0004)
	float                                              LtToRtPct;                                                // 0x0010(0x0004)
	struct FVector                                     Location;                                                 // 0x0014(0x000C)
	struct FVector                                     Normal;                                                   // 0x0020(0x000C)
	struct FVector                                     Tangent;                                                  // 0x002C(0x000C)
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	TEnumAsByte<ECoverType>                            SrcType;                                                  // 0x0000(0x0001)
	TEnumAsByte<ECoverAction>                          SrcAction;                                                // 0x0001(0x0001)
	TEnumAsByte<ECoverType>                            DestType;                                                 // 0x0002(0x0001)
	TEnumAsByte<ECoverAction>                          DestAction;                                               // 0x0003(0x0001)
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004 (0x001C - 0x0018)
struct FCoverReference : public FActorReference
{
	int                                                SlotIdx;                                                  // 0x0018(0x0004)
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x001D
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                              // 0x0000(0x001C)
	unsigned char                                      ExposedScale;                                             // 0x001C(0x0001)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                                        // 0x0000(0x0048)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{

};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
	float                                              Radius;                                                   // 0x0018(0x0004)
	int                                                Priority;                                                 // 0x001C(0x0004)
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x002C
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int                                                ListIdx;                                                  // 0x0000(0x0004)
	class UNavMeshPathGoalEvaluator*                   List[0x5];                                                // 0x0004(0x0008)
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x002C
struct FNavMeshPathConstraintCacheDatum
{
	int                                                ListIdx;                                                  // 0x0000(0x0004)
	class UNavMeshPathConstraint*                      List[0x5];                                                // 0x0004(0x0008)
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008)
	float                                              Rating;                                                   // 0x0008(0x0004)
	float                                              EnteredTime;                                              // 0x000C(0x0004)
	float                                              LastKnownDistance;                                        // 0x0010(0x0004)
	float                                              StartTimeBeingLookedAt;                                   // 0x0014(0x0004)
	unsigned long                                      CurrentlyBeingLookedAt : 1;                               // 0x0018(0x0004)
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008)
	int                                                KeyIndex;                                                 // 0x0010(0x0004)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0008)
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	float                                              Ratio;                                                    // 0x0000(0x0004)
	float                                              HeightData;                                               // 0x0004(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) UNKNOWN PROPERTY: MapProperty Engine.LandscapeGizmoActiveActor.GizmoSelectData.WeightDataMap
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[0x4];                                             // 0x0000(0x000C)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{

};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int                                                X;                                                        // 0x0000(0x0004)
	int                                                Y;                                                        // 0x0004(0x0004)
	int                                                Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                                     // 0x0000(0x0008)
	struct FVector                                     P1;                                                       // 0x0008(0x000C)
	struct FVector                                     P2;                                                       // 0x0014(0x000C)
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0010
struct FCurrentPlayerMet
{
	int                                                TeamNum;                                                  // 0x0000(0x0004)
	int                                                Skill;                                                    // 0x0004(0x0004)
	struct FUniqueNetId                                NetId;                                                    // 0x0008(0x0008)
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0018
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                              // 0x0000(0x0008)
	TArray<struct FUniqueNetId>                        PartyMembers;                                             // 0x0008(0x0010)
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008)
	float                                              TargetPercentage;                                         // 0x0008(0x0004)
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x002C
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                                 // 0x0000(0x0008)
	class UProcBuildingRuleset*                        Ruleset;                                                  // 0x0008(0x0008)
	int                                                NumStaticMeshComponent;                                   // 0x0010(0x0004)
	int                                                NumInstancedStaticMeshComponents;                         // 0x0014(0x0004)
	int                                                NumInstancedTris;                                         // 0x0018(0x0004)
	int                                                LightmapMemBytes;                                         // 0x001C(0x0004)
	int                                                ShadowmapMemBytes;                                        // 0x0020(0x0004)
	int                                                LODDiffuseMemBytes;                                       // 0x0024(0x0004)
	int                                                LODLightingMemBytes;                                      // 0x0028(0x0004)
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	TEnumAsByte<EWorldAttractorFalloffType>            FalloffType;                                              // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              FalloffExponent;                                          // 0x0014(0x0004)
	float                                              Range;                                                    // 0x0018(0x0004)
	float                                              Strength;                                                 // 0x001C(0x0004)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001)
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int                                                NodePosX;                                                 // 0x0000(0x0004)
	int                                                NodePosY;                                                 // 0x0004(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{

};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x000C
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bShouldBeVisible : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bShouldBlockOnLoad : 1;                                   // 0x0000(0x0004)
	class ULevelStreaming*                             Level;                                                    // 0x0004(0x0008)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
