/* --- Generated the 7/4/2025 at 20:29 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 19:55:58 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__calculatePID_reset(Line_follower__calculatePID_mem* self) {
  self->v_4 = true;
  self->v_2 = true;
  self->v = true;
}

void Line_follower__calculatePID_step(long error,
                                      Line_follower__calculatePID_out* _out,
                                      Line_follower__calculatePID_mem* self) {
  
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_3;
  long p;
  long i;
  long d;
  long previousError;
  p = error;
  v_6 = (3*p);
  if (self->v) {
    previousError = 0;
  } else {
    previousError = self->v_1;
  };
  v_5 = (error-previousError);
  if (self->v_4) {
    d = error;
  } else {
    d = v_5;
  };
  v_9 = (5*d);
  v_3 = (error+previousError);
  if (self->v_2) {
    i = error;
  } else {
    i = v_3;
  };
  v_7 = (2*i);
  v_8 = (v_6+v_7);
  v_10 = (v_8+v_9);
  _out->pidvalue = (v_10/10);
  self->v_4 = false;
  self->v_2 = false;
  self->v_1 = error;
  self->v = false;;
}

void Line_follower__controller_reset(Line_follower__controller_mem* self) {
  self->v_13 = true;
  self->v = true;
}

void Line_follower__controller_step(long pidvalue, long bow,
                                    Line_follower__controller_out* _out,
                                    Line_follower__controller_mem* self) {
  
  long v_15;
  long v_14;
  long v_12;
  long v_11;
  v_14 = (pidvalue/7);
  v_15 = (45+v_14);
  if (self->v_13) {
    _out->v_l = 0;
  } else {
    _out->v_l = v_15;
  };
  v_11 = (pidvalue/7);
  v_12 = (45-v_11);
  if (self->v) {
    _out->v_r = 0;
  } else {
    _out->v_r = v_12;
  };
  self->v_13 = false;
  self->v = false;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  {
    long i_10;
    for (i_10 = 0; i_10 < 5; ++i_10) {
    }
  };
  {
    long i_9;
    for (i_9 = 0; i_9 < 5; ++i_9) {
    }
  };
  {
    long i_8;
    for (i_8 = 0; i_8 < 3; ++i_8) {
    }
  };
  {
    long i_7;
    for (i_7 = 0; i_7 < 3; ++i_7) {
    }
  };
  {
    long i_6;
    for (i_6 = 0; i_6 < 5; ++i_6) {
    }
  };
  Line_follower__calculatePID_reset(&self->calculatePID_2);
  Line_follower__controller_reset(&self->controller_2);
  {
    long i_5;
    for (i_5 = 0; i_5 < 5; ++i_5) {
    }
  };
  {
    long i_4;
    for (i_4 = 0; i_4 < 5; ++i_4) {
    }
  };
  {
    long i_3;
    for (i_3 = 0; i_3 < 5; ++i_3) {
    }
  };
  Line_follower__calculatePID_reset(&self->calculatePID_1);
  Line_follower__controller_reset(&self->controller_1);
  Line_follower__calculatePID_reset(&self->calculatePID);
  Line_follower__controller_reset(&self->controller);
  self->v_146 = true;
  self->v_140 = true;
  self->v_134 = true;
  self->v_129 = true;
  self->v_124 = true;
  self->v_119 = true;
  self->v_114 = true;
  self->v_94 = true;
  self->v_79 = true;
  self->v_74 = true;
  self->v_67 = true;
  self->pnr = false;
  self->ck = Line_follower__St_Normal;
  self->v = true;
}

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__calculatePID_out Line_follower__calculatePID_out_st;
  Line_follower__controller_out Line_follower__controller_out_st;
  
  long v_58;
  long v_57;
  long v_56[3];
  long v_55;
  long v_54;
  long v_53;
  long v_59;
  long v_65;
  long v_64;
  long v_63[3];
  long v_62;
  long v_61;
  long v_60;
  long r_St_JustParking;
  Line_follower__st s_St_JustParking;
  long r_St_GrandeFinale;
  Line_follower__st s_St_GrandeFinale;
  long r_St_CheckLineParking;
  Line_follower__st s_St_CheckLineParking;
  long r_St_CheckIR;
  Line_follower__st s_St_CheckIR;
  long r_St_CheckLeft;
  Line_follower__st s_St_CheckLeft;
  long r_St_Parken;
  Line_follower__st s_St_Parken;
  long r_St_Straight;
  Line_follower__st s_St_Straight;
  long r_St_CheckLine;
  Line_follower__st s_St_CheckLine;
  long r_St_Left;
  Line_follower__st s_St_Left;
  long r_St_BlackDot;
  Line_follower__st s_St_BlackDot;
  long r_St_Right;
  Line_follower__st s_St_Right;
  long r_St_SearchObstac;
  Line_follower__st s_St_SearchObstac;
  long r_St_BackToLine;
  Line_follower__st s_St_BackToLine;
  long r_St_FollowObstacle;
  Line_follower__st s_St_FollowObstacle;
  long r_St_ObstacleAvoidance;
  Line_follower__st s_St_ObstacleAvoidance;
  long r_St_SearchLine;
  Line_follower__st s_St_SearchLine;
  long r_St_Normal;
  Line_follower__st s_St_Normal;
  long v_70;
  long v_68;
  long v_66;
  long tick_10;
  long v_71;
  long v_72;
  long v_77;
  long v_75;
  long v_73;
  long tick_9;
  long v_92;
  long v_91;
  long v_90;
  long v_89;
  long v_88;
  long v_87;
  long v_86;
  long v_85;
  long v_84;
  long v_83;
  long v_82;
  long v_80;
  long v_78;
  long r_2;
  long r_1;
  long tick_8;
  long pidvalue_2;
  long tmp_2;
  long error_2;
  long v_107;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_102;
  long v_101;
  long v_100;
  long v_99;
  long v_98;
  long v_97;
  long v_95;
  long v_93;
  long r_4;
  long r_3;
  long tick_7;
  long pidvalue_1;
  long tmp_1;
  long error_1;
  long v_112;
  long v_111;
  long v_110;
  long v_109;
  long v_108;
  long v_117;
  long v_115;
  long v_113;
  long tick_6;
  long v_122;
  long v_120;
  long v_118;
  long tick_5;
  long v_127;
  long v_125;
  long v_123;
  long tick_4;
  long v_132;
  long v_130;
  long v_128;
  long tick_3;
  long v_137;
  long v_135;
  long v_133;
  long tick_2;
  long v_143;
  long v_141;
  long v_139;
  long v_138;
  long tick_1;
  long v_149;
  long v_147;
  long v_145;
  long v_144;
  long tick;
  long v_150;
  long v_164;
  long v_163;
  long v_162;
  long v_161;
  long v_160;
  long v_159;
  long v_158;
  long v_157;
  long v_156;
  long v_155;
  long v_154;
  long v_153;
  long v_152;
  long v_151;
  long r_6;
  long r_5;
  long pidvalue;
  long tmp;
  long error;
  long nr_St_JustParking;
  Line_follower__st ns_St_JustParking;
  long v_r_St_JustParking;
  long v_l_St_JustParking;
  long nr_St_GrandeFinale;
  Line_follower__st ns_St_GrandeFinale;
  long v_r_St_GrandeFinale;
  long v_l_St_GrandeFinale;
  long nr_St_CheckLineParking;
  Line_follower__st ns_St_CheckLineParking;
  long v_r_St_CheckLineParking;
  long v_l_St_CheckLineParking;
  long nr_St_CheckIR;
  Line_follower__st ns_St_CheckIR;
  long v_r_St_CheckIR;
  long v_l_St_CheckIR;
  long nr_St_CheckLeft;
  Line_follower__st ns_St_CheckLeft;
  long v_r_St_CheckLeft;
  long v_l_St_CheckLeft;
  long nr_St_Parken;
  Line_follower__st ns_St_Parken;
  long v_r_St_Parken;
  long v_l_St_Parken;
  long nr_St_Straight;
  Line_follower__st ns_St_Straight;
  long v_r_St_Straight;
  long v_l_St_Straight;
  long nr_St_CheckLine;
  Line_follower__st ns_St_CheckLine;
  long v_r_St_CheckLine;
  long v_l_St_CheckLine;
  long nr_St_Left;
  Line_follower__st ns_St_Left;
  long v_r_St_Left;
  long v_l_St_Left;
  long nr_St_BlackDot;
  Line_follower__st ns_St_BlackDot;
  long v_r_St_BlackDot;
  long v_l_St_BlackDot;
  long nr_St_Right;
  Line_follower__st ns_St_Right;
  long v_r_St_Right;
  long v_l_St_Right;
  long nr_St_SearchObstac;
  Line_follower__st ns_St_SearchObstac;
  long v_r_St_SearchObstac;
  long v_l_St_SearchObstac;
  long nr_St_BackToLine;
  Line_follower__st ns_St_BackToLine;
  long v_r_St_BackToLine;
  long v_l_St_BackToLine;
  long nr_St_FollowObstacle;
  Line_follower__st ns_St_FollowObstacle;
  long v_r_St_FollowObstacle;
  long v_l_St_FollowObstacle;
  long nr_St_ObstacleAvoidance;
  Line_follower__st ns_St_ObstacleAvoidance;
  long v_r_St_ObstacleAvoidance;
  long v_l_St_ObstacleAvoidance;
  long nr_St_SearchLine;
  Line_follower__st ns_St_SearchLine;
  long v_r_St_SearchLine;
  long v_l_St_SearchLine;
  long nr_St_Normal;
  Line_follower__st ns_St_Normal;
  long v_r_St_Normal;
  long v_l_St_Normal;
  Line_follower__st ck_1;
  long v_52[5];
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_47;
  long v_46;
  long v_45;
  long v_44;
  long v_43;
  long v_42;
  long v_41[5];
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  long v_32;
  long v_31;
  long v_30;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_25;
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_19;
  long v_18;
  long v_17[5];
  Line_follower__st s;
  Line_follower__st ns;
  long r;
  long nr;
  long sen_binary[5];
  long sens0;
  long sens1;
  long sens2;
  long sens3;
  long sens4;
  long bow;
  v_50 = (sen4<650);
  if (v_50) {
    v_51 = true;
  } else {
    v_51 = false;
  };
  v_48 = (sen3<650);
  if (v_48) {
    v_49 = true;
  } else {
    v_49 = false;
  };
  v_46 = (sen2<650);
  if (v_46) {
    v_47 = true;
  } else {
    v_47 = false;
  };
  v_44 = (sen1<650);
  if (v_44) {
    v_45 = true;
  } else {
    v_45 = false;
  };
  v_42 = (sen0<650);
  if (v_42) {
    v_43 = true;
  } else {
    v_43 = false;
  };
  v_39 = (sen4>450);
  if (v_39) {
    v_40 = true;
  } else {
    v_40 = false;
  };
  v_37 = (sen3>450);
  if (v_37) {
    v_38 = true;
  } else {
    v_38 = false;
  };
  v_35 = (sen2>450);
  if (v_35) {
    v_36 = true;
  } else {
    v_36 = false;
  };
  v_33 = (sen1>450);
  if (v_33) {
    v_34 = true;
  } else {
    v_34 = false;
  };
  v_31 = (sen0>450);
  if (v_31) {
    v_32 = true;
  } else {
    v_32 = false;
  };
  v_29 = (1023-sen4);
  v_28 = (1023-sen3);
  v_27 = (1023-sen2);
  v_26 = (1023-sen1);
  v_25 = (1023-sen0);
  v_22 = (sen4>450);
  v_20 = (sen0>450);
  switch (self->ck) {
    case Line_follower__St_SearchLine:
      if (ir) {
        r_St_SearchLine = true;
        s_St_SearchLine = Line_follower__St_ObstacleAvoidance;
      } else {
        r_St_SearchLine = self->pnr;
        s_St_SearchLine = Line_follower__St_SearchLine;
      };
      break;
    case Line_follower__St_ObstacleAvoidance:
      r_St_ObstacleAvoidance = self->pnr;
      s_St_ObstacleAvoidance = Line_follower__St_ObstacleAvoidance;
      break;
    case Line_follower__St_BackToLine:
      r_St_BackToLine = self->pnr;
      s_St_BackToLine = Line_follower__St_BackToLine;
      break;
    case Line_follower__St_SearchObstac:
      if (ir) {
        r_St_SearchObstac = true;
        s_St_SearchObstac = Line_follower__St_Right;
      } else {
        r_St_SearchObstac = self->pnr;
        s_St_SearchObstac = Line_follower__St_SearchObstac;
      };
      break;
    case Line_follower__St_Right:
      r_St_Right = self->pnr;
      s_St_Right = Line_follower__St_Right;
      break;
    case Line_follower__St_BlackDot:
      r_St_BlackDot = self->pnr;
      s_St_BlackDot = Line_follower__St_BlackDot;
      break;
    case Line_follower__St_Left:
      r_St_Left = self->pnr;
      s_St_Left = Line_follower__St_Left;
      break;
    case Line_follower__St_CheckLine:
      r_St_CheckLine = self->pnr;
      s_St_CheckLine = Line_follower__St_CheckLine;
      break;
    case Line_follower__St_Parken:
      r_St_Parken = self->pnr;
      s_St_Parken = Line_follower__St_Parken;
      break;
    case Line_follower__St_CheckLeft:
      r_St_CheckLeft = self->pnr;
      s_St_CheckLeft = Line_follower__St_CheckLeft;
      break;
    case Line_follower__St_CheckIR:
      if (ir) {
        r_St_CheckIR = true;
        s_St_CheckIR = Line_follower__St_CheckLineParking;
      } else {
        r_St_CheckIR = self->pnr;
        s_St_CheckIR = Line_follower__St_CheckIR;
      };
      break;
    case Line_follower__St_CheckLineParking:
      r_St_CheckLineParking = self->pnr;
      s_St_CheckLineParking = Line_follower__St_CheckLineParking;
      break;
    case Line_follower__St_GrandeFinale:
      r_St_GrandeFinale = self->pnr;
      s_St_GrandeFinale = Line_follower__St_GrandeFinale;
      break;
    case Line_follower__St_JustParking:
      r_St_JustParking = self->pnr;
      s_St_JustParking = Line_follower__St_JustParking;
      break;
    default:
      break;
  };
  v_52[0] = v_43;
  v_52[1] = v_45;
  v_52[2] = v_47;
  v_52[3] = v_49;
  v_52[4] = v_51;
  v_41[0] = v_32;
  v_41[1] = v_34;
  v_41[2] = v_36;
  v_41[3] = v_38;
  v_41[4] = v_40;
  v_17[0] = sen0;
  v_17[1] = sen1;
  v_17[2] = sen2;
  v_17[3] = sen3;
  v_17[4] = sen4;
  v_18 = 0;
  {
    long i_10;
    for (i_10 = 0; i_10 < 5; ++i_10) {
      v_18 = (v_17[i_10]+v_18);
    }
  };
  v_19 = (v_18>3800);
  v_21 = (v_19&&v_20);
  v_23 = (v_21&&v_22);
  v_24 = (self->v_16||v_23);
  if (self->v) {
    bow = false;
  } else {
    bow = v_24;
  };
  v_30 = !(bow);
  if (v_30) {
    {
      long _1;
      for (_1 = 0; _1 < 5; ++_1) {
        sen_binary[_1] = v_41[_1];
      }
    };
  } else {
    {
      long _2;
      for (_2 = 0; _2 < 5; ++_2) {
        sen_binary[_2] = v_52[_2];
      }
    };
  };
  if (bow) {
    sens4 = v_29;
    sens3 = v_28;
    sens2 = v_27;
    sens1 = v_26;
    sens0 = v_25;
  } else {
    sens4 = sen4;
    sens3 = sen3;
    sens2 = sen2;
    sens1 = sen1;
    sens0 = sen0;
  };
  switch (self->ck) {
    case Line_follower__St_Normal:
      v_62 = sen_binary[3];
      v_61 = sen_binary[2];
      v_60 = sen_binary[1];
      v_63[0] = v_60;
      v_63[1] = v_61;
      v_63[2] = v_62;
      v_64 = true;
      {
        long i_8;
        for (i_8 = 0; i_8 < 3; ++i_8) {
          v_64 = (v_63[i_8]&&v_64);
        }
      };
      v_65 = (v_64&&bow);
      if (v_65) {
        r_St_Normal = true;
        s_St_Normal = Line_follower__St_BlackDot;
      } else {
        r_St_Normal = self->pnr;
        s_St_Normal = Line_follower__St_Normal;
      };
      s = s_St_Normal;
      r = r_St_Normal;
      break;
    case Line_follower__St_FollowObstacle:
      v_59 = false;
      {
        long i_9;
        for (i_9 = 0; i_9 < 5; ++i_9) {
          v_59 = (sen_binary[i_9]||v_59);
        }
      };
      if (v_59) {
        r_St_FollowObstacle = true;
        s_St_FollowObstacle = Line_follower__St_BackToLine;
      } else {
        r_St_FollowObstacle = self->pnr;
        s_St_FollowObstacle = Line_follower__St_FollowObstacle;
      };
      s = s_St_FollowObstacle;
      r = r_St_FollowObstacle;
      break;
    case Line_follower__St_Straight:
      v_55 = sen_binary[3];
      v_54 = sen_binary[2];
      v_53 = sen_binary[1];
      v_56[0] = v_53;
      v_56[1] = v_54;
      v_56[2] = v_55;
      v_57 = true;
      {
        long i_7;
        for (i_7 = 0; i_7 < 3; ++i_7) {
          v_57 = (v_56[i_7]&&v_57);
        }
      };
      v_58 = (v_57&&bow);
      if (v_58) {
        r_St_Straight = true;
        s_St_Straight = Line_follower__St_Parken;
      } else {
        r_St_Straight = self->pnr;
        s_St_Straight = Line_follower__St_Straight;
      };
      s = s_St_Straight;
      r = r_St_Straight;
      break;
    case Line_follower__St_JustParking:
      s = s_St_JustParking;
      r = r_St_JustParking;
      break;
    case Line_follower__St_GrandeFinale:
      s = s_St_GrandeFinale;
      r = r_St_GrandeFinale;
      break;
    case Line_follower__St_CheckLineParking:
      s = s_St_CheckLineParking;
      r = r_St_CheckLineParking;
      break;
    case Line_follower__St_CheckIR:
      s = s_St_CheckIR;
      r = r_St_CheckIR;
      break;
    case Line_follower__St_CheckLeft:
      s = s_St_CheckLeft;
      r = r_St_CheckLeft;
      break;
    case Line_follower__St_Parken:
      s = s_St_Parken;
      r = r_St_Parken;
      break;
    case Line_follower__St_CheckLine:
      s = s_St_CheckLine;
      r = r_St_CheckLine;
      break;
    case Line_follower__St_Left:
      s = s_St_Left;
      r = r_St_Left;
      break;
    case Line_follower__St_BlackDot:
      s = s_St_BlackDot;
      r = r_St_BlackDot;
      break;
    case Line_follower__St_Right:
      s = s_St_Right;
      r = r_St_Right;
      break;
    case Line_follower__St_SearchObstac:
      s = s_St_SearchObstac;
      r = r_St_SearchObstac;
      break;
    case Line_follower__St_BackToLine:
      s = s_St_BackToLine;
      r = r_St_BackToLine;
      break;
    case Line_follower__St_ObstacleAvoidance:
      s = s_St_ObstacleAvoidance;
      r = r_St_ObstacleAvoidance;
      break;
    case Line_follower__St_SearchLine:
      s = s_St_SearchLine;
      r = r_St_SearchLine;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case Line_follower__St_Normal:
      v_160 = (100*sens4);
      v_158 = (50*sens3);
      v_156 = (-50*sens1);
      v_155 = (-100*sens0);
      v_157 = (v_155+v_156);
      v_159 = (v_157+v_158);
      v_161 = (v_159+v_160);
      tmp = (v_161/100);
      v_163 = (tmp<-1023);
      if (v_163) {
        v_164 = -1023;
      } else {
        v_164 = tmp;
      };
      v_162 = (tmp>1023);
      if (v_162) {
        error = 1023;
      } else {
        error = v_164;
      };
      v_153 = (bow&&ir);
      v_151 = false;
      {
        long i_6;
        for (i_6 = 0; i_6 < 5; ++i_6) {
          v_151 = (sen_binary[i_6]||v_151);
        }
      };
      v_152 = !(v_151);
      v_154 = (v_152||v_153);
      if (v_154) {
        nr_St_Normal = true;
        ns_St_Normal = Line_follower__St_SearchLine;
      } else {
        nr_St_Normal = false;
        ns_St_Normal = Line_follower__St_Normal;
      };
      r_5 = r;
      if (r_5) {
        Line_follower__calculatePID_reset(&self->calculatePID_2);
      };
      Line_follower__calculatePID_step(error,
                                       &Line_follower__calculatePID_out_st,
                                       &self->calculatePID_2);
      pidvalue = Line_follower__calculatePID_out_st.pidvalue;
      r_6 = r;
      if (r_6) {
        Line_follower__controller_reset(&self->controller_2);
      };
      Line_follower__controller_step(pidvalue, bow,
                                     &Line_follower__controller_out_st,
                                     &self->controller_2);
      v_l_St_Normal = Line_follower__controller_out_st.v_l;
      v_r_St_Normal = Line_follower__controller_out_st.v_r;
      _out->v_l = v_l_St_Normal;
      _out->v_r = v_r_St_Normal;
      ns = ns_St_Normal;
      nr = nr_St_Normal;
      break;
    case Line_follower__St_SearchLine:
      v_r_St_SearchLine = 100;
      v_l_St_SearchLine = -100;
      v_150 = false;
      {
        long i_5;
        for (i_5 = 0; i_5 < 5; ++i_5) {
          v_150 = (sen_binary[i_5]||v_150);
        }
      };
      if (v_150) {
        nr_St_SearchLine = true;
        ns_St_SearchLine = Line_follower__St_Normal;
      } else {
        nr_St_SearchLine = false;
        ns_St_SearchLine = Line_follower__St_SearchLine;
      };
      _out->v_l = v_l_St_SearchLine;
      _out->v_r = v_r_St_SearchLine;
      ns = ns_St_SearchLine;
      nr = nr_St_SearchLine;
      break;
    case Line_follower__St_ObstacleAvoidance:
      v_r_St_ObstacleAvoidance = -80;
      v_l_St_ObstacleAvoidance = 80;
      v_149 = (self->v_148-1);
      if (self->v_146) {
        v_147 = true;
      } else {
        v_147 = r;
      };
      if (v_147) {
        tick = 25;
      } else {
        tick = v_149;
      };
      v_144 = false;
      {
        long i_4;
        for (i_4 = 0; i_4 < 5; ++i_4) {
          v_144 = (sen_binary[i_4]||v_144);
        }
      };
      v_145 = !(v_144);
      if (v_145) {
        nr_St_ObstacleAvoidance = true;
        ns_St_ObstacleAvoidance = Line_follower__St_FollowObstacle;
      } else {
        nr_St_ObstacleAvoidance = false;
        ns_St_ObstacleAvoidance = Line_follower__St_ObstacleAvoidance;
      };
      _out->v_l = v_l_St_ObstacleAvoidance;
      _out->v_r = v_r_St_ObstacleAvoidance;
      ns = ns_St_ObstacleAvoidance;
      nr = nr_St_ObstacleAvoidance;
      self->v_148 = tick;
      self->v_146 = false;
      break;
    case Line_follower__St_FollowObstacle:
      v_r_St_FollowObstacle = 65;
      v_l_St_FollowObstacle = 65;
      v_143 = (self->v_142-1);
      if (self->v_140) {
        v_141 = true;
      } else {
        v_141 = r;
      };
      if (v_141) {
        tick_1 = 75;
      } else {
        tick_1 = v_143;
      };
      v_138 = (tick_1==0);
      v_139 = (v_138||ir);
      if (v_139) {
        nr_St_FollowObstacle = true;
        ns_St_FollowObstacle = Line_follower__St_SearchObstac;
      } else {
        nr_St_FollowObstacle = false;
        ns_St_FollowObstacle = Line_follower__St_FollowObstacle;
      };
      _out->v_l = v_l_St_FollowObstacle;
      _out->v_r = v_r_St_FollowObstacle;
      ns = ns_St_FollowObstacle;
      nr = nr_St_FollowObstacle;
      self->v_142 = tick_1;
      self->v_140 = false;
      break;
    case Line_follower__St_BackToLine:
      v_r_St_BackToLine = -40;
      v_l_St_BackToLine = 40;
      v_137 = (self->v_136-1);
      if (self->v_134) {
        v_135 = true;
      } else {
        v_135 = r;
      };
      if (v_135) {
        tick_2 = 100;
      } else {
        tick_2 = v_137;
      };
      v_133 = (tick_2==0);
      if (v_133) {
        nr_St_BackToLine = true;
        ns_St_BackToLine = Line_follower__St_Normal;
      } else {
        nr_St_BackToLine = false;
        ns_St_BackToLine = Line_follower__St_BackToLine;
      };
      _out->v_l = v_l_St_BackToLine;
      _out->v_r = v_r_St_BackToLine;
      ns = ns_St_BackToLine;
      nr = nr_St_BackToLine;
      self->v_136 = tick_2;
      self->v_134 = false;
      break;
    case Line_follower__St_SearchObstac:
      v_r_St_SearchObstac = 70;
      v_l_St_SearchObstac = -70;
      v_132 = (self->v_131-1);
      if (self->v_129) {
        v_130 = true;
      } else {
        v_130 = r;
      };
      if (v_130) {
        tick_3 = 30;
      } else {
        tick_3 = v_132;
      };
      v_128 = (tick_3==0);
      if (v_128) {
        nr_St_SearchObstac = true;
        ns_St_SearchObstac = Line_follower__St_FollowObstacle;
      } else {
        nr_St_SearchObstac = false;
        ns_St_SearchObstac = Line_follower__St_SearchObstac;
      };
      _out->v_l = v_l_St_SearchObstac;
      _out->v_r = v_r_St_SearchObstac;
      ns = ns_St_SearchObstac;
      nr = nr_St_SearchObstac;
      self->v_131 = tick_3;
      self->v_129 = false;
      break;
    case Line_follower__St_Right:
      v_r_St_Right = -70;
      v_l_St_Right = 70;
      v_127 = (self->v_126-1);
      if (self->v_124) {
        v_125 = true;
      } else {
        v_125 = r;
      };
      if (v_125) {
        tick_4 = 40;
      } else {
        tick_4 = v_127;
      };
      v_123 = (tick_4==0);
      if (v_123) {
        nr_St_Right = true;
        ns_St_Right = Line_follower__St_FollowObstacle;
      } else {
        nr_St_Right = false;
        ns_St_Right = Line_follower__St_Right;
      };
      _out->v_l = v_l_St_Right;
      _out->v_r = v_r_St_Right;
      ns = ns_St_Right;
      nr = nr_St_Right;
      self->v_126 = tick_4;
      self->v_124 = false;
      break;
    case Line_follower__St_BlackDot:
      v_r_St_BlackDot = 80;
      v_l_St_BlackDot = 80;
      v_122 = (self->v_121-1);
      if (self->v_119) {
        v_120 = true;
      } else {
        v_120 = r;
      };
      if (v_120) {
        tick_5 = 30;
      } else {
        tick_5 = v_122;
      };
      v_118 = (tick_5<=0);
      if (v_118) {
        nr_St_BlackDot = true;
        ns_St_BlackDot = Line_follower__St_Left;
      } else {
        nr_St_BlackDot = false;
        ns_St_BlackDot = Line_follower__St_BlackDot;
      };
      _out->v_l = v_l_St_BlackDot;
      _out->v_r = v_r_St_BlackDot;
      ns = ns_St_BlackDot;
      nr = nr_St_BlackDot;
      self->v_121 = tick_5;
      self->v_119 = false;
      break;
    case Line_follower__St_Left:
      v_r_St_Left = 100;
      v_l_St_Left = -100;
      v_117 = (self->v_116-1);
      if (self->v_114) {
        v_115 = true;
      } else {
        v_115 = r;
      };
      if (v_115) {
        tick_6 = 60;
      } else {
        tick_6 = v_117;
      };
      v_113 = (tick_6<=0);
      if (v_113) {
        nr_St_Left = true;
        ns_St_Left = Line_follower__St_CheckLine;
      } else {
        nr_St_Left = false;
        ns_St_Left = Line_follower__St_Left;
      };
      _out->v_l = v_l_St_Left;
      _out->v_r = v_r_St_Left;
      ns = ns_St_Left;
      nr = nr_St_Left;
      self->v_116 = tick_6;
      self->v_114 = false;
      break;
    case Line_follower__St_CheckLine:
      v_r_St_CheckLine = -100;
      v_l_St_CheckLine = 100;
      v_111 = sen_binary[3];
      v_109 = sen_binary[1];
      v_108 = sen_binary[2];
      v_110 = (v_108||v_109);
      v_112 = (v_110||v_111);
      if (v_112) {
        nr_St_CheckLine = true;
        ns_St_CheckLine = Line_follower__St_Straight;
      } else {
        nr_St_CheckLine = false;
        ns_St_CheckLine = Line_follower__St_CheckLine;
      };
      _out->v_l = v_l_St_CheckLine;
      _out->v_r = v_r_St_CheckLine;
      ns = ns_St_CheckLine;
      nr = nr_St_CheckLine;
      break;
    case Line_follower__St_CheckLineParking:
      v_71 = false;
      {
        long i_3;
        for (i_3 = 0; i_3 < 5; ++i_3) {
          v_71 = (sen_binary[i_3]||v_71);
        }
      };
      v_r_St_CheckLineParking = -100;
      v_l_St_CheckLineParking = 100;
      if (v_71) {
        nr_St_CheckLineParking = true;
        ns_St_CheckLineParking = Line_follower__St_Parken;
      } else {
        nr_St_CheckLineParking = false;
        ns_St_CheckLineParking = Line_follower__St_CheckLineParking;
      };
      _out->v_l = v_l_St_CheckLineParking;
      _out->v_r = v_r_St_CheckLineParking;
      ns = ns_St_CheckLineParking;
      nr = nr_St_CheckLineParking;
      break;
    case Line_follower__St_Straight:
      v_103 = (100*sens4);
      v_101 = (50*sens3);
      v_99 = (-50*sens1);
      v_98 = (-100*sens0);
      v_100 = (v_98+v_99);
      v_102 = (v_100+v_101);
      v_104 = (v_102+v_103);
      tmp_1 = (v_104/100);
      v_106 = (tmp_1<-1023);
      if (v_106) {
        v_107 = -1023;
      } else {
        v_107 = tmp_1;
      };
      v_105 = (tmp_1>1023);
      if (v_105) {
        error_1 = 1023;
      } else {
        error_1 = v_107;
      };
      v_97 = (self->v_96-1);
      if (self->v_94) {
        v_95 = true;
      } else {
        v_95 = r;
      };
      if (v_95) {
        tick_7 = 150;
      } else {
        tick_7 = v_97;
      };
      v_93 = (tick_7<=0);
      if (v_93) {
        nr_St_Straight = true;
        ns_St_Straight = Line_follower__St_Normal;
      } else {
        nr_St_Straight = false;
        ns_St_Straight = Line_follower__St_Straight;
      };
      r_3 = r;
      if (r_3) {
        Line_follower__calculatePID_reset(&self->calculatePID_1);
      };
      Line_follower__calculatePID_step(error_1,
                                       &Line_follower__calculatePID_out_st,
                                       &self->calculatePID_1);
      pidvalue_1 = Line_follower__calculatePID_out_st.pidvalue;
      r_4 = r;
      if (r_4) {
        Line_follower__controller_reset(&self->controller_1);
      };
      Line_follower__controller_step(pidvalue_1, bow,
                                     &Line_follower__controller_out_st,
                                     &self->controller_1);
      v_l_St_Straight = Line_follower__controller_out_st.v_l;
      v_r_St_Straight = Line_follower__controller_out_st.v_r;
      _out->v_l = v_l_St_Straight;
      _out->v_r = v_r_St_Straight;
      ns = ns_St_Straight;
      nr = nr_St_Straight;
      self->v_96 = tick_7;
      self->v_94 = false;
      break;
    case Line_follower__St_Parken:
      v_88 = (100*sens4);
      v_86 = (50*sens3);
      v_84 = (-50*sens1);
      v_83 = (-100*sens0);
      v_85 = (v_83+v_84);
      v_87 = (v_85+v_86);
      v_89 = (v_87+v_88);
      tmp_2 = (v_89/100);
      v_91 = (tmp_2<-1023);
      if (v_91) {
        v_92 = -1023;
      } else {
        v_92 = tmp_2;
      };
      v_90 = (tmp_2>1023);
      if (v_90) {
        error_2 = 1023;
      } else {
        error_2 = v_92;
      };
      v_82 = (self->v_81-1);
      if (self->v_79) {
        v_80 = true;
      } else {
        v_80 = r;
      };
      if (v_80) {
        tick_8 = 350;
      } else {
        tick_8 = v_82;
      };
      v_78 = (tick_8<=0);
      if (v_78) {
        nr_St_Parken = true;
        ns_St_Parken = Line_follower__St_CheckLeft;
      } else {
        nr_St_Parken = false;
        ns_St_Parken = Line_follower__St_Parken;
      };
      r_1 = r;
      if (r_1) {
        Line_follower__calculatePID_reset(&self->calculatePID);
      };
      Line_follower__calculatePID_step(error_2,
                                       &Line_follower__calculatePID_out_st,
                                       &self->calculatePID);
      pidvalue_2 = Line_follower__calculatePID_out_st.pidvalue;
      r_2 = r;
      if (r_2) {
        Line_follower__controller_reset(&self->controller);
      };
      Line_follower__controller_step(pidvalue_2, bow,
                                     &Line_follower__controller_out_st,
                                     &self->controller);
      v_l_St_Parken = Line_follower__controller_out_st.v_l;
      v_r_St_Parken = Line_follower__controller_out_st.v_r;
      _out->v_l = v_l_St_Parken;
      _out->v_r = v_r_St_Parken;
      ns = ns_St_Parken;
      nr = nr_St_Parken;
      self->v_81 = tick_8;
      self->v_79 = false;
      break;
    case Line_follower__St_CheckLeft:
      v_r_St_CheckLeft = 100;
      v_l_St_CheckLeft = -100;
      v_77 = (self->v_76-1);
      if (self->v_74) {
        v_75 = true;
      } else {
        v_75 = r;
      };
      if (v_75) {
        tick_9 = 40;
      } else {
        tick_9 = v_77;
      };
      v_73 = (tick_9<=0);
      if (v_73) {
        nr_St_CheckLeft = true;
        ns_St_CheckLeft = Line_follower__St_CheckIR;
      } else {
        nr_St_CheckLeft = false;
        ns_St_CheckLeft = Line_follower__St_CheckLeft;
      };
      _out->v_l = v_l_St_CheckLeft;
      _out->v_r = v_r_St_CheckLeft;
      ns = ns_St_CheckLeft;
      nr = nr_St_CheckLeft;
      self->v_76 = tick_9;
      self->v_74 = false;
      break;
    case Line_follower__St_CheckIR:
      v_r_St_CheckIR = 0;
      v_l_St_CheckIR = 0;
      v_72 = !(ir);
      if (v_72) {
        nr_St_CheckIR = true;
        ns_St_CheckIR = Line_follower__St_GrandeFinale;
      } else {
        nr_St_CheckIR = false;
        ns_St_CheckIR = Line_follower__St_CheckIR;
      };
      _out->v_l = v_l_St_CheckIR;
      _out->v_r = v_r_St_CheckIR;
      ns = ns_St_CheckIR;
      nr = nr_St_CheckIR;
      break;
    case Line_follower__St_GrandeFinale:
      v_r_St_GrandeFinale = 100;
      v_l_St_GrandeFinale = 100;
      v_70 = (self->v_69-1);
      if (self->v_67) {
        v_68 = true;
      } else {
        v_68 = r;
      };
      if (v_68) {
        tick_10 = 100;
      } else {
        tick_10 = v_70;
      };
      v_66 = (tick_10<=0);
      if (v_66) {
        nr_St_GrandeFinale = true;
        ns_St_GrandeFinale = Line_follower__St_JustParking;
      } else {
        nr_St_GrandeFinale = false;
        ns_St_GrandeFinale = Line_follower__St_GrandeFinale;
      };
      _out->v_l = v_l_St_GrandeFinale;
      _out->v_r = v_r_St_GrandeFinale;
      ns = ns_St_GrandeFinale;
      nr = nr_St_GrandeFinale;
      self->v_69 = tick_10;
      self->v_67 = false;
      break;
    case Line_follower__St_JustParking:
      v_r_St_JustParking = 0;
      v_l_St_JustParking = 0;
      if (false) {
        nr_St_JustParking = true;
      } else {
        nr_St_JustParking = false;
      };
      if (false) {
        ns_St_JustParking = Line_follower__St_GrandeFinale;
      } else {
        ns_St_JustParking = Line_follower__St_JustParking;
      };
      _out->v_l = v_l_St_JustParking;
      _out->v_r = v_r_St_JustParking;
      ns = ns_St_JustParking;
      nr = nr_St_JustParking;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;
  self->v_16 = bow;
  self->v = false;;
}

