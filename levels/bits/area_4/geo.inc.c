#include "src/game/envfx_snow.h"

const GeoLayout bits_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -16, 0, bits_dl_inner_torus_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7176, -13, 0, bits_dl_inner_torus_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bits_dl_shock_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -7176, -6, 0, bits_dl_shock_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9851, 0, 0, 0, 59, 0),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(-4096, 10000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bits_dl_steppingstone_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 4665, 0, 0, 0, 59, 0),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(-4096, 10000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bits_dl_steppingstone_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 5875, 192, 638, 0, 59, 0),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(-4096, 10000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bits_dl_steppingstone_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 6246, 446, -729, 0, 59, 0),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(-4096, 10000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bits_dl_steppingstone_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -16, 0, bits_dl_Torus_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bits_dl_Torus_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10459, -464, -5445, -63, 42, 0, bits_dl_Torus_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7176, -13, 0, bits_dl_Torus_002_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bits_dl_Torus_002_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4725, -1779, -7508, -3, 11, 121, bits_dl_Torus_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1897, -2685, 9335, -39, -4, 126, bits_dl_Torus_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2973, 1986, 7419, 36, -68, 74, bits_dl_Torus_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 9540, -847, -1145, -36, 59, 26, bits_dl_Torus_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3795, 1099, -6933, 42, 25, -21, bits_dl_Torus_007_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bits_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_PURPLE_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, -150000, 0, -100, -150000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bits_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bits_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bits_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};