#define LaserPin 8
#include <Servo.h>

Servo servo;

void setup() {
  pinMode(LaserPin, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  digitalWrite(LaserPin, HIGH);
  int temp=analogRead(8);      //assign value of LDR sensor to a temporary variable
  Serial.println("Intensity="); //print on serial monitor using ""
 Serial.println(temp);         //display output on serial monitor
  if (temp < 50) {
    servo.write(50);
    delay(100);
  } else {
    servo.write(140);
    delay(100);
  }
}
