//#include "Arduino/.h"

#include "alphabot_drivers.h"
byte mode = 0;

#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];

void setup()
{
  Serial.begin(115200);
  init_devices();
}

void loop()
{
  ////// Joystick /////////
  
//  char val = joystick_read();
//  if (val != 'n')
//  Serial.println(val);

  ///// Buzzer /////////
  
//  if (val == 'c'){
//    if (mode == 0)
//    {beep_on();mode = 1;}
//    else
//    {beep_off();mode = 0;}  
//  }

  ///// Motion ////////
  
//switch(val){
//  case 'u': forward(); break;
//  case 'd': backward(); break;
//  case 'l': left(); break;
//  case 'r': right(); break;
//  case 'c': stop(); break;
//}

  ///// IR Sensor //////
  
//  Serial.println(ir_read());

  ////// Ultrasonic Sensor /////////
  
//  Serial.println(Distance_test());

  ////// White Line Sensor //////////
  
//  AnalogRead(sensorValues);
//  for (int i = 0; i < NUM_SENSORS; i++)
//  {
//    Serial.print(sensorValues[i]);
//    Serial.print(' ');
//  }
//  Serial.println();
  delay(10);
}
