#include "src/game/envfx_snow.h"

const GeoLayout ssl_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -17, -8614, 19, 0, 30, 0, ssl_dl_Beam_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 6929, -474, 3071, ssl_dl_Beam2_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -4399, -201, -6580, ssl_dl_Beam2_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2361, 429, -3342, 0, -109, 0, ssl_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4941, 4067, 452, ssl_dl_Cube_basic_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 900, -1883, 5996, ssl_dl_Cube_basic_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -12127, 2284, 7108, 0, 9, 0, ssl_dl_Cube_basic_002_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4974, 5790, 261, ssl_dl_Cube_basic_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4534, 3793, 15, ssl_dl_Cube_basic_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4637, 4444, 838, ssl_dl_Cube_basic_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2429, 5004, 3269, 0, -107, 0, ssl_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6545, 4101, 924, 0, 121, 0, ssl_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8152, 5299, -4099, 0, -163, 0, ssl_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 12, -1854, -2005, 0, -180, 0, ssl_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 30, -987, -1336, 0, -180, 0, ssl_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1422, 65, -5278, 0, -107, 0, ssl_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -808, 65, -5091, 0, -107, 0, ssl_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1670, 429, -4713, 0, -109, 0, ssl_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5931, 429, -6163, 0, -109, 0, ssl_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6627, 429, -1891, 0, -109, 0, ssl_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4791, -1628, 7038, 0, 15, 0, ssl_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5048, -1637, 7994, 0, 15, 0, ssl_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5273, -1637, 8834, 0, 15, 0, ssl_dl_Cube_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5482, -1637, 9615, 0, 15, 0, ssl_dl_Cube_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5697, -1637, 10417, 0, 15, 0, ssl_dl_Cube_015_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5697, -256, 10417, 0, 15, 0, ssl_dl_Cube_016_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5887, 54, 11123, 0, 15, 0, ssl_dl_Cube_017_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2468, -1771, 6432, 0, 5, 0, ssl_dl_Cube_018_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2005, 1072, 4380, 0, 121, 0, ssl_dl_Cube_019_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2429, 6390, 3269, 0, -107, 0, ssl_dl_Cube_020_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2907, 5669, 3336, 0, -107, 0, ssl_dl_Cube_021_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9188, -621, -7517, 0, 21, 0, ssl_dl_Cylinder_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6637, -621, 9429, 0, -3, 0, ssl_dl_Cylinder_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 10336, -621, 10753, 0, 150, 0, ssl_dl_Cylinder_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11384, 200, -835, 0, -83, 0, ssl_dl_Cylinder_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5515, -3787, -4590, 0, -39, 0, ssl_dl_Cylinder_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4574, -6444, 6155, 0, 105, 0, ssl_dl_Cylinder_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -591, -3464, 9241, ssl_dl_Cylinder_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5203, -3458, 337, 0, -131, 0, ssl_dl_Cylinder_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8148, -3464, 2760, ssl_dl_Cylinder_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3508, -2335, -9849, ssl_dl_Cylinder_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4799, -394, 3610, 0, -15, 0, ssl_dl_Cylinder_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3728, -3490, 4149, 0, -15, 0, ssl_dl_Cylinder_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1238, -876, -12591, ssl_dl_Cylinder_015_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6929, -474, 3071, ssl_dl_Cylinder_016_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6929, 3646, 3071, ssl_dl_Cylinder_017_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ssl_dl_Cylinder_017_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, -5946, 2012, 0, 14, 0, ssl_dl_Cylinder_018_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5477, -3787, -2323, 0, 47, 0, ssl_dl_Cylinder_019_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -69, -1723, -3384, 0, 148, 0, ssl_dl_Cylinder_021_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4399, -201, -6580, ssl_dl_Cylinder_022_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3, -3242, 6, 0, 30, 0, ssl_dl_Cylinder_023_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ssl_dl_Cylinder_023_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1131, -1651, -3974, 0, 148, 0, ssl_dl_Cylinder_024_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1119, -1353, -5173, 0, 161, 0, ssl_dl_Cylinder_025_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4399, 2090, -6580, ssl_dl_Cylinder_026_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ssl_dl_Cylinder_026_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2309, -2479, 1066, 0, 53, 0, ssl_dl_Cylinder_028_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1604, -2474, 1990, 0, 44, 0, ssl_dl_Cylinder_029_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2557, -2474, 2937, 0, 44, 0, ssl_dl_Cylinder_030_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3588, -2479, 2205, 0, 53, 0, ssl_dl_Cylinder_031_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2609, -2479, 2012, 0, 14, 0, ssl_dl_Cylinder_032_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5447, -503, 9645, 0, -15, 0, ssl_dl_Cylinder_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2781, -2687, 5769, 0, 12, 0, ssl_dl_Cylinder_034_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1703, -1819, 5874, 0, 32, 0, ssl_dl_Cylinder_035_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1319, 691, 7606, 0, -27, 0, ssl_dl_Cylinder_036_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3353, -2479, 1267, 0, 53, 0, ssl_dl_Cylinder_037_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1841, -2474, 2665, 0, 44, 0, ssl_dl_Cylinder_038_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5120, 4611, -1146, 7, 7, 22, ssl_dl_Cylinder_039_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6495, 4693, -1463, 7, -160, 22, ssl_dl_Cylinder_040_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6080, 4879, -3191, 7, 25, 22, ssl_dl_Cylinder_041_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6817, 2693, 1093, ssl_dl_Cylinder_042_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8903, 4158, -2341, 25, -57, 15, ssl_dl_Cylinder_043_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12232, 3093, -2293, 25, -57, 15, ssl_dl_Cylinder_044_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15799, 2058, -2088, ssl_dl_Cylinder_045_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 8939, 2012, 0, 14, 0, ssl_dl_Cylinder_046_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2836, 7160, 1078, 0, 22, 0, ssl_dl_Cylinder_047_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1755, 7165, 1505, 0, 13, 0, ssl_dl_Cylinder_048_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2368, 7165, 2981, 0, 13, 0, ssl_dl_Cylinder_049_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3344, 7160, 2713, 0, 22, 0, ssl_dl_Cylinder_050_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 449, 2012, 0, 14, 0, ssl_dl_Cylinder_051_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3627, 7160, 1789, 0, 22, 0, ssl_dl_Cylinder_052_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1750, 7165, 2485, 0, 13, 0, ssl_dl_Cylinder_053_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 449, 2012, 0, 14, 0, ssl_dl_Cylinder_055_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 449, 2012, 0, 14, 0, ssl_dl_Cylinder_056_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 449, 2012, 0, 14, 0, ssl_dl_Cylinder_057_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2612, 3743, 2012, 0, 14, 0, ssl_dl_Cylinder_058_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 3919, -2605, 6830, 90, 0, -125, ssl_dl_Image_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -1182, -1085, -3863, 0, 60, 0, ssl_dl_Paw_print_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -1368, -486, -5297, 90, 0, 107, ssl_dl_Paw_print_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -1368, 352, -5297, 90, 0, 107, ssl_dl_Paw_print_003_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -842, -66, -5136, 90, 0, -73, ssl_dl_Paw_print_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8350, 3025, 1999, 0, 128, 0, ssl_dl_Paw_print_005_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -8369, 3025, 3175, 0, 61, 0, ssl_dl_Paw_print_006_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -7605, 3025, 2966, 0, 131, 0, ssl_dl_Paw_print_007_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -9185, 3025, 3026, 0, 61, 0, ssl_dl_Paw_print_008_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -207, 726, 9975, 0, 20, 0, ssl_dl_Paw_print_009_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -890, 726, 8858, 0, -5, 0, ssl_dl_Paw_print_010_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -354, 726, 9358, 0, -23, 0, ssl_dl_Paw_print_011_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, -10236, -37, ssl_dl_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 41, -9289, -330, ssl_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 41, -8369, -330, ssl_dl_Plane_002_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssl_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 40000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ssl_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ssl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ssl_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};