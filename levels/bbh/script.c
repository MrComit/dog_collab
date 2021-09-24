#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
#define MODEL_ MODEL_COMIT_
#undef MODEL_
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOUNCE_CLOUD, bounce_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STRETCH_CLOUD, stretch_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAINBOW_CLOUD, rainbow_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CLOUD_RAINBOW, cloud_rainbow_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAIN_CLOUD, rain_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MIST_SECRET, mist_secret_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FADE_CLOUD, fade_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BODY_LAKITU, body_lakitu_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FWOOSH_BUTTON, fwoosh_button_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_METAL_CRATE, metal_crate_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LOWPOLY_KOOPA, lowpoly_koopa_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LOWPOLY_GOOMBA, lowpoly_goomba_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LIGHTNING_CLOUD, lightning_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LIGHTNING_BOLT, lightning_bolt_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLOOR_DOOR, floor_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LIGHTNING_STRIKE, lightning_strike_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LIGHTNING_BLAST, lightning_blast_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CENTER_PLATFORM, center_platform_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BBH, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BBH, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x14, LEVEL_BBH, 0x01, 0x15, WARP_NO_CHECKPOINT),
		WARP_NODE(0x15, LEVEL_BBH, 0x01, 0x14, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1D, LEVEL_BBH, 0x02, 0x1A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x55, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1F, LEVEL_BBH, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3129, 1558, 5156, 0, 168, 0, 0x000B0000, bhvAirborneDeathWarp),
		MARIO_POS(0x01, 168, 3129, 1558, 5156),
		OBJECT(MODEL_NONE, 3129, 1558, 5156, 0, 168, 0, 0x000A0000, bhvFlyingWarp),
		OBJECT(MODEL_BLUE_COIN, -4487, 3783, 13326, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5010, 3596, 12604, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -6031, 4254, 14158, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5463, 4385, 13326, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -3512, 4571, 13326, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -4601, 3858, 14297, 0, 13, 0, 0x00020000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BOUNCE_CLOUD, -13182, 2710, -13116, 0, 16, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -13763, 2710, -16967, 0, 9, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -2766, 3013, -24471, 0, -90, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -12998, 2710, -19572, 0, -38, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -3687, 215, 5227, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -4197, 815, 4291, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -3500, 1415, 3811, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 9647, 934, -10768, 0, 32, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 14026, 1810, -8999, 0, -19, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 12870, 3036, 6205, 0, 32, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 1810, 1548, 7614, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 1165, 1973, 8623, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 78, 2309, 7952, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 9900, -758, 9315, 0, 73, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 11334, -705, 15077, 0, -90, 0, 0x000C0000, bhvDoorWarp),
		OBJECT(MODEL_NONE, 10821, 90, 9194, 0, 0, 0, 0x00140000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 9036, 256, 8071, 0, -136, 0, 0x00150000, bhvFadingWarp),
		OBJECT(MODEL_FLOOR_DOOR, 3477, 1376, 3679, 0, 0, 0, 0x00000000, bhvFloorDoor),
		OBJECT(MODEL_FWOOSH_BUTTON, -2769, 2709, 10007, 0, 0, 0, 0x00000000, bhvFloorDoorButton),
		OBJECT(MODEL_BODY_LAKITU, -8684, 14, 8849, 0, -90, 0, 0x00000000, bhvBodyLakitu),
		OBJECT(MODEL_NONE, 3477, 1587, 4601, 0, 0, 0, 0x00550000, bhvFlyingWarp),
		OBJECT(MODEL_MIST_SECRET, 10164, 183, 8771, 0, 0, 0, 0x00000000, bhvMistTrigger),
		OBJECT(MODEL_MIST_SECRET, -5978, 340, 8491, 0, 0, 0, 0x00000000, bhvMistTrigger),
		OBJECT(MODEL_MIST_SECRET, -918, 2374, 2007, 0, 0, 0, 0x00000000, bhvMistTrigger),
		OBJECT(MODEL_MIST_SECRET, 2694, -528, 4582, 0, 0, 0, 0x00000000, bhvMistTrigger),
		OBJECT(MODEL_MIST_SECRET, -7082, 2952, 10951, 0, 0, 0, 0x00000000, bhvMistTrigger),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 2730, 1356, 4714, 0, 0, 0, 0x001F0000, bhvWarpPipe),
		OBJECT(MODEL_RAINBOW_CLOUD, 9861, 145, 5607, 0, 177, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 15216, 572, -7039, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 17726, 572, -7880, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 15082, 572, -8030, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 17593, 572, -8872, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 14949, 572, -9021, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 16322, 572, -9710, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 9354, 145, 2287, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 10710, 145, 1711, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 11634, 145, 1078, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 14986, 145, 1527, 0, 177, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 7472, -705, 14681, 0, 90, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 10472, -705, 14181, 0, -90, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 10066, 3448, 9721, 0, -45, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 7816, 3448, 11115, 0, -45, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 14800, 2700, 1323, 0, -48, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAIN_CLOUD, -12252, 1418, -7372, 0, 0, 0, 0x00000000, bhvRainCloud),
		OBJECT(MODEL_RAIN_CLOUD, 7399, -750, 9560, 0, -53, 0, 0x00000000, bhvRainCloud),
		OBJECT(MODEL_STAR, 3172, 4060, -24471, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 4877, 3677, 13910, 0, 45, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, 2588, -446, 21150, 0, 0, 0, 0x01000000, bhvHiddenStar),
		OBJECT(MODEL_STRETCH_CLOUD, 1206, 3394, -24464, 0, 0, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, -4771, 3013, -22537, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, -3671, 3013, -23737, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 3683, -728, 8866, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 5478, -728, 7695, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 1658, -728, 7511, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 2694, -728, 4582, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 3894, -728, 6254, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, 6293, -828, 10449, 0, 37, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_NONE, 3477, 1070, 3679, 0, 0, 0, 0x201D0000, bhvWarp),
		TERRAIN(bbh_area_1_collision),
		ROOMS(bbh_area_1_collision_rooms),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_COMIT_CLOUD),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bbh_area_2),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BBH, 0x02, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BBH, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x55, LEVEL_BBH, 0x01, 0x55, WARP_NO_CHECKPOINT),
		WARP_NODE(0x4A, LEVEL_BBH, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -12259, -505, 3936, 0, 90, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -12618, -705, 3969, 0, -90, 0, 0x000A0000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -5482, 124, -7575, 0, -180, 0, 0x004A0000, bhvDoorWarp),
		OBJECT(MODEL_FADE_CLOUD, -6200, -735, 5098, 0, 0, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, -5320, -591, 4123, 0, 0, 0, 0x001E0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, -4498, -358, 5275, 0, 0, 0, 0x003C0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, -886, -299, 5540, 0, 0, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 520, -299, 5577, 0, 0, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 1063, -144, 4153, 0, 0, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 1425, -518, 6755, 0, 24, 0, 0x001E0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 2864, -656, 7248, 0, -23, 0, 0x001E0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 7290, 95, 3353, 0, 104, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 8327, 356, 2477, 0, 70, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 2678, 9, 3996, 0, -37, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 2707, -147, 5476, 0, -153, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 4157, 55, 5151, 0, 118, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 3709, -376, 6412, 0, 126, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 10002, 465, 2393, 0, 70, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 9086, 219, 3798, 0, 70, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 7924, 95, 5395, 0, 58, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 6679, 203, 6578, 0, 155, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 6287, 203, 8202, 0, 112, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 8193, 89, 8233, 0, 79, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 11122, 192, 3818, 0, 35, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 12853, 1, 6977, 0, 72, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 14184, 1, 8221, 0, 2, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 13068, 289, 9467, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 15014, 261, 9649, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 14896, 511, 11274, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 13233, 632, 11086, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 13301, 529, 12636, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 11554, 466, 12130, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 11348, 340, 10470, 0, -50, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 10304, 244, 8399, 0, 132, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 9568, 418, 10270, 0, 132, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 7282, 206, 11950, 0, 92, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 5365, 704, 12857, 0, 105, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 5798, 409, 11382, 0, 38, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 6859, 933, 13447, 0, 105, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_RAIN_CLOUD, 8753, 74, 5972, 0, -125, 0, 0x00000000, bhvRainCloud),
		OBJECT(MODEL_RED_COIN, -886, -129, 5540, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2678, 179, 3996, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6859, 1103, 13447, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3709, -206, 6412, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 13233, 802, 11086, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6287, 373, 8202, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 10002, 635, 2393, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 9724, 1311, 6739, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 5967, 554, 4614, 0, 0, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STRETCH_CLOUD, -5493, -351, -1953, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_NONE, 12899, 8225, -12472, 0, -180, 0, 0x00000000, bhvMinigameFwoosh),
		OBJECT(MODEL_NONE, 13686, 8225, -12472, 0, -180, 0, 0x00000000, bhvMinigameFwoosh),
		OBJECT(MODEL_NONE, 14472, 8225, -12472, 0, -180, 0, 0x00000000, bhvMinigameFwoosh),
		OBJECT(MODEL_FWOOSH_BUTTON, 12899, 8125, -11902, 0, 0, 0, 0x00000000, bhvFwooshButton),
		OBJECT(MODEL_FWOOSH_BUTTON, 13686, 8125, -11902, 0, 0, 0, 0x00000000, bhvFwooshButton),
		OBJECT(MODEL_FWOOSH_BUTTON, 14472, 8125, -11902, 0, 0, 0, 0x00000000, bhvFwooshButton),
		OBJECT(MODEL_METAL_CRATE, 14472, 8125, -12772, 0, -180, 0, 0x00000000, bhvMetalCrate),
		OBJECT(MODEL_METAL_CRATE, 13686, 8125, -12772, 0, -180, 0, 0x00000000, bhvMetalCrate),
		OBJECT(MODEL_METAL_CRATE, 12899, 8125, -12772, 0, -180, 0, 0x00000000, bhvMetalCrate),
		OBJECT(MODEL_NONE, 13686, 13077, -11575, 0, 0, 0, 0x00000000, bhvFwooshMGHandler),
		OBJECT(MODEL_NONE, 13686, 8425, -11026, 0, 0, 0, 0x05000000, bhvFwooshMGStar),
		OBJECT(MODEL_NONE, 13726, 8325, -10179, 0, -180, 0, 0x001A0000, bhvFlyingWarp),
		OBJECT(MODEL_NONE, 13686, 8145, -9047, 0, 0, 0, 0x40550000, bhvWarp),
		TERRAIN(bbh_area_2_collision),
		ROOMS(bbh_area_2_collision_rooms),
		MACRO_OBJECTS(bbh_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bbh_area_3),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BBH, 0x03, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BBH, 0x02, 0x4A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 6769, -32, 6552, 0, -95, 0, 0x000B0000, bhvAirborneDeathWarp),
		OBJECT(MODEL_CENTER_PLATFORM, 0, 0, 0, 0, 0, 0, 0x00000000, bhvCenterPlatform),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 7165, -350, 6623, 0, -90, 0, 0x000A0000, bhvDoorWarp),
		OBJECT(MODEL_FWOOSH_BUTTON, -13, 9067, -3221, 0, 0, 0, 0x00000000, bhvLightningButton),
		OBJECT(MODEL_LIGHTNING_CLOUD, 0, 867, 0, 0, 0, 0, 0x00000000, bhvLightningCloud),
		TERRAIN(bbh_area_3_collision),
		ROOMS(bbh_area_3_collision_rooms),
		MACRO_OBJECTS(bbh_area_3_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 168, 3129, 1558, 5156),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
