static const u16 nipper_anim_walk_values[] = {
	0x0000, 0x0000, 0x0000, 0xFFEB, 0xFFED, 0xFFF2, 0xFFF9, 0xFFFE, 0x0000, 
	0xFFFE, 0xFFFA, 0xFFF5, 0xFFF0, 0xFFEC, 0xFFEB, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0xFFFF, 0x0E39, 0x0CC0, 0x0939, 0x0500, 0x0179, 
	0xFFFF, 0x010D, 0x03AE, 0x071C, 0x0A8B, 0x0D2C, 0x0E39, 0x0000, 0xFFFF, 
	0x0000, 0x0E39, 0x0CC0, 0x0939, 0x0500, 0x0179, 0x0000, 0x010D, 0x03AE, 
	0x071C, 0x0A8B, 0x0D2C, 0x0E39, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 
	0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0xFFFF, 
	0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 
	0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0x071C, 0x05A3, 0x021C, 0xFDE3, 0xFA5C, 0xF8E3, 0xF9EF, 
	0xFC91, 0x0000, 0x036E, 0x0610, 0x071C, 0xFFFF, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xF554, 0xF6CE, 0xFA55, 0xFE8D, 
	0x0215, 0x038E, 0x0282, 0xFFDF, 0xFC71, 0xF903, 0xF661, 0xF554, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xF8E3, 
	0xFA5C, 0xFDE3, 0x021C, 0x05A3, 0x071C, 0x0610, 0x036E, 0xFFFF, 0xFC91, 
	0xF9EF, 0xF8E3, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0x0AAB, 0x0931, 0x05AA, 0x0172, 0xFDEA, 0xFC71, 0xFD7D, 
	0x0020, 0x038E, 0x06FC, 0x099E, 0x0AAB, 
};

static const u16 nipper_anim_walk_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x000D, 0x0002, 0x0001, 0x000F, 0x0001, 
	0x0010, 0x0001, 0x0011, 0x0001, 0x0012, 0x0001, 0x0013, 0x0001, 0x0014, 
	0x000D, 0x0015, 0x0001, 0x0022, 0x0001, 0x0023, 0x000D, 0x0024, 0x0001, 
	0x0031, 0x0008, 0x0032, 0x000C, 0x003A, 0x000C, 0x0046, 0x000A, 0x0052, 
	0x000D, 0x005C, 0x000D, 0x0069, 0x000D, 0x0076, 0x000D, 0x0083, 0x000D, 
	0x0090, 0x000D, 0x009D, 0x000D, 0x00AA, 0x000D, 0x00B7, 0x000D, 0x00C4, 
	0x000D, 0x00D1, 0x000D, 0x00DE, 0x000D, 0x00EB, 
};

static const struct Animation nipper_anim_walk[] = {
	0,
	0,
	0,
	1,
	12,
	ANIMINDEX_NUMPARTS(nipper_anim_walk_indices),
	nipper_anim_walk_values,
	nipper_anim_walk_indices,
	0,
};
