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
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bits/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bits_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_WARP_BOX, warpbox_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ASHPILE, ashpile_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ASHPILE2, ashpile2_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PROPANE_THROWER, propane_thrower_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RMINE, rmine_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FADE_CLOUD, fade_cloud_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_PALM_TREE, wf_palm_bits_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOKO, koko_bits_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bits_area_1),
		WARP_NODE(0x0A, LEVEL_BITS, 1, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BITS, 2, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(99, LEVEL_PSS, 2, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_GALOOMBA, 6994, -344, 1081, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 1564, 147, -54, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 9414, 465, 4915, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 8606, 404, 4095, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 4351, 1060, 6850, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 4555, 1052, 6232, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 4981, 1014, 6574, 0, 68, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_RC_SIGN, 3728, 3785, 7935, 0, 90, 0, 0x00000000, bhvRedCoinSign),
		OBJECT(MODEL_RED_COIN, 4394, 3621, 10237, 0, 90, 0, 0x00000000, bhvFinalBowserRedCoin),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 200, 0),
		OBJECT(MODEL_WARP_BOX, 3938, 3942, 7719, 0, 90, 0, (0 << 24) | (2 << 16), bhvWarpBox),
		OBJECT(MODEL_WARP_BOX, 2330, -1327, -577, 0, 90, 0, (0 << 24) | (99 << 16), bhvWarpBox),
		TERRAIN(bits_area_1_collision),
		MACRO_OBJECTS(bits_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bits_area_2),
		WARP_NODE(0x0A, LEVEL_BITS, 2, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 2, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 2, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BITS, 4, 1, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 103, -14184, -2413, -2665),
		OBJECT(MODEL_NONE, -14184, -2413, -2665, 0, 103, 0, (0xA << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_RED_COIN, 3879, -649, 3289, 0, 0, 0, 0x000B0000, bhvFinalBowserRedCoin),
		OBJECT(MODEL_WARP_BOX, -15314, -2719, -2876, 0, 83, 0, (1 << 24) | (1 << 16), bhvWarpBox),
		OBJECT(MODEL_FADE_CLOUD, 105, -850, 2152, 0, 0, 0, 0x00000000, bhvFadeCloudBits),
		OBJECT(MODEL_FADE_CLOUD, 1331, -850, 3207, 0, 0, 0, 0x00000000, bhvFadeCloudBits),
		OBJECT(MODEL_FADE_CLOUD, 3879, -853, 3289, 0, 0, 0, 0x00000000, bhvFadeCloudBits),
		OBJECT(MODEL_FADE_CLOUD, 2971, -850, 131, 0, -26, 0, 0x00000000, bhvFadeCloudBits),
		OBJECT(MODEL_FADE_CLOUD, 4708, -850, -88, 0, -86, 0, 0x00000000, bhvFadeCloudBits),
		OBJECT(MODEL_WARP_BOX, 16661, -120, 4058, 0, 0, 0, (2 << 16), bhvWarpBox),
		OBJECT(MODEL_RC_SIGN, 16369, -320, 4298, 0, -90, 0, 0x00000000, bhvRedCoinSign),
		TERRAIN(bits_area_2_collision),
		ROOMS(bits_area_2_collision_rooms),
		MACRO_OBJECTS(bits_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, bits_area_4),
		WARP_NODE(0x0A, LEVEL_BITS, 4, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 4, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 4, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BITS, 5, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_YELLOW_COIN, -24326, 19067, 0, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -23840, 19047, 0, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -23549, 18995, 0, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -23256, 18943, 0, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -21732, 18070, 592, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -19282, 16813, 1938, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -16456, 15162, -449, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -12552, 12409, -3419, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -11736, 12737, -3638, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -11064, 13063, -3812, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -10297, 13232, -3970, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -24113, 19067, 0, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -3921, 11470, -2893, 0, 60, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 211, 13286, -1762, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4487, 13444, -2292, 0, 47, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -7218, 11237, -3918, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_GOOMBA, -4353, 11392, -3366, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1262, 11969, -1700, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3211, 13237, -1796, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 5053, 13237, -2022, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7701, 14237, -1178, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 6756, 14237, 740, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_KOOPATROL, -6441, 11237, -3962, 0, 90, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 458, 12629, -1743, 0, 90, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_GOOMBA, -8255, 11237, -3953, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_RC_SIGN, 5868, 13237, -1126, 0, -90, 0, 0x00000000, bhvRedCoinSign),
		OBJECT(MODEL_RED_COIN, 7178, 14347, -400, 0, 90, 0, 0x00000000, bhvFinalBowserRedCoin),
		OBJECT(MODEL_WARP_BOX, -25751, 19081, 0, 0, 90, 0, (1 << 24) | (1 << 16), bhvWarpBox),
		OBJECT(MODEL_WARP_BOX, 6244, 16237, -533, 0, 90, 0, (0 << 24) | (2 << 16), bhvWarpBox),
		OBJECT(MODEL_NONE, -24926, 19766, 0, 0, 90, 0, (0xA << 16), bhvSpinAirborneWarp),
		TERRAIN(bits_area_4_collision),
		ROOMS(bits_area_4_collision_rooms),
		MACRO_OBJECTS(bits_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, bits_area_5),
		WARP_NODE(0x0A, LEVEL_BITS, 5, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 5, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 5, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BITS, 6, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, -4079, 917, -1496, 0, 0, 0, (3 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -5093, 250, 565, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 1558, 2552, -4821, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 8830, 2276, 5702, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_WF_PALM_TREE, 7007, 3475, 4410, 0, 0, 0, 0x00000000, bhvPalmTreeBits),
		OBJECT(MODEL_WF_PALM_TREE, 1081, 1822, -7588, 0, 0, 0, 0x00000000, bhvPalmTreeBits),
		OBJECT(MODEL_WF_PALM_TREE, 7500, 3015, -3927, 0, 0, 0, 0x00000000, bhvPalmTreeBits),
		OBJECT(MODEL_RC_SIGN, 9303, 1590, 7993, 0, -180, 0, 0x00000000, bhvRedCoinSign),
		OBJECT(MODEL_NONE, -4080, 200, 2601, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_RED_COIN, 4467, 6801, 40, 0, 0, 0, 0x00000000, bhvFinalBowserRedCoin),
		OBJECT(MODEL_WARP_BOX, -4087, 135, 2972, 0, -180, 0, (1 << 24) | (1 << 16), bhvWarpBox),
		OBJECT(MODEL_WARP_BOX, 8901, 1868, 8628, 0, 90, 0, (0 << 24) | (2 << 16), bhvWarpBox),
		TERRAIN(bits_area_5_collision),
		MACRO_OBJECTS(bits_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, bits_area_6),
		WARP_NODE(0x0A, LEVEL_BITS, 6, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 6, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 6, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BITS, 7, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_ASHPILE, 5107, -1291, 1541, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_ASHPILE, -351, 3079, 1488, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_ASHPILE, -1091, 3079, 1171, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_ASHPILE, -3147, 3779, 1549, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_ASHPILE, -3376, 3779, 1193, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_ASHPILE, -4810, 8302, 2420, 0, 0, 0, 0x00000000, bhvAshpileBits),
		OBJECT(MODEL_BREAKABLE_BOX, 1346, 913, 490, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1346, 913, 92, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1346, 913, -308, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PROPANE_THROWER, 8462, -1553, 1995, 0, 0, 0, 0x00000000, bhvPropaneThrower),
		OBJECT(MODEL_PROPANE_THROWER, 2953, -22, 5934, 0, 0, 0, 0x00000000, bhvPropaneThrower),
		OBJECT(MODEL_PROPANE_THROWER, 1369, 2045, 5934, 0, 0, 0, 0x00000000, bhvPropaneThrower),
		OBJECT(MODEL_PROPANE_THROWER, 314, 2045, 5934, 0, 0, 0, (1 << 16), bhvPropaneThrower),
		OBJECT(MODEL_RMINE, 3481, -1055, 2707, 0, 0, 0, 0x00000000, bhv_rmine),
		OBJECT(MODEL_RMINE, 3481, -1055, 2120, 0, 0, 0, 0x00000000, bhv_rmine),
		OBJECT(MODEL_MOTOS, 1379, 1012, 2146, 0, 129, 0, 0x00000000, bhvMotos),
		OBJECT(MODEL_MOTOS, 3532, -22, 4860, 0, 129, 0, 0x00000000, bhvMotos),
		OBJECT(MODEL_MOTOS, -1282, 3079, 1389, 0, 129, 0, 0x00000000, bhvMotos),
		OBJECT(MODEL_PURPLE_SWITCH, 1897, 1012, 1302, 0, 0, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_RC_SIGN, -7536, 8302, 2417, 0, 90, 0, 0x00000000, bhvRedCoinSign),
		OBJECT(MODEL_RED_COIN, 1346, 1151, -308, 0, 0, 0, 0x00000000, bhvFinalBowserRedCoin),
		OBJECT(MODEL_WARP_BOX, 10464, -1313, 2460, 0, -90, 0, (1 << 24) | (1 << 16), bhvWarpBox),
		OBJECT(MODEL_WARP_BOX, -8194, 8502, 2435, 0, 0, 0, (0 << 24) | (2 << 16), bhvWarpBox),
		OBJECT(MODEL_NONE, 9928, -1246, 2466, 0, 90, 0, (0xA << 16), bhvSpinAirborneWarp),
		TERRAIN(bits_area_6_collision),
		MACRO_OBJECTS(bits_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(7, bits_area_7),
		WARP_NODE(0x0A, LEVEL_BITS, 7, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITS, 7, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BITS, 7, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_PSS, 1, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_WARP_BOX, 1100, 200, 0, 0, 0, 0, (0 << 24) | (2 << 16), bhvWarpBox),
		OBJECT(MODEL_WARP_BOX, -1100, 200, 0, 0, 90, 0, (1 << 24) | (1 << 16), bhvWarpBox),
		OBJECT(MODEL_NONE, 434, 0, -297, 0, 90, 0, (0xA << 16), bhvSpinAirborneWarp),
		TERRAIN(bits_area_7_collision),
		MACRO_OBJECTS(bits_area_7_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SOUND_PLAYER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 103, -14184, -2413, -2665),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
