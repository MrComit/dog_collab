void scroll_castle_grounds_dl_Sphere_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 14;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 0.5;
	float frequencyX = 0.10000000149011612;
	float offsetX = 0.0;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Sphere_mesh_layer_1_vtx_6);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
	deltaY = (int)(0.05000000074505806 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	timeX += 1;	currentY += deltaY;
}

void scroll_castle_grounds_dl_Sphere_mesh_layer_1_vtx_53() {
	int i = 0;
	int count = 2592;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Sphere_mesh_layer_1_vtx_53);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_castle_grounds_dl_f3d_material_036() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_f3d_material_036);
	shift_t_down(mat, 19, PACK_TILESIZE(0, 16));
};

void scroll_sts_mat_castle_grounds_dl_f3d_material_034() {
	static int intervalTex0 = 40;
	static int curInterval0 = 40;
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_f3d_material_034);

	if (--curInterval0 <= 0) {
		shift_t_down(mat, 18, PACK_TILESIZE(0, 64));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_castle_grounds_dl_electricity_layer5() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_electricity_layer5);
	shift_s(mat, 13, PACK_TILESIZE(0, 5));
	shift_t_down(mat, 13, PACK_TILESIZE(0, 4));
	shift_s_down(mat, 21, PACK_TILESIZE(0, 3));
	shift_t(mat, 21, PACK_TILESIZE(0, 8));
};

void scroll_sts_mat_castle_grounds_dl_cozieswater_top_emu__layer5() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_cozieswater_top_emu__layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
};

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_Sphere_mesh_layer_1_vtx_6();
	scroll_castle_grounds_dl_Sphere_mesh_layer_1_vtx_53();
	scroll_sts_mat_castle_grounds_dl_f3d_material_036();
	scroll_sts_mat_castle_grounds_dl_f3d_material_034();
	scroll_sts_mat_castle_grounds_dl_electricity_layer5();
	scroll_sts_mat_castle_grounds_dl_cozieswater_top_emu__layer5();
}
