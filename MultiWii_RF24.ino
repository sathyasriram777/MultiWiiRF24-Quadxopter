/*  From iforced2D, changed by ELECTRONOOBS 11/04/2020
 *  This is the code used for a brushed drone. Motors are connected to D3, D5, D6 and D9
 *  NRF24 is connected to D13, D12, D11, D7 and D10
 *  IMU is connected to A4 and A5
 *  Buzzer is connected on D8  
 *  Check the tutorial here: http://www.electronoobs.com/eng_arduino_tut117.php
 *  Schematic here: http://www.electronoobs.com/eng_arduino_tut117_sch1.php
 *  And the video here: https://youtu.be/J0x4ChjUS00
 *  
 * Go to NRF24_RX.cpp if you want to change CE and CSN line 17
 * Go to config.c to cahnge drone configuration
 * Go to output.cpp to change the output PWM signal values
 * To invert channels go to NRF24_RX.cpp line 84
 * Go to line 469 in config.h to change buzzer pin
 * 
 * Welcome to MultiWii.
 *
 * If you see this message, chances are you are using the Arduino IDE. That is ok.
 * To get the MultiWii program configured for your copter, you must switch to the tab named 'config.h'.
 * Maybe that tab is not visible in the list at the top, then you must use the drop down list at the right
 * to access that tab. In that tab you must enable your baord or sensors and optionally various features.
 * For more info go to http://www.multiwii.com/wiki/index.php?title=Main_Page
 *
 * Have fun, and do not forget MultiWii is made possible and brought to you under the GPL License.
 *
 */

const int motor1A = 3; 
const int motor1B = 4;
const int motor2A = 5; 
const int motor2B = 6;
const int motor3A = 7; 
const int motor3B = 8;
const int motor4A = 9; 
const int motor4B = 10;

const int speed = 255;


void setup(){
  pinmode(motor1A, OUTPUT);
  pinmode(motor1B, OUTPUT);
  pinmode(motor2A, OUTPUT);
  pinmode(motor2B, OUTPUT);
  pinmode(motor3A, OUTPUT);
  pinmode(motor3B, OUTPUT);
  pinmode(motor4A, OUTPUT);
  pinmode(motor4B, OUTPUT);
}

void loop(){
  moveUp();
  delay(2000);
  moveDown();
  delay(2000);
}

moveUp(){
  analogWrite(motor1A, speed);
  analogWrite(motor1B, 0);
  analogWrite(motor2A, speed);
  analogWrite(motor2B, 0);
  analogWrite(motor3A, speed);
  analogWrite(motor3B, 0);
  analogWrite(motor4A, speed);
  analogWrite(motor4B, 0);
}

moveUp(){
  analogWrite(motor1A, speed-50);
  analogWrite(motor1B, 0);
  analogWrite(motor2A, speed-50);
  analogWrite(motor2B, 0);
  analogWrite(motor3A, speed-50);
  analogWrite(motor3B, 0);
  analogWrite(motor4A, speed-50);
  analogWrite(motor4B, 0);
}
}