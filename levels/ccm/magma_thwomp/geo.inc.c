#include "src/game/envfx_snow.h"

const GeoLayout magma_thwomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, magma_thwomp_Cube_009_mesh_layer_1),
		GEO_DISPLAY_LIST(4, magma_thwomp_Cube_009_mesh_layer_4),
		GEO_DISPLAY_LIST(4, magma_thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, magma_thwomp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
