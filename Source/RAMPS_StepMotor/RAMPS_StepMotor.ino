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
//}}}*/
/*Global Values {{{*/
int sensorValue =100;
int delayms=100;
/*}}}*/
// the setup function {{{
// runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  //pinMode(A2, OUTPUT);
  //pinMode(A3, INPUT);
  Serial.begin(9600);}
  Serial.println("Setup End2");
//}}}
// the loop function  {{{
// runs over and over again forever
void loop() {
  //Serial.println(sensorValue);
  sensorValue = analogRead(A3);
  analogWrite(A2, sensorValue);
  //analogWrite(A10, 500);
  analogWrite(A5, 3000);
  //analogWrite(A15, 3500);
  if (digitalRead(11)>LOW){
    digitalWrite(12, LOW);
  }else{
    digitalWrite(12, HIGH);
  }
  delayms=sensorValue/1;
  delay(delayms);              // wait for a second
  //delay(40);
  step(10);
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
  //delay(1);              // wait for a second
  //delayMicroseconds(step_pin);
/*}}}*/
