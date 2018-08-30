/*  Blink C Programm{{{ 
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 *}}}*/
/*   Constants   *{{{
#define ANALOG_P				A3

#define X_STEP_PIN         10
#define X_DIR_PIN          12
#define X_ENABLE_PIN       38
#define X_MIN_PIN          11
#define X_MAX_PIN           9

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E_STEP_PIN         26
#define E_DIR_PIN          28
#define E_ENABLE_PIN       24

#define Q_STEP_PIN         36
#define Q_DIR_PIN          34
#define Q_ENABLE_PIN       30

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13

#define FAN_PIN            9

#define PS_ON_PIN          12
#define KILL_PIN           -1

#define HEATER_0_PIN       10
#define HEATER_1_PIN       8
#define TEMP_0_PIN          13   // ANALOG NUMBERING
#define TEMP_1_PIN          14   // ANALOG NUMBERING
//}}}*/
/*Global Values {{{*/
int sensorValue =100;
int delayms=100;
/*}}}*/
// the setup function {{{
// runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(X_STEP_PIN, OUTPUT);
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_MIN_PIN, INPUT);
  //pinMode(A2, OUTPUT);
  //pinMode(ANALOG_P, INPUT);
  Serial.begin(9600);}
  Serial.println("Setup End2");
//}}}
// the loop function  {{{
// runs over and over again forever
void loop() {
  //Serial.println(sensorValue);
  sensorValue = analogRead(ANALOG_P);
  if (digitalRead(X_MIN_PIN)>LOW){
    digitalWrite(X_DIR_PIN, LOW);
  }else{
    digitalWrite(X_DIR_PIN, HIGH);
  }
  delayms=sensorValue/1;
  delay(delayms);              // wait for a second
  step(X_STEP_PIN);
}/*}}}*/
/* Step function  {{{
 */
void step(int step_pin) {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(step_pin, HIGH);   
  // wait for a second
  delay(1);             
  //delayMicroseconds(step_pin);
  // turn the LED off by making the voltage LOW
  digitalWrite(step_pin, LOW);}
/*}}}*/
