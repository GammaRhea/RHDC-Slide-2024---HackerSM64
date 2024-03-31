#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x02, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, 0, 14648, 0),
		OBJECT(MODEL_NONE, -5116, 11375, 5552, 0, 0, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3750, 8114, -1302, -12, 0, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5332, 7772, -5915, 10, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2709, 5187, 5654, -33, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -348, 3247, 6467, -33, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3, 9254, 5551, 15, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2128, -3354, -1067, 16, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2128, -3354, -1930, 16, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 375, -5560, 1397, -18, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1964, -6266, 1831, -18, 90, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6396, -3421, -4772, -8, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6807, -3702, -2534, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5984, -3702, -2534, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6396, -4147, -1089, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6179, -4387, 186, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6612, -4672, 1506, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6396, -5009, 2911, -12, -180, 0, (COIN_FORMATION_FLAG_NONE << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 6951, 6442, 2223, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6951, 6543, 883, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6951, 6672, -572, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6951, 6339, 3689, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7362, 6852, -1295, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6951, 6765, -1941, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7362, 6630, 1509, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7362, 6421, 4399, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6536, 6736, 109, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6536, 6532, 2911, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3797, -3899, -1679, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4524, -3890, -1208, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4550, -4483, 1259, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3909, -4483, 1790, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4550, -4193, 23, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 451, -3067, -7207, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -956, -3040, -7207, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2313, -2998, -7207, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1905, -3108, -7207, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3368, -3239, -7149, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4736, -3344, -7102, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4013, -3154, -6716, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2646, -3055, -7592, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1112, -2952, -6792, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -288, -2915, -7619, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1684, -2886, -6795, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5401, -3352, -7161, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5694, -3354, -6996, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5954, -3350, -6786, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6177, -3343, -6539, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6359, -3333, -6262, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6340, -5502, 5455, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6189, -5502, 5678, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5967, -5502, 5829, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5696, -5502, 5884, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6396, -5502, 5184, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -5696, 5184, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6107, 5318, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6262, 5473, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -5912, 5219, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6362, 5668, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6396, 5884, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6362, 6101, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6262, 6296, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -6107, 6451, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -5912, 6550, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2585, -5696, 6584, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -6590, 5184, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -6806, 5219, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7002, 5318, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7156, 5473, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7256, 5668, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7290, 5884, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7256, 6101, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7156, 6296, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -7002, 6451, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -6806, 6550, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -526, -6590, 6584, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -5365, 11363, 6059, 0, -143, 0, (DIALOG_000 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -1692, -3711, -7197, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, -301, -3711, -7197, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 1094, -3711, -7197, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 2613, -3748, -7155, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 4002, -3893, -7098, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 2038, -3894, -1491, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 1285, -3756, -1491, -90, 0, 0, (04 << 16), bhvFlamethrower),
		OBJECT(MODEL_NONE, 2718, -4019, -1491, -90, 0, 0, (04 << 16), bhvFlamethrower),
		MARIO_POS(0x01, 90, -5633, 11503, 5559),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3996, 6332, 5174, 0, -45, 0, (DIALOG_008 << 16), bhvMessagePanel),
		OBJECT(MODEL_EXCLAMATION_BOX, -4506, 6650, 5671, 0, 0, 0, (EXCLAMATION_BOX_BP_STAR_1 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -5633, 11503, 5559, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, -5633, 11503, 5559),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
