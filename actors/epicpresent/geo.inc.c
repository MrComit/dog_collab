#include "src/game/envfx_snow.h"

const GeoLayout present2639_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(0x00, 32768),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, epicpresent_vsn_mesh_5__mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, epicpresent_material_revert_render_settings),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
