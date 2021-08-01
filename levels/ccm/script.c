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

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_MAGMA_THWOMP, magma_thwomp_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWING_BOARD, swing_board_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PROPANE_THROWER, propane_thrower_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LAVA_GRATE, lava_grate_geo), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, -918, 1715, -5028, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -672, 1304, -4827, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_YELLOW_COIN_NO_SHADOW, 54, 1522, 6779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN_NO_SHADOW, -872, 1522, 6779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN_NO_SHADOW, 204, 1522, 6779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN_NO_SHADOW, -1022, 1522, 6779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 3000, 1807, 8145, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 718, 623, -3567, 0, -12, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -409, 1807, 7280, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2120, 623, -6078, 0, -45, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_BLUE_FLAME, -3632, 3848, 4161, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -4798, 4098, 3743, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -1855, 1251, 6711, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, 936, 1251, 6705, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_PROPANE_THROWER, 6017, 2348, 7943, 0, 0, 0, 0x00000000, bhvPropaneThrower),
		OBJECT(MODEL_PROPANE_THROWER, 6776, 2348, 7189, 0, 0, 0, 0x00010000, bhvPropaneThrower),
		OBJECT(MODEL_LAVA_GRATE, -1746, 886, -5187, 0, 0, 0, 0x00000000, bhvLavaGrate),
		OBJECT(MODEL_LAVA_GRATE, -4291, 601, 6852, 0, 0, 0, 0x00000000, bhvLavaGrate),
		OBJECT(MODEL_MOTOS, -1600, 842, 6306, 0, 129, 0, 0x00000000, bhvMotos),
		OBJECT(MODEL_MOTOS, -2341, 1998, 8165, 0, -180, 0, 0x00000000, bhvMotos),
		OBJECT(MODEL_PODOBOO, -941, 1669, 1280, 0, -180, 0, 0x00000000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, 33, 1629, 3188, 0, -180, 0, 0x00000000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, -5876, 4391, 7884, 0, -180, 0, 0x00050000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, -5876, 4391, 9347, 0, -180, 0, 0x00050000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, -5876, 4649, 10708, 0, -180, 0, 0x00060000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, 1309, 941, -4869, 0, -32, 0, 0x00000000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, 1016, 1107, -5016, 0, -24, 0, 0x00000000, bhvPodoboo),
		OBJECT(MODEL_PODOBOO, -376, 699, 3424, 0, -180, 0, 0x00000000, bhvPodoboo),
		OBJECT(MODEL_RED_COIN, -377, 661, 3679, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5876, 3732, 6603, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2607, 845, 7184, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2472, 1304, -7026, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3045, 2259, 6438, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4718, 845, 6113, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -409, 1098, 5702, 0, 0, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -502, 1165, -571, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_STAR, -5876, 4493, 11353, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_SWING_BOARD, -5676, 4126, 6586, 13, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -5676, 3983, 7433, 13, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -5676, 3907, 8085, 0, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -5676, 3907, 8572, 0, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -6076, 3907, 8327, 0, -180, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -6076, 3929, 9554, 8, -180, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -6076, 3998, 10026, 8, -180, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -6076, 4072, 10535, 8, -180, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -5676, 4051, 10266, -8, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_SWING_BOARD, -5676, 3970, 9782, -8, 0, 0, 0x00000000, bhvSwingBoard),
		OBJECT(MODEL_MAGMA_THWOMP, -3427, 3072, 7293, 0, 0, 0, 0x00000000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, -3427, 3072, 6452, 0, 0, 0, 0x00010000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, 6918, 2080, 4914, 0, 0, 0, 0x00000000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, 6918, 2080, 4456, 0, 0, 0, 0x00010000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, 6918, 2080, 3999, 0, 0, 0, 0x00020000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, 6918, 2080, 3541, 0, 0, 0, 0x00030000, bhvMagmaThwomp),
		OBJECT(MODEL_MAGMA_THWOMP, 6918, 2080, 3083, 0, 0, 0, 0x00040000, bhvMagmaThwomp),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
