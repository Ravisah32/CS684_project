/* --- Generated the 7/4/2025 at 20:29 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 19:55:58 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__calculatePID_mem {
  int v_4;
  int v_2;
  int v_1;
  int v;
} Line_follower__calculatePID_mem;

typedef struct Line_follower__calculatePID_out {
  int pidvalue;
} Line_follower__calculatePID_out;

void Line_follower__calculatePID_reset(Line_follower__calculatePID_mem* self);

void Line_follower__calculatePID_step(int error,
                                      Line_follower__calculatePID_out* _out,
                                      Line_follower__calculatePID_mem* self);

typedef struct Line_follower__controller_mem {
  int v_13;
  int v;
} Line_follower__controller_mem;

typedef struct Line_follower__controller_out {
  int v_l;
  int v_r;
} Line_follower__controller_out;

void Line_follower__controller_reset(Line_follower__controller_mem* self);

void Line_follower__controller_step(int pidvalue, int bow,
                                    Line_follower__controller_out* _out,
                                    Line_follower__controller_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st ck;
  int v_69;
  int v_67;
  int v_76;
  int v_74;
  int v_81;
  int v_79;
  int v_96;
  int v_94;
  int v_116;
  int v_114;
  int v_121;
  int v_119;
  int v_126;
  int v_124;
  int v_131;
  int v_129;
  int v_136;
  int v_134;
  int v_142;
  int v_140;
  int v_148;
  int v_146;
  int v_16;
  int v;
  int pnr;
  Line_follower__controller_mem controller;
  Line_follower__calculatePID_mem calculatePID;
  Line_follower__controller_mem controller_1;
  Line_follower__calculatePID_mem calculatePID_1;
  Line_follower__controller_mem controller_2;
  Line_follower__calculatePID_mem calculatePID_2;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
