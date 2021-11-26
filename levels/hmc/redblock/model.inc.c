Lights1 redblock_Redblock_Side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 redblock_Redblock_Top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx redblock_redblock1_ci8_aligner[] = {gsSPEndDisplayList()};
u8 redblock_redblock1_ci8[] = {
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 
	0x02, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x04, 
	0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x06, 
	0x06, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0b, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0d, 0x0e, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x12, 0x12, 0x12, 
	0x12, 0x12, 0x12, 0x13, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x14, 0x14, 0x14, 
	0x14, 0x14, 0x14, 0x15, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x16, 0x16, 0x16, 
	0x16, 0x16, 0x16, 0x17, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 
	0x02, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0x13, 0x13, 0x13, 
	0x13, 0x13, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x04, 
	0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 
	0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 
	
};

Gfx redblock_redblock1_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 redblock_redblock1_ci8_pal_rgba16[] = {
	0xe8, 0x43, 0xf8, 0x85, 0x98, 0x01, 0x70, 0x85, 
	0xf0, 0x43, 0x90, 0x85, 0xb3, 0x19, 0xb2, 0xd7, 
	0xa9, 0xcf, 0xef, 0x7b, 0xc3, 0x9d, 0xa1, 0x8d, 
	0xc6, 0x31, 0xce, 0x73, 0xaa, 0x95, 0xa0, 0x43, 
	0xa0, 0x85, 0xd8, 0x43, 0xb0, 0xc7, 0xc0, 0x43, 
	0xf7, 0xbd, 0xbb, 0x19, 0x80, 0xc7, 0x98, 0x43, 
	0xe0, 0x43, 0x68, 0x01, 
};

Gfx redblock_redblock2_ci4_aligner[] = {gsSPEndDisplayList()};
u8 redblock_redblock2_ci4[] = {
	0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
	0x20, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
	0x25, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x54, 
	0x20, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x20, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
	0x25, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x54, 
	0x20, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04, 
	0x06, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x60, 
	
};

Gfx redblock_redblock2_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 redblock_redblock2_ci4_pal_rgba16[] = {
	0xe8, 0x43, 0xf8, 0x85, 0x98, 0x01, 0x70, 0x85, 
	0xf0, 0x43, 0x90, 0x85, 0x68, 0x01, 
};

Vtx redblock_Block_Prop_004_mesh_layer_1_vtx_cull[8] = {
	{{{-50, -1, 50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-50, 98, 50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-50, 98, -50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-50, -1, -50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{50, -1, 50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{50, 98, 50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{50, 98, -50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{50, -1, -50},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx redblock_Block_Prop_004_mesh_layer_1_vtx_0[16] = {
	{{{-50, -1, 50},0, {4080, 2032},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-50, 98, 50},0, {4080, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-50, 98, -50},0, {3056, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-50, -1, -50},0, {3056, 2032},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-50, -1, -50},0, {3056, 2032},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-50, 98, -50},0, {3056, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{50, 98, -50},0, {2032, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{50, -1, -50},0, {2032, 2032},{0x0, 0x0, 0x81, 0xFF}}},
	{{{50, -1, -50},0, {2032, 2032},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{50, 98, -50},0, {2032, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{50, 98, 50},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{50, -1, 50},0, {1008, 2032},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{50, -1, 50},0, {1008, 2032},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{50, 98, 50},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-50, 98, 50},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-50, -1, 50},0, {-16, 2032},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx redblock_Block_Prop_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(redblock_Block_Prop_004_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx redblock_Block_Prop_004_mesh_layer_1_vtx_1[8] = {
	{{{-50, -1, -50},0, {3056, 2032},{0x0, 0x81, 0x0, 0xFF}}},
	{{{50, -1, -50},0, {3056, 3056},{0x0, 0x81, 0x0, 0xFF}}},
	{{{50, -1, 50},0, {4080, 3056},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-50, -1, 50},0, {4080, 2032},{0x0, 0x81, 0x0, 0xFF}}},
	{{{50, 98, -50},0, {3056, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-50, 98, -50},0, {3056, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-50, 98, 50},0, {4080, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{50, 98, 50},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx redblock_Block_Prop_004_mesh_layer_1_tri_1[] = {
	gsSPVertex(redblock_Block_Prop_004_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_redblock_Redblock_Side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, redblock_redblock1_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 25),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, redblock_redblock1_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(redblock_Redblock_Side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_redblock_Redblock_Side[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_redblock_Redblock_Top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, redblock_redblock2_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 6),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, redblock_redblock2_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(redblock_Redblock_Top_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_redblock_Redblock_Top[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx redblock_Block_Prop_004_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(redblock_Block_Prop_004_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_redblock_Redblock_Side),
	gsSPDisplayList(redblock_Block_Prop_004_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_redblock_Redblock_Side),
	gsSPDisplayList(mat_redblock_Redblock_Top),
	gsSPDisplayList(redblock_Block_Prop_004_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_redblock_Redblock_Top),
	gsSPEndDisplayList(),
};

Gfx redblock_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
