void scroll_bob_dl_Warp_Instant_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Warp_Instant_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(1.0 * 0x20) % height;

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
	currentX += deltaX;	currentY += deltaY;
}

void scroll_gfx_mat_bob_dl_f3dlite_material_003() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_f3dlite_material_003);

	shift_s(mat, 15, PACK_TILESIZE(0, 1));
	shift_t(mat, 15, PACK_TILESIZE(0, 1));

};

void scroll_bob() {
	scroll_bob_dl_Warp_Instant_mesh_layer_1_vtx_0();
	scroll_gfx_mat_bob_dl_f3dlite_material_003();
};