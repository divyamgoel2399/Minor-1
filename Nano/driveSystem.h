void drive(){
  if(sensorState==B00100){
    moveForward();
    Serial.println("Forward");
  }
  else if(sensorState==B00111){
    turnRight();
    Serial.println("Right");
  }
  else if(sensorState==B11100){
    turnLeft();
    Serial.println("Left");
  }
  else if(sensorState==B00011){
    turnRight();
    Serial.println("Right");
  }
  else if(sensorState==B11000){
    turnLeft();
    Serial.println("Left");
  }
  else if(sensorState==B00001){
    turnRight();
    Serial.println("Right");
  }
  else if(sensorState==B10000){
    turnLeft();
    Serial.println("Left");
  }
  else{
    Serial.print("Undef. Condition : ");
    Serial.println(sensorState,BIN);
  }
}
