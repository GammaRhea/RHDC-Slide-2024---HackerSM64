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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CASTLE_GROUNDS, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CASTLE_GROUNDS, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_CASTLE_GROUNDS, 0x01, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_CASTLE_GROUNDS, 0x01, 0x08, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 27, -188, 4225, 0, 0, 0, (0x05 << 16), bhvDoorWarp),
		OBJECT(MODEL_WOODEN_SIGNPOST, 0, -190, 577, 0, 0, 0, (DIALOG_015 << 16), bhvMessagePanel),
		OBJECT(MODEL_1UP, -17, 2, 6376, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_1UP, 5249, 482, -4354, 0, 0, 0, 0x00000000, bhv1Up),
		MARIO_POS(0x01, 0, 0, 200, 969),
		OBJECT(MODEL_WOODEN_SIGNPOST, 1592, -122, 4143, 0, -163, 0, (DIALOG_035 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -1739, -186, 1328, 0, -154, 0, (0x07 << 16), bhvDeathWarp),
		OBJECT(MODEL_NONE, -1609, -186, 1590, 0, -154, 0, (0x08 << 16), bhvAirborneStarCollectWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 1755, -122, 4423, 0, -163, 0, (DIALOG_036 << 16), bhvMessagePanel),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -1949, -182, 4802, 0, -11, 0, (0x0C << 16), bhvDoorWarp),
		OBJECT(MODEL_NONE, 1539, -1673, -4404, 0, -180, 0, (0x02 << 16), bhvDeathWarp),
		OBJECT(MODEL_NONE, 1539, -1673, -5253, 0, -180, 0, (0x03 << 16), bhvLaunchStarCollectWarp),
		OBJECT(MODEL_TOAD, -2752, -187, 5022, 0, 177, 0, (DIALOG_134 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, -1427, -186, 1105, 0, 16, 0, (DIALOG_136 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, -318, -187, 4152, 0, 150, 0, (DIALOG_133 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, 1650, 4175, 6722, 0, -27, 0, (DIALOG_083 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, 4606, -1735, 2557, 0, -170, 0, (DIALOG_076 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, -318, -187, 6348, 0, -126, 0, (DIALOG_082 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, 1855, -187, 1909, 0, -39, 0, (DIALOG_135 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, -67, -1729, -1422, 0, -176, 0, (DIALOG_137 << 24), bhvToadMessage),
		OBJECT(MODEL_WOODEN_SIGNPOST, -4895, -1739, -2974, 0, 79, 0, (DIALOG_016 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, 0, 200, 973, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1537, -1692, -4729, 0, 0, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -1860, -189, 1121, 0, 0, 0, (00 << 24) | (06 << 16) | (00 << 8) | (00), bhvWarpPipe),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, 969),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
