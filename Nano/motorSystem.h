//Definitions
//M1
#define lspeed 5
#define lf1 7
#define lf2 8
#define lb1 4
#define lb2 2
//M2
#define rspeed 3
#define rf1 12
#define rf2 13
#define rb1 11
#define rb2 10

void turnLeft() {
  digitalWrite(rf1, HIGH);
  digitalWrite(rf2, LOW);
  digitalWrite(rb1, HIGH);
  digitalWrite(rb2, LOW);

  digitalWrite(lf1, LOW);
  digitalWrite(lf2, HIGH);
  digitalWrite(lb1, LOW);
  digitalWrite(lb2, HIGH);
}

void turnRight() {
  digitalWrite(rf1, LOW);
  digitalWrite(rf2, HIGH);
  digitalWrite(rb1, LOW);
  digitalWrite(rb2, HIGH);

  digitalWrite(lf1, HIGH);
  digitalWrite(lf2, LOW);
  digitalWrite(lb1, HIGH);
  digitalWrite(lb2, LOW);
}

void moveForward() {
  digitalWrite(rf1, HIGH);
  digitalWrite(rf2, LOW);
  digitalWrite(rb1, HIGH);
  digitalWrite(rb2, LOW);

  digitalWrite(lf1, HIGH);
  digitalWrite(lf2, LOW);
  digitalWrite(lb1, HIGH);
  digitalWrite(lb2, LOW);
}

void moveBackward() {
  digitalWrite(rf1, LOW);
  digitalWrite(rf2, HIGH);
  digitalWrite(rb1, LOW);
  digitalWrite(rb2, HIGH);

  digitalWrite(lf1, LOW);
  digitalWrite(lf2, HIGH);
  digitalWrite(lb1, LOW);
  digitalWrite(lb2, HIGH);
}

void speedSet(uint8_t r,uint8_t l){
  analogWrite(lspeed,l);
  analogWrite(rspeed,r);
}
