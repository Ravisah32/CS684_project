#include "alphabot_drivers.h"
#include "line_follower.h"

#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem main_mem; // Declare the memory variable

void setup()
{
  init_devices();
  Serial.begin(115200);
}

void loop()
{
  bool value;
  value = ir_read() != 0x6E;    
  AnalogRead(sensorValues);
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], value, &_res, &main_mem); // Pass main_mem here
  Serial.print(sensorValues[0]);
  Serial.print(" ");
  Serial.print(sensorValues[1]);
  Serial.print(" ");
  Serial.print(sensorValues[2]);
  Serial.print(" ");
  Serial.print(sensorValues[3]);
  Serial.print(" ");
  Serial.print(sensorValues[4]);
  Serial.print(" ");
  Serial.print(value);
  Serial.print(" ");
  Serial.print(_res.v_l);
  Serial.print(" ");
  Serial.println(_res.v_r);
  SetSpeed(_res.v_l, _res.v_r);
}
