/* --- Generated the 7/4/2025 at 20:29 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 19:55:58 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Line_follower__St_Straight,
  Line_follower__St_SearchObstac,
  Line_follower__St_SearchLine,
  Line_follower__St_Right,
  Line_follower__St_Parken,
  Line_follower__St_ObstacleAvoidance,
  Line_follower__St_Normal,
  Line_follower__St_Left,
  Line_follower__St_JustParking,
  Line_follower__St_GrandeFinale,
  Line_follower__St_FollowObstacle,
  Line_follower__St_CheckLineParking,
  Line_follower__St_CheckLine,
  Line_follower__St_CheckLeft,
  Line_follower__St_CheckIR,
  Line_follower__St_BlackDot,
  Line_follower__St_BackToLine
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

#endif // LINE_FOLLOWER_TYPES_H
