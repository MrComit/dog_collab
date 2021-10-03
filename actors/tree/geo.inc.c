// 0x16000FE8
const GeoLayout bubbly_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
#ifdef OBJ_OPACITY_BY_CAM_DIST
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_SWITCH_CASE(2, geo_switch_anim_state),
      GEO_OPEN_NODE(),
#endif
         GEO_DISPLAY_LIST(LAYER_ALPHA, tree_seg3_dl_bubbly),
#ifdef OBJ_OPACITY_BY_CAM_DIST
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, tree_seg3_dl_bubbly),
      GEO_CLOSE_NODE(),
#endif
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001000
const GeoLayout spiky_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
#ifdef OBJ_OPACITY_BY_CAM_DIST
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_SWITCH_CASE(2, geo_switch_anim_state),
      GEO_OPEN_NODE(),
#endif
         GEO_DISPLAY_LIST(LAYER_ALPHA, tree_seg3_dl_spiky),
#ifdef OBJ_OPACITY_BY_CAM_DIST
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, tree_seg3_dl_spiky),
      GEO_CLOSE_NODE(),
#endif
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001018
const GeoLayout snow_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
#ifdef OBJ_OPACITY_BY_CAM_DIST
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_SWITCH_CASE(2, geo_switch_anim_state),
      GEO_OPEN_NODE(),
#endif
         GEO_DISPLAY_LIST(LAYER_ALPHA, tree_seg3_dl_snowy_pine),
#ifdef OBJ_OPACITY_BY_CAM_DIST
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, tree_seg3_dl_snowy_pine),
      GEO_CLOSE_NODE(),
#endif
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001048
const GeoLayout palm_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
#ifdef OBJ_OPACITY_BY_CAM_DIST
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_SWITCH_CASE(2, geo_switch_anim_state),
      GEO_OPEN_NODE(),
#endif
         GEO_DISPLAY_LIST(LAYER_ALPHA, tree_seg3_dl_palm),
#ifdef OBJ_OPACITY_BY_CAM_DIST
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, tree_seg3_dl_palm),
      GEO_CLOSE_NODE(),
#endif
   GEO_CLOSE_NODE(),
   GEO_END(),
};
