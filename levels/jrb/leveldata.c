#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#include "dialog_ids.h"

#include "make_const_nonconst.h"
#include "levels/jrb/texture.inc.c"
#include "levels/jrb/areas/1/1/model.inc.c"
#include "levels/jrb/areas/1/2/model.inc.c"
#include "levels/jrb/areas/1/3/model.inc.c"
#include "levels/jrb/areas/1/4/model.inc.c"
#include "levels/jrb/areas/1/5/model.inc.c"
#include "levels/jrb/areas/1/6/model.inc.c"
#include "levels/jrb/areas/1/7/model.inc.c"
#include "levels/jrb/rock/model.inc.c"
#include "levels/jrb/floating_platform/model.inc.c"
#include "levels/jrb/sliding_box/model.inc.c"
#include "levels/jrb/wooden_ship/model.inc.c"
#include "levels/jrb/falling_pillar/model.inc.c"
#include "levels/jrb/falling_pillar_base/model.inc.c"
#include "levels/jrb/areas/1/collision.inc.c"
#include "levels/jrb/areas/1/macro.inc.c"
#include "levels/jrb/rock/collision.inc.c"
#include "levels/jrb/floating_platform/collision.inc.c"
#include "levels/jrb/sliding_box/collision.inc.c"
#include "levels/jrb/wooden_ship/collision.inc.c"
#include "levels/jrb/falling_pillar_base/collision.inc.c"
#include "levels/jrb/unused_lid/collision.inc.c"
#include "levels/jrb/areas/1/trajectory.inc.c"
#include "levels/jrb/areas/1/movtext.inc.c"
#include "levels/jrb/areas/2/1/model.inc.c"
#include "levels/jrb/areas/2/2/model.inc.c"
#include "levels/jrb/areas/2/3/model.inc.c"
#include "levels/jrb/areas/2/collision.inc.c"
#include "levels/jrb/areas/2/macro.inc.c"
#include "levels/jrb/areas/2/movtext.inc.c"
#include "levels/jrb/leveldata.inc.c"

#include "levels/jrb/carousel/model.inc.c"
#include "levels/jrb/carousel/collision.inc.c"
#include "levels/jrb/carousel/anims/data.inc.c"
#include "levels/jrb/carousel/anims/table.inc.c"
#include "levels/jrb/circus_pole/model.inc.c"
#include "levels/jrb/clown_clock/model.inc.c"
#include "levels/jrb/clown_clock/collision.inc.c"
#include "levels/jrb/clown_door_top/model.inc.c"
#include "levels/jrb/clown_door_bottom/model.inc.c"
#include "levels/jrb/clown_door_top/collision.inc.c"
#include "levels/jrb/clown_door_bottom/collision.inc.c"
#include "levels/jrb/cable_car/model.inc.c"
#include "levels/jrb/cable_car/collision.inc.c"
#include "levels/jrb/circus_balloon/collision.inc.c"
#include "levels/jrb/circus_balloon/model.inc.c"
#include "levels/jrb/pinwheel/model.inc.c"
#include "levels/jrb/trapeze/model.inc.c"
#include "levels/jrb/balloon_platform/model.inc.c"
#include "levels/jrb/balloon_platform/collision.inc.c"
#include "levels/jrb/clown_boss/model.inc.c"
#include "levels/jrb/clown_boss/anims/data.inc.c"
#include "levels/jrb/clown_boss/anims/table.inc.c"
#include "levels/jrb/boss_curtains/model.inc.c"
#include "levels/jrb/boss_curtains/collision.inc.c"
#include "levels/jrb/steel_gate/model.inc.c"
#include "levels/jrb/steel_gate/collision.inc.c"
#include "levels/jrb/sad_carousel/model.inc.c"
#include "levels/jrb/sad_pinwheel/model.inc.c"
#include "levels/jrb/sad_clown_clock/model.inc.c"
#include "levels/jrb/power_switch/model.inc.c"
#include "levels/jrb/kid_toad/model.inc.c"
#include "levels/jrb/kid_toad/anims/data.inc.c"
#include "levels/jrb/kid_toad/anims/table.inc.c"
#include "levels/jrb/clown_toad/anims/data.inc.c"
#include "levels/jrb/clown_toad/anims/table.inc.c"
#include "levels/jrb/clown_toad/model.inc.c"
#include "levels/jrb/circus_wheel/model.inc.c"
#include "levels/jrb/circus_cannon/model.inc.c"
#include "levels/jrb/thwomp_clock/collision.inc.c"