#include "motorSystem.h"
#include "sensorSystem.h"
#include "driveSystem.h"

void setup() {
  //Serial Comm.
  Serial.begin(9600);
  //Motor
  pinMode(lspeed, OUTPUT);
  pinMode(lf1, OUTPUT);
  pinMode(lf2, OUTPUT);
  pinMode(lb1, OUTPUT);
  pinMode(lb2, OUTPUT);
  pinMode(rspeed, OUTPUT);
  pinMode(rf1, OUTPUT);
  pinMode(rf2, OUTPUT);
  pinMode(rb1, OUTPUT);
  pinMode(rb2, OUTPUT);
  //Sensor
  for(int i =0 ;i<5;i++){
    pinMode(sensorPins[i],INPUT);
  }
}

void loop() {
  speedSet(255,255);
  sensorRead();
  drive();
}
