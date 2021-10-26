#include "src/game/envfx_snow.h"

const GeoLayout cloud_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(LAYER_OPAQUE, geo_set_global_fog),
		GEO_RENDER_RANGE(-2000, 2000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 6554),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_Cloud_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(2000, 4000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 6554),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_CloudLOD_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(4000, 6000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 6554),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_CloudLODDER_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(6000, 8000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 6554),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_CloudLODDEST_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(8000, 30000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 6554),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_CloudLODDESTER_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ASM(0, geo_update_rain_cloud_rain),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, cloud_CloudRain_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cloud_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, cloud_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
