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

void Line_follower__calculatePID_step(int error,
                                      Line_follower__calculatePID_out* _out,
                                      Line_follower__calculatePID_mem* self) {
  
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_3;
  int p;
  int i;
  int d;
  int previousError;
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

void Line_follower__controller_step(int pidvalue, int bow,
                                    Line_follower__controller_out* _out,
                                    Line_follower__controller_mem* self) {
  
  int v_15;
  int v_14;
  int v_12;
  int v_11;
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
    int i_10;
    for (i_10 = 0; i_10 < 5; ++i_10) {
    }
  };
  {
    int i_9;
    for (i_9 = 0; i_9 < 5; ++i_9) {
    }
  };
  {
    int i_8;
    for (i_8 = 0; i_8 < 3; ++i_8) {
    }
  };
  {
    int i_7;
    for (i_7 = 0; i_7 < 3; ++i_7) {
    }
  };
  {
    int i_6;
    for (i_6 = 0; i_6 < 5; ++i_6) {
    }
  };
  Line_follower__calculatePID_reset(&self->calculatePID_2);
  Line_follower__controller_reset(&self->controller_2);
  {
    int i_5;
    for (i_5 = 0; i_5 < 5; ++i_5) {
    }
  };
  {
    int i_4;
    for (i_4 = 0; i_4 < 5; ++i_4) {
    }
  };
  {
    int i_3;
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

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__calculatePID_out Line_follower__calculatePID_out_st;
  Line_follower__controller_out Line_follower__controller_out_st;
  
  int v_58;
  int v_57;
  int v_56[3];
  int v_55;
  int v_54;
  int v_53;
  int v_59;
  int v_65;
  int v_64;
  int v_63[3];
  int v_62;
  int v_61;
  int v_60;
  int r_St_JustParking;
  Line_follower__st s_St_JustParking;
  int r_St_GrandeFinale;
  Line_follower__st s_St_GrandeFinale;
  int r_St_CheckLineParking;
  Line_follower__st s_St_CheckLineParking;
  int r_St_CheckIR;
  Line_follower__st s_St_CheckIR;
  int r_St_CheckLeft;
  Line_follower__st s_St_CheckLeft;
  int r_St_Parken;
  Line_follower__st s_St_Parken;
  int r_St_Straight;
  Line_follower__st s_St_Straight;
  int r_St_CheckLine;
  Line_follower__st s_St_CheckLine;
  int r_St_Left;
  Line_follower__st s_St_Left;
  int r_St_BlackDot;
  Line_follower__st s_St_BlackDot;
  int r_St_Right;
  Line_follower__st s_St_Right;
  int r_St_SearchObstac;
  Line_follower__st s_St_SearchObstac;
  int r_St_BackToLine;
  Line_follower__st s_St_BackToLine;
  int r_St_FollowObstacle;
  Line_follower__st s_St_FollowObstacle;
  int r_St_ObstacleAvoidance;
  Line_follower__st s_St_ObstacleAvoidance;
  int r_St_SearchLine;
  Line_follower__st s_St_SearchLine;
  int r_St_Normal;
  Line_follower__st s_St_Normal;
  int v_70;
  int v_68;
  int v_66;
  int tick_10;
  int v_71;
  int v_72;
  int v_77;
  int v_75;
  int v_73;
  int tick_9;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_80;
  int v_78;
  int r_2;
  int r_1;
  int tick_8;
  int pidvalue_2;
  int tmp_2;
  int error_2;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_95;
  int v_93;
  int r_4;
  int r_3;
  int tick_7;
  int pidvalue_1;
  int tmp_1;
  int error_1;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_117;
  int v_115;
  int v_113;
  int tick_6;
  int v_122;
  int v_120;
  int v_118;
  int tick_5;
  int v_127;
  int v_125;
  int v_123;
  int tick_4;
  int v_132;
  int v_130;
  int v_128;
  int tick_3;
  int v_137;
  int v_135;
  int v_133;
  int tick_2;
  int v_143;
  int v_141;
  int v_139;
  int v_138;
  int tick_1;
  int v_149;
  int v_147;
  int v_145;
  int v_144;
  int tick;
  int v_150;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int r_6;
  int r_5;
  int pidvalue;
  int tmp;
  int error;
  int nr_St_JustParking;
  Line_follower__st ns_St_JustParking;
  int v_r_St_JustParking;
  int v_l_St_JustParking;
  int nr_St_GrandeFinale;
  Line_follower__st ns_St_GrandeFinale;
  int v_r_St_GrandeFinale;
  int v_l_St_GrandeFinale;
  int nr_St_CheckLineParking;
  Line_follower__st ns_St_CheckLineParking;
  int v_r_St_CheckLineParking;
  int v_l_St_CheckLineParking;
  int nr_St_CheckIR;
  Line_follower__st ns_St_CheckIR;
  int v_r_St_CheckIR;
  int v_l_St_CheckIR;
  int nr_St_CheckLeft;
  Line_follower__st ns_St_CheckLeft;
  int v_r_St_CheckLeft;
  int v_l_St_CheckLeft;
  int nr_St_Parken;
  Line_follower__st ns_St_Parken;
  int v_r_St_Parken;
  int v_l_St_Parken;
  int nr_St_Straight;
  Line_follower__st ns_St_Straight;
  int v_r_St_Straight;
  int v_l_St_Straight;
  int nr_St_CheckLine;
  Line_follower__st ns_St_CheckLine;
  int v_r_St_CheckLine;
  int v_l_St_CheckLine;
  int nr_St_Left;
  Line_follower__st ns_St_Left;
  int v_r_St_Left;
  int v_l_St_Left;
  int nr_St_BlackDot;
  Line_follower__st ns_St_BlackDot;
  int v_r_St_BlackDot;
  int v_l_St_BlackDot;
  int nr_St_Right;
  Line_follower__st ns_St_Right;
  int v_r_St_Right;
  int v_l_St_Right;
  int nr_St_SearchObstac;
  Line_follower__st ns_St_SearchObstac;
  int v_r_St_SearchObstac;
  int v_l_St_SearchObstac;
  int nr_St_BackToLine;
  Line_follower__st ns_St_BackToLine;
  int v_r_St_BackToLine;
  int v_l_St_BackToLine;
  int nr_St_FollowObstacle;
  Line_follower__st ns_St_FollowObstacle;
  int v_r_St_FollowObstacle;
  int v_l_St_FollowObstacle;
  int nr_St_ObstacleAvoidance;
  Line_follower__st ns_St_ObstacleAvoidance;
  int v_r_St_ObstacleAvoidance;
  int v_l_St_ObstacleAvoidance;
  int nr_St_SearchLine;
  Line_follower__st ns_St_SearchLine;
  int v_r_St_SearchLine;
  int v_l_St_SearchLine;
  int nr_St_Normal;
  Line_follower__st ns_St_Normal;
  int v_r_St_Normal;
  int v_l_St_Normal;
  Line_follower__st ck_1;
  int v_52[5];
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41[5];
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17[5];
  Line_follower__st s;
  Line_follower__st ns;
  int r;
  int nr;
  int sen_binary[5];
  int sens0;
  int sens1;
  int sens2;
  int sens3;
  int sens4;
  int bow;
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
    int i_10;
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
      int _1;
      for (_1 = 0; _1 < 5; ++_1) {
        sen_binary[_1] = v_41[_1];
      }
    };
  } else {
    {
      int _2;
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
        int i_8;
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
        int i_9;
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
        int i_7;
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
        int i_6;
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
        int i_5;
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
        int i_4;
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
        int i_3;
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

