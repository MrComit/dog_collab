#include "src/game/envfx_snow.h"

const GeoLayout cephie_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 10, 0, 180, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, -136, -1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Back_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Left_Back_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Back_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, -45, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Front_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Left_Front_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Front_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, -90, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Middle_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Left_Middle_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Middle_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, 135, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Back_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Right_Back_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Back_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, 45, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Front_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Right_Front_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Front_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 79, 90, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Middle_Leg_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Right_Middle_Foot_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 11, 0, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Middle_Foot_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 10, 0, cephie_Torso_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 64, -12, cephie_Head_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, cephie_Head_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -19, 54, 0, -90, 0, 90),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Left_Upper_Arm_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Left_Forearm_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 17, -2, cephie_Left_Forearm_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Left_Hand_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 16, -5, cephie_Left_Hand_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 19, 54, 0, -90, 0, -90),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, cephie_Right_Upper_Arm_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Right_Forearm_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 17, -2, cephie_Right_Forearm_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_Right_Hand_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 16, -5, cephie_Right_Hand_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cephie_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, cephie_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
