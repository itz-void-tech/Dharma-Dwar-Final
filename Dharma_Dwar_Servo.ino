#include <Servo.h>
Servo gateServo;
void setup() {
  Serial.begin(9600);
  gateServo.attach(9);
  gateServo.write(0); 
}
void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    if (cmd == "OPEN") {
      gateServo.write(90);
      delay(5000); 
      gateServo.write(0);
    }
  }
}
