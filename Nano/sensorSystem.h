//Definations
int sensorPins[] = {A4, A3, A2, A1, A0};

uint8_t sensorState = B00100;

void sensorRead() {
  for (int i = 0; i < 5; i++) {
    bitWrite(sensorState,i,!digitalRead(sensorPins[i]));
  }
}
