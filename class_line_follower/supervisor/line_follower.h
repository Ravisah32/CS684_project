/* --- Generated the 7/4/2025 at 20:29 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 19:55:58 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__calculatePID_mem {
  long v_4;
  long v_2;
  long v_1;
  long v;
} Line_follower__calculatePID_mem;

typedef struct Line_follower__calculatePID_out {
  long pidvalue;
} Line_follower__calculatePID_out;

void Line_follower__calculatePID_reset(Line_follower__calculatePID_mem* self);

void Line_follower__calculatePID_step(long error,
                                      Line_follower__calculatePID_out* _out,
                                      Line_follower__calculatePID_mem* self);

typedef struct Line_follower__controller_mem {
  long v_13;
  long v;
} Line_follower__controller_mem;

typedef struct Line_follower__controller_out {
  long v_l;
  long v_r;
} Line_follower__controller_out;

void Line_follower__controller_reset(Line_follower__controller_mem* self);

void Line_follower__controller_step(long pidvalue, long bow,
                                    Line_follower__controller_out* _out,
                                    Line_follower__controller_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st ck;
  long v_69;
  long v_67;
  long v_76;
  long v_74;
  long v_81;
  long v_79;
  long v_96;
  long v_94;
  long v_116;
  long v_114;
  long v_121;
  long v_119;
  long v_126;
  long v_124;
  long v_131;
  long v_129;
  long v_136;
  long v_134;
  long v_142;
  long v_140;
  long v_148;
  long v_146;
  long v_16;
  long v;
  long pnr;
  Line_follower__controller_mem controller;
  Line_follower__calculatePID_mem calculatePID;
  Line_follower__controller_mem controller_1;
  Line_follower__calculatePID_mem calculatePID_1;
  Line_follower__controller_mem controller_2;
  Line_follower__calculatePID_mem calculatePID_2;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
