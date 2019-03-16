#include "ServoMotor.h"

int RightSensor = 10;
int LeftSensor = 11;

ServoMotor motor;

bool val1, val2;

void setup() {
  // put your setup code here, to run once:
  //pinMode(RightSensor, INPUT);
  //pinMode(LeftSensor, INPUT);
  motor.setup(10,11);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //val1 = digitalRead(RightSensor);
  //val2 = digitalRead(LeftSensor);
  motor.frente();
  //Serial.print("Dir: ");
  //Serial.println(val1);
  //Serial.print("Esq: ");
  Serial.println(val2);
  delay(500);
  delay(1000);
  motor.parado();
  delay(1000);
}
