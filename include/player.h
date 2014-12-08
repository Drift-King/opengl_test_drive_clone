#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "maths_funcs.h"

bool init_player ();
void update_player (double elapsed);
bool finished_level ();
vec3 get_player_pos ();
float get_curr_speed ();

extern bool det_joystick;
extern float top_speed_reached;
extern int crash_count;

#endif
