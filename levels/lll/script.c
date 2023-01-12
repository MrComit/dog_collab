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

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group6.h"
#include "actors/group14.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/lll/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _fire_yay0SegmentRomStart, _fire_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, lll_geo_0009E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, lll_geo_0009F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, lll_geo_000A10), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, lll_geo_000A28), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, lll_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, lll_geo_000A60), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, lll_geo_000A90), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, lll_geo_000AA8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, lll_geo_000AC0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, lll_geo_000AD8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, lll_geo_000AF0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART, lll_geo_000B20), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, lll_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING, lll_geo_000BB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM, lll_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS, lll_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM, lll_geo_000BF8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1, lll_geo_bowser_puzzle_piece_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2, lll_geo_bowser_puzzle_piece_2), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3, lll_geo_bowser_puzzle_piece_3), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4, lll_geo_bowser_puzzle_piece_4), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5, lll_geo_bowser_puzzle_piece_5), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6, lll_geo_bowser_puzzle_piece_6), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7, lll_geo_bowser_puzzle_piece_7), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8, lll_geo_bowser_puzzle_piece_8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9, lll_geo_bowser_puzzle_piece_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10, lll_geo_bowser_puzzle_piece_10), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11, lll_geo_bowser_puzzle_piece_11), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12, lll_geo_bowser_puzzle_piece_12), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13, lll_geo_bowser_puzzle_piece_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14, lll_geo_bowser_puzzle_piece_14), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK, lll_geo_000DD0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG, lll_geo_000DE8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM, lll_geo_000A78), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE, lll_geo_000B50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE, lll_geo_000B68), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM, lll_geo_000B80), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM, lll_geo_000B98), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP, lll_geo_000EA8), 
	LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN_SWITCH, blue_coin_switch_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PURPLE_SWITCH, purple_switch_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM, checkerboard_platform_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX, breakable_box_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX_NO_SHADOW, breakable_box_no_shadow_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXCLAMATION_BOX_OUTLINE, exclamation_box_outline_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXCLAMATION_BOX, exclamation_box_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GOOMBA, goomba_geo), 
	LOAD_MODEL_FROM_DL(MODEL_EXCLAMATION_POINT, exclamation_box_outline_seg8_dl_exclamation_point, LAYER_OCCLUDE_SILHOUETTE_ALPHA), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_SHELL, koopa_shell_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_METAL_BOX, metal_box_geo), 
	LOAD_MODEL_FROM_DL(MODEL_METAL_BOX_DL, metal_box_dl, LAYER_OPAQUE), 
	LOAD_MODEL_FROM_GEO(MODEL_BLACK_BOBOMB, black_bobomb_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOBOMB_BUDDY, bobomb_buddy_geo), 
	LOAD_MODEL_FROM_DL(MODEL_DL_CANNON_LID, cannon_lid_seg8_dl_080048E0, LAYER_OPAQUE), 
	LOAD_MODEL_FROM_GEO(MODEL_BOWLING_BALL, bowling_ball_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CANNON_BARREL, cannon_barrel_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CANNON_BASE, cannon_base_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HEART, heart_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FLYGUY, flyguy_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHUCKYA, chuckya_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAJECTORY_MARKER_BALL, bowling_ball_track_geo), 
	LOAD_MODEL_FROM_DL(MODEL_DL_MONTY_MOLE_HOLE, monty_mole_hole_seg5_dl_05000840, LAYER_TRANSPARENT_DECAL), 
	LOAD_MODEL_FROM_GEO(MODEL_MONTY_MOLE, monty_mole_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_UKIKI, ukiki_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FWOOSH, fwoosh_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PIRANHA_PLANT, piranha_plant_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WHOMP, whomp_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITH_SHELL, koopa_with_shell_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITHOUT_SHELL, koopa_without_shell_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_METALLIC_BALL, metallic_ball_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHAIN_CHOMP, chain_chomp_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOOPA_FLAG, koopa_flag_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WOODEN_POST, wooden_post_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, lll_area_1),
		WARP_NODE(0x0A, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1E, LEVEL_LLL, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF6, LEVEL_LLL, 0x02, 0xF5, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1A, LEVEL_LLL, 0x03, 0x1B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1D, LEVEL_LLL, 0x03, 0x1C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLOOPER, 13589, -1035, -1523, 0, 0, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_BLOOPER, 11589, -1035, -9423, 0, 0, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_BLOOPER, 13489, -1035, 4577, 0, 0, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_BLUE_COIN, 6530, 214, 3643, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 6965, 214, 2832, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 6837, 214, 1446, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 5878, 214, 4428, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_BOBOMB_BUDDY, 4427, 507, -6734, 0, 0, 0, (0x06 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, -6173, 73, -2634, 0, -15, 0, (0x08 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, -5073, 73, -4434, 0, 135, 0, (0x07 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 2232, 0, -272, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 2032, 470, 3728, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -1568, 0, -472, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -2668, 0, 2828, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -568, 0, 4728, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -2568, 0, -1072, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_CHUCKYA, 2532, 0, 1828, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_YELLOW_COIN, -5689, 446, 3697, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6160, 240, 3436, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5250, 456, 3377, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6099, 775, 2618, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5529, 692, 1537, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -6718, 194, 4999, 0, 32, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -6476, 391, 1317, 0, 7, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9108, 196, -8288, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5741, 1740, -9907, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 12018, 131, -9638, 0, 60, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 13745, 131, -2599, 0, 22, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 11077, 131, 1416, 0, -50, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 14491, 213, -6543, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 9108, 2574, -8288, 0, 0, 0, (18 << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -4028, 488, 0, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4028, 488, -300, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4028, 488, 300, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4028, 735, 791, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4028, 735, 1191, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4028, 1058, 1861, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_BLACK_BOBOMB, 5674, 1740, -10432, 0, -33, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 6061, 1740, -8997, 0, -33, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_YELLOW_COIN, 4059, 1307, -9562, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1800, 520, 3388, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1526, 258, 3028, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 0, 186, 2328, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 0, 186, 1025, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -662, 186, 1678, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 662, 186, 1678, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2941, 256, -375, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2941, 311, 200, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2941, 574, 830, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2941, 448, 1287, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2807, 120, 37, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5884, 72, -2137, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4258, 72, -4167, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -460, 1289, -5601, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2177, 1569, -6270, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2946, 1861, -4779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2465, 2662, -3323, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2225, 2820, -1089, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -489, 3256, -891, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1283, 3846, -891, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2130, 4169, -1770, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4538, 1797, -4808, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 9108, 2574, -8288, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 8834, 1631, -5670, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7983, 1263, -5730, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 8429, 720, -6217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 9108, 3074, -8288, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3359, 2030, -9162, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5986, 507, -6956, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -7158, 315, -130, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4759, 568, -9962, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7903, 393, -3098, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 8003, 393, -2398, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7503, 393, -2498, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6853, 373, -1995, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6353, 372, -1595, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6163, 984, -476, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6426, 590, 485, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6252, 357, 1685, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5506, 352, 1755, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4798, 352, 1573, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3937, 268, 1247, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3922, 506, 898, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3922, 506, 253, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3922, 1138, -577, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3922, 939, -998, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3922, 1224, -1699, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 10060, 980, 4131, 0, -33, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 10570, 1280, -1634, 0, 20, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_FWOOSH, -1838, 2819, -3522, 0, -90, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_FWOOSH, -1740, 2919, -1541, 0, -45, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_FWOOSH, -540, 3419, -1441, 0, 0, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_FWOOSH, 1284, 4121, -1577, 0, 40, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_FWOOSH, -2238, 1722, -5522, 0, -145, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_GALOOMBA, 7929, 285, -6717, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 8929, 285, -6317, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 10058, 587, 4451, 0, -33, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, -2032, 0, -3217, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, -5011, 449, 3363, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GALOOMBA, 5597, 506, -5933, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_NONE, 2448, 0, -3563, 0, -8, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -1502, 272, -6581, 0, -8, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, 10574, 565, 4201, 0, -33, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7601, 622, 707, 0, -8, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9454, 242, 4823, 0, -33, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7748, 601, -1563, 0, -8, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_CHUCKYA, 6879, 3288, -10159, 0, -33, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -368, 0, 3128, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -1568, 0, -272, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 5232, 0, 2928, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 5632, 0, -1872, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 7932, 0, 2328, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -5068, 0, 2328, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 6932, 0, -672, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_BOBOMB_BUDDY, 8411, -8, 6000, 0, -33, 0, (0x0F << 16), bhvBobombBuddy),
		OBJECT(MODEL_GOOMBA, 1432, 0, 528, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -968, 0, 2428, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2368, 0, 4328, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -932, 0, 1428, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_MONTY_MOLE, -932, 0, 1428, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 932, 0, 1428, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -1332, 0, 3428, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 2768, 0, 2228, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 2368, 0, -972, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -1732, 0, 4028, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 932, 0, -1372, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -1368, 0, 28, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -2368, 0, 2028, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -468, 0, 2428, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 1332, 0, 2928, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 232, 0, 3428, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, 2932, 0, 928, 0, 0, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_MONTY_MOLE, -1332, 0, 3428, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, 2768, 0, 2228, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, 2368, 0, -972, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, -468, 0, 2428, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, -1132, 0, -1172, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, -1132, 0, -1172, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, 1332, 0, 2928, 0, 0, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_PIRANHA_PLANT, 7667, 865, -447, 0, -8, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -475, -191, -7785, 0, -8, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -3948, -155, 6264, 0, 82, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -3332, 0, -2517, 0, -180, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 10725, 194, -4278, 0, -8, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_NONE, 6896, 649, -8949, 0, 0, 0, 0x01310000, bhvPoleGrabbing),
		OBJECT(MODEL_PURPLE_SWITCH, 2356, 4169, -3127, 0, 0, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_BREAKABLE_BOX, 2056, 4565, -4297, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2456, 4365, -3697, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2656, 4365, -3697, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2256, 4565, -4297, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2056, 4565, -4497, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2456, 4365, -3897, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2656, 4365, -3897, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 2256, 4565, -4497, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1656, 4865, -3797, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1856, 4865, -3797, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1656, 4865, -3997, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 1856, 4865, -3997, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_RED_COIN, -3030, 746, 3730, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 0, 300, 374, 0, 0, 0, (0x03 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -1875, 1084, 37, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1579, 635, -586, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2941, 687, 1709, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3027, 746, 3730, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1902, 0, 2474, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 0, -1226, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 0, 2574, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_REX, 10337, 404, -2823, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_REX, -2511, 2416, -3823, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_REX, -2502, 1570, -6044, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_REX, -303, 3297, -891, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_NONE, 4538, 1797, -4808, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 4569, 837, -6264, 0, 0, 0, (0x02 << 24), bhvHiddenStar),
		OBJECT(MODEL_NONE, 9108, 2574, -8288, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 8834, 1631, -5670, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 3359, 2030, -9162, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 5986, 507, -6956, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 0, 6065, -3239, 0, 0, 0, (0x01 << 24), bhvStar),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, 599, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, -681, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, 1879, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, 3159, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, 4439, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 3419, 1546, -1897, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2619, 1546, -1897, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -2619, 1546, -1897, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, -1897, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, -681, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, 599, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, 1879, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, 3159, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -3419, 1546, 4439, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -132, 657, 6662, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -132, 657, 6662),
		OBJECT(MODEL_NONE, -8093, 0, 1300, 0, 90, 0, 0x00F60000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, 13394, -2000, 1168, 0, 0, 0, (0x1D << 16), bhvSwimmingWarp),
		OBJECT(MODEL_NONE, 13052, -3418, 400, 0, 0, 0, 0xC81A0000, bhvWarp),
		OBJECT(MODEL_WHOMP, 9126, 3288, -10151, 0, -89, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(lll_area_1_collision),
		MACRO_OBJECTS(lll_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_FEUDAL_OUTSIDE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, lll_area_2),
		WARP_NODE(0x0A, LEVEL_LLL, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_LLL, 0x01, 0xF2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF5, LEVEL_LLL, 0x01, 0xF6, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_DOG, -10798, 3370, -942, 0, 90, 0, (0x10 << 16), bhvDogNPC),
		OBJECT(MODEL_FLYGUY, -2793, 1342, -1739, 0, 90, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_CHUCKYA, -6248, 878, -4762, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_GOOMBA, -6275, 1084, -2896, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6275, 1084, -1788, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -7535, 2045, 758, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -8455, 2346, 758, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -10098, 2617, 758, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1135, 202, 961, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -593, 0, -300, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -393, 0, 900, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -1093, 0, 100, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -6593, 1470, 400, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -7493, 1470, 0, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_DL_MONTY_MOLE_HOLE, -8693, 1470, 300, 0, -90, 0, 0x00000000, bhvMontyMoleHole),
		OBJECT(MODEL_EXCLAMATION_BOX, -9062, 4255, 725, 0, -90, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_MONTY_MOLE, -6593, 1470, 400, 0, -90, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_MONTY_MOLE, -593, 0, -300, 0, -90, 0, (1 << 16), bhvMontyMole),
		OBJECT(MODEL_REX, -2093, 742, 561, 0, -90, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_FWOOSH, -6746, 891, -3853, 0, 90, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_REX, -5893, 1750, 700, 0, -90, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_STAR, -11698, 3970, -1026, 0, -180, 0, (0x00 << 24), bhvStar),
		OBJECT(MODEL_NONE, 1107, 0, 0, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WHOMP, -2905, 410, -4735, 0, 90, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_YELLOW_COIN, -2069, 820, -1000, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2760, 820, -1000, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1560, 974, -2336, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2251, 974, -2336, 0, -90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2089, 610, -2813, 0, -69, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2265, 610, -3281, 0, -69, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2278, 410, -3750, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2278, 410, -4250, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1878, 410, -5050, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3708, 559, -4816, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4710, 658, -4912, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6501, 878, -5044, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -6275, 878, -3846, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -6794, 1847, 600, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5590, 1156, -2300, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6790, 1256, -2300, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6790, 1256, -2400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6790, 1256, -2200, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6790, 1256, -2500, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6790, 1256, -2100, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(lll_area_2_collision),
		MACRO_OBJECTS(lll_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_FEUDAL_FOREST),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, lll_area_3),
		WARP_NODE(0x0A, LEVEL_LLL, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_LLL, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1B, LEVEL_LLL, 0x01, 0x1A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1C, LEVEL_LLL, 0x01, 0x1D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1E, LEVEL_LLL, 0x04, 0x1F, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_LLL, 0x04, 0x20, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BUZZY_BEETLE, 4561, 0, -138, 0, 0, 0, 0x00000000, bhvBuzzyBeetle),
		OBJECT(MODEL_CHAIN_CHOMP, 1434, 1041, 4913, 0, 90, 0, 0x00000000, bhvChainChomp),
		OBJECT(MODEL_NONE, 1400, 0, 0, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4100, 0, 100, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1434, 1041, 4913, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, 4941, 599, 2500, 0, 0, 0, (0x05 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 4370, 898, 4200, 0, 90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 5510, 530, 3544, 0, -90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 4370, 398, 3000, 0, 90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_PURPLE_SWITCH, 1100, 1041, 4913, 0, -90, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_BREAKABLE_BOX, -483, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -683, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -883, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -883, 841, 4713, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -883, 841, 4513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -883, 841, 4313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1083, 841, 4313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1283, 841, 4313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 4313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 4513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 4713, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 5113, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 5313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1483, 841, 5513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1683, 841, 5513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -1883, 841, 5513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -2083, 841, 5513, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -2083, 841, 5313, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -2083, 841, 5113, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -2083, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -2283, 841, 4913, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_NONE, 1400, 0, 0, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 4725, 0, 700, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GALOOMBA, 3552, 0, 0, 0, 0, 0, 0x00000000, bhvGaloomba),
		OBJECT(MODEL_GOOMBA, -265, 0, 1000, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BOBOMB_BUDDY, 1550, 0, 1000, 0, -180, 0, 0x00000000, bhvBobombBuddy),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, 3365, 0, 1000, 0, 0, 0, 0x00000000, bhvKoopa),
		OBJECT(MODEL_PIRANHA_PLANT, 3365, 0, -900, 0, 0, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_RED_FLAME, -265, 372, -1150, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1550, 372, -1150, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 3365, 372, -1150, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 3365, 372, 1156, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1550, 372, 1156, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -265, 372, 1156, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 775, 1518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 875, 2018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 975, 2518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 1075, 3018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 1175, 3518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 1275, 4018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5449, 1375, 4418, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 775, 1518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 875, 2018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 975, 2518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 1075, 3018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 1175, 3518, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 1275, 4018, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4427, 1375, 4418, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1761, 1262, 3942, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1761, 1262, 5900, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_STAR, -3527, 1533, 4913, 0, -90, 0, (0x04 << 24), bhvStar),
		OBJECT(MODEL_NONE, 661, 37, 236, 0, -180, 0, 0x00210000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, -400, 37, 0, 0, 90, 0, 0x001B0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, -400, 37, 0, 0, 90, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_WHOMP, 4466, 1041, 4913, 0, 90, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_YELLOW_COIN, -265, 0, -900, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 235, 0, -838, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 982, 0, -933, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -7, 0, -874, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(lll_area_3_collision),
		MACRO_OBJECTS(lll_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_FEUDAL_DUNGEON),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, lll_area_4),
		WARP_NODE(0x0A, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1F, LEVEL_LLL, 0x03, 0x1E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_LLL, 0x03, 0x21, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1500, -800, 0, 0, 0, 0, (0x04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 1076, 4163, 400, 0, 0, 0, (0x04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 213, 4163, 400, 0, 0, 0, (0x04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, -320, 5035, -600, 0, 0, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_GOOMBA, 800, 1800, 400, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_KOOPATROL, 2400, -800, -900, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 1200, -800, 700, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 1800, -800, 0, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, -500, 1400, 600, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 100, 1400, -200, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 2600, 1400, -600, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, -100, 4163, -200, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, -100, 4163, 1200, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_KOOPATROL, 900, 4163, 400, 0, 0, 0, 0x00000000, bhvKoopatrol),
		OBJECT(MODEL_PIRANHA_PLANT, 4028, 1000, 400, 0, -180, 0, 0x00000000, bhvPiranhaPlant),
		OBJECT(MODEL_REX, 1550, 4687, 400, 0, 0, 0, 0x00000000, bhvRex),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 1100, -300, -400, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 1900, -300, 500, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, 680, 4565, 400, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_LLL_TILTING_SQUARE_PLATFORM, -320, 4665, 400, 0, 0, 0, 0x00000000, bhvLllTiltingInvertedPyramid),
		OBJECT(MODEL_STAR, -1820, 5742, 400, 0, 0, 0, (0x05 << 24), bhvStar),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 90, 0, (0x1F << 16), bhvAirborneWarp),
		OBJECT(MODEL_GOOMBA, 2834, 200, 0, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_YELLOW_COIN, 2834, 200, -787, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4028, 600, -787, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2039, 1800, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1304, 2060, 70, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1141, 2460, 70, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -808, 2434, 70, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 349, 2852, -319, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1086, 3131, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2668, 3554, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2992, 3878, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2184, 4164, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1900, 4420, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1863, 2032, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1018, 2032, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -500, 5302, 400, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(lll_area_4_collision),
		MACRO_OBJECTS(lll_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_FEUDAL_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -132, 657, 6662),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
