// 0x16000EA0
const GeoLayout star_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_star_set_prim_color),
         GEO_DISPLAY_LIST(LAYER_OCCLUDE_SILHOUETTE_OPAQUE, star_seg3_dl_body),
         GEO_DISPLAY_LIST(LAYER_OCCLUDE_SILHOUETTE_ALPHA, star_seg3_dl_eyes),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
