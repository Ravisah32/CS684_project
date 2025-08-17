/* --- Generated the 7/4/2025 at 20:29 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 19:55:58 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_Straight")==0)) {
    return Line_follower__St_Straight;
  };
  if ((strcmp(s, "St_SearchObstac")==0)) {
    return Line_follower__St_SearchObstac;
  };
  if ((strcmp(s, "St_SearchLine")==0)) {
    return Line_follower__St_SearchLine;
  };
  if ((strcmp(s, "St_Right")==0)) {
    return Line_follower__St_Right;
  };
  if ((strcmp(s, "St_Parken")==0)) {
    return Line_follower__St_Parken;
  };
  if ((strcmp(s, "St_ObstacleAvoidance")==0)) {
    return Line_follower__St_ObstacleAvoidance;
  };
  if ((strcmp(s, "St_Normal")==0)) {
    return Line_follower__St_Normal;
  };
  if ((strcmp(s, "St_Left")==0)) {
    return Line_follower__St_Left;
  };
  if ((strcmp(s, "St_JustParking")==0)) {
    return Line_follower__St_JustParking;
  };
  if ((strcmp(s, "St_GrandeFinale")==0)) {
    return Line_follower__St_GrandeFinale;
  };
  if ((strcmp(s, "St_FollowObstacle")==0)) {
    return Line_follower__St_FollowObstacle;
  };
  if ((strcmp(s, "St_CheckLineParking")==0)) {
    return Line_follower__St_CheckLineParking;
  };
  if ((strcmp(s, "St_CheckLine")==0)) {
    return Line_follower__St_CheckLine;
  };
  if ((strcmp(s, "St_CheckLeft")==0)) {
    return Line_follower__St_CheckLeft;
  };
  if ((strcmp(s, "St_CheckIR")==0)) {
    return Line_follower__St_CheckIR;
  };
  if ((strcmp(s, "St_BlackDot")==0)) {
    return Line_follower__St_BlackDot;
  };
  if ((strcmp(s, "St_BackToLine")==0)) {
    return Line_follower__St_BackToLine;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_Straight:
      strcpy(buf, "St_Straight");
      break;
    case Line_follower__St_SearchObstac:
      strcpy(buf, "St_SearchObstac");
      break;
    case Line_follower__St_SearchLine:
      strcpy(buf, "St_SearchLine");
      break;
    case Line_follower__St_Right:
      strcpy(buf, "St_Right");
      break;
    case Line_follower__St_Parken:
      strcpy(buf, "St_Parken");
      break;
    case Line_follower__St_ObstacleAvoidance:
      strcpy(buf, "St_ObstacleAvoidance");
      break;
    case Line_follower__St_Normal:
      strcpy(buf, "St_Normal");
      break;
    case Line_follower__St_Left:
      strcpy(buf, "St_Left");
      break;
    case Line_follower__St_JustParking:
      strcpy(buf, "St_JustParking");
      break;
    case Line_follower__St_GrandeFinale:
      strcpy(buf, "St_GrandeFinale");
      break;
    case Line_follower__St_FollowObstacle:
      strcpy(buf, "St_FollowObstacle");
      break;
    case Line_follower__St_CheckLineParking:
      strcpy(buf, "St_CheckLineParking");
      break;
    case Line_follower__St_CheckLine:
      strcpy(buf, "St_CheckLine");
      break;
    case Line_follower__St_CheckLeft:
      strcpy(buf, "St_CheckLeft");
      break;
    case Line_follower__St_CheckIR:
      strcpy(buf, "St_CheckIR");
      break;
    case Line_follower__St_BlackDot:
      strcpy(buf, "St_BlackDot");
      break;
    case Line_follower__St_BackToLine:
      strcpy(buf, "St_BackToLine");
      break;
    default:
      break;
  };
  return buf;
}

