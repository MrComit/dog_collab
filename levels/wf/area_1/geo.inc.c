#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, wf_dl_B__Overworld__geo),
			GEO_BRANCH(1, wf_dl_C__Hut_Interior__geo),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_dl_B__Overworld__geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -9107, 700, 1186, wf_dl_Dock_1__Visual__mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Dock_1__Visual__mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Dock_1__Visual__mesh_layer_6),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -13232, 1004, 1410, wf_dl_Koopa_Hut__Visual__mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Koopa_Hut__Visual__mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Koopa_Hut__Visual__mesh_layer_6),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, 100, -37, wf_dl_Level_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_Level_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5000, 0, 2200),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6728, 1500, 15163, wf_dl_Rock_Hill_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5000, 0, 2200),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -19248, 1000, -4046),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -17859, 1000, -2840),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__001_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -18749, 1000, 3622),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__002_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -18670, 1000, 2289),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__003_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -17066, 1000, 2263),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__004_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 13543, 920, 17328),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__005_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 1906, 943, -14967),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__006_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 7511, 943, -9228),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__007_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 2650, 943, -12859),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__008_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 4485, 943, -10467),
			GEO_OPEN_NODE(),
				GEO_RENDER_RANGE(0, 25000),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_Palm_Tree__Shadow__009_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5028, 100, 2163, wf_dl_Volcano__mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT_INTER, 0, 688, 0, wf_dl_water_mesh_layer_7),
		GEO_ASM(0, geo_backdrop_move),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, 0, 688, 0, atoll_skybox_backdrop_mesh),
		GEO_ASM(0, geo_zbuffer_clear),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_dl_C__Hut_Interior__geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5000, 0, 2200),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -18047, 1164, -1148, 90, 0, 102, wf_dl_Hammock_mesh_layer_4),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Hammock_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -18232, 1004, -790, wf_dl_Hut_Interior__Visual__mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Hut_Interior__Visual__mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_FORCE, wf_dl_Hut_Interior__Visual__mesh_layer_0),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 40000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
